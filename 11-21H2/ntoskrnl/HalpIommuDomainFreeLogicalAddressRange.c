/*
 * XREFs of HalpIommuDomainFreeLogicalAddressRange @ 0x14045939A
 * Callers:
 *     IommuFreeReservedLogicalAddressRange @ 0x1405283C0 (IommuFreeReservedLogicalAddressRange.c)
 *     IommuMapIdentityRangeEx @ 0x1405284B0 (IommuMapIdentityRangeEx.c)
 *     IommuMapLogicalRangeEx @ 0x1405286D0 (IommuMapLogicalRangeEx.c)
 *     IommuReserveLogicalAddressRange @ 0x140528B30 (IommuReserveLogicalAddressRange.c)
 *     IommuUnmapIdentityRangeEx @ 0x140528E60 (IommuUnmapIdentityRangeEx.c)
 *     IommuUnmapLogicalRange @ 0x140528F50 (IommuUnmapLogicalRange.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpIommuDomainFreeLogicalAddressRange(__int64 a1, __int16 a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 56);
  if ( v2 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  else
    return (a2 & 0xFFF) != 0LL ? 0xC000000D : 0;
}
