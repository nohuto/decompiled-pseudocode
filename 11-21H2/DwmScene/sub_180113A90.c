/*
 * XREFs of sub_180113A90 @ 0x180113A90
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_4 @ 0x1800126BC (nullsub_4.c)
 */

void __fastcall sub_180113A90()
{
  char *v0; // rcx

  if ( (unsigned __int64)qword_1801F9610 >= 8 )
  {
    nullsub_4();
    sub_180010884(v0, 2 * qword_1801F9610 + 2);
  }
  qword_1801F9610 = 7LL;
  qword_1801F9608 = 0LL;
  LOWORD(qword_1801F95F8) = 0;
}
