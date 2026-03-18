/*
 * XREFs of ExReleaseTimeRefreshLock @ 0x14075F930
 * Callers:
 *     ExCleanTimerResolutionRequest @ 0x140201B70 (ExCleanTimerResolutionRequest.c)
 *     ExpTimeRefreshWork @ 0x140A92380 (ExpTimeRefreshWork.c)
 *     PoBroadcastSystemState @ 0x140AA6A68 (PoBroadcastSystemState.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA90F0 (PopTransitionSystemPowerStateEx.c)
 *     KdpTimeSlipWork @ 0x140AB0480 (KdpTimeSlipWork.c)
 *     Phase1InitializationDiscard @ 0x140B4FFBC (Phase1InitializationDiscard.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14023D410 (ExReleaseResourceLite.c)
 */

void ExReleaseTimeRefreshLock()
{
  ExReleaseResourceLite(&ExpTimeRefreshLock);
  KeLeaveCriticalRegion();
}
