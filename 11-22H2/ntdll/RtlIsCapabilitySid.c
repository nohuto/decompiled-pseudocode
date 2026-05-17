/*
 * XREFs of RtlIsCapabilitySid @ 0x180014510
 * Callers:
 *     RtlCheckTokenCapability @ 0x180018740 (RtlCheckTokenCapability.c)
 * Callees:
 *     RtlCompareMemory @ 0x1800A3970 (RtlCompareMemory.c)
 */

bool __fastcall RtlIsCapabilitySid(__int64 a1)
{
  return *(_BYTE *)(a1 + 1) >= 2u
      && *(_BYTE *)a1 == 1
      && RtlCompareMemory((const void *)(a1 + 2), &RtlpAppPackageAuthority, 6uLL) == 6
      && *(_DWORD *)(a1 + 8) == 3;
}
