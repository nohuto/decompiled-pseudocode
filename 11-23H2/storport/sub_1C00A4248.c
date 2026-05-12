/*
 * XREFs of sub_1C00A4248 @ 0x1C00A4248
 * Callers:
 *     sub_1C0007860 @ 0x1C0007860 (sub_1C0007860.c)
 *     sub_1C002122C @ 0x1C002122C (sub_1C002122C.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 */

__int64 __fastcall sub_1C00A4248(__int64 a1, IRP *a2)
{
  return sub_1C0003440(a2, 0, a2->IoStatus.Status);
}
