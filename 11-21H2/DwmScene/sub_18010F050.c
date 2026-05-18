/*
 * XREFs of sub_18010F050 @ 0x18010F050
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_4 @ 0x1800126BC (nullsub_4.c)
 */

void __fastcall sub_18010F050()
{
  char *v0; // rcx

  if ( (unsigned __int64)qword_1801FA170 >= 8 )
  {
    nullsub_4();
    sub_180010884(v0, 2 * qword_1801FA170 + 2);
  }
  qword_1801FA170 = 7LL;
  qword_1801FA168 = 0LL;
  LOWORD(qword_1801FA158) = 0;
}
