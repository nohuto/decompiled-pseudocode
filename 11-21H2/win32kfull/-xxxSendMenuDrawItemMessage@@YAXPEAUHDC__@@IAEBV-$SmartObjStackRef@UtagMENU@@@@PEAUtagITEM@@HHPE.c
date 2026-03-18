/*
 * XREFs of ?xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagWND@@@Z @ 0x1C00BE738
 * Callers:
 *     xxxDrawMenuItem @ 0x1C00BE508 (xxxDrawMenuItem.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C011CE5C (xxxDrawMenuBarUnderlines.c)
 *     xxxRealDrawMenuItem @ 0x1C0248CAC (xxxRealDrawMenuItem.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     xxxSendMessage @ 0x1C0050D34 (xxxSendMessage.c)
 *     MNGetpItemIndex @ 0x1C0068DA4 (MNGetpItemIndex.c)
 *     MNIsUAHMenu @ 0x1C0069238 (MNIsUAHMenu.c)
 *     MNInitUAHMenuItem @ 0x1C00BE908 (MNInitUAHMenuItem.c)
 *     MNInitUAHMenu @ 0x1C00BE950 (MNInitUAHMenu.c)
 *     ?MNInitDrawItemStruct@@YAXPEAUHDC__@@IAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagDRAWITEMSTRUCT@@@Z @ 0x1C00C1E10 (-MNInitDrawItemStruct@@YAXPEAUHDC__@@IAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagD.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

__int64 __fastcall xxxSendMenuDrawItemMessage(
        __int64 a1,
        int a2,
        __int64 **a3,
        __int64 a4,
        int a5,
        int a6,
        ULONG_PTR a7)
{
  ULONG_PTR v7; // rsi
  __int64 v12; // rcx
  int v13; // r14d
  int v14; // r12d
  __int64 result; // rax
  __int64 *v16; // rcx
  __int64 *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rcx
  int v28; // r9d
  __int128 v29; // [rsp+40h] [rbp-B1h] BYREF
  __int64 v30; // [rsp+50h] [rbp-A1h]
  _DWORD v31[36]; // [rsp+60h] [rbp-91h] BYREF

  v7 = a7;
  memset(v31, 0, sizeof(v31));
  v12 = (__int64)a3[2];
  v30 = 0LL;
  v29 = 0LL;
  v13 = 1;
  if ( !v12 )
    v12 = **a3;
  v14 = MNIsUAHMenu(v12);
  result = MNInitDrawItemStruct(a1, a2, (_DWORD)a3, a4, a5, a6, (__int64)v31);
  if ( *(_QWORD *)(**a3 + 80) && ((**(_DWORD **)a4 & 0x100) != 0 || *(_QWORD *)(*(_QWORD *)a4 + 96LL) == -1LL) )
  {
    v22 = *(_QWORD *)(**a3 + 80);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v29 = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = &v29;
    *((_QWORD *)&v29 + 1) = v22;
    HMLockObject(v22);
    xxxSendMessage(*(_QWORD *)(**a3 + 80));
    ThreadUnlock1(v25, v24, v26);
    v27 = (__int64)a3[2];
    if ( !v27 )
      v27 = **a3;
    result = MNGetpItemIndex(v27, a4);
    if ( (_DWORD)result == -1 )
      v13 = v28;
  }
  if ( v14 )
  {
    if ( a7 || (result = (__int64)*a3, (v7 = *(_QWORD *)(**a3 + 80)) != 0) )
    {
      if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80000020) != 0x80000000 )
        v31[4] &= ~0x100u;
      v16 = a3[2];
      if ( !v16 )
        v16 = (__int64 *)**a3;
      MNInitUAHMenu(v16, a1, &v31[16]);
      if ( v13 )
      {
        v17 = a3[2];
        if ( !v17 )
          v17 = (__int64 *)**a3;
        MNInitUAHMenuItem(v17, a4, &v31[22]);
      }
      v18 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v29 = *(_QWORD *)(v18 + 416);
      *(_QWORD *)(v18 + 416) = &v29;
      *((_QWORD *)&v29 + 1) = v7;
      HMLockObject(v7);
      xxxSendMessage(v7);
      return ThreadUnlock1(v20, v19, v21);
    }
  }
  return result;
}
