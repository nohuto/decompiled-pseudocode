/*
 * XREFs of sub_1407F28E0 @ 0x1407F28E0
 * Callers:
 *     sub_1407F287C @ 0x1407F287C (sub_1407F287C.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void sub_1407F28E0()
{
  sub_1402D66A8((ULONG_PTR)&xmmword_140C20768);
  dword_140C20780 = 0;
  if ( qword_140C20778 )
  {
    ExFreePoolWithTag(qword_140C20778, 0x67696450u);
    qword_140C20778 = 0LL;
  }
  sub_1402935D0((ULONG_PTR)&xmmword_140C20768);
}
