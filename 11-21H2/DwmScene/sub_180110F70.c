/*
 * XREFs of sub_180110F70 @ 0x180110F70
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_4 @ 0x1800126BC (nullsub_4.c)
 */

void __fastcall sub_180110F70()
{
  char *v0; // rcx

  if ( (unsigned __int64)qword_1801F9A30 >= 8 )
  {
    nullsub_4();
    sub_180010884(v0, 2 * qword_1801F9A30 + 2);
  }
  qword_1801F9A30 = 7LL;
  qword_1801F9A28 = 0LL;
  LOWORD(qword_1801F9A18) = 0;
}
