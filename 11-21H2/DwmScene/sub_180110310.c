/*
 * XREFs of sub_180110310 @ 0x180110310
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_4 @ 0x1800126BC (nullsub_4.c)
 */

void __fastcall sub_180110310()
{
  char *v0; // rcx

  if ( (unsigned __int64)qword_1801F9CF0 >= 8 )
  {
    nullsub_4();
    sub_180010884(v0, 2 * qword_1801F9CF0 + 2);
  }
  qword_1801F9CF0 = 7LL;
  qword_1801F9CE8 = 0LL;
  LOWORD(qword_1801F9CD8) = 0;
}
