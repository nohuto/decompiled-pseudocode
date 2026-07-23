/*
 * XREFs of HalpIommuFreeDeviceId @ 0x140390F88
 * Callers:
 *     IommuDeviceCreate @ 0x1408277B0 (IommuDeviceCreate.c)
 *     HalpQueryIommuReservedRegionInformation @ 0x14082890C (HalpQueryIommuReservedRegionInformation.c)
 * Callees:
 *     HalpMmAllocCtxFree @ 0x1403A58A0 (HalpMmAllocCtxFree.c)
 */

__int64 __fastcall HalpIommuFreeDeviceId(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return HalpMmAllocCtxFree(a1, a1, a3, a4);
}
