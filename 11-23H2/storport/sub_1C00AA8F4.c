/*
 * XREFs of sub_1C00AA8F4 @ 0x1C00AA8F4
 * Callers:
 *     sub_1C0007860 @ 0x1C0007860 (sub_1C0007860.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C0022E14 @ 0x1C0022E14 (sub_1C0022E14.c)
 */

__int64 __fastcall sub_1C00AA8F4(__int64 a1, IRP *a2)
{
  *(_DWORD *)(a1 + 48) = 1;
  sub_1C0022E14(a1);
  return sub_1C0003440(a2, 0, 0);
}
