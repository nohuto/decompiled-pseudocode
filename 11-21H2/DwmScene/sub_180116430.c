/*
 * XREFs of sub_180116430 @ 0x180116430
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_4 @ 0x1800126BC (nullsub_4.c)
 */

void __fastcall sub_180116430()
{
  char *v0; // rcx

  if ( (unsigned __int64)qword_1801FA9F0 >= 8 )
  {
    nullsub_4();
    sub_180010884(v0, 2 * qword_1801FA9F0 + 2);
  }
  qword_1801FA9F0 = 7LL;
  qword_1801FA9E8 = 0LL;
  LOWORD(qword_1801FA9D8) = 0;
}
