/*
 * XREFs of sub_1800DFC64 @ 0x1800DFC64
 * Callers:
 *     sub_1800DFA94 @ 0x1800DFA94 (sub_1800DFA94.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_18001E9F4 @ 0x18001E9F4 (sub_18001E9F4.c)
 *     sub_18001EF38 @ 0x18001EF38 (sub_18001EF38.c)
 */

__int64 __fastcall sub_1800DFC64(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rdi
  unsigned __int64 v5; // rax
  __int64 v6; // rbx

  v4 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 5;
  v5 = sub_18001E9F4(a2);
  v6 = sub_18001090C(v5);
  sub_18001EF38(*(_QWORD **)a1, *(_QWORD **)(a1 + 8), v6);
  return sub_18001F62C(a1, v6, v4, a2);
}
