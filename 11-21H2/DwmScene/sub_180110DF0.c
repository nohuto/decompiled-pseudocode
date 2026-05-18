/*
 * XREFs of sub_180110DF0 @ 0x180110DF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_4 @ 0x1800126BC (nullsub_4.c)
 */

void __fastcall sub_180110DF0()
{
  char *v0; // rcx

  if ( (unsigned __int64)qword_1801FAA10 >= 8 )
  {
    nullsub_4();
    sub_180010884(v0, 2 * qword_1801FAA10 + 2);
  }
  qword_1801FAA10 = 7LL;
  qword_1801FAA08 = 0LL;
  LOWORD(qword_1801FA9F8) = 0;
}
