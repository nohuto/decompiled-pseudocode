/*
 * XREFs of sub_1C00AA9A8 @ 0x1C00AA9A8
 * Callers:
 *     sub_1C0007860 @ 0x1C0007860 (sub_1C0007860.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C0040950 @ 0x1C0040950 (sub_1C0040950.c)
 */

__int64 __fastcall sub_1C00AA9A8(__int64 a1, IRP *a2)
{
  *(_DWORD *)(a1 + 48) = 2;
  sub_1C0040950(a1 + 656);
  return sub_1C0003440(a2, 0, 0);
}
