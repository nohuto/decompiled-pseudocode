/*
 * XREFs of sub_1801163D0 @ 0x1801163D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_4 @ 0x1800126BC (nullsub_4.c)
 */

void __fastcall sub_1801163D0()
{
  char *v0; // rcx

  if ( (unsigned __int64)qword_1801FA9D0 >= 8 )
  {
    nullsub_4();
    sub_180010884(v0, 2 * qword_1801FA9D0 + 2);
  }
  qword_1801FA9D0 = 7LL;
  qword_1801FA9C8 = 0LL;
  LOWORD(qword_1801FA9B8) = 0;
}
