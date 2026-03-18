/*
 * XREFs of HalpMiscIsLegacyPcType @ 0x14050B28C
 * Callers:
 *     HalMakeBeep @ 0x140506600 (HalMakeBeep.c)
 *     HalpPowerWriteResetCommand @ 0x140506ABC (HalpPowerWriteResetCommand.c)
 *     HalpRestoreDmaControllerState @ 0x140A95308 (HalpRestoreDmaControllerState.c)
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
