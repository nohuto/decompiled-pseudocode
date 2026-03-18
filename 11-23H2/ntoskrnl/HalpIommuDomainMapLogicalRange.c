/*
 * XREFs of HalpIommuDomainMapLogicalRange @ 0x140517D84
 * Callers:
 *     HalpIommuAllocateDmaDomain @ 0x1403A98AC (HalpIommuAllocateDmaDomain.c)
 *     IommuMapIdentityRangeEx @ 0x140525F50 (IommuMapIdentityRangeEx.c)
 *     IommuMapLogicalRangeEx @ 0x140526170 (IommuMapLogicalRangeEx.c)
 *     IommuMapReservedLogicalRange @ 0x140526290 (IommuMapReservedLogicalRange.c)
 *     IommuReserveLogicalAddressRange @ 0x1405264F0 (IommuReserveLogicalAddressRange.c)
 * Callees:
 *     HalpIommuMapLogicalRange @ 0x14037D7D8 (HalpIommuMapLogicalRange.c)
 *     IommupHvMapDeviceLogicalRange @ 0x140525320 (IommupHvMapDeviceLogicalRange.c)
 */

__int64 __fastcall HalpIommuDomainMapLogicalRange(ULONG_PTR a1, unsigned int a2, __int64 a3, __int64 a4, ULONG_PTR a5)
{
  if ( !HalpHvIommu || *(_BYTE *)(a1 + 52) )
    return HalpIommuMapLogicalRange(0LL, *(_QWORD *)(a1 + 40), a2, a3, a4, a5);
  else
    return IommupHvMapDeviceLogicalRange(a1, a5);
}
