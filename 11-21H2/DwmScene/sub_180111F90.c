/*
 * XREFs of sub_180111F90 @ 0x180111F90
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_4 @ 0x1800126BC (nullsub_4.c)
 */

void __fastcall sub_180111F90()
{
  char *v0; // rcx

  if ( (unsigned __int64)qword_1801F8CF0 >= 8 )
  {
    nullsub_4();
    sub_180010884(v0, 2 * qword_1801F8CF0 + 2);
  }
  qword_1801F8CF0 = 7LL;
  qword_1801F8CE8 = 0LL;
  LOWORD(qword_1801F8CD8) = 0;
}
