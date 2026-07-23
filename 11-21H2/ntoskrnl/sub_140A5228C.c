/*
 * XREFs of sub_140A5228C @ 0x140A5228C
 * Callers:
 *     sub_14039693C @ 0x14039693C (sub_14039693C.c)
 * Callees:
 *     sub_1403B1B5C @ 0x1403B1B5C (sub_1403B1B5C.c)
 */

void __fastcall sub_140A5228C(__int64 a1)
{
  if ( qword_140C4BFD0 )
  {
    sub_1403B1B5C(a1, qword_140C4BFD0);
    qword_140C4BFD0 = 0LL;
  }
}
