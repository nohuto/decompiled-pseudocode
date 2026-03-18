/*
 * XREFs of HalpIsHvRemappingInterrupts @ 0x140822E58
 * Callers:
 *     HalpUpdatePerDeviceMsiLimitInformation @ 0x140AF8610 (HalpUpdatePerDeviceMsiLimitInformation.c)
 * Callees:
 *     <none>
 */

bool HalpIsHvRemappingInterrupts()
{
  return qword_140C4C4A8 != 0;
}
