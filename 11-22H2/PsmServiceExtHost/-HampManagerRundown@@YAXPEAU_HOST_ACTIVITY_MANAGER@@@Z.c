/*
 * XREFs of ?HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180074DA0
 * Callers:
 *     ?RmpRundownAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800823C0 (-RmpRundownAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     ?HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@KPEA_KPEAK@Z @ 0x180017E20 (-HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     ?HampManagerAcquireLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18001C548 (-HampManagerAcquireLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerReleaseLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18001C580 (-HampManagerReleaseLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampDepGroupWaitEnterStateChange@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003B5B4 (-HampDepGroupWaitEnterStateChange@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003B664 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupGetFirstDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003BB2C (-HampDepGroupGetFirstDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003BBBC (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003BFD0 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostIdStoreReleaseLockExclusive@@YAXPEAU_HAM_HOSTID_STORE@@@Z @ 0x18003F144 (-HampHostIdStoreReleaseLockExclusive@@YAXPEAU_HAM_HOSTID_STORE@@@Z.c)
 *     ?HampHostIdStoreAcquireLockExclusive@@YAXPEAU_HAM_HOSTID_STORE@@@Z @ 0x18003F17C (-HampHostIdStoreAcquireLockExclusive@@YAXPEAU_HAM_HOSTID_STORE@@@Z.c)
 *     ?HampHostIdStoreEnumerateMatchingEntries@@YAXPEAU_HAM_HOSTID_STORE@@PEAKPEAT_RM_SID@@PEAU_RM_PSM_KEY@@P6AKPEAU_HAM_HOSTID_ENTRY@@PEAX@Z5@Z @ 0x18003F254 (-HampHostIdStoreEnumerateMatchingEntries@@YAXPEAU_HAM_HOSTID_STORE@@PEAKPEAT_RM_SID@@PEAU_RM_PSM.c)
 *     ?HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERARCHY_DEPTH@@PEAU1@@Z @ 0x180041F00 (-HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERAR.c)
 *     ?HampClientDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18004DE3C (-HampClientDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampClientGetFirst@@YAPEAU_HAM_CLIENT_CONTEXT@@PEAU_CEM_RC_TABLE@@@Z @ 0x18004E068 (-HampClientGetFirst@@YAPEAU_HAM_CLIENT_CONTEXT@@PEAU_CEM_RC_TABLE@@@Z.c)
 *     ?HampClientGetNext@@YAPEAU_HAM_CLIENT_CONTEXT@@PEAU1@@Z @ 0x18004E090 (-HampClientGetNext@@YAPEAU_HAM_CLIENT_CONTEXT@@PEAU1@@Z.c)
 *     ?HampManagerGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x18005558E (-HampManagerGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?HampManagerEnumerateDependencyGroups@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU1@@Z @ 0x180074C44 (-HampManagerEnumerateDependencyGroups@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HOST_ACTIVITY_MANAGER@@.c)
 *     ?HampDepGroupGetNextDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU1@@Z @ 0x18007CB2C (-HampDepGroupGetNextDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU1@@Z.c)
 *     ?HampPdcExitDamPhase@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z @ 0x18007E6A4 (-HampPdcExitDamPhase@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z.c)
 *     ?HampPdcExitPlmPhase@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x18007E714 (-HampPdcExitPlmPhase@@YAXPEAU_HAM_PDC_CONTEXT@@@Z.c)
 *     ?HamRcRootWaitForEmpty@@YAXPEAU_HAM_RC_TREE_ROOT@@@Z @ 0x18007FCAC (-HamRcRootWaitForEmpty@@YAXPEAU_HAM_RC_TREE_ROOT@@@Z.c)
 *     ?HampWakeManagerPreRundown@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x1800811AC (-HampWakeManagerPreRundown@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 *     ?HampSystemNotificationClientUnregister@@YAXPEAX@Z @ 0x18008EAD0 (-HampSystemNotificationClientUnregister@@YAXPEAX@Z.c)
 *     CemRcTableBeginRundown @ 0x180097798 (CemRcTableBeginRundown.c)
 *     CemRcTableWaitForEmpty @ 0x1800977E8 (CemRcTableWaitForEmpty.c)
 */

void __fastcall HampManagerRundown(struct _HOST_ACTIVITY_MANAGER *a1)
{
  void *v2; // rcx
  void *v3; // rcx
  _QWORD *v4; // rbx
  __int64 v5; // rsi
  char *v6; // rbx
  __int64 v7; // rbp
  struct _HAM_CLIENT_CONTEXT *i; // rax
  struct _HAM_CLIENT_CONTEXT *v9; // rsi
  struct _RM_HAM_ACTIVITY_HOST *j; // rax
  struct _RM_HAM_ACTIVITY_HOST *v11; // rbx
  volatile signed __int64 *v12; // rdx
  struct _HOST_ACTIVITY_MANAGER *v13; // rcx
  struct _HAM_HOST_DEPENDENCY *k; // rax
  struct _HAM_DEPENDENCY_GROUP *v15; // rax
  struct _HAM_DEPENDENCY_GROUP *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rdx
  unsigned int v20; // [rsp+60h] [rbp+8h] BYREF
  __int64 v21; // [rsp+68h] [rbp+10h] BYREF

  HampWakeManagerPreRundown((struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 688));
  if ( *((_QWORD *)a1 + 65) )
    RtlUnsubscribeWnfNotificationWaitForCompletion();
  if ( *((_QWORD *)a1 + 64) )
    RtlUnsubscribeWnfNotificationWaitForCompletion();
  if ( *((_QWORD *)a1 + 80) )
    HampPdcExitDamPhase((struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 560), 0);
  if ( *((_QWORD *)a1 + 79) )
    HampPdcExitPlmPhase((struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 560));
  v2 = (void *)*((_QWORD *)a1 + 72);
  if ( v2 )
  {
    HampSystemNotificationClientUnregister(v2);
    *((_QWORD *)a1 + 72) = 0LL;
  }
  v3 = (void *)*((_QWORD *)a1 + 71);
  if ( v3 )
  {
    HampSystemNotificationClientUnregister(v3);
    *((_QWORD *)a1 + 71) = 0LL;
  }
  *((_DWORD *)a1 + 156) |= 2u;
  if ( *((_QWORD *)a1 + 75) )
  {
    SleepstudyHelperDestroyLibrary();
    *((_QWORD *)a1 + 75) = 0LL;
  }
  v4 = (_QWORD *)((char *)a1 + 528);
  v5 = 4LL;
  do
  {
    if ( *v4 )
      RtlUnsubscribeWnfNotificationWaitForCompletion();
    ++v4;
    --v5;
  }
  while ( v5 );
  v6 = (char *)a1 + 16;
  v7 = 7LL;
  do
  {
    CemRcTableBeginRundown(v6);
    for ( i = HampClientGetFirst((__int64)v6); ; i = HampClientGetNext(v9) )
    {
      v9 = i;
      if ( !i )
        break;
      HampClientDisconnect(i);
    }
    CemRcTableWaitForEmpty(v6);
    v6 += 48;
    --v7;
  }
  while ( v7 );
  for ( j = HampHostEnumerateHostsInNode((struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 352), 0, 0LL);
        ;
        j = HampManagerGetNextHost(v11) )
  {
    v11 = j;
    if ( !j )
      break;
    HampHostQueueTerminateEx((__int64)j, 3u, 0xB00u, 0LL, 0, 0, 0LL, &v20);
  }
  v12 = 0LL;
  v13 = a1;
  while ( 1 )
  {
    v15 = HampManagerEnumerateDependencyGroups(v13, v12);
    v16 = v15;
    if ( !v15 )
      break;
    HampDepGroupWaitEnterStateChange(v15);
    HampDepGroupAcquireLockExclusive(v16);
    for ( k = HampDepGroupGetFirstDependency(v16); k; k = HampDepGroupGetNextDependency(k) )
    {
      if ( *((_BYTE *)k + 40) != 2 )
        *((_DWORD *)k + 9) |= 1u;
    }
    HampDepGroupReleaseLockExclusive(v16);
    HampDepGroupRunStateChangeWorker(v16);
    v13 = (struct _HOST_ACTIVITY_MANAGER *)*((_QWORD *)v16 + 4);
    v12 = (volatile signed __int64 *)v16;
  }
  HampManagerAcquireLockShared(a1);
  while ( 1 )
  {
    v21 = *((_QWORD *)a1 + 61);
    HampManagerReleaseLockShared(a1, v17);
    if ( !v21 )
      break;
    RtlWaitOnAddress((char *)a1 + 488, &v21, 8LL);
    HampManagerAcquireLockShared(a1);
  }
  CemRcTableBeginRundown((char *)a1 + 392);
  CemRcTableWaitForEmpty((char *)a1 + 392);
  CemRcTableBeginRundown((char *)a1 + 440);
  CemRcTableWaitForEmpty((char *)a1 + 440);
  CemRcTableBeginRundown((char *)a1 + 720);
  CemRcTableWaitForEmpty((char *)a1 + 720);
  HampHostIdStoreAcquireLockExclusive((struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 800), v18);
  HampHostIdStoreEnumerateMatchingEntries(
    (struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 800),
    0LL,
    0LL,
    0LL,
    (unsigned int (*)(struct _HAM_HOSTID_ENTRY *, void *))HampHostIdStoreInvalidateEntryCallback,
    0LL);
  HampHostIdStoreReleaseLockExclusive((struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 800), v19);
  HamRcRootWaitForEmpty((struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 816));
}
