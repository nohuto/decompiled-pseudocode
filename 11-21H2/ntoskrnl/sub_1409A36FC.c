/*
 * XREFs of sub_1409A36FC @ 0x1409A36FC
 * Callers:
 *     sub_1409A3B80 @ 0x1409A3B80 (sub_1409A3B80.c)
 * Callees:
 *     sub_1409A4D70 @ 0x1409A4D70 (sub_1409A4D70.c)
 */

__int64 __fastcall sub_1409A36FC(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 36) |= 4u;
  return sub_1409A4D70(a1, 2LL);
}
