/*
 * XREFs of sub_180113DF0 @ 0x180113DF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_4 @ 0x1800126BC (nullsub_4.c)
 */

void __fastcall sub_180113DF0()
{
  char *v0; // rcx

  if ( (unsigned __int64)qword_1801F9590 >= 8 )
  {
    nullsub_4();
    sub_180010884(v0, 2 * qword_1801F9590 + 2);
  }
  qword_1801F9590 = 7LL;
  qword_1801F9588 = 0LL;
  LOWORD(qword_1801F9578) = 0;
}
