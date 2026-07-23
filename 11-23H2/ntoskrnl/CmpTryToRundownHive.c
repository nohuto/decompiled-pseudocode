/*
 * XREFs of CmpTryToRundownHive @ 0x1402092DC
 * Callers:
 *     CmpLateUnloadHiveWorker @ 0x140693350 (CmpLateUnloadHiveWorker.c)
 * Callees:
 *     ExpUnblockPushLock @ 0x140209468 (ExpUnblockPushLock.c)
 *     ExWaitForRundownProtectionRelease @ 0x14030A5D0 (ExWaitForRundownProtectionRelease.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     CmpInitializeRollbackPacket @ 0x140693518 (CmpInitializeRollbackPacket.c)
 *     CmpCleanupRollbackPacket @ 0x140693528 (CmpCleanupRollbackPacket.c)
 *     CmShutdownCmRM @ 0x140697CA4 (CmShutdownCmRM.c)
 *     CmpDoesKeyHaveOpenSubkeys @ 0x140699A80 (CmpDoesKeyHaveOpenSubkeys.c)
 *     CmCloseRmHandle @ 0x140699F38 (CmCloseRmHandle.c)
 *     CmCloseTmHandle @ 0x140699F60 (CmCloseTmHandle.c)
 *     CmpAbortRollbackPacket @ 0x140699F88 (CmpAbortRollbackPacket.c)
 *     CmSnapshotRMTxArray @ 0x140699FE8 (CmSnapshotRMTxArray.c)
 *     UNLOCK_HIVE_LOAD @ 0x140752020 (UNLOCK_HIVE_LOAD.c)
 *     LOCK_HIVE_LOAD @ 0x140752098 (LOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x1407539D8 (CmpLockRegistryFreezeAware.c)
 *     CmpLogTransactionAbortedForRollbackPacket @ 0x1407EAC48 (CmpLogTransactionAbortedForRollbackPacket.c)
 *     CmObliterateRMTxArray @ 0x140A1C260 (CmObliterateRMTxArray.c)
 *     CmpIsHiveLoadUnloadRundownActive @ 0x140AF506C (CmpIsHiveLoadUnloadRundownActive.c)
 *     CmpUnlockRegistry @ 0x140AF54F0 (CmpUnlockRegistry.c)
 */

char __fastcall CmpTryToRundownHive(struct _EX_RUNDOWN_REF *a1, __int64 a2)
{
  char v4; // bp
  char v5; // r14
  unsigned __int64 Count; // rcx
  __int64 v8; // rcx
  void *v9; // r14
  void *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  signed __int32 v13[8]; // [rsp+0h] [rbp-48h] BYREF
  _OWORD v14[2]; // [rsp+20h] [rbp-28h] BYREF
  char v15; // [rsp+60h] [rbp+18h] BYREF

  v14[0] = 0LL;
  v4 = 0;
  v5 = 0;
  CmpInitializeRollbackPacket(v14);
  if ( (unsigned __int8)CmpIsHiveLoadUnloadRundownActive() )
  {
LABEL_27:
    CmpCleanupRollbackPacket(v14);
    return 0;
  }
  while ( 1 )
  {
    if ( *(_QWORD *)a2 != 2LL && ((unsigned __int8)CmpDoesKeyHaveOpenSubkeys(a2) || *(_QWORD *)a2 != 2LL) )
    {
LABEL_23:
      if ( !v4 )
        goto LABEL_27;
      goto LABEL_24;
    }
    if ( !v4 )
    {
      *(_DWORD *)(a2 + 8) |= 0x40000u;
      CmpUnlockRegistry();
      UNLOCK_HIVE_LOAD();
      _InterlockedIncrement(&CmpActiveHiveRundownCount);
      ExWaitForRundownProtectionRelease(a1 + 205);
      v4 = 1;
      _InterlockedExchange64((volatile __int64 *)&a1[205], 1LL);
      goto LABEL_10;
    }
    Count = a1[519].Count;
    if ( !Count || v5 )
      break;
    if ( (int)CmSnapshotRMTxArray(Count, v14) < 0 )
      goto LABEL_24;
    CmpLogTransactionAbortedForRollbackPacket(a2, 11LL, v14);
    CmpUnlockRegistry();
    if ( !LODWORD(v14[0]) )
    {
      v9 = (void *)CmCloseRmHandle(a1[519].Count, 0LL);
      v10 = (void *)CmCloseTmHandle(a1[519].Count);
      UNLOCK_HIVE_LOAD();
      if ( v9 )
        ZwClose(v9);
      if ( v10 )
        ZwClose(v10);
      LOCK_HIVE_LOAD();
      LOBYTE(v11) = 1;
      CmShutdownCmRM(a1[519].Count, v11);
      v5 = 1;
      goto LABEL_11;
    }
    v15 = 0;
    UNLOCK_HIVE_LOAD();
    if ( (int)CmpAbortRollbackPacket(v14, &v15) < 0 )
    {
      LOCK_HIVE_LOAD();
      LOBYTE(v12) = 1;
      CmpLockRegistryFreezeAware(v12);
LABEL_24:
      *(_DWORD *)(a2 + 8) &= ~0x40000u;
      _InterlockedExchange64((volatile __int64 *)&a1[205], 0LL);
      if ( _InterlockedExchangeAdd(&CmpActiveHiveRundownCount, 0xFFFFFFFF) == 1 )
      {
        _InterlockedOr(v13, 0);
        if ( CmpActiveHiveRundownEvent )
          ExpUnblockPushLock(&CmpActiveHiveRundownEvent, 0LL, 0LL);
      }
      goto LABEL_27;
    }
    if ( v15 == 1 )
      CmObliterateRMTxArray(a1[519].Count);
LABEL_10:
    LOCK_HIVE_LOAD();
LABEL_11:
    LOBYTE(v8) = 1;
    CmpLockRegistryFreezeAware(v8);
    if ( (unsigned __int8)CmpIsHiveLoadUnloadRundownActive() )
      goto LABEL_23;
  }
  if ( _InterlockedExchangeAdd(&CmpActiveHiveRundownCount, 0xFFFFFFFF) == 1 )
  {
    _InterlockedOr(v13, 0);
    if ( CmpActiveHiveRundownEvent )
      ExpUnblockPushLock(&CmpActiveHiveRundownEvent, 0LL, 0LL);
  }
  CmpCleanupRollbackPacket(v14);
  return 1;
}
