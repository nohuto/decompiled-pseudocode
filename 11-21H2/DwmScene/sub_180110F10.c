/*
 * XREFs of sub_180110F10 @ 0x180110F10
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_4 @ 0x1800126BC (nullsub_4.c)
 */

void __fastcall sub_180110F10()
{
  char *v0; // rcx

  if ( (unsigned __int64)qword_1801F9A50 >= 8 )
  {
    nullsub_4();
    sub_180010884(v0, 2 * qword_1801F9A50 + 2);
  }
  qword_1801F9A50 = 7LL;
  qword_1801F9A48 = 0LL;
  LOWORD(qword_1801F9A38) = 0;
}
