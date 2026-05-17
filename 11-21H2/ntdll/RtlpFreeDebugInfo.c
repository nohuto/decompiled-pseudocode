/*
 * XREFs of RtlpFreeDebugInfo @ 0x18001E3C0
 * Callers:
 *     RtlpAddDebugInfoToCriticalSection @ 0x18001D180 (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlInitializeResource @ 0x18001D900 (RtlInitializeResource.c)
 *     RtlDeleteCriticalSection @ 0x18001E130 (RtlDeleteCriticalSection.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1800A7D80 (RtlpInterlockedPushEntrySList.c)
 */

__int64 __fastcall RtlpFreeDebugInfo(unsigned __int64 a1)
{
  if ( LOWORD(RtlCriticalSectionDebugSList.Alignment) >= 0xAu
    && ((unsigned __int64)&RtlpStaticDebugInfo > a1 || a1 >= (unsigned __int64)&RtlpForceCSDebugInfoCreation) )
  {
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, a1);
  }
  else
  {
    return RtlpInterlockedPushEntrySList(&RtlCriticalSectionDebugSList, a1);
  }
}
