/*
 * XREFs of sub_180112D70 @ 0x180112D70
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_4 @ 0x1800126BC (nullsub_4.c)
 */

void __fastcall sub_180112D70()
{
  char *v0; // rcx

  if ( (unsigned __int64)qword_1801F9030 >= 8 )
  {
    nullsub_4();
    sub_180010884(v0, 2 * qword_1801F9030 + 2);
  }
  qword_1801F9030 = 7LL;
  qword_1801F9028 = 0LL;
  LOWORD(qword_1801F9018) = 0;
}
