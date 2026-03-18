/*
 * XREFs of xxxMNSetTop @ 0x1C0233C0C
 * Callers:
 *     ?xxxMNDoScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x1C022F878 (-xxxMNDoScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 *     xxxMNInvertItem @ 0x1C0248188 (xxxMNInvertItem.c)
 * Callees:
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0066A74 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0067394 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00685A0 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     MNGetpItemFromIndex @ 0x1C00BF0D8 (MNGetpItemFromIndex.c)
 *     xxxScrollWindowEx @ 0x1C00BFE8C (xxxScrollWindowEx.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E7BF4 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ThreadLockExchange @ 0x1C00FDE30 (ThreadLockExchange.c)
 *     xxxInvalidateRect @ 0x1C022EAE0 (xxxInvalidateRect.c)
 *     MNDrawArrow @ 0x1C0247A88 (MNDrawArrow.c)
 *     xxxMNDrawFullNC @ 0x1C0247E7C (xxxMNDrawFullNC.c)
 */

__int64 __fastcall xxxMNSetTop(__int64 **a1, signed int a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // r9
  unsigned int v8; // esi
  int v9; // r14d
  int v10; // eax
  __int64 v11; // r8
  __int64 v12; // rcx
  struct tagWND *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rcx
  _QWORD v25[2]; // [rsp+48h] [rbp+7h] BYREF
  __int64 v26; // [rsp+58h] [rbp+17h]
  __int128 v27; // [rsp+60h] [rbp+1Fh] BYREF
  __int64 v28; // [rsp+70h] [rbp+2Fh]
  __int128 v29; // [rsp+78h] [rbp+37h] BYREF
  __int64 v30; // [rsp+88h] [rbp+47h]

  SmartObjStackRefBase<tagMENU>::Init(v25, *(_QWORD *)(**a1 + 40));
  v26 = 0LL;
  v30 = 0LL;
  v29 = 0LL;
  v28 = 0LL;
  v27 = 0LL;
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v25) )
    goto LABEL_28;
  if ( a2 >= 0 )
  {
    if ( a2 > *(_DWORD *)(*(_QWORD *)v25[0] + 120LL) )
      a2 = *(_DWORD *)(*(_QWORD *)v25[0] + 120LL);
  }
  else
  {
    a2 = 0;
  }
  if ( a2 == *(_DWORD *)(*(_QWORD *)v25[0] + 116LL) )
    goto LABEL_28;
  if ( v26 )
    v4 = v26;
  else
    v4 = *(_QWORD *)v25[0];
  MNGetpItemFromIndex(v4, *(_DWORD *)(v4 + 116));
  if ( !v5 )
    v5 = *(_QWORD *)v25[0];
  v6 = MNGetpItemFromIndex(v5, a2);
  if ( !v7 || !v6 )
    goto LABEL_28;
  v8 = 1;
  v9 = *(_DWORD *)(*(_QWORD *)v7 + 68LL) - *(_DWORD *)(*(_QWORD *)v6 + 68LL);
  v10 = *(_DWORD *)(*(_QWORD *)v25[0] + 124LL);
  if ( (v10 & 3) == 2 )
  {
    *(_DWORD *)(*(_QWORD *)v25[0] + 124LL) = v10 & 0xFFFFFFFC | 1;
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v25[0] + 40LL) + 24LL) )
      goto LABEL_21;
    v11 = 4294967293LL;
    goto LABEL_20;
  }
  if ( (v10 & 3) == 3 )
  {
    *(_DWORD *)(*(_QWORD *)v25[0] + 124LL) = *(_DWORD *)(*(_QWORD *)v25[0] + 124LL) & 0xFFFFFFFC | 1;
    if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v25[0] + 40LL) + 24LL) )
    {
      v11 = 4294967292LL;
LABEL_20:
      MNDrawArrow(0LL, a1, v11);
    }
  }
LABEL_21:
  ThreadLock(*(_QWORD *)(**a1 + 16), (__int64 *)&v27);
  v12 = v26;
  if ( !v26 )
    v12 = *(_QWORD *)v25[0];
  ThreadLock(v12, (__int64 *)&v29);
  v13 = *(struct tagWND **)(**a1 + 16);
  if ( (signed int)abs32(v9) <= *(_DWORD *)(*(_QWORD *)v25[0] + 68LL) )
    xxxScrollWindowEx(v13, 0, v9, 0LL, 0LL, 0LL, 0LL, 6);
  else
    xxxInvalidateRect(v13, 0LL, 1);
  v17 = ThreadUnlock1(v15, v14, v16);
  v26 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=((__int64)v25, v17);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v25) )
  {
    ThreadUnlock1(v19, v18, v20);
LABEL_28:
    v8 = 0;
    goto LABEL_29;
  }
  *(_DWORD *)(*(_QWORD *)v25[0] + 116LL) = a2;
  v22 = *(_QWORD *)v25[0];
  if ( a2 )
  {
    if ( a2 != *(_DWORD *)(v22 + 120) )
      goto LABEL_37;
    *(_DWORD *)(*(_QWORD *)v25[0] + 124LL) |= 3u;
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v25[0] + 40LL) + 24LL) )
      goto LABEL_37;
    v23 = 4294967292LL;
  }
  else
  {
    *(_DWORD *)(v22 + 124) = *(_DWORD *)(v22 + 124) & 0xFFFFFFFC | 2;
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v25[0] + 40LL) + 24LL) )
      goto LABEL_37;
    v23 = 4294967293LL;
  }
  MNDrawArrow(0LL, a1, v23);
LABEL_37:
  v24 = *(_QWORD *)v25[0];
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v25[0] + 40LL) + 24LL) )
  {
    v24 = **a1;
    if ( *(_QWORD *)(v24 + 16) )
    {
      ThreadLockExchange(*(_QWORD *)(**a1 + 16), (__int64)&v27);
      xxxMNDrawFullNC(*(struct tagWND **)(**a1 + 16));
    }
  }
  ThreadUnlock1(v24, v18, v20);
LABEL_29:
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v25);
  return v8;
}
