/*
 * XREFs of RtlDeleteResource @ 0x18001E420
 * Callers:
 *     <none>
 * Callees:
 *     RtlDeleteCriticalSection @ 0x18001E130 (RtlDeleteCriticalSection.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     RtlpInterlockedPushEntrySList @ 0x1800A7D80 (RtlpInterlockedPushEntrySList.c)
 */

void __cdecl RtlDeleteResource(PRTL_RESOURCE Resource)
{
  PRTL_RESOURCE_DEBUG DebugInfo; // rdx

  RtlDeleteCriticalSection(&Resource->CriticalSection);
  NtClose(Resource->SharedSemaphore);
  NtClose(Resource->ExclusiveSemaphore);
  DebugInfo = Resource->DebugInfo;
  if ( LOWORD(RtlCriticalSectionDebugSList.Alignment) >= 0xAu
    && (&RtlpStaticDebugInfo > (_UNKNOWN *)DebugInfo || DebugInfo >= (PRTL_RESOURCE_DEBUG)&RtlpForceCSDebugInfoCreation) )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Resource->DebugInfo);
  }
  else
  {
    RtlpInterlockedPushEntrySList(&RtlCriticalSectionDebugSList, DebugInfo);
  }
  memset(Resource, 0, sizeof(_RTL_RESOURCE));
}
