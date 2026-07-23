/*
 * XREFs of sub_1405F7EBC @ 0x1405F7EBC
 * Callers:
 *     sub_1407F575C @ 0x1407F575C (sub_1407F575C.c)
 *     sub_1409D4698 @ 0x1409D4698 (sub_1409D4698.c)
 * Callees:
 *     sub_1405F774C @ 0x1405F774C (sub_1405F774C.c)
 */

__int64 __fastcall sub_1405F7EBC(__int64 a1, _DWORD *a2, __int64 a3)
{
  if ( (*a2 & 0x40000) != 0 )
    return sub_1405F774C((__int64)a2, a3);
  else
    return 3221225659LL;
}
