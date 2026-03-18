/*
 * XREFs of xxxSetMenuInfo @ 0x1C00BE9B8
 * Callers:
 *     xxxLoadSysMenu @ 0x1C00BC940 (xxxLoadSysMenu.c)
 *     xxxSetMenuInfo @ 0x1C00BE9B8 (xxxSetMenuInfo.c)
 *     NtUserThunkedMenuInfo @ 0x1C010B680 (NtUserThunkedMenuInfo.c)
 * Callees:
 *     MNGetPopupFromMenu @ 0x1C0043DBC (MNGetPopupFromMenu.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00685A0 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0068D40 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxSetMenuInfo @ 0x1C00BE9B8 (xxxSetMenuInfo.c)
 *     MNGetpItemFromIndex @ 0x1C00BF0D8 (MNGetpItemFromIndex.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E7BF4 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00F227C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C00FB014 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     xxxMNUpdateShownMenu @ 0x1C02451B0 (xxxMNUpdateShownMenu.c)
 */

__int64 __fastcall xxxSetMenuInfo(__int64 **a1, __int64 a2)
{
  int v4; // r12d
  int v5; // r13d
  int v6; // eax
  unsigned int v7; // r15d
  int v8; // eax
  __int64 *v9; // rcx
  unsigned int v10; // r14d
  __int64 v11; // rsi
  unsigned int v12; // edx
  __int64 v13; // rdx
  __int64 *v14; // rcx
  __int64 v15; // rcx
  _DWORD *v16; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  _QWORD v22[2]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v23[3]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v24; // [rsp+48h] [rbp-18h] BYREF
  __int64 v25; // [rsp+58h] [rbp-8h]

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v22);
  v4 = 0;
  v5 = 0;
  v25 = 0LL;
  v6 = *(_DWORD *)(a2 + 4);
  v24 = 0LL;
  v7 = 1;
  if ( (v6 & 0x10) != 0 )
  {
    v4 = 1;
    *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) ^= (*(_DWORD *)(a2 + 8) ^ *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 40LL)) & 0xFC000000;
    v6 = *(_DWORD *)(a2 + 4);
  }
  if ( (v6 & 1) != 0 )
  {
    v4 = 1;
    *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 52LL) = *(_DWORD *)(a2 + 12);
    v6 = *(_DWORD *)(a2 + 4);
  }
  if ( (v6 & 2) != 0 )
  {
    v5 = 1;
    *(_QWORD *)(*(_QWORD *)(**a1 + 40) + 24LL) = *(_QWORD *)(a2 + 16);
    if ( (*(_BYTE *)(**a1 + 124) & 3) != 0 )
      v7 = 5;
  }
  v8 = *(_DWORD *)(a2 + 4);
  if ( (v8 & 4) != 0 )
  {
    *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 48LL) = *(_DWORD *)(a2 + 24);
    v8 = *(_DWORD *)(a2 + 4);
  }
  if ( (v8 & 8) != 0 )
  {
    *(_QWORD *)(*(_QWORD *)(**a1 + 40) + 16LL) = *(_QWORD *)(a2 + 32);
    v8 = *(_DWORD *)(a2 + 4);
  }
  if ( v8 < 0 )
  {
    v9 = a1[2];
    v10 = 0;
    if ( !v9 )
      v9 = (__int64 *)**a1;
    v11 = MNGetpItemFromIndex(v9, 0LL);
    if ( *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 44LL) > v12 )
    {
      do
      {
        if ( !v11 )
          break;
        v13 = *(_QWORD *)(v11 + 16);
        if ( v13 )
        {
          SmartObjStackRefBase<tagMENU>::Init(v23, v13);
          v18 = *(_QWORD *)(v11 + 16);
          v23[2] = 0LL;
          ThreadLock(v18, (__int64 *)&v24);
          xxxSetMenuInfo(v23, a2);
          ThreadUnlock1(v20, v19, v21);
          SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v23);
        }
        v14 = a1[2];
        ++v10;
        if ( !v14 )
          v14 = (__int64 *)**a1;
        v11 = MNGetpItemFromIndex(v14, v10);
      }
      while ( v10 < *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 44LL) );
    }
  }
  if ( v4 )
  {
    *(_DWORD *)(**a1 + 64) = 0;
    *(_DWORD *)(**a1 + 68) = 0;
  }
  else if ( !v5 )
  {
    goto LABEL_26;
  }
  v15 = (__int64)a1[2];
  if ( !v15 )
    v15 = **a1;
  v16 = MNGetPopupFromMenu(v15, 0LL);
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v22, v16);
  if ( *(_QWORD *)v22[0] )
    xxxMNUpdateShownMenu(v22, 0LL, v7);
LABEL_26:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v22);
  return 1LL;
}
