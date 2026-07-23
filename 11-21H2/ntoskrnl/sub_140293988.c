/*
 * XREFs of sub_140293988 @ 0x140293988
 * Callers:
 *     sub_14023B798 @ 0x14023B798 (sub_14023B798.c)
 *     sub_140293600 @ 0x140293600 (sub_140293600.c)
 *     sub_1403CE4FC @ 0x1403CE4FC (sub_1403CE4FC.c)
 * Callees:
 *     sub_1402939BC @ 0x1402939BC (sub_1402939BC.c)
 *     sub_1403072A0 @ 0x1403072A0 (sub_1403072A0.c)
 */

__int64 __fastcall sub_140293988(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx

  LOBYTE(a3) = 1;
  v3 = a1;
  sub_1402939BC(a1, a2, a3);
  return sub_1403072A0(v3, 0, 0, 0, 0LL);
}
