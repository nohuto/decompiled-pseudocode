/*
 * XREFs of sub_1C00AA970 @ 0x1C00AA970
 * Callers:
 *     sub_1C0007860 @ 0x1C0007860 (sub_1C0007860.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 */

__int64 __fastcall sub_1C00AA970(__int64 a1, IRP *a2)
{
  *(_DWORD *)(a1 + 48) = 3;
  return sub_1C0003440(a2, 0, *(_DWORD *)(a1 + 972) != 0 ? 0x80000011 : 0);
}
