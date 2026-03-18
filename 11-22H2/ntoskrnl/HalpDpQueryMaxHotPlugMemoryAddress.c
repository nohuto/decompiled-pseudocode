/*
 * XREFs of HalpDpQueryMaxHotPlugMemoryAddress @ 0x140506A18
 * Callers:
 *     HaliQuerySystemInformation @ 0x140A88510 (HaliQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 HalpDpQueryMaxHotPlugMemoryAddress()
{
  return HalpMaxHotPlugMemoryAddress;
}
