/*
 * XREFs of sub_18010F0B0 @ 0x18010F0B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_4 @ 0x1800126BC (nullsub_4.c)
 */

void __fastcall sub_18010F0B0()
{
  char *v0; // rcx

  if ( (unsigned __int64)qword_1801FA310 >= 8 )
  {
    nullsub_4();
    sub_180010884(v0, 2 * qword_1801FA310 + 2);
  }
  qword_1801FA310 = 7LL;
  qword_1801FA308 = 0LL;
  LOWORD(qword_1801FA2F8) = 0;
}
