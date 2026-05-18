/*
 * XREFs of sub_1801133D0 @ 0x1801133D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_4 @ 0x1800126BC (nullsub_4.c)
 */

void __fastcall sub_1801133D0()
{
  char *v0; // rcx

  if ( (unsigned __int64)qword_1801F8F50 >= 8 )
  {
    nullsub_4();
    sub_180010884(v0, 2 * qword_1801F8F50 + 2);
  }
  qword_1801F8F50 = 7LL;
  qword_1801F8F48 = 0LL;
  LOWORD(qword_1801F8F38) = 0;
}
