/*
 * XREFs of sub_180112B30 @ 0x180112B30
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_4 @ 0x1800126BC (nullsub_4.c)
 */

void __fastcall sub_180112B30()
{
  char *v0; // rcx

  if ( (unsigned __int64)qword_1801F8FF0 >= 8 )
  {
    nullsub_4();
    sub_180010884(v0, 2 * qword_1801F8FF0 + 2);
  }
  qword_1801F8FF0 = 7LL;
  qword_1801F8FE8 = 0LL;
  LOWORD(qword_1801F8FD8) = 0;
}
