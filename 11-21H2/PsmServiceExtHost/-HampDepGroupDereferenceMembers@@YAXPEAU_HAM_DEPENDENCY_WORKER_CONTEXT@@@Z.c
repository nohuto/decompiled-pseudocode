/*
 * XREFs of ?HampDepGroupDereferenceMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x180074D10
 * Callers:
 *     ?HampDepGroupLockAndReferenceMembers@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x180075838 (-HampDepGroupLockAndReferenceMembers@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKER_C.c)
 *     ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x1800761DC (-HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupTryMerge@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18007680C (-HampDepGroupTryMerge@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostGetTransitiveAppliedTaskCompletions@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18007A0C0 (-HampHostGetTransitiveAppliedTaskCompletions@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180010950 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180016A20 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800398D0 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003A34C (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003A9F4 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 */

void __fastcall HampDepGroupDereferenceMembers(struct _HAM_DEPENDENCY_WORKER_CONTEXT **a1)
{
  struct _HAM_DEPENDENCY_WORKER_CONTEXT *v2; // rbx
  char *v3; // rdi
  __int64 v4; // rcx
  struct _HAM_DEPENDENCY_WORKER_CONTEXT **v5; // rax

  RmpAcquireGlobalLock();
  while ( 1 )
  {
    v2 = *a1;
    if ( *a1 == (struct _HAM_DEPENDENCY_WORKER_CONTEXT *)a1 )
      break;
    v3 = (char *)v2 - 744;
    HampHostAcquireLockExclusiveEx((struct _HAM_DEPENDENCY_WORKER_CONTEXT *)((char *)v2 - 744), 0);
    HampHostCheckQueueStateWorker((struct _HAM_DEPENDENCY_WORKER_CONTEXT *)((char *)v2 - 744), 0);
    HampHostReleaseLockExclusiveEx((struct _HAM_DEPENDENCY_WORKER_CONTEXT *)((char *)v2 - 744));
    v4 = *(_QWORD *)v2;
    if ( *(struct _HAM_DEPENDENCY_WORKER_CONTEXT **)(*(_QWORD *)v2 + 8LL) != v2
      || (v5 = (struct _HAM_DEPENDENCY_WORKER_CONTEXT **)*((_QWORD *)v2 + 1), *v5 != v2) )
    {
      __fastfail(3u);
    }
    *v5 = (struct _HAM_DEPENDENCY_WORKER_CONTEXT *)v4;
    *(_QWORD *)(v4 + 8) = v5;
    *(_OWORD *)v2 = 0LL;
    *((_DWORD *)v3 + 196) = 0;
    if ( (*((_QWORD *)v3 + 75))-- == 1LL )
      RmpActivityHostCheckQueueDelete((struct _HAM_DEPENDENCY_WORKER_CONTEXT *)((char *)v2 - 808));
  }
  RmpReleaseGlobalLock();
}
