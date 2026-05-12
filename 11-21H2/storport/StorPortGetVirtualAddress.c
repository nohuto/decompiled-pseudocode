/*
 * XREFs of StorPortGetVirtualAddress @ 0x1C00436D0
 * Callers:
 *     StorPortGetVirtualAddressVrfy @ 0x1C00953F0 (StorPortGetVirtualAddressVrfy.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall StorPortGetVirtualAddress(__int64 a1, PHYSICAL_ADDRESS a2)
{
  return MmGetVirtualForPhysical(a2);
}
