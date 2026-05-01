/*
 * XREFs of ?RmpCleanupAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180083618
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x180048C40 (PsmInitializeServiceExtension4.c)
 * Callees:
 *     ?HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z @ 0x180001BA8 (-HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180010950 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800109D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z @ 0x180010AD0 (-HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z.c)
 *     CemRcObjectDereference @ 0x180036410 (CemRcObjectDereference.c)
 *     ?RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18004B0E4 (-RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180050280 (_guard_xfg_dispatch_icall_nop.c)
 *     ?HampPdcCleanup@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x18007E9D0 (-HampPdcCleanup@@YAXPEAU_HAM_PDC_CONTEXT@@@Z.c)
 *     ?RmpActivityHostCleanupModule@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180086B14 (-RmpActivityHostCleanupModule@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpEnforcerContextCleanup@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180087A0C (-RmpEnforcerContextCleanup@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpCpuSetManagerReleaseClientContext@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@@Z @ 0x180089EA8 (-RmpCpuSetManagerReleaseClientContext@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@@Z.c)
 *     ?RmpObjectTableCleanup@@YAXPEAU_RM_OBJECT_TABLE@@@Z @ 0x18008CBCC (-RmpObjectTableCleanup@@YAXPEAU_RM_OBJECT_TABLE@@@Z.c)
 */

void __fastcall RmpCleanupAllModules(struct _RM_SERVICE_GLOBALS *a1)
{
  __int64 v2; // rcx
  _QWORD *i; // rsi
  void *v4; // r8
  __int64 v5; // rcx
  void *v6; // rcx
  void *v7; // r8
  struct _HAM_RC_TREE_NODE *j; // rax
  struct _HAM_RC_TREE_NODE *v9; // rdi
  __int64 v10; // rcx

  v2 = *((_QWORD *)a1 + 404);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)a1 + 404) = 0LL;
  }
  RmpObjectTableCleanup((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 536));
  RmpActivityHostCleanupModule(a1);
  RmpAcquireGlobalLock();
  for ( i = (_QWORD *)((char *)a1 + 688);
        (_QWORD *)*i != i;
        RmpCpuSetManagerReleaseClientContext((struct _RM_CPU_SET_CLIENT_CONTEXT *)(*i - 8LL)) )
  {
    ;
  }
  RmpCpuSetManagerApplyAllPolicyChanges((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 680));
  RmpObjectTableCleanup((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 704));
  RmpObjectTableCleanup((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 728));
  v4 = (void *)*((_QWORD *)a1 + 95);
  if ( v4 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
  RmpReleaseGlobalLock();
  RmpEnforcerContextCleanup(a1);
  v5 = *((_QWORD *)a1 + 270);
  if ( v5 )
    TpReleaseWork(v5);
  v6 = (void *)*((_QWORD *)a1 + 45);
  if ( v6 )
    NtClose(v6);
  v7 = (void *)*((_QWORD *)a1 + 47);
  if ( v7 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
  if ( *((_DWORD *)a1 + 752) || *((_DWORD *)a1 + 753) )
    NtDeleteWnfStateName((char *)a1 + 3008);
  HampPdcCleanup((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 2584));
  for ( j = HamRcNodeGetFirst((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 2840), 4);
        ;
        j = HamRcNodeGetSuccessor((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 2840), v9) )
  {
    v9 = j;
    if ( !j )
      break;
    CemRcObjectDereference(j);
  }
  v10 = *((_QWORD *)a1 + 70);
  if ( v10 )
    TpReleaseTimer(v10);
  *((_DWORD *)a1 + 168) &= ~1u;
}
