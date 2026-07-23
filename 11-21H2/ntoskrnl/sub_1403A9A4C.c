/*
 * XREFs of sub_1403A9A4C @ 0x1403A9A4C
 * Callers:
 *     sub_1403A985C @ 0x1403A985C (sub_1403A985C.c)
 *     sub_1403A99B0 @ 0x1403A99B0 (sub_1403A99B0.c)
 *     sub_1403A9A80 @ 0x1403A9A80 (sub_1403A9A80.c)
 *     sub_1403AA550 @ 0x1403AA550 (sub_1403AA550.c)
 *     sub_14064ED90 @ 0x14064ED90 (sub_14064ED90.c)
 *     sub_14064F438 @ 0x14064F438 (sub_14064F438.c)
 * Callees:
 *     sub_1403A9E4C @ 0x1403A9E4C (sub_1403A9E4C.c)
 */

__int64 __fastcall sub_1403A9A4C(__int64 a1, __int64 a2, _WORD *a3)
{
  __int64 result; // rax

  result = sub_1403A9E4C(a1, a2, 2LL, a3);
  if ( (int)result >= 0 )
  {
    *a3 = __ROR2__(*a3, 8);
    return 0LL;
  }
  return result;
}
