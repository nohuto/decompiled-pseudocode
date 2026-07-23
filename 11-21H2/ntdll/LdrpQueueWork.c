/*
 * XREFs of LdrpQueueWork @ 0x1800559C0
 * Callers:
 *     LdrpSignalModuleMapped @ 0x180034644 (LdrpSignalModuleMapped.c)
 *     LdrpMapAndSnapDependency @ 0x18003D014 (LdrpMapAndSnapDependency.c)
 *     LdrpLoadDependentModuleInternal @ 0x18003D8F0 (LdrpLoadDependentModuleInternal.c)
 *     LdrpLoadContextReplaceModule @ 0x180053F88 (LdrpLoadContextReplaceModule.c)
 * Callees:
 *     TpPostWork @ 0x18001B690 (TpPostWork.c)
 *     RtlEnterCriticalSection @ 0x18003A5E0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003B5D0 (RtlLeaveCriticalSection.c)
 */

void __fastcall LdrpQueueWork(__int64 a1)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rax

  if ( **(int **)(a1 + 40) >= 0 )
  {
    RtlEnterCriticalSection(&LdrpWorkQueueLock);
    v2 = (_QWORD *)qword_18017A058;
    v3 = (_QWORD *)(a1 + 64);
    if ( *(__int64 **)qword_18017A058 != &LdrpWorkQueue )
      __fastfail(3u);
    *(_QWORD *)(a1 + 72) = qword_18017A058;
    *v3 = &LdrpWorkQueue;
    *v2 = v3;
    qword_18017A058 = a1 + 64;
    RtlLeaveCriticalSection(&LdrpWorkQueueLock);
    if ( LdrpMapAndSnapWork )
    {
      if ( !NtCurrentPeb()->Ldr->ShutdownInProgress )
        TpPostWork(LdrpMapAndSnapWork);
    }
  }
}
