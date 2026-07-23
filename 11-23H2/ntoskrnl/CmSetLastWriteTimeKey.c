/*
 * XREFs of CmSetLastWriteTimeKey @ 0x140A16198
 * Callers:
 *     NtSetInformationKey @ 0x1407ACBE0 (NtSetInformationKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208C40 (CmSiFreeMemory.c)
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1402BDAF0 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FD2D0 (ExfAcquirePushLockSharedEx.c)
 *     CmpTransEnlistUowInCmTrans @ 0x140303028 (CmpTransEnlistUowInCmTrans.c)
 *     CmpTransEnlistUowInKcb @ 0x1403030C0 (CmpTransEnlistUowInKcb.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     CmpCleanupRollbackPacket @ 0x140693528 (CmpCleanupRollbackPacket.c)
 *     CmpTryAcquireKcbIXLocks @ 0x140699E30 (CmpTryAcquireKcbIXLocks.c)
 *     CmpAbortRollbackPacket @ 0x140699F88 (CmpAbortRollbackPacket.c)
 *     CmpUnlockKcbStack @ 0x1406D5398 (CmpUnlockKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1406D7B9C (CmpStartKcbStackForTopLayerKcb.c)
 *     HvpReleaseCellPaged @ 0x1406E0290 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1406E02CC (HvpGetCellContextReinitialize.c)
 *     CmAddLogForAction @ 0x140707B58 (CmAddLogForAction.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14070FD58 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpGetKeyNodeForKcb @ 0x140710874 (CmpGetKeyNodeForKcb.c)
 *     HvpMarkCellDirty @ 0x140747190 (HvpMarkCellDirty.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1407689EC (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpRundownUnitOfWork @ 0x140768FC8 (CmpRundownUnitOfWork.c)
 *     CmpLockIXLockIntent @ 0x14076AE20 (CmpLockIXLockIntent.c)
 *     CmpLockIXLockExclusive @ 0x14076B0FC (CmpLockIXLockExclusive.c)
 *     CmpAllocateUnitOfWork @ 0x1407D3770 (CmpAllocateUnitOfWork.c)
 *     HvpReleaseCellFlat @ 0x1407D9740 (HvpReleaseCellFlat.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1407E9FC8 (CmpLogTransactionAbortedWithChildName.c)
 *     CmpRetryBackOff @ 0x140A1E978 (CmpRetryBackOff.c)
 *     CmpPromoteKey @ 0x140A2685C (CmpPromoteKey.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     CmpIsShutdownRundownActive @ 0x140AF5080 (CmpIsShutdownRundownActive.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140AF5160 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpDetachFromRegistryProcess @ 0x140AF5230 (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x140AF5250 (CmpAttachToRegistryProcess.c)
 *     CmpLockRegistry @ 0x140AF54A0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140AF54F0 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmSetLastWriteTimeKey(_QWORD *a1, _QWORD *a2)
{
  ULONG_PTR v4; // rdi
  char v5; // r15
  int started; // ebx
  __int64 v7; // r8
  __int64 v8; // r14
  int v9; // eax
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  PPRIVILEGE_SET v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  signed __int64 *v30; // rbx
  unsigned __int64 v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rdi
  _QWORD *UnitOfWork; // rax
  __int64 v36; // rsi
  __int64 v37; // r8
  __int64 v38; // [rsp+38h] [rbp-59h] BYREF
  __int128 v39; // [rsp+40h] [rbp-51h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+50h] [rbp-41h]
  int v41; // [rsp+60h] [rbp-31h] BYREF
  __int128 v42; // [rsp+68h] [rbp-29h] BYREF
  __int64 v43; // [rsp+78h] [rbp-19h] BYREF
  _OWORD v44[3]; // [rsp+88h] [rbp-9h] BYREF

  v38 = 0LL;
  v43 = 0LL;
  memset(v44, 0, sizeof(v44));
  v41 = 0;
  HvpGetCellContextReinitialize(&v38);
  v39 = 0LL;
  WORD1(v39) = -1;
  *(_OWORD *)Privileges = 0LL;
  v42 = 0LL;
  CmpAttachToRegistryProcess(v44);
  while ( 1 )
  {
    if ( (unsigned __int8)CmpIsShutdownRundownActive() )
    {
      started = -1073741431;
      v5 = 0;
      goto LABEL_25;
    }
    CmpLockRegistry(v22, v21, v23, v24);
    v4 = a1[1];
    v5 = 1;
    if ( (*(_DWORD *)(*(_QWORD *)(v4 + 32) + 160LL) & 0x100000) != 0 )
      break;
    started = CmpStartKcbStackForTopLayerKcb((__int64)&v39, a1[1]);
    if ( started < 0 )
      goto LABEL_25;
    CmpLockKcbStackTopExclusiveRestShared((__int64)&v39);
    started = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
    if ( started < 0 )
      goto LABEL_53;
    if ( *(_BYTE *)(v4 + 65) == 1 )
    {
      started = -1073741790;
      goto LABEL_53;
    }
    if ( a1[7] || a1[8] )
    {
      started = CmpTransSearchAddTransFromKeyBody(a1, &v43);
      if ( started < 0 )
        goto LABEL_53;
      v8 = v43;
      started = CmpPerformKeyBodyDeletionCheck(a1, v43);
      if ( started < 0 )
        goto LABEL_53;
      if ( (*(_DWORD *)(*(_QWORD *)(v4 + 32) + 160LL) & 2) != 0 )
      {
        started = -1072103423;
        goto LABEL_53;
      }
      if ( v8 )
      {
        UnitOfWork = (_QWORD *)CmpAllocateUnitOfWork();
        v36 = (__int64)UnitOfWork;
        if ( !UnitOfWork )
        {
          started = -1073741670;
LABEL_53:
          CmpUnlockKcbStack((__int64)&v39);
          goto LABEL_25;
        }
        CmpTransEnlistUowInKcb(UnitOfWork, v4);
        started = CmpTransEnlistUowInCmTrans((_QWORD *)v36, v8);
        if ( started >= 0 )
        {
          if ( CmpLockIXLockIntent((unsigned int *)(v4 + 248), v36)
            && CmpLockIXLockExclusive(v4 + 264, (_QWORD *)v36, 1) )
          {
            *(_DWORD *)(v36 + 68) = 8;
            *(_QWORD *)(v36 + 88) = *a2;
            started = CmAddLogForAction(v36, 1u, v37);
            if ( started >= 0 )
            {
              started = 0;
              goto LABEL_53;
            }
          }
          else
          {
            started = -1072103423;
          }
        }
        CmpRundownUnitOfWork((_QWORD *)v36);
        ExFreePoolWithTag((PVOID)v36, 0x77554D43u);
        goto LABEL_53;
      }
    }
    v9 = CmpTryAcquireKcbIXLocks(v4, 0LL, v7, (__int64)&v42);
    started = v9;
    if ( v9 == -1073741267 )
    {
      CmpLogTransactionAbortedWithChildName(v4, 0LL, 2u, v10, v42);
      CmpUnlockKcbStack((__int64)&v39);
      v14 = Privileges[1];
      if ( Privileges[1] )
        CmSiFreeMemory(Privileges[1]);
      v39 = 0LL;
      WORD1(v39) = -1;
      *(_OWORD *)Privileges = 0LL;
      CmpUnlockRegistry(v14, v11, v12, v13);
      v5 = 0;
      started = CmpAbortRollbackPacket((__int64)&v42, 0LL);
      if ( started < 0 )
        goto LABEL_25;
      CmpRetryBackOff(&v41, v15, v16);
      CmpCleanupRollbackPacket((__int64)&v42);
      v42 = 0LL;
    }
    else
    {
      if ( v9 < 0 )
        goto LABEL_53;
      if ( *(_DWORD *)(v4 + 40) != -1 )
      {
        v30 = (signed __int64 *)(*(_QWORD *)(v4 + 32) + 72LL);
        v31 = KeAbPreAcquire((__int64)v30, 0LL);
        if ( _InterlockedCompareExchange64(v30, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(v30, 0LL, v31, (__int64)v30);
        if ( v31 )
          *(_BYTE *)(v31 + 18) = 1;
        started = HvpMarkCellDirty(*(_QWORD *)(v4 + 32), *(unsigned int *)(v4 + 40), 0);
        if ( started >= 0 )
        {
          *(_QWORD *)(CmpGetKeyNodeForKcb(v4, (unsigned int *)&v38, 1) + 4) = *a2;
          v32 = *a2;
          v33 = *(_QWORD *)(v4 + 32);
          ++*(_QWORD *)(v4 + 304);
          *(_QWORD *)(v4 + 168) = v32;
          if ( (*(_BYTE *)(v33 + 140) & 1) != 0 )
            HvpReleaseCellFlat(v33, &v38);
          else
            HvpReleaseCellPaged(v33, (unsigned int *)&v38);
          started = 0;
        }
        v34 = *(_QWORD *)(v4 + 32);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v34 + 72), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v34 + 72));
        KeAbPostRelease(v34 + 72);
        goto LABEL_53;
      }
      CmpUnlockKcbStack((__int64)&v39);
      started = CmpPromoteKey(&v39, 0LL, 0LL);
      if ( started < 0 )
        goto LABEL_25;
      CmpUnlockRegistry(v18, v17, v19, v20);
      if ( Privileges[1] )
        CmSiFreeMemory(Privileges[1]);
      v39 = 0LL;
      WORD1(v39) = -1;
      *(_OWORD *)Privileges = 0LL;
    }
  }
  started = -1073741790;
LABEL_25:
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  CmpCleanupRollbackPacket((__int64)&v42);
  if ( v5 )
    CmpUnlockRegistry(v26, v25, v27, v28);
  CmpDetachFromRegistryProcess(v44);
  return (unsigned int)started;
}
