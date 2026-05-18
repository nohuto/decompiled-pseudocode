/*
 * XREFs of sub_18010F110 @ 0x18010F110
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_4 @ 0x1800126BC (nullsub_4.c)
 */

void __fastcall sub_18010F110()
{
  char *v0; // rcx

  if ( (unsigned __int64)qword_1801FA230 >= 8 )
  {
    nullsub_4();
    sub_180010884(v0, 2 * qword_1801FA230 + 2);
  }
  qword_1801FA230 = 7LL;
  qword_1801FA228 = 0LL;
  LOWORD(qword_1801FA218) = 0;
}
