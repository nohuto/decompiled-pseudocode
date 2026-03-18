/*
 * XREFs of HalpIommuDomainUnmapLogicalRange @ 0x140517EA8
 * Callers:
 *     HalpIommuAllocateDmaDomain @ 0x1403A98AC (HalpIommuAllocateDmaDomain.c)
 *     IommuUnmapLogicalRange @ 0x14045EB50 (IommuUnmapLogicalRange.c)
 *     IommuFreeReservedLogicalAddressRange @ 0x140525E60 (IommuFreeReservedLogicalAddressRange.c)
 *     IommuUnmapIdentityRangeEx @ 0x140526840 (IommuUnmapIdentityRangeEx.c)
 *     IommuUnmapReservedLogicalRange @ 0x140526940 (IommuUnmapReservedLogicalRange.c)
 * Callees:
 *     HalpIommuFlushDomainTbs @ 0x140518094 (HalpIommuFlushDomainTbs.c)
 *     IommupHvMapDeviceLogicalRange @ 0x140525320 (IommupHvMapDeviceLogicalRange.c)
 *     IommupHvUnmapDeviceLogicalRange @ 0x140525538 (IommupHvUnmapDeviceLogicalRange.c)
 *     HalpIommuUnmapLogicalRange @ 0x1405273F0 (HalpIommuUnmapLogicalRange.c)
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
