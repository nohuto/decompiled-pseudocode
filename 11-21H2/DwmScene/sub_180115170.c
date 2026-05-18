/*
 * XREFs of sub_180115170 @ 0x180115170
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_4 @ 0x1800126BC (nullsub_4.c)
 */

void __fastcall sub_180115170()
{
  char *v0; // rcx

  if ( (unsigned __int64)qword_1801F8150 >= 8 )
  {
    nullsub_4();
    sub_180010884(v0, 2 * qword_1801F8150 + 2);
  }
  qword_1801F8150 = 7LL;
  qword_1801F8148 = 0LL;
  LOWORD(qword_1801F8138) = 0;
}
