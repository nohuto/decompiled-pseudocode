/*
 * XREFs of sub_1406F8804 @ 0x1406F8804
 * Callers:
 *     sub_140693498 @ 0x140693498 (sub_140693498.c)
 *     sub_1406F9990 @ 0x1406F9990 (sub_1406F9990.c)
 *     sub_1406FB4D0 @ 0x1406FB4D0 (sub_1406FB4D0.c)
 *     sub_1407B8B60 @ 0x1407B8B60 (sub_1407B8B60.c)
 *     sub_140852834 @ 0x140852834 (sub_140852834.c)
 *     sub_140978F40 @ 0x140978F40 (sub_140978F40.c)
 * Callees:
 *     sub_1402819BC @ 0x1402819BC (sub_1402819BC.c)
 */

_BOOL8 __fastcall sub_1406F8804(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4, unsigned __int64 a5)
{
  unsigned __int64 v5; // r8

  v5 = a2 + a3 - 1;
  return (a2 >= 0x10000 || *(_QWORD *)(a1 + 2240)) && a2 >= a4 && v5 <= a5 && v5 > a2 && !sub_1402819BC();
}
