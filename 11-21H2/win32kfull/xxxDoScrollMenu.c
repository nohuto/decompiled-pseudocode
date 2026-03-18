/*
 * XREFs of xxxDoScrollMenu @ 0x1C024162C
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0067528 (xxxRealDefWindowProc.c)
 *     xxxSBWndProc @ 0x1C02420E0 (xxxSBWndProc.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     GetWndSBDisableFlags @ 0x1C0065218 (GetWndSBDisableFlags.c)
 *     CalcSBStuff @ 0x1C0065248 (CalcSBStuff.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0066A74 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0067394 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00685A0 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E7BF4 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     GetAppCompatFlags @ 0x1C01027E0 (GetAppCompatFlags.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     safe_cast_fnid_to_PSBWND @ 0x1C01D0504 (safe_cast_fnid_to_PSBWND.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1C0240A10 (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 *     ?xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z @ 0x1C0240CA4 (-xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z.c)
 *     SBCtlSetup @ 0x1C024155C (SBCtlSetup.c)
 *     xxxSBTrackInit @ 0x1C0241B74 (xxxSBTrackInit.c)
 *     xxxTrackPopupMenuEx @ 0x1C024614C (xxxTrackPopupMenuEx.c)
 */

_QWORD *__fastcall xxxDoScrollMenu(struct tagWND *a1, struct tagWND *a2, unsigned int a3, unsigned __int64 a4)
{
  __int64 v8; // r13
  __int64 v9; // rcx
  int v10; // r8d
  unsigned int v11; // r13d
  int v12; // r12d
  char WndSBDisableFlags; // al
  __int64 v14; // rdx
  struct tagMENU *ScrollMenu; // rax
  __int64 v16; // r12
  __int64 ThreadWin32Thread; // rax
  int v18; // r12d
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  int v23; // [rsp+30h] [rbp-79h]
  unsigned __int16 v24; // [rsp+34h] [rbp-75h]
  _QWORD v25[2]; // [rsp+38h] [rbp-71h] BYREF
  __int64 v26; // [rsp+48h] [rbp-61h]
  __int128 v27; // [rsp+50h] [rbp-59h] BYREF
  __int64 v28; // [rsp+60h] [rbp-49h]
  _BYTE v29[64]; // [rsp+70h] [rbp-39h] BYREF

  SmartObjStackRefBase<tagMENU>::Init(v25, 0LL);
  v26 = 0LL;
  memset(v29, 0, sizeof(v29));
  v28 = 0LL;
  v27 = 0LL;
  v8 = safe_cast_fnid_to_PSBWND((__int64)a2);
  if ( (int)GetAppCompatFlags(0LL) >= 0 )
  {
    if ( a2 )
    {
      if ( !v8 )
        return SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v25);
      SBCtlSetup(v8);
      v9 = *((_QWORD *)a2 + 5);
      v10 = *(_DWORD *)(v8 + 12);
      v11 = (__int16)a4;
      v12 = SWORD1(a4) - *(_DWORD *)(v9 + 92);
      v23 = (__int16)a4 - *(_DWORD *)(v9 + 88);
    }
    else
    {
      CalcSBStuff((__int64)a1, (__int64)v29, a3);
      WndSBDisableFlags = GetWndSBDisableFlags((__int64)a1, a3);
      v14 = *((_QWORD *)a1 + 5);
      LOBYTE(v10) = WndSBDisableFlags;
      v11 = (__int16)a4;
      v12 = SWORD1(a4) - *(_DWORD *)(v14 + 92);
      v23 = (__int16)a4 - *(_DWORD *)(v14 + 88);
    }
    v24 = v12;
    if ( (v10 & 3) != 3 )
    {
      ScrollMenu = xxxGetScrollMenu(a1, a3);
      v26 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=((__int64)v25, (__int64)ScrollMenu);
      if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v25) )
      {
        v16 = v26;
        if ( !v26 )
          v16 = *(_QWORD *)v25[0];
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_QWORD *)&v27 = *(_QWORD *)(ThreadWin32Thread + 416);
        *(_QWORD *)(ThreadWin32Thread + 416) = &v27;
        *((_QWORD *)&v27 + 1) = v16;
        HMLockObject(v16);
        v18 = xxxTrackPopupMenuEx(v25, 386LL, v11, (unsigned int)SWORD1(a4), a1, 0LL);
        ThreadUnlock1(v20, v19, v21);
        if ( v18 )
        {
          if ( (unsigned __int8)v18 == 4 )
          {
            if ( a2 )
              a4 = (unsigned __int16)v23 | (unsigned __int64)(v24 << 16);
            else
              a2 = a1;
            xxxSBTrackInit(a2, a4);
          }
          else
          {
            xxxDoScroll(a2, a1, (unsigned __int8)v18, 0LL, a3);
            xxxDoScroll(a2, a1, 8LL, 0LL, a3);
          }
        }
      }
    }
  }
  return SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v25);
}
