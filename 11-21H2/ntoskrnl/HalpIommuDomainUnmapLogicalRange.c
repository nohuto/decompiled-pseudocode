/*
 * XREFs of HalpIommuDomainUnmapLogicalRange @ 0x14051AD44
 * Callers:
 *     HalpIommuAllocateDmaDomain @ 0x1403BB820 (HalpIommuAllocateDmaDomain.c)
 *     IommuFreeReservedLogicalAddressRange @ 0x1405283C0 (IommuFreeReservedLogicalAddressRange.c)
 *     IommuUnmapIdentityRangeEx @ 0x140528E60 (IommuUnmapIdentityRangeEx.c)
 *     IommuUnmapLogicalRange @ 0x140528F50 (IommuUnmapLogicalRange.c)
 *     IommuUnmapReservedLogicalRange @ 0x140528FC0 (IommuUnmapReservedLogicalRange.c)
 * Callees:
 *     HalpIommuFlushDomainTbs @ 0x14051AEFC (HalpIommuFlushDomainTbs.c)
 *     IommupHvFlushDeviceDomain @ 0x140527584 (IommupHvFlushDeviceDomain.c)
 *     IommupHvMapDeviceLogicalRange @ 0x140527A68 (IommupHvMapDeviceLogicalRange.c)
 *     IommupHvUnmapDeviceLogicalRange @ 0x140527C44 (IommupHvUnmapDeviceLogicalRange.c)
 *     HalpIommuUnmapLogicalRange @ 0x14052A328 (HalpIommuUnmapLogicalRange.c)
 */

__int64 __fastcall HalpIommuDomainUnmapLogicalRange(ULONG_PTR a1, ULONG_PTR a2, _QWORD *a3, char a4)
{
  int v7; // eax
  __int64 v8; // rdx
  int v9; // edi
  unsigned int v10; // eax

  if ( !HalpHvIommu )
  {
    v9 = HalpIommuUnmapLogicalRange(*(_QWORD *)(a1 + 40), a3, a2);
    v10 = HalpIommuFlushDomainTbs(a1, a2, *a3);
LABEL_9:
    if ( v9 >= 0 )
      return v10;
    return (unsigned int)v9;
  }
  if ( *(_BYTE *)(a1 + 52) )
  {
    v7 = HalpIommuUnmapLogicalRange(*(_QWORD *)(a1 + 40), a3, a2);
    LOBYTE(v8) = 1;
    v9 = v7;
    v10 = IommupHvFlushDeviceDomain(*(unsigned int *)(a1 + 48), v8);
    goto LABEL_9;
  }
  if ( a4 )
    return (unsigned int)IommupHvMapDeviceLogicalRange(a1, a2);
  else
    return (unsigned int)IommupHvUnmapDeviceLogicalRange(a1, a2);
}
