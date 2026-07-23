/*
 * XREFs of LdrpQueueWork @ 0x180072EF0
 * Callers:
 *     LdrpMapAndSnapDependency @ 0x180024BA8 (LdrpMapAndSnapDependency.c)
 *     LdrpLoadDependentModuleInternal @ 0x180025330 (LdrpLoadDependentModuleInternal.c)
 *     LdrpSignalModuleMapped @ 0x18002C3E4 (LdrpSignalModuleMapped.c)
 *     LdrpLoadContextReplaceModule @ 0x180072D94 (LdrpLoadContextReplaceModule.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180021D10 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800271F0 (RtlLeaveCriticalSection.c)
 *     TpPostWork @ 0x180034D80 (TpPostWork.c)
 */

void __fastcall LdrpQueueWork(__int64 a1)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rax

  if ( **(int **)(a1 + 40) >= 0 )
  {
    RtlEnterCriticalSection(&LdrpWorkQueueLock);
    v2 = (_QWORD *)qword_1801842B8;
    v3 = (_QWORD *)(a1 + 64);
    if ( *(__int64 **)qword_1801842B8 != &LdrpWorkQueue )
      __fastfail(3u);
    *(_QWORD *)(a1 + 72) = qword_1801842B8;
    *v3 = &LdrpWorkQueue;
    *v2 = v3;
    qword_1801842B8 = a1 + 64;
    RtlLeaveCriticalSection(&LdrpWorkQueueLock);
    if ( LdrpMapAndSnapWork )
    {
      if ( !NtCurrentPeb()->Ldr->ShutdownInProgress )
        TpPostWork(LdrpMapAndSnapWork);
    }
  }
}
