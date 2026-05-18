/*
 * XREFs of sub_18010E510 @ 0x18010E510
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_4 @ 0x1800126BC (nullsub_4.c)
 */

void __fastcall sub_18010E510()
{
  char *v0; // rcx

  if ( (unsigned __int64)qword_1801FA550 >= 8 )
  {
    nullsub_4();
    sub_180010884(v0, 2 * qword_1801FA550 + 2);
  }
  qword_1801FA550 = 7LL;
  qword_1801FA548 = 0LL;
  LOWORD(qword_1801FA538) = 0;
}
