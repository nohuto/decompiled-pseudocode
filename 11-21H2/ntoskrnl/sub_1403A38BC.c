/*
 * XREFs of sub_1403A38BC @ 0x1403A38BC
 * Callers:
 *     sub_1402B59D0 @ 0x1402B59D0 (sub_1402B59D0.c)
 *     sub_1403A379C @ 0x1403A379C (sub_1403A379C.c)
 * Callees:
 *     sub_1403A38F8 @ 0x1403A38F8 (sub_1403A38F8.c)
 */

__int64 __fastcall sub_1403A38BC(__int64 a1, char a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( (unsigned __int8)(a2 - 2) <= 1u )
  {
    v3 = *(_QWORD *)(a1 + 72LL * *(char *)(a1 + 66) + 200);
    result = sub_1403A38F8(a1, a3);
    *(_QWORD *)(v3 + 40) = 0LL;
  }
  return result;
}
