/*
 * XREFs of xxxDDETrackWindowDying @ 0x1C01FB710
 * Callers:
 *     xxxFreeWindow @ 0x1C00E8F70 (xxxFreeWindow.c)
 * Callees:
 *     _PostMessage @ 0x1C00B6CD0 (_PostMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C011E0CC (W32GetThreadWin32Thread.c)
 *     ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1C01F9CC8 (-UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z.c)
 *     ?xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C01FA858 (-xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     xxxFreeDdeConv @ 0x1C01FB8A0 (xxxFreeDdeConv.c)
 */

__int64 __fastcall xxxDDETrackWindowDying(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rbx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 *v9; // rax
  unsigned __int64 v10; // r8
  __int64 v11; // rdx
  int v12; // ecx
  BOOL v13; // eax
  struct tagFREELIST *v14; // rdi
  int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  struct tagDDECONV *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int128 v26; // [rsp+20h] [rbp-38h] BYREF
  __int64 v27; // [rsp+30h] [rbp-28h]
  __int128 v28; // [rsp+38h] [rbp-20h] BYREF
  __int64 v29; // [rsp+48h] [rbp-10h]

  result = 0LL;
  v29 = 0LL;
  v27 = 0LL;
  v3 = a2;
  v28 = 0LL;
  v26 = 0LL;
  if ( a2 )
  {
    do
    {
      ThreadLock(*(_QWORD *)(v3 + 24), &v26);
      ThreadLockAlways(v3, &v28);
      if ( (*(_DWORD *)(v3 + 80) & 2) == 0 )
      {
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        if ( *(_DWORD *)(ThreadWin32Thread + 632) > 0x400u
          || (*(_DWORD *)(ThreadWin32Thread + 648) & 0x20) == 0
          || (v7 = *(_QWORD *)(v3 + 48)) == 0
          || (v8 = *(_QWORD *)(v7 + 16), *(_DWORD *)(v8 + 632) > 0x400u)
          || (*(_DWORD *)(v8 + 648) & 0x20) == 0 )
        {
          v9 = *(unsigned __int64 **)(v3 + 40);
          if ( v9 )
            v10 = *v9;
          else
            v10 = 0LL;
          PostMessage(*(struct tagWND **)(v3 + 48), 0x3E1u, v10, 0LL);
        }
      }
      v11 = *(_QWORD *)(v3 + 32);
      if ( v11 )
      {
        v12 = *(_DWORD *)(v11 + 80);
        *(_DWORD *)(v11 + 80) = v12 | 6;
        v13 = (v12 & 0xA) != 0;
      }
      else
      {
        v13 = 1;
      }
      v14 = *(struct tagFREELIST **)(v3 + 72);
      *(_QWORD *)(v3 + 72) = 0LL;
      v15 = *(_DWORD *)(v3 + 80);
      if ( (v15 & 2) != 0 && v13 || (v15 & 4) != 0 )
      {
        if ( (*(_BYTE *)(_HMPheFromObject(v3) + 25) & 1) == 0 )
          *(_QWORD *)(v3 + 32) = xxxFreeDdeConv(*(struct tagDDECONV **)(v3 + 32));
        v19 = (struct tagDDECONV *)ThreadUnlock1(v17, v16, v18);
        if ( v19 )
          xxxFreeDdeConv(v19);
      }
      else
      {
        UnlinkConv((struct tagDDECONV *)v3, v11, v4, v5);
        ThreadUnlock1(v21, v20, v22);
      }
      xxxFreeListFree(v14);
      result = ThreadUnlock1(v24, v23, v25);
      v3 = result;
    }
    while ( result );
  }
  return result;
}
