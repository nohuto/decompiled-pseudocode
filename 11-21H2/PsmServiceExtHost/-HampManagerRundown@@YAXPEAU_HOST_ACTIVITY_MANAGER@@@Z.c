/*
 * XREFs of ?HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180072ED8
 * Callers:
 *     ?RmpRundownAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800837C4 (-RmpRundownAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     ?HampClientDestroy@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180005798 (-HampClientDestroy@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampHostIdStoreEnumerateMatchingEntries@@YAXPEAU_HAM_HOSTID_STORE@@PEAKPEAT_RM_SID@@PEAU_RM_PSM_KEY@@P6AKPEAU_HAM_HOSTID_ENTRY@@PEAX@Z5@Z @ 0x180027DFC (-HampHostIdStoreEnumerateMatchingEntries@@YAXPEAU_HAM_HOSTID_STORE@@PEAKPEAT_RM_SID@@PEAU_RM_PSM.c)
 *     ?HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@KPEA_KPEAK@Z @ 0x18002DB4C (-HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     ?HampHostIdStoreReleaseLockExclusive@@YAXPEAU_HAM_HOSTID_STORE@@@Z @ 0x180043558 (-HampHostIdStoreReleaseLockExclusive@@YAXPEAU_HAM_HOSTID_STORE@@@Z.c)
 *     ?HampHostIdStoreAcquireLockExclusive@@YAXPEAU_HAM_HOSTID_STORE@@@Z @ 0x180043590 (-HampHostIdStoreAcquireLockExclusive@@YAXPEAU_HAM_HOSTID_STORE@@@Z.c)
 *     ?HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERARCHY_DEPTH@@PEAU1@@Z @ 0x180046464 (-HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERAR.c)
 *     ?HampManagerGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x1800515BE (-HampManagerGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?HampManagerAcquireLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180072B08 (-HampManagerAcquireLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerEnumerateDependencyGroups@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU1@@Z @ 0x180072CC4 (-HampManagerEnumerateDependencyGroups@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HOST_ACTIVITY_MANAGER@@.c)
 *     ?HampManagerReleaseLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180072E24 (-HampManagerReleaseLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180073A18 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupGetFirstDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18007537C (-HampDepGroupGetFirstDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupGetNextDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU1@@Z @ 0x1800753EC (-HampDepGroupGetNextDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU1@@Z.c)
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180075D58 (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18007616C (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupWaitEnterStateChange@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180076CA8 (-HampDepGroupWaitEnterStateChange@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampWakeManagerPreRundown@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x18007C544 (-HampWakeManagerPreRundown@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 *     ?HampPdcExitDamPhase@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z @ 0x18007F434 (-HampPdcExitDamPhase@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z.c)
 *     ?HampPdcExitPlmPhase@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x18007F4A4 (-HampPdcExitPlmPhase@@YAXPEAU_HAM_PDC_CONTEXT@@@Z.c)
 *     ?HampSystemNotificationClientUnregister@@YAXPEAX@Z @ 0x180093034 (-HampSystemNotificationClientUnregister@@YAXPEAX@Z.c)
 *     CemRcTableBeginRundown @ 0x18009CBF8 (CemRcTableBeginRundown.c)
 *     CemRcTableWaitForEmpty @ 0x18009CC48 (CemRcTableWaitForEmpty.c)
 */

void __fastcall HampManagerRundown(struct _HOST_ACTIVITY_MANAGER *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  _QWORD *v6; // rbx
  __int64 v7; // rsi
  _QWORD *v8; // rbx
  struct _RM_HAM_ACTIVITY_HOST *i; // rax
  struct _RM_HAM_ACTIVITY_HOST *v10; // rbx
  struct _HAM_DEPENDENCY_GROUP *v11; // rdx
  struct _HOST_ACTIVITY_MANAGER *v12; // rcx
  struct _HAM_HOST_DEPENDENCY *j; // rax
  struct _HAM_DEPENDENCY_GROUP *v14; // rax
  __int64 v15; // rdx
  struct _HAM_DEPENDENCY_GROUP *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rdx
  unsigned int v20; // [rsp+50h] [rbp+8h] BYREF
  __int64 v21; // [rsp+58h] [rbp+10h] BYREF

  HampWakeManagerPreRundown((struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 464));
  v2 = *((_QWORD *)a1 + 37);
  if ( v2 )
    RtlUnsubscribeWnfNotificationWaitForCompletion(v2);
  v3 = *((_QWORD *)a1 + 36);
  if ( v3 )
    RtlUnsubscribeWnfNotificationWaitForCompletion(v3);
  if ( *((_QWORD *)a1 + 52) )
    HampPdcExitDamPhase((struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 336), 0);
  if ( *((_QWORD *)a1 + 51) )
    HampPdcExitPlmPhase((struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 336));
  v4 = (void *)*((_QWORD *)a1 + 44);
  if ( v4 )
  {
    HampSystemNotificationClientUnregister(v4);
    *((_QWORD *)a1 + 44) = 0LL;
  }
  v5 = (void *)*((_QWORD *)a1 + 43);
  if ( v5 )
  {
    HampSystemNotificationClientUnregister(v5);
    *((_QWORD *)a1 + 43) = 0LL;
  }
  *((_DWORD *)a1 + 100) |= 2u;
  if ( *((_QWORD *)a1 + 47) )
  {
    SleepstudyHelperDestroyLibrary();
    *((_QWORD *)a1 + 47) = 0LL;
  }
  v6 = (_QWORD *)((char *)a1 + 304);
  v7 = 4LL;
  do
  {
    if ( *v6 )
      RtlUnsubscribeWnfNotificationWaitForCompletion(*v6);
    ++v6;
    --v7;
  }
  while ( v7 );
  v8 = (_QWORD *)((char *)a1 + 16);
  do
  {
    while ( (_QWORD *)*v8 != v8 )
      HampClientDestroy((struct _HAM_CLIENT_CONTEXT *)(*v8 - 8LL));
    LODWORD(v7) = v7 + 1;
    v8 += 2;
  }
  while ( (unsigned int)v7 < 7 );
  for ( i = HampHostEnumerateHostsInNode((struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 128), 0, 0LL);
        ;
        i = HampManagerGetNextHost(v10) )
  {
    v10 = i;
    if ( !i )
      break;
    HampHostQueueTerminateEx((__int64)i, 3u, 0xB00u, 0LL, 0, 0, 0LL, &v20);
  }
  v11 = 0LL;
  v12 = a1;
  while ( 1 )
  {
    v14 = HampManagerEnumerateDependencyGroups(v12, v11);
    v16 = v14;
    if ( !v14 )
      break;
    HampDepGroupWaitEnterStateChange(v14);
    HampDepGroupAcquireLockExclusive(v16);
    for ( j = HampDepGroupGetFirstDependency(v16); j; j = HampDepGroupGetNextDependency(j) )
    {
      if ( *((_BYTE *)j + 40) != 2 )
        *((_DWORD *)j + 9) |= 1u;
    }
    HampDepGroupReleaseLockExclusive(v16);
    HampDepGroupRunStateChangeWorker(v16);
    v12 = (struct _HOST_ACTIVITY_MANAGER *)*((_QWORD *)v16 + 4);
    v11 = v16;
  }
  while ( 1 )
  {
    HampManagerAcquireLockShared(a1, v15);
    v21 = *((_QWORD *)a1 + 33);
    HampManagerReleaseLockShared(a1, v17);
    if ( !v21 )
      break;
    RtlWaitOnAddress((char *)a1 + 264, &v21, 8LL);
  }
  CemRcTableBeginRundown((char *)a1 + 168);
  CemRcTableWaitForEmpty((char *)a1 + 168);
  CemRcTableBeginRundown((char *)a1 + 216);
  CemRcTableWaitForEmpty((char *)a1 + 216);
  CemRcTableBeginRundown((char *)a1 + 496);
  CemRcTableWaitForEmpty((char *)a1 + 496);
  HampHostIdStoreAcquireLockExclusive((struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 576), v18);
  HampHostIdStoreEnumerateMatchingEntries(
    (struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 576),
    0LL,
    0LL,
    0LL,
    (unsigned int (*)(struct _HAM_HOSTID_ENTRY *, void *))HampHostIdStoreInvalidateEntryCallback,
    0LL);
  HampHostIdStoreReleaseLockExclusive((struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 576), v19);
  CemRcTableBeginRundown((char *)a1 + 632);
  CemRcTableWaitForEmpty((char *)a1 + 632);
}
