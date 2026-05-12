/*
 * XREFs of sub_1C00B22B0 @ 0x1C00B22B0
 * Callers:
 *     <none>
 * Callees:
 *     StorPortGetPhysicalAddress @ 0x1C000F8D0 (StorPortGetPhysicalAddress.c)
 */

PHYSICAL_ADDRESS __fastcall sub_1C00B22B0(__int64 a1, __int64 a2, void *a3, unsigned int *a4)
{
  return StorPortGetPhysicalAddress(a1, a2, a3, a4);
}
