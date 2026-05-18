/*
 * XREFs of sub_180112F50 @ 0x180112F50
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_4 @ 0x1800126BC (nullsub_4.c)
 */

void __fastcall sub_180112F50()
{
  char *v0; // rcx

  if ( (unsigned __int64)qword_1801F9250 >= 8 )
  {
    nullsub_4();
    sub_180010884(v0, 2 * qword_1801F9250 + 2);
  }
  qword_1801F9250 = 7LL;
  qword_1801F9248 = 0LL;
  LOWORD(qword_1801F9238) = 0;
}
