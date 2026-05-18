/*
 * XREFs of sub_180112710 @ 0x180112710
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_4 @ 0x1800126BC (nullsub_4.c)
 */

void __fastcall sub_180112710()
{
  char *v0; // rcx

  if ( (unsigned __int64)qword_1801F8D90 >= 8 )
  {
    nullsub_4();
    sub_180010884(v0, 2 * qword_1801F8D90 + 2);
  }
  qword_1801F8D90 = 7LL;
  qword_1801F8D88 = 0LL;
  LOWORD(qword_1801F8D78) = 0;
}
