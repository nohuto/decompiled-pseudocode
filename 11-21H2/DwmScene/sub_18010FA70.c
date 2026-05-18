/*
 * XREFs of sub_18010FA70 @ 0x18010FA70
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_4 @ 0x1800126BC (nullsub_4.c)
 */

void __fastcall sub_18010FA70()
{
  char *v0; // rcx

  if ( (unsigned __int64)qword_1801FA970 >= 8 )
  {
    nullsub_4();
    sub_180010884(v0, 2 * qword_1801FA970 + 2);
  }
  qword_1801FA970 = 7LL;
  qword_1801FA968 = 0LL;
  LOWORD(qword_1801FA958) = 0;
}
