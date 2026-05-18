/*
 * XREFs of sub_18010E6F0 @ 0x18010E6F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_4 @ 0x1800126BC (nullsub_4.c)
 */

void __fastcall sub_18010E6F0()
{
  char *v0; // rcx

  if ( (unsigned __int64)qword_1801FA4D0 >= 8 )
  {
    nullsub_4();
    sub_180010884(v0, 2 * qword_1801FA4D0 + 2);
  }
  qword_1801FA4D0 = 7LL;
  qword_1801FA4C8 = 0LL;
  LOWORD(qword_1801FA4B8) = 0;
}
