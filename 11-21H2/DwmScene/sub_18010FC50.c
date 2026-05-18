/*
 * XREFs of sub_18010FC50 @ 0x18010FC50
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_4 @ 0x1800126BC (nullsub_4.c)
 */

void __fastcall sub_18010FC50()
{
  char *v0; // rcx

  if ( (unsigned __int64)qword_1801FA7B0 >= 8 )
  {
    nullsub_4();
    sub_180010884(v0, 2 * qword_1801FA7B0 + 2);
  }
  qword_1801FA7B0 = 7LL;
  qword_1801FA7A8 = 0LL;
  LOWORD(qword_1801FA798) = 0;
}
