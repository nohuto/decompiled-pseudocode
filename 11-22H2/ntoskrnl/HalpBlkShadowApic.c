/*
 * XREFs of HalpBlkShadowApic @ 0x140B92F60
 * Callers:
 *     HalpBlkInitializeVirtualAddressSpace @ 0x140B92ECC (HalpBlkInitializeVirtualAddressSpace.c)
 * Callees:
 *     HalpBlkAddVirtualMapping @ 0x140B92AA0 (HalpBlkAddVirtualMapping.c)
 */

__int64 HalpBlkShadowApic()
{
  __int64 result; // rax

  result = 0LL;
  if ( !HalpApicX2Mode && !HalpApicUsingMsrs )
  {
    if ( HalpLocalApic )
      return HalpBlkAddVirtualMapping(HalpBlkRootPageTablePa, HalpLocalApicPhysical.QuadPart, HalpLocalApic, 0, 4);
    else
      return 3221225486LL;
  }
  return result;
}
