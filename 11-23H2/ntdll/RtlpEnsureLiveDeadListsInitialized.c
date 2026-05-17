/*
 * XREFs of RtlpEnsureLiveDeadListsInitialized @ 0x1800EB294
 * Callers:
 *     RtlpMoveActCtxToFreeList @ 0x1800EB32C (RtlpMoveActCtxToFreeList.c)
 *     RtlpPlaceActivationContextOnLiveList @ 0x1800EB464 (RtlpPlaceActivationContextOnLiveList.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180021B30 (RtlEnterCriticalSection.c)
 */

__int64 RtlpEnsureLiveDeadListsInitialized()
{
  __int64 result; // rax

  if ( !g_SxsLiveActivationContexts )
  {
    RtlEnterCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
    if ( !g_SxsLiveActivationContexts )
    {
      qword_180188450 = (__int64)&g_SxsLiveActivationContexts;
      g_SxsLiveActivationContexts = (__int64)&g_SxsLiveActivationContexts;
      qword_180188440 = (__int64)&g_SxsFreeActivationContexts;
      g_SxsFreeActivationContexts = (__int64)&g_SxsFreeActivationContexts;
    }
    return RtlLeaveCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
  }
  return result;
}
