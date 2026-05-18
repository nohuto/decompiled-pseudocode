/*
 * XREFs of sub_1801142D0 @ 0x1801142D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_4 @ 0x1800126BC (nullsub_4.c)
 */

void __fastcall sub_1801142D0()
{
  char *v0; // rcx

  if ( (unsigned __int64)qword_1801F9650 >= 8 )
  {
    nullsub_4();
    sub_180010884(v0, 2 * qword_1801F9650 + 2);
  }
  qword_1801F9650 = 7LL;
  qword_1801F9648 = 0LL;
  LOWORD(qword_1801F9638) = 0;
}
