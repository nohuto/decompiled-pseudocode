/*
 * XREFs of StorPortGetVirtualAddress @ 0x1C0046890
 * Callers:
 *     sub_1C00B23F0 @ 0x1C00B23F0 (sub_1C00B23F0.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall StorPortGetVirtualAddress(__int64 a1, PHYSICAL_ADDRESS a2)
{
  return MmGetVirtualForPhysical(a2);
}
