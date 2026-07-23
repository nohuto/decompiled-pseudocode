/*
 * XREFs of sub_1409A3BE0 @ 0x1409A3BE0
 * Callers:
 *     sub_1409A2F78 @ 0x1409A2F78 (sub_1409A2F78.c)
 *     sub_1409A3930 @ 0x1409A3930 (sub_1409A3930.c)
 * Callees:
 *     sub_1409A3B04 @ 0x1409A3B04 (sub_1409A3B04.c)
 *     sub_1409A4D70 @ 0x1409A4D70 (sub_1409A4D70.c)
 */

char __fastcall sub_1409A3BE0(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 36) |= 1u;
  sub_1409A4D70(a1, 2LL);
  return sub_1409A3B04((char *)a2, 0LL);
}
