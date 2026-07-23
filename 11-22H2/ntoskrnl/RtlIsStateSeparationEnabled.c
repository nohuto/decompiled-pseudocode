/*
 * XREFs of RtlIsStateSeparationEnabled @ 0x1407E25A0
 * Callers:
 *     RtlpGetBootStatusPath @ 0x1403C5CB4 (RtlpGetBootStatusPath.c)
 *     BapdpProcessBCDCache @ 0x140B38EBC (BapdpProcessBCDCache.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140B39350 (BapdpProcessVsmKeyBlobs.c)
 *     CmFcManagerStartRuntimePhase @ 0x140B3B6E8 (CmFcManagerStartRuntimePhase.c)
 *     PpDevCfgInit @ 0x140B43330 (PpDevCfgInit.c)
 *     IoInitSystemPreDrivers @ 0x140B4F014 (IoInitSystemPreDrivers.c)
 *     PopInitializePowerButtonHold @ 0x140B52018 (PopInitializePowerButtonHold.c)
 * Callees:
 *     CmIsStateSeparationEnabled @ 0x140367128 (CmIsStateSeparationEnabled.c)
 */

BOOLEAN RtlIsStateSeparationEnabled(void)
{
  return CmIsStateSeparationEnabled();
}
