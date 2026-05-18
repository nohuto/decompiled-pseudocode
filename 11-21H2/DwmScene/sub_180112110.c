/*
 * XREFs of sub_180112110 @ 0x180112110
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_4 @ 0x1800126BC (nullsub_4.c)
 */

void __fastcall sub_180112110()
{
  char *v0; // rcx

  if ( (unsigned __int64)qword_1801F8B10 >= 8 )
  {
    nullsub_4();
    sub_180010884(v0, 2 * qword_1801F8B10 + 2);
  }
  qword_1801F8B10 = 7LL;
  qword_1801F8B08 = 0LL;
  LOWORD(qword_1801F8AF8) = 0;
}
