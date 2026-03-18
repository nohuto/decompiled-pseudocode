/*
 * XREFs of HalpLegacyShutdown @ 0x140506AA0
 * Callers:
 *     <none>
 * Callees:
 *     HalReturnToFirmware @ 0x140506960 (HalReturnToFirmware.c)
 */

void __noreturn HalpLegacyShutdown()
{
  HalReturnToFirmware(1);
}
