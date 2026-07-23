/*
 * XREFs of sub_1407F2244 @ 0x1407F2244
 * Callers:
 *     sub_1407F20B4 @ 0x1407F20B4 (sub_1407F20B4.c)
 *     sub_14098BDD4 @ 0x14098BDD4 (sub_14098BDD4.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_1407F22AC @ 0x1407F22AC (sub_1407F22AC.c)
 */

__int64 __fastcall sub_1407F2244(unsigned int a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned int v8; // ebx

  sub_1402D66A8((ULONG_PTR)&qword_140C21D20);
  v8 = sub_1407F22AC(a1, a2, a3, a4);
  sub_1402935D0((ULONG_PTR)&qword_140C21D20);
  return v8;
}
