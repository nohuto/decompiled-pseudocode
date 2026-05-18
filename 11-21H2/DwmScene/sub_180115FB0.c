/*
 * XREFs of sub_180115FB0 @ 0x180115FB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_4 @ 0x1800126BC (nullsub_4.c)
 */

void __fastcall sub_180115FB0()
{
  char *v0; // rcx

  if ( (unsigned __int64)qword_1801F8850 >= 8 )
  {
    nullsub_4();
    sub_180010884(v0, 2 * qword_1801F8850 + 2);
  }
  qword_1801F8850 = 7LL;
  qword_1801F8848 = 0LL;
  LOWORD(qword_1801F8838) = 0;
}
