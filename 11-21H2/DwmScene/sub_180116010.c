/*
 * XREFs of sub_180116010 @ 0x180116010
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_4 @ 0x1800126BC (nullsub_4.c)
 */

void __fastcall sub_180116010()
{
  char *v0; // rcx

  if ( (unsigned __int64)qword_1801F8610 >= 8 )
  {
    nullsub_4();
    sub_180010884(v0, 2 * qword_1801F8610 + 2);
  }
  qword_1801F8610 = 7LL;
  qword_1801F8608 = 0LL;
  LOWORD(qword_1801F85F8) = 0;
}
