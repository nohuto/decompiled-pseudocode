/*
 * XREFs of sub_140808DA0 @ 0x140808DA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_1407F274C @ 0x1407F274C (sub_1407F274C.c)
 *     sub_140808E28 @ 0x140808E28 (sub_140808E28.c)
 */

void sub_140808DA0()
{
  sub_1402D66A8((ULONG_PTR)&qword_140C21D20);
  sub_1407F274C(&stru_14000FB88, 0, 0LL);
  qword_140C21D10 = (__int64)KeGetCurrentThread();
  while ( (dword_140C20BC8 & 2) != 0 )
  {
    dword_140C20BC8 &= ~2u;
    sub_140808E28();
  }
  qword_140C21D10 = 0LL;
  dword_140C20BC8 &= ~1u;
  sub_1407F274C(&stru_14000FB78, 0, 0LL);
  sub_1402935D0((ULONG_PTR)&qword_140C21D20);
}
