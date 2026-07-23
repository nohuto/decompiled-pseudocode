/*
 * XREFs of sub_1405AA5E8 @ 0x1405AA5E8
 * Callers:
 *     sub_1406F3A44 @ 0x1406F3A44 (sub_1406F3A44.c)
 *     sub_1406F4878 @ 0x1406F4878 (sub_1406F4878.c)
 *     sub_1407F854C @ 0x1407F854C (sub_1407F854C.c)
 * Callees:
 *     sub_14097CFDC @ 0x14097CFDC (sub_14097CFDC.c)
 *     sub_14097D034 @ 0x14097D034 (sub_14097D034.c)
 */

__int64 __fastcall sub_1405AA5E8(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 8);
  sub_14097D034(v1);
  return sub_14097CFDC(0LL, v1);
}
