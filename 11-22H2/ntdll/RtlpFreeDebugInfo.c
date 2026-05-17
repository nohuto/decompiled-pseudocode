/*
 * XREFs of RtlpFreeDebugInfo @ 0x18005DF10
 * Callers:
 *     RtlDeleteCriticalSection @ 0x18005DCD0 (RtlDeleteCriticalSection.c)
 *     RtlInitializeResource @ 0x18005F860 (RtlInitializeResource.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x18005F9E0 (RtlpAddDebugInfoToCriticalSection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpFreeDebugInfo(unsigned __int64 a1)
{
  if ( LOWORD(RtlCriticalSectionDebugSList.Alignment) < 0xAu
    || (unsigned __int64)&RtlpStaticDebugInfo <= a1 && a1 < (unsigned __int64)&RtlpForceCSDebugInfoCreation )
  {
    return RtlpInterlockedPushEntrySList(&RtlCriticalSectionDebugSList, a1);
  }
  else
  {
    return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
  }
}
