/*
 * XREFs of RtlpFreeDebugInfo @ 0x18005AF10
 * Callers:
 *     RtlDeleteCriticalSection @ 0x18005ACD0 (RtlDeleteCriticalSection.c)
 *     RtlInitializeResource @ 0x18005C9D0 (RtlInitializeResource.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x18005CB50 (RtlpAddDebugInfoToCriticalSection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpFreeDebugInfo(unsigned __int64 a1)
{
  if ( LOWORD(RtlCriticalSectionDebugSList.Alignment) < 0xAu
    || (unsigned __int64)&RtlpStaticDebugInfo <= a1 && a1 < (unsigned __int64)&SRWLockSpinCycleCount )
  {
    return RtlpInterlockedPushEntrySList(&RtlCriticalSectionDebugSList, a1);
  }
  else
  {
    return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
  }
}
