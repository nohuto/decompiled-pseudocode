/*
 * XREFs of sub_18010ED50 @ 0x18010ED50
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_4 @ 0x1800126BC (nullsub_4.c)
 */

void __fastcall sub_18010ED50()
{
  char *v0; // rcx

  if ( (unsigned __int64)qword_1801FA030 >= 8 )
  {
    nullsub_4();
    sub_180010884(v0, 2 * qword_1801FA030 + 2);
  }
  qword_1801FA030 = 7LL;
  qword_1801FA028 = 0LL;
  LOWORD(qword_1801FA018) = 0;
}
