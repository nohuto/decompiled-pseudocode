/*
 * XREFs of sub_1405B1530 @ 0x1405B1530
 * Callers:
 *     sub_14026C720 @ 0x14026C720 (sub_14026C720.c)
 *     sub_1405B1568 @ 0x1405B1568 (sub_1405B1568.c)
 * Callees:
 *     sub_140277C50 @ 0x140277C50 (sub_140277C50.c)
 */

_BOOL8 __fastcall sub_1405B1530(__int64 a1)
{
  __int64 v1; // rdx

  return sub_140277C50(a1) && (*(_BYTE *)(v1 + 34) & 7) == 5 && *(_QWORD *)(v1 + 8) >= 0xFFFFFFFFFFFFFFFEuLL;
}
