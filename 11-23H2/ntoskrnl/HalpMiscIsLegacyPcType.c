/*
 * XREFs of HalpMiscIsLegacyPcType @ 0x14050B7DC
 * Callers:
 *     HalMakeBeep @ 0x140506B50 (HalMakeBeep.c)
 *     HalpPowerWriteResetCommand @ 0x14050700C (HalpPowerWriteResetCommand.c)
 *     HalpRestoreDmaControllerState @ 0x140A95178 (HalpRestoreDmaControllerState.c)
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
