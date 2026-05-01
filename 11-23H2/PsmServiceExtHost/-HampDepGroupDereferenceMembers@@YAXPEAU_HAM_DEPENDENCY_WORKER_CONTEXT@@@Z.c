/*
 * XREFs of ?HampDepGroupDereferenceMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x18003C1F8
 * Callers:
 *     ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003B798 (-HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupLockAndReferenceMembers@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x18003BCD0 (-HampDepGroupLockAndReferenceMembers@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKER_C.c)
 *     ?HampHostGetTransitiveAppliedTaskCompletions@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18006F574 (-HampHostGetTransitiveAppliedTaskCompletions@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupTryMerge@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18007D21C (-HampDepGroupTryMerge@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 * Callees:
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001C700 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001D750 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180023510 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 */

void __fastcall HampDepGroupDereferenceMembers(struct _HAM_DEPENDENCY_WORKER_CONTEXT **a1)
{
  struct _HAM_DEPENDENCY_WORKER_CONTEXT *v2; // rdi
  DWORD v3; // ebp
  char *v4; // rbx
  _QWORD *Value; // rsi
  __int64 *v6; // rax
  __int64 v7; // rcx
  bool v8; // zf
  __int64 v9; // rcx
  struct _HAM_DEPENDENCY_WORKER_CONTEXT **v10; // rax

  RmpAcquireGlobalLock();
  while ( 1 )
  {
    v2 = *a1;
    if ( *a1 == (struct _HAM_DEPENDENCY_WORKER_CONTEXT *)a1 )
      break;
    v3 = HampLockTrackerId;
    v4 = (char *)v2 - 744;
    if ( HampLockTrackerId != -1 )
    {
      Value = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v3) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
        __int2c();
      *Value |= 2uLL;
      ++Value[2];
    }
    RtlAcquireSRWLockExclusive((char *)v2 - 744);
    *((_DWORD *)v4 + 2) = GetCurrentThreadId();
    HampHostCheckQueueStateWorker((struct _HAM_DEPENDENCY_WORKER_CONTEXT *)((char *)v2 - 744), 0);
    if ( HampLockTrackerId != -1 )
    {
      v6 = (__int64 *)TlsGetValue(HampLockTrackerId);
      v7 = *v6;
      if ( (*v6 & 2) == 0 )
        __int2c();
      v8 = v6[2]-- == 1;
      if ( v8 )
        *v6 = v7 & 0xFFFFFFFFFFFFFFFDuLL;
    }
    *((_DWORD *)v4 + 2) = 0;
    RtlReleaseSRWLockExclusive((char *)v2 - 744);
    v9 = *(_QWORD *)v2;
    if ( *(struct _HAM_DEPENDENCY_WORKER_CONTEXT **)(*(_QWORD *)v2 + 8LL) != v2
      || (v10 = (struct _HAM_DEPENDENCY_WORKER_CONTEXT **)*((_QWORD *)v2 + 1), *v10 != v2) )
    {
      __fastfail(3u);
    }
    *v10 = (struct _HAM_DEPENDENCY_WORKER_CONTEXT *)v9;
    *(_QWORD *)(v9 + 8) = v10;
    *(_OWORD *)v2 = 0LL;
    *((_DWORD *)v4 + 196) = 0;
    v8 = (*((_QWORD *)v4 + 75))-- == 1LL;
    if ( v8 )
      RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(((unsigned __int64)v2 - 808) & -(__int64)(v2 != (struct _HAM_DEPENDENCY_WORKER_CONTEXT *)744)));
  }
  RmpReleaseGlobalLock();
}
