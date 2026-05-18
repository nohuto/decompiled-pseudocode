/*
 * XREFs of sub_180113790 @ 0x180113790
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_4 @ 0x1800126BC (nullsub_4.c)
 */

void __fastcall sub_180113790()
{
  char *v0; // rcx

  if ( (unsigned __int64)qword_1801F9290 >= 8 )
  {
    nullsub_4();
    sub_180010884(v0, 2 * qword_1801F9290 + 2);
  }
  qword_1801F9290 = 7LL;
  qword_1801F9288 = 0LL;
  LOWORD(qword_1801F9278) = 0;
}
