/*
 * XREFs of sub_1C0022E40 @ 0x1C0022E40
 * Callers:
 *     sub_1C00A2F90 @ 0x1C00A2F90 (sub_1C00A2F90.c)
 *     sub_1C00A3030 @ 0x1C00A3030 (sub_1C00A3030.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 */

__int64 __fastcall sub_1C0022E40(IRP *a1)
{
  return sub_1C0003440(a1, 0, a1->IoStatus.Status);
}
