/*
 * XREFs of sub_180115770 @ 0x180115770
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_4 @ 0x1800126BC (nullsub_4.c)
 */

void __fastcall sub_180115770()
{
  char *v0; // rcx

  if ( (unsigned __int64)qword_1801F8510 >= 8 )
  {
    nullsub_4();
    sub_180010884(v0, 2 * qword_1801F8510 + 2);
  }
  qword_1801F8510 = 7LL;
  qword_1801F8508 = 0LL;
  LOWORD(qword_1801F84F8) = 0;
}
