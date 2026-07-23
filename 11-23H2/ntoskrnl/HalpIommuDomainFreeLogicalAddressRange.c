/*
 * XREFs of HalpIommuDomainFreeLogicalAddressRange @ 0x14045EAEE
 * Callers:
 *     IommuUnmapLogicalRange @ 0x14045EF50 (IommuUnmapLogicalRange.c)
 *     IommuFreeReservedLogicalAddressRange @ 0x1405263B0 (IommuFreeReservedLogicalAddressRange.c)
 *     IommuMapIdentityRangeEx @ 0x1405264A0 (IommuMapIdentityRangeEx.c)
 *     IommuMapLogicalRangeEx @ 0x1405266C0 (IommuMapLogicalRangeEx.c)
 *     IommuReserveLogicalAddressRange @ 0x140526A40 (IommuReserveLogicalAddressRange.c)
 *     IommuUnmapIdentityRangeEx @ 0x140526D90 (IommuUnmapIdentityRangeEx.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
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
