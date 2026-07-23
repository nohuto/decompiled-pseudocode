/*
 * XREFs of HalpIommuDomainUnmapLogicalRange @ 0x1405183F8
 * Callers:
 *     HalpIommuAllocateDmaDomain @ 0x1403A9A8C (HalpIommuAllocateDmaDomain.c)
 *     IommuUnmapLogicalRange @ 0x14045EF50 (IommuUnmapLogicalRange.c)
 *     IommuFreeReservedLogicalAddressRange @ 0x1405263B0 (IommuFreeReservedLogicalAddressRange.c)
 *     IommuUnmapIdentityRangeEx @ 0x140526D90 (IommuUnmapIdentityRangeEx.c)
 *     IommuUnmapReservedLogicalRange @ 0x140526E90 (IommuUnmapReservedLogicalRange.c)
 * Callees:
 *     HalpIommuFlushDomainTbs @ 0x1405185E4 (HalpIommuFlushDomainTbs.c)
 *     IommupHvMapDeviceLogicalRange @ 0x140525870 (IommupHvMapDeviceLogicalRange.c)
 *     IommupHvUnmapDeviceLogicalRange @ 0x140525A88 (IommupHvUnmapDeviceLogicalRange.c)
 *     HalpIommuUnmapLogicalRange @ 0x140527940 (HalpIommuUnmapLogicalRange.c)
 */

__int64 __fastcall HalpIommuDomainUnmapLogicalRange(ULONG_PTR a1, ULONG_PTR a2, _QWORD *a3, char a4)
{
  int v8; // edi
  unsigned int v9; // eax

  if ( !HalpHvIommu || *(_BYTE *)(a1 + 52) )
  {
    v8 = HalpIommuUnmapLogicalRange(*(_QWORD *)(a1 + 40), a3, a2);
    v9 = HalpIommuFlushDomainTbs(a1, a2, *a3);
    if ( v8 >= 0 )
      return v9;
    return (unsigned int)v8;
  }
  else if ( a4 )
  {
    return IommupHvMapDeviceLogicalRange(a1, a2);
  }
  else
  {
    return IommupHvUnmapDeviceLogicalRange(a1, a2);
  }
}
