/*
 * XREFs of CmpPerformUnloadKey @ 0x140699394
 * Callers:
 *     CmUnloadKey @ 0x140698DD8 (CmUnloadKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208C40 (CmSiFreeMemory.c)
 *     CmpDrainDelayDerefContext @ 0x14022D600 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x140231594 (CmpInitializeDelayDerefContext.c)
 *     ExWaitForRundownProtectionRelease @ 0x14030A5D0 (ExWaitForRundownProtectionRelease.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x1404124A0 (ExfUnblockPushLock.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     CmpCompleteUnloadKey @ 0x140688D18 (CmpCompleteUnloadKey.c)
 *     CmpCleanupRollbackPacket @ 0x140693528 (CmpCleanupRollbackPacket.c)
 *     CmpStopRMLog @ 0x140697CEC (CmpStopRMLog.c)
 *     CmpRunDownCmRM @ 0x1406987D0 (CmpRunDownCmRM.c)
 *     CmpFlushNotify @ 0x140699940 (CmpFlushNotify.c)
 *     CmpDoesKeyHaveOpenSubkeys @ 0x140699A80 (CmpDoesKeyHaveOpenSubkeys.c)
 *     CmpPrepareForSubtreeInvalidation @ 0x140699DD0 (CmpPrepareForSubtreeInvalidation.c)
 *     CmpTryAcquireKcbIXLocks @ 0x140699E30 (CmpTryAcquireKcbIXLocks.c)
 *     CmpInvalidateSubtree @ 0x140699EE8 (CmpInvalidateSubtree.c)
 *     CmCloseRmHandle @ 0x140699F38 (CmCloseRmHandle.c)
 *     CmCloseTmHandle @ 0x140699F60 (CmCloseTmHandle.c)
 *     CmpAbortRollbackPacket @ 0x140699F88 (CmpAbortRollbackPacket.c)
 *     CmSnapshotRMTxArray @ 0x140699FE8 (CmSnapshotRMTxArray.c)
 *     CmpReportNotifyForKcbStack @ 0x1406D53E0 (CmpReportNotifyForKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1406D7B9C (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x140710A8C (CmpFlushNotifiesOnKeyBodyList.c)
 *     UNLOCK_HIVE_LOAD @ 0x140752020 (UNLOCK_HIVE_LOAD.c)
 *     LOCK_HIVE_LOAD @ 0x140752098 (LOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x1407539D8 (CmpLockRegistryFreezeAware.c)
 *     CmpSignalDeferredPosts @ 0x1407684A4 (CmpSignalDeferredPosts.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1407E9FC8 (CmpLogTransactionAbortedWithChildName.c)
 *     CmpFreezeHive @ 0x14087531C (CmpFreezeHive.c)
 *     CmpUnfreezeHive @ 0x140A17058 (CmpUnfreezeHive.c)
 *     CmObliterateRMTxArray @ 0x140A1C260 (CmObliterateRMTxArray.c)
 *     CmpLogUnsupportedOperation @ 0x140A200A0 (CmpLogUnsupportedOperation.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140AF5160 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpDetachFromRegistryProcess @ 0x140AF5230 (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x140AF5250 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140AF54F0 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpPerformUnloadKey(__int64 a1, char a2, char a3, __int64 a4)
{
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  ULONG_PTR v13; // rsi
  int v14; // edi
  __int64 v15; // r14
  int v16; // ebx
  int v17; // r15d
  __int64 v18; // rdx
  char v19; // r15
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v29; // rax
  int v30; // eax
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rcx
  void *v37; // rdi
  void *v38; // rbx
  __int64 v39; // rcx
  __int64 v40; // rbx
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  signed __int32 v46[8]; // [rsp+0h] [rbp-A9h] BYREF
  __int64 v47; // [rsp+20h] [rbp-89h]
  __int64 v48; // [rsp+28h] [rbp-81h]
  __int64 v49; // [rsp+30h] [rbp-79h] BYREF
  __int128 v50; // [rsp+38h] [rbp-71h] BYREF
  _QWORD v51[2]; // [rsp+48h] [rbp-61h] BYREF
  __int128 v52; // [rsp+58h] [rbp-51h] BYREF
  __int64 v53; // [rsp+68h] [rbp-41h]
  __int128 v54; // [rsp+70h] [rbp-39h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+80h] [rbp-29h]
  _OWORD v56[3]; // [rsp+90h] [rbp-19h] BYREF

  v53 = a4;
  v51[1] = v51;
  LOWORD(v49) = 0;
  v51[0] = v51;
  v54 = 0LL;
  WORD1(v54) = -1;
  memset(v56, 0, sizeof(v56));
  v52 = 0LL;
  v50 = 0LL;
  *(_OWORD *)Privileges = 0LL;
  CmpInitializeDelayDerefContext(&v52);
  LOCK_HIVE_LOAD(v7);
  LOBYTE(v8) = 1;
  CmpLockRegistryFreezeAware(v8);
  v13 = *(_QWORD *)(a1 + 8);
  v14 = 6;
  HIDWORD(v49) = 6;
  v15 = *(_QWORD *)(v13 + 32);
  if ( (*(_DWORD *)(v13 + 8) & 0x80u) != 0 )
    goto LABEL_61;
  v16 = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
  if ( v16 < 0 )
    goto LABEL_52;
  if ( (*(_DWORD *)(v13 + 8) & 0x40000) != 0 )
  {
    v16 = -1073740763;
    goto LABEL_52;
  }
  v17 = a2 & 1;
  if ( *(_BYTE *)(v15 + 2944) && (!v17 || (*(_DWORD *)(v15 + 4112) & 0x20) == 0) )
  {
    v16 = -1073741431;
    goto LABEL_52;
  }
  if ( (int)CmpStartKcbStackForTopLayerKcb(&v54, v13) < 0 )
  {
    v16 = -1073741670;
    goto LABEL_52;
  }
  ((void (__fastcall *)(__int128 *, _QWORD, __int64, _QWORD *, __int64, __int64, __int64, _QWORD, _QWORD))CmpReportNotifyForKcbStack)(
    &v54,
    0LL,
    4LL,
    v51,
    v47,
    v48,
    v49,
    v50,
    *((_QWORD *)&v50 + 1));
  LOBYTE(v18) = 1;
  CmpFlushNotify(a1, v18, v51);
  v10 = *(_QWORD *)(v13 + 32);
  if ( v10 == CmpMasterHive || (*(_DWORD *)(v13 + 184) & 0x40000) == 0 )
  {
    v16 = -1073741811;
    goto LABEL_52;
  }
  if ( (*(_DWORD *)(v10 + 4112) & 4) != 0 )
  {
LABEL_61:
    v16 = -1073741790;
    goto LABEL_52;
  }
  if ( !v17 )
  {
    if ( !(unsigned __int8)CmpDoesKeyHaveOpenSubkeys(v13) && *(_QWORD *)v13 == 2LL )
      goto LABEL_12;
    if ( a3 )
    {
      v16 = CmpFreezeHive(v13, v53);
      if ( v16 >= 0 )
      {
        v16 = 259;
        goto LABEL_20;
      }
      goto LABEL_52;
    }
    goto LABEL_51;
  }
  v29 = *(_QWORD *)(v13 + 192);
  if ( v29 && *(_QWORD *)(v29 + 32) != v29 + 32 )
  {
    CmpLogUnsupportedOperation(3LL);
LABEL_51:
    v16 = -1073741535;
    goto LABEL_52;
  }
  LOBYTE(v9) = 1;
  v30 = CmpTryAcquireKcbIXLocks(v13, v9, v11, &v50);
  v16 = v30;
  if ( v30 == -1073741267 )
  {
LABEL_68:
    LODWORD(v47) = v50;
    CmpLogTransactionAbortedWithChildName(v13, 0LL, 10LL);
    CmpUnlockRegistry(v43, v42, v44, v45, v47, v48);
    UNLOCK_HIVE_LOAD();
    v14 = 0;
    HIDWORD(v49) = 0;
    v16 = CmpAbortRollbackPacket(&v50, 0LL);
    if ( v16 >= 0 )
      v16 = -1073741267;
    v19 = 0;
    goto LABEL_53;
  }
  if ( v30 < 0 )
  {
LABEL_52:
    v19 = v49;
    goto LABEL_53;
  }
  v31 = CmpPrepareForSubtreeInvalidation(v13, 0LL, &v50);
  v16 = v31;
  if ( v31 == -1073741267 )
    goto LABEL_68;
  if ( v31 < 0 )
    goto LABEL_52;
  CmpInvalidateSubtree(v13, 1, 1, (unsigned int)&v52, 0LL);
  CmpFlushNotifiesOnKeyBodyList(v13, 1LL, &v52);
LABEL_12:
  *(_DWORD *)(v13 + 8) |= 0x40000u;
  v19 = 1;
  if ( *(_BYTE *)(v15 + 2944) == 1 )
  {
    CmpUnfreezeHive(v15);
    ++CmpActiveAppHiveUnloadCount;
  }
  CmpDrainDelayDerefContext((_QWORD **)&v52);
  CmpUnlockRegistry(v21, v20, v22, v23, v47, v48);
  UNLOCK_HIVE_LOAD();
  _InterlockedIncrement(&CmpActiveHiveRundownCount);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(v15 + 1640));
  _InterlockedExchange64((volatile __int64 *)(v15 + 1640), 1LL);
  LOCK_HIVE_LOAD(v24);
  LOBYTE(v25) = 1;
  CmpLockRegistryFreezeAware(v25);
  v26 = *(_QWORD *)(v15 + 4152);
  HIDWORD(v49) = 6;
  if ( !v26 )
    goto LABEL_15;
  v16 = CmSnapshotRMTxArray(v26, &v50);
  if ( v16 >= 0 )
  {
    LODWORD(v47) = v50;
    CmpLogTransactionAbortedWithChildName(v13, 0LL, 9LL);
    CmpUnlockRegistry(v33, v32, v34, v35, v47, v48);
    UNLOCK_HIVE_LOAD();
    v14 = 0;
    HIDWORD(v49) = 0;
    v16 = CmpAbortRollbackPacket(&v50, (char *)&v49 + 1);
    if ( v16 >= 0 )
    {
      CmpCleanupRollbackPacket((__int64)&v50);
      v50 = 0LL;
      if ( BYTE1(v49) )
        CmObliterateRMTxArray(*(_QWORD *)(v15 + 4152));
      LOCK_HIVE_LOAD(v36);
      v37 = (void *)CmCloseRmHandle(*(_QWORD *)(v15 + 4152), 0LL);
      v38 = (void *)CmCloseTmHandle(*(_QWORD *)(v15 + 4152));
      UNLOCK_HIVE_LOAD();
      if ( v37 )
        ZwClose(v37);
      if ( v38 )
        ZwClose(v38);
      LOCK_HIVE_LOAD(v39);
      v40 = *(_QWORD *)(v15 + 4152);
      if ( v40 )
      {
        if ( *(_DWORD *)(v40 + 64) )
        {
          _InterlockedDecrement((volatile signed __int32 *)(v40 + 64));
          if ( !*(_DWORD *)(v40 + 64) )
            CmpStopRMLog(v40);
        }
      }
      CmpRunDownCmRM(v40, 1);
      LOBYTE(v41) = 1;
      CmpLockRegistryFreezeAware(v41);
      HIDWORD(v49) = 6;
LABEL_15:
      CmpAttachToRegistryProcess(v56);
      CmpCompleteUnloadKey(v13, v27, (_DWORD *)&v49 + 1);
      CmpDetachFromRegistryProcess(v56);
      v16 = 0;
      goto LABEL_16;
    }
  }
LABEL_53:
  if ( (v14 & 4) == 0 )
  {
    LOCK_HIVE_LOAD(v10);
    v14 |= 4u;
    HIDWORD(v49) = v14;
  }
  if ( (v14 & 2) == 0 )
  {
    LOBYTE(v10) = 1;
    CmpLockRegistryFreezeAware(v10);
    v14 |= 2u;
    HIDWORD(v49) = v14;
  }
  if ( v19 )
  {
    _InterlockedExchange64((volatile __int64 *)(v15 + 1640), 0LL);
    *(_DWORD *)(v13 + 8) &= ~0x40000u;
LABEL_16:
    if ( _InterlockedExchangeAdd(&CmpActiveHiveRundownCount, 0xFFFFFFFF) == 1 )
    {
      _InterlockedOr(v46, 0);
      if ( CmpActiveHiveRundownEvent )
        ExfUnblockPushLock(&CmpActiveHiveRundownEvent, 0LL);
    }
    LOBYTE(v14) = BYTE4(v49);
  }
LABEL_20:
  if ( (v14 & 2) != 0 )
    CmpUnlockRegistry(v10, v9, v11, v12, v47, v48);
  if ( (v14 & 4) != 0 )
    UNLOCK_HIVE_LOAD();
  if ( (_QWORD *)v51[0] != v51 )
    CmpSignalDeferredPosts(v51);
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  CmpCleanupRollbackPacket((__int64)&v50);
  return (unsigned int)v16;
}
