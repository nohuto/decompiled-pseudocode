/*
 * XREFs of HalpIommuDomainFreeLogicalAddressRange @ 0x14045E6EE
 * Callers:
 *     IommuUnmapLogicalRange @ 0x14045EB50 (IommuUnmapLogicalRange.c)
 *     IommuFreeReservedLogicalAddressRange @ 0x140525E60 (IommuFreeReservedLogicalAddressRange.c)
 *     IommuMapIdentityRangeEx @ 0x140525F50 (IommuMapIdentityRangeEx.c)
 *     IommuMapLogicalRangeEx @ 0x140526170 (IommuMapLogicalRangeEx.c)
 *     IommuReserveLogicalAddressRange @ 0x1405264F0 (IommuReserveLogicalAddressRange.c)
 *     IommuUnmapIdentityRangeEx @ 0x140526840 (IommuUnmapIdentityRangeEx.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpIommuDomainFreeLogicalAddressRange(__int64 a1, __int16 a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 64);
  if ( v2 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  else
    return (a2 & 0xFFF) != 0LL ? 0xC000000D : 0;
}
