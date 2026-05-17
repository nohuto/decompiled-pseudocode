/*
 * XREFs of LdrpQueueWork @ 0x180073560
 * Callers:
 *     LdrpMapAndSnapDependency @ 0x180024A58 (LdrpMapAndSnapDependency.c)
 *     LdrpLoadDependentModuleInternal @ 0x1800251E0 (LdrpLoadDependentModuleInternal.c)
 *     LdrpSignalModuleMapped @ 0x18002C214 (LdrpSignalModuleMapped.c)
 *     LdrpLoadContextReplaceModule @ 0x180073404 (LdrpLoadContextReplaceModule.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180021B30 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180027020 (RtlLeaveCriticalSection.c)
 *     TpPostWork @ 0x180034C20 (TpPostWork.c)
 */

struct _PEB *__fastcall LdrpQueueWork(__int64 a1)
{
  struct _PEB *result; // rax
  _QWORD *v3; // rcx
  _QWORD *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8

  result = *(struct _PEB **)(a1 + 40);
  if ( *(int *)&result->InheritedAddressSpace >= 0 )
  {
    RtlEnterCriticalSection((__int64)&LdrpWorkQueueLock);
    v3 = (_QWORD *)qword_180187358;
    v4 = (_QWORD *)(a1 + 64);
    if ( *(__int64 **)qword_180187358 != &LdrpWorkQueue )
      __fastfail(3u);
    *(_QWORD *)(a1 + 72) = qword_180187358;
    *v4 = &LdrpWorkQueue;
    *v3 = v4;
    qword_180187358 = a1 + 64;
    result = (struct _PEB *)RtlLeaveCriticalSection((__int64)&LdrpWorkQueueLock);
    if ( LdrpMapAndSnapWork )
    {
      result = NtCurrentPeb();
      if ( !result->Ldr->ShutdownInProgress )
        return (struct _PEB *)TpPostWork((_PEB_LDR_DATA *)LdrpMapAndSnapWork, v5, v6);
    }
  }
  return result;
}
