/*
 * XREFs of HalpMiscIsLegacyPcType @ 0x14039174C
 * Callers:
 *     HalMakeBeep @ 0x14050A490 (HalMakeBeep.c)
 *     HalpPowerWriteResetCommand @ 0x14050A93C (HalpPowerWriteResetCommand.c)
 *     HalpRestoreDmaControllerState @ 0x140A5054C (HalpRestoreDmaControllerState.c)
 * Callees:
 *     <none>
 */

bool HalpMiscIsLegacyPcType()
{
  return !HalFirmwareTypeEfi
      || (HalpPlatformFlags & 1) != 0
      && (HalpPlatformFlags & 4) != 0
      && HalpVideoBiosPresent
      && (HalpPlatformFlags & 8) == 0;
}
