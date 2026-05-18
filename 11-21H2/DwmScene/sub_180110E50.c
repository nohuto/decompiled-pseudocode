/*
 * XREFs of sub_180110E50 @ 0x180110E50
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_4 @ 0x1800126BC (nullsub_4.c)
 */

void __fastcall sub_180110E50()
{
  char *v0; // rcx

  if ( (unsigned __int64)qword_1801F9A70 >= 8 )
  {
    nullsub_4();
    sub_180010884(v0, 2 * qword_1801F9A70 + 2);
  }
  qword_1801F9A70 = 7LL;
  qword_1801F9A68 = 0LL;
  LOWORD(qword_1801F9A58) = 0;
}
