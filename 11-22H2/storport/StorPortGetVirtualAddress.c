/*
 * XREFs of StorPortGetVirtualAddress @ 0x1C00462C0
 * Callers:
 *     StorPortGetVirtualAddressVrfy @ 0x1C00B13F0 (StorPortGetVirtualAddressVrfy.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall StorPortGetVirtualAddress(__int64 a1, PHYSICAL_ADDRESS a2)
{
  return MmGetVirtualForPhysical(a2);
}
