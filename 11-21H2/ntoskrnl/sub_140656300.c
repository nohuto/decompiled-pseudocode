/*
 * XREFs of sub_140656300 @ 0x140656300
 * Callers:
 *     <none>
 * Callees:
 *     sub_140656430 @ 0x140656430 (sub_140656430.c)
 */

char __fastcall sub_140656300(__int64 a1, __int64 a2)
{
  *(_WORD *)(a2 + 12) = 0;
  qword_140D03CC0 = 0LL;
  word_140D03CC8 = *(_WORD *)(*(_QWORD *)a2 + 20LL);
  sub_140656430(a2, *(unsigned int *)(a2 + 8));
  return 1;
}
