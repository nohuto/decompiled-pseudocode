/*
 * XREFs of HalpIommuDomainMapLogicalRange @ 0x140517E44
 * Callers:
 *     HalpIommuAllocateDmaDomain @ 0x1403A91BC (HalpIommuAllocateDmaDomain.c)
 *     IommuMapIdentityRangeEx @ 0x140526010 (IommuMapIdentityRangeEx.c)
 *     IommuMapLogicalRangeEx @ 0x140526230 (IommuMapLogicalRangeEx.c)
 *     IommuMapReservedLogicalRange @ 0x140526350 (IommuMapReservedLogicalRange.c)
 *     IommuReserveLogicalAddressRange @ 0x1405265B0 (IommuReserveLogicalAddressRange.c)
 * Callees:
 *     HalpIommuMapLogicalRange @ 0x14037DE28 (HalpIommuMapLogicalRange.c)
 *     IommupHvMapDeviceLogicalRange @ 0x1405253E0 (IommupHvMapDeviceLogicalRange.c)
 */

__int64 __fastcall HalpIommuDomainMapLogicalRange(ULONG_PTR a1, unsigned int a2, __int64 a3, __int64 a4, ULONG_PTR a5)
{
  if ( !HalpHvIommu || *(_BYTE *)(a1 + 52) )
    return HalpIommuMapLogicalRange(0LL, *(_QWORD *)(a1 + 40), a2, a3, a4, a5);
  else
    return IommupHvMapDeviceLogicalRange(a1, a5);
}
