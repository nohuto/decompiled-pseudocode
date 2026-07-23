/*
 * XREFs of RtlDeleteResource @ 0x18005DC40
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlDeleteCriticalSection @ 0x18005DCD0 (RtlDeleteCriticalSection.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     RtlpInterlockedPushEntrySList @ 0x1800A2BC0 (RtlpInterlockedPushEntrySList.c)
 */

void __cdecl RtlDeleteResource(PRTL_RESOURCE Resource)
{
  PRTL_RESOURCE_DEBUG DebugInfo; // rdx

  RtlDeleteCriticalSection(&Resource->CriticalSection);
  NtClose(Resource->SharedSemaphore);
  NtClose(Resource->ExclusiveSemaphore);
  DebugInfo = Resource->DebugInfo;
  if ( LOWORD(RtlCriticalSectionDebugSList.Alignment) < 0xAu
    || &RtlpStaticDebugInfo <= (_UNKNOWN *)DebugInfo && DebugInfo < (PRTL_RESOURCE_DEBUG)&RtlpForceCSDebugInfoCreation )
  {
    RtlpInterlockedPushEntrySList(&RtlCriticalSectionDebugSList, DebugInfo);
  }
  else
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Resource->DebugInfo);
  }
  memset_thunk_772440563353939046(Resource, 0, 0x60uLL);
}
