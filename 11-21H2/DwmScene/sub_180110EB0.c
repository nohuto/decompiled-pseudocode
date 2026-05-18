/*
 * XREFs of sub_180110EB0 @ 0x180110EB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_4 @ 0x1800126BC (nullsub_4.c)
 */

void __fastcall sub_180110EB0()
{
  char *v0; // rcx

  if ( (unsigned __int64)qword_1801F9A10 >= 8 )
  {
    nullsub_4();
    sub_180010884(v0, 2 * qword_1801F9A10 + 2);
  }
  qword_1801F9A10 = 7LL;
  qword_1801F9A08 = 0LL;
  LOWORD(qword_1801F99F8) = 0;
}
