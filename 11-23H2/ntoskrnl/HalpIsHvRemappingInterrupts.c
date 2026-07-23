/*
 * XREFs of HalpIsHvRemappingInterrupts @ 0x140863F08
 * Callers:
 *     HalpUpdatePerDeviceMsiLimitInformation @ 0x140B6F9A4 (HalpUpdatePerDeviceMsiLimitInformation.c)
 * Callees:
 *     <none>
 */

bool HalpIsHvRemappingInterrupts()
{
  return qword_140C624C8 != 0;
}
