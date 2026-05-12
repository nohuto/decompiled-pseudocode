/*
 * XREFs of sub_1C00B23F0 @ 0x1C00B23F0
 * Callers:
 *     <none>
 * Callees:
 *     StorPortGetVirtualAddress @ 0x1C0046890 (StorPortGetVirtualAddress.c)
 */

PVOID __fastcall sub_1C00B23F0(__int64 a1, PHYSICAL_ADDRESS a2)
{
  return StorPortGetVirtualAddress(a1, a2);
}
