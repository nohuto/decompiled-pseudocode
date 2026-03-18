/*
 * XREFs of ExTraceTimerResolution @ 0x1409F7C58
 * Callers:
 *     PopDiagTraceControlCallback @ 0x140862C00 (PopDiagTraceControlCallback.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14023D3F0 (ExReleaseResourceLite.c)
 *     ExAcquireTimeRefreshLock @ 0x14075FE64 (ExAcquireTimeRefreshLock.c)
 *     PoTraceSystemTimerResolution @ 0x1407DD2CC (PoTraceSystemTimerResolution.c)
 *     PoRundownSystemTimer @ 0x14098BF50 (PoRundownSystemTimer.c)
 */

void ExTraceTimerResolution()
{
  __int64 *i; // rbx

  ExAcquireTimeRefreshLock(1u);
  PoRundownSystemTimer();
  for ( i = (__int64 *)ExpTimerResolutionListHead; i != &ExpTimerResolutionListHead; i = (__int64 *)*i )
    PoTraceSystemTimerResolution(1, (__int64)(i - 260));
  ExReleaseResourceLite(&ExpTimeRefreshLock);
  KeLeaveCriticalRegion();
}
