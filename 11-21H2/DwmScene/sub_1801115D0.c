/*
 * XREFs of sub_1801115D0 @ 0x1801115D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_4 @ 0x1800126BC (nullsub_4.c)
 */

void __fastcall sub_1801115D0()
{
  char *v0; // rcx

  if ( (unsigned __int64)qword_1801F9BD0 >= 8 )
  {
    nullsub_4();
    sub_180010884(v0, 2 * qword_1801F9BD0 + 2);
  }
  qword_1801F9BD0 = 7LL;
  qword_1801F9BC8 = 0LL;
  LOWORD(qword_1801F9BB8) = 0;
}
