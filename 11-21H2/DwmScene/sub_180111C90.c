/*
 * XREFs of sub_180111C90 @ 0x180111C90
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_4 @ 0x1800126BC (nullsub_4.c)
 */

void __fastcall sub_180111C90()
{
  char *v0; // rcx

  if ( (unsigned __int64)qword_1801F9790 >= 8 )
  {
    nullsub_4();
    sub_180010884(v0, 2 * qword_1801F9790 + 2);
  }
  qword_1801F9790 = 7LL;
  qword_1801F9788 = 0LL;
  LOWORD(qword_1801F9778) = 0;
}
