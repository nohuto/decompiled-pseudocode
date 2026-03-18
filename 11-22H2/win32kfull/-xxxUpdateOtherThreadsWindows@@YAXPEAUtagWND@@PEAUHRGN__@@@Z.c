/*
 * XREFs of ?xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C01570E4
 * Callers:
 *     ?xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C01570E4 (-xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     ?xxxUpdateThreadsWindows@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C01571A6 (-xxxUpdateThreadsWindows@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@PEAUHRGN__@@@Z.c)
 * Callees:
 *     ThreadLockExchangeAlways @ 0x1C00419D0 (ThreadLockExchangeAlways.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0156B26 (-xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     ?xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C01570E4 (-xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 */

void __fastcall xxxUpdateOtherThreadsWindows(struct tagWND **a1, HRGN a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  struct tagWND *v12; // rbx
  __int64 v13; // rcx
  _QWORD v14[5]; // [rsp+20h] [rbp-28h] BYREF

  v14[2] = 0LL;
  if ( !*((_QWORD *)PtiCurrentShared((__int64)a1, (__int64)a2, a3, a4) + 57)
    || (v8 = **(_QWORD **)(*((_QWORD *)PtiCurrentShared(v7, v6, v8, v9) + 57) + 8LL), (*(_DWORD *)(v8 + 64) & 1) == 0) )
  {
    xxxRedrawHungWindow((struct tagWND *)a1, (__int64)a2, v8, v9);
    if ( (*((_BYTE *)a1[5] + 31) & 2) != 0 )
    {
      v12 = a1[14];
      v13 = gptiCurrent;
      v14[0] = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = v14;
      v14[1] = 0LL;
      while ( v12 )
      {
        ThreadLockExchangeAlways((__int64)v12, (__int64)v14);
        xxxUpdateOtherThreadsWindows(v12, a2);
        v12 = (struct tagWND *)*((_QWORD *)v12 + 11);
      }
      ThreadUnlock1(v13, v10, v11);
    }
  }
}
