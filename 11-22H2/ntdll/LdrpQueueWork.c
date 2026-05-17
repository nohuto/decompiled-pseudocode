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
    v3 = (_QWORD *)qword_1801842B8;
    v4 = (_QWORD *)(a1 + 64);
    if ( *(__int64 **)qword_1801842B8 != &LdrpWorkQueue )
      __fastfail(3u);
    *(_QWORD *)(a1 + 72) = qword_1801842B8;
    *v4 = &LdrpWorkQueue;
    *v3 = v4;
    qword_1801842B8 = a1 + 64;
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
