/*
 * XREFs of sub_180111150 @ 0x180111150
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_4 @ 0x1800126BC (nullsub_4.c)
 */

void __fastcall sub_180111150()
{
  char *v0; // rcx

  if ( (unsigned __int64)qword_1801F9B10 >= 8 )
  {
    nullsub_4();
    sub_180010884(v0, 2 * qword_1801F9B10 + 2);
  }
  qword_1801F9B10 = 7LL;
  qword_1801F9B08 = 0LL;
  LOWORD(qword_1801F9AF8) = 0;
}
