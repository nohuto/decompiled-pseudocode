/*
 * XREFs of CmpRefreshHive @ 0x140A0CB40
 * Callers:
 *     CmRestoreKey @ 0x140A0AEF4 (CmRestoreKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208C40 (CmSiFreeMemory.c)
 *     CmpAllocatePool @ 0x14022CFFC (CmpAllocatePool.c)
 *     CmpDrainDelayDerefContext @ 0x14022D600 (CmpDrainDelayDerefContext.c)
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     CmpInitializeDelayDerefContext @ 0x140231594 (CmpInitializeDelayDerefContext.c)
 *     ExAcquireRundownProtection_0 @ 0x14028B5F0 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028B620 (ExReleaseRundownProtection_0.c)
 *     ExfReleasePushLockShared @ 0x1402BDAF0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FD2D0 (ExfAcquirePushLockSharedEx.c)
 *     CmpCleanUpKCBCacheTable @ 0x140699C14 (CmpCleanUpKCBCacheTable.c)
 *     HvpGetCellPaged @ 0x1406E0180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1406E0290 (HvpReleaseCellPaged.c)
 *     CmpCreateHive @ 0x1407025DC (CmpCreateHive.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x140710A8C (CmpFlushNotifiesOnKeyBodyList.c)
 *     HvpMarkCellDirty @ 0x140747190 (HvpMarkCellDirty.c)
 *     CmpLockRegistryExclusive @ 0x1407693DC (CmpLockRegistryExclusive.c)
 *     CmpRebuildKcbCache @ 0x140769420 (CmpRebuildKcbCache.c)
 *     HvpReleaseCellFlat @ 0x1407D9740 (HvpReleaseCellFlat.c)
 *     HvpGetCellFlat @ 0x1407FDCC0 (HvpGetCellFlat.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x1408274A4 (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x14082752C (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x140A179F4 (CmpSearchKeyControlBlockTreeEx.c)
 *     CmpDestroyHive @ 0x140A1CF50 (CmpDestroyHive.c)
 *     CmpSwapHiveStorage @ 0x140A1D270 (CmpSwapHiveStorage.c)
 *     CmpReleaseHiveLoadUnloadRundown @ 0x140AF5008 (CmpReleaseHiveLoadUnloadRundown.c)
 *     CmpAcquireHiveLoadUnloadRundown @ 0x140AF502C (CmpAcquireHiveLoadUnloadRundown.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140AF5160 (CmpPerformKeyBodyDeletionCheck.c)
 *     HvpGetBinContextInitialize @ 0x140AF5200 (HvpGetBinContextInitialize.c)
 *     CmpLockRegistry @ 0x140AF54A0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140AF54F0 (CmpUnlockRegistry.c)
 *     CmpLockKcbShared @ 0x140AF5530 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x140AF55A0 (CmpUnlockKcb.c)
 */

__int64 __fastcall CmpRefreshHive(__int64 a1)
{
  struct _PRIVILEGE_SET *v1; // r14
  char v3; // si
  char v4; // r15
  ULONG_PTR v5; // r13
  ULONG_PTR v6; // rdi
  int Hive; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // eax
  unsigned int v20; // r9d
  __int64 v21; // r8
  ULONG_PTR v22; // rdx
  __int64 CellFlat; // rax
  __int64 v24; // r14
  ULONG_PTR v25; // rdx
  __int64 CellPaged; // rax
  __int64 v27; // r15
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  int v34; // [rsp+20h] [rbp-79h]
  __int64 v35; // [rsp+60h] [rbp-39h] BYREF
  struct _PRIVILEGE_SET *Pool; // [rsp+68h] [rbp-31h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+70h] [rbp-29h] BYREF
  __int128 v38; // [rsp+80h] [rbp-19h] BYREF
  _OWORD v39[6]; // [rsp+90h] [rbp-9h] BYREF
  BOOLEAN v40; // [rsp+108h] [rbp+6Fh]
  char UnloadRundown; // [rsp+110h] [rbp+77h]
  __int64 v42; // [rsp+118h] [rbp+7Fh] BYREF

  v1 = 0LL;
  v40 = 0;
  v42 = 0xFFFFFFFFLL;
  memset(v39, 0, 32);
  v3 = 0;
  v4 = 0;
  BugCheckParameter3[0] = 0LL;
  v38 = 0LL;
  Pool = 0LL;
  HvpGetBinContextInitialize((char *)&v42 + 4);
  v35 = 0xFFFFFFFFLL;
  HvpGetBinContextInitialize((char *)&v35 + 4);
  CmpInitializeDelayDerefContext(&v38);
  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(_QWORD *)(v5 + 32);
  UnloadRundown = CmpAcquireHiveLoadUnloadRundown();
  if ( !UnloadRundown )
  {
    Hive = -1073741431;
    goto LABEL_66;
  }
  v40 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v6 + 1640));
  if ( !v40 )
  {
    Hive = -1073740763;
    goto LABEL_66;
  }
  CmpBecomeActiveFlusherAndReconciler(v6);
  v3 = 1;
  CmpLockRegistry(v9, v8, v10, v11);
  CmpLockKcbShared(v5);
  Hive = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
  if ( Hive < 0 )
    goto LABEL_8;
  if ( *(_BYTE *)(v6 + 2944) == 1 )
  {
    Hive = -1073741431;
LABEL_8:
    CmpUnlockKcb(v5);
    v1 = Pool;
    v4 = 1;
    goto LABEL_66;
  }
  if ( (*(_DWORD *)(v6 + 160) & 2) == 0 )
    goto LABEL_29;
  v12 = KeAbPreAcquire(v6 + 72, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 72), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)(v6 + 72), 0LL, v12, v6 + 72);
  if ( v12 )
    *(_BYTE *)(v12 + 18) = 1;
  v13 = KeAbPreAcquire(v6 + 80, 0LL);
  v14 = v13;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 80), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v6 + 80), v13, v6 + 80);
  if ( v14 )
    *(_BYTE *)(v14 + 18) = 1;
  v4 = 0;
  if ( *(_DWORD *)(v6 + 912) )
  {
    Hive = -1073741823;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 80));
    KeAbPostRelease(v6 + 80);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 72), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v6 + 72));
    KeAbPostRelease(v6 + 72);
    Pool = 0LL;
    goto LABEL_8;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 80));
  KeAbPostRelease(v6 + 80);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 72), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(v6 + 72));
  KeAbPostRelease(v6 + 72);
  if ( (*(_DWORD *)(v5 + 184) & 0x40000) == 0 )
  {
LABEL_29:
    Hive = -1073741811;
    goto LABEL_8;
  }
  if ( *(_DWORD *)(v6 + 2920) )
  {
    Hive = -1073741823;
    goto LABEL_8;
  }
  CmpUnlockKcb(v5);
  CmpUnlockRegistry(v16, v15, v17, v18);
  Pool = (struct _PRIVILEGE_SET *)CmpAllocatePool(256LL, 432LL, 859393347LL);
  v1 = Pool;
  if ( !Pool )
  {
    Hive = -1073741670;
    goto LABEL_66;
  }
  memset((char *)v39 + 8, 0, 24);
  *(_QWORD *)&v39[0] = *(_QWORD *)(v6 + 1544);
  v19 = *(_DWORD *)(v6 + 168);
  if ( v19 )
  {
    if ( v19 == 1 )
    {
      v20 = 1;
      *((_QWORD *)&v39[0] + 1) = *(_QWORD *)(v6 + 1552);
    }
    else
    {
      v20 = 2;
      *(_OWORD *)((char *)v39 + 8) = *(_OWORD *)(v6 + 1576);
    }
  }
  else
  {
    v20 = 0;
  }
  v21 = *(unsigned int *)(v6 + 160);
  LODWORD(v21) = v21 & 0xFFFEFFFF;
  Hive = CmpCreateHive(
           BugCheckParameter3,
           2u,
           v21,
           v20,
           0LL,
           (__int64)v39,
           0LL,
           (*(_DWORD *)(v6 + 4112) & 0x10000) != 0 ? 18415650 : 18415682,
           0LL,
           0LL,
           0LL,
           (__int64)Pool);
  if ( Hive >= 0 )
  {
    CmpLockRegistryExclusive();
    Hive = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
    if ( Hive < 0 )
    {
LABEL_65:
      v4 = 1;
      goto LABEL_66;
    }
    if ( *(_BYTE *)(v6 + 2944) == 1 )
    {
      Hive = -1073741431;
      goto LABEL_65;
    }
    if ( (*(_DWORD *)(v6 + 160) & 2) == 0 )
    {
LABEL_44:
      Hive = -1073741811;
      goto LABEL_65;
    }
    if ( !*(_DWORD *)(v6 + 912) )
    {
      if ( (*(_DWORD *)(v5 + 184) & 0x40000) == 0 )
        goto LABEL_44;
      if ( !*(_DWORD *)(v6 + 2920) )
      {
        v22 = *(unsigned int *)(*(_QWORD *)(BugCheckParameter3[0] + 64) + 36LL);
        if ( (_DWORD)v22 == *(_DWORD *)(*(_QWORD *)(v6 + 64) + 36LL) )
        {
          if ( (*(_BYTE *)(BugCheckParameter3[0] + 140) & 1) != 0 )
            CellFlat = HvpGetCellFlat(BugCheckParameter3[0], v22, &v35);
          else
            CellFlat = HvpGetCellPaged(BugCheckParameter3[0], v22, (unsigned int *)&v35);
          v24 = CellFlat;
          v25 = *(unsigned int *)(*(_QWORD *)(v6 + 64) + 36LL);
          if ( (*(_BYTE *)(v6 + 140) & 1) != 0 )
            CellPaged = HvpGetCellFlat(v6, v25, &v42);
          else
            CellPaged = HvpGetCellPaged(v6, v25, (unsigned int *)&v42);
          v27 = CellPaged;
          Hive = HvpMarkCellDirty(
                   BugCheckParameter3[0],
                   *(unsigned int *)(*(_QWORD *)(BugCheckParameter3[0] + 64) + 36LL),
                   0);
          if ( Hive < 0 )
          {
            if ( v27 )
            {
              if ( (*(_BYTE *)(v6 + 140) & 1) != 0 )
                HvpReleaseCellFlat(v6, &v42);
              else
                HvpReleaseCellPaged(v6, (unsigned int *)&v42);
            }
            if ( v24 )
            {
              if ( (*(_BYTE *)(BugCheckParameter3[0] + 140) & 1) != 0 )
                HvpReleaseCellFlat(BugCheckParameter3[0], &v35);
              else
                HvpReleaseCellPaged(BugCheckParameter3[0], (unsigned int *)&v35);
            }
          }
          else
          {
            v28 = *(_DWORD *)(v27 + 16);
            *(_WORD *)(v24 + 2) |= 0xCu;
            *(_DWORD *)(v24 + 16) = v28;
            if ( (*(_BYTE *)(v6 + 140) & 1) != 0 )
              HvpReleaseCellFlat(v6, &v42);
            else
              HvpReleaseCellPaged(v6, (unsigned int *)&v42);
            if ( (*(_BYTE *)(BugCheckParameter3[0] + 140) & 1) != 0 )
              HvpReleaseCellFlat(BugCheckParameter3[0], &v35);
            else
              HvpReleaseCellPaged(BugCheckParameter3[0], (unsigned int *)&v35);
            CmpCleanUpKCBCacheTable(v6);
            LOBYTE(v34) = 1;
            CmpSearchKeyControlBlockTreeEx(CmpRefreshWorkerRoutine, v6, &v38, 0LL, v34);
            CmpFlushNotifiesOnKeyBodyList(v5, 0, (__int64)&v38, 1);
            CmpSwapHiveStorage(v6, BugCheckParameter3[0]);
            CmpRebuildKcbCache(v5);
            ++*(_DWORD *)(v6 + 212);
            Hive = 0;
          }
          v1 = Pool;
          goto LABEL_65;
        }
        goto LABEL_44;
      }
    }
    Hive = -1073741823;
    goto LABEL_65;
  }
LABEL_66:
  CmpDrainDelayDerefContext((_QWORD **)&v38);
  if ( v4 )
    CmpUnlockRegistry(v30, v29, v31, v32);
  if ( v3 )
    CmpFinishBeingActiveFlusherAndReconciler(v6, v29, v31, v32);
  if ( v40 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v6 + 1640));
  if ( UnloadRundown )
    CmpReleaseHiveLoadUnloadRundown();
  if ( BugCheckParameter3[0] )
    CmpDestroyHive((PVOID)BugCheckParameter3[0]);
  if ( v1 )
    CmSiFreeMemory(v1);
  return (unsigned int)Hive;
}
