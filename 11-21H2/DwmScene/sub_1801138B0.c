/*
 * XREFs of sub_1801138B0 @ 0x1801138B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_4 @ 0x1800126BC (nullsub_4.c)
 */

void __fastcall sub_1801138B0()
{
  char *v0; // rcx

  if ( (unsigned __int64)qword_1801F93F0 >= 8 )
  {
    nullsub_4();
    sub_180010884(v0, 2 * qword_1801F93F0 + 2);
  }
  qword_1801F93F0 = 7LL;
  qword_1801F93E8 = 0LL;
  LOWORD(qword_1801F93D8) = 0;
}
