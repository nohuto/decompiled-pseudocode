/*
 * XREFs of RtlIsStateSeparationEnabled @ 0x1407E2020
 * Callers:
 *     RtlpGetBootStatusPath @ 0x1403C6314 (RtlpGetBootStatusPath.c)
 *     CmFcManagerStartRuntimePhase @ 0x140B37FF0 (CmFcManagerStartRuntimePhase.c)
 *     PpDevCfgInit @ 0x140B3FC30 (PpDevCfgInit.c)
 *     IoInitSystemPreDrivers @ 0x140B4B914 (IoInitSystemPreDrivers.c)
 *     BapdpProcessBCDCache @ 0x140B4F584 (BapdpProcessBCDCache.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140B4FA18 (BapdpProcessVsmKeyBlobs.c)
 *     PopInitializePowerButtonHold @ 0x140B520A4 (PopInitializePowerButtonHold.c)
 * Callees:
 *     CmIsStateSeparationEnabled @ 0x140367778 (CmIsStateSeparationEnabled.c)
 */

bool RtlIsStateSeparationEnabled()
{
  return CmIsStateSeparationEnabled();
}
