/*
 * XREFs of sub_1801159B0 @ 0x1801159B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_4 @ 0x1800126BC (nullsub_4.c)
 */

void __fastcall sub_1801159B0()
{
  char *v0; // rcx

  if ( (unsigned __int64)qword_1801F8310 >= 8 )
  {
    nullsub_4();
    sub_180010884(v0, 2 * qword_1801F8310 + 2);
  }
  qword_1801F8310 = 7LL;
  qword_1801F8308 = 0LL;
  LOWORD(qword_1801F82F8) = 0;
}
