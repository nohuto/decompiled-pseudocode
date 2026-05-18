/*
 * XREFs of sub_180112890 @ 0x180112890
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_4 @ 0x1800126BC (nullsub_4.c)
 */

void __fastcall sub_180112890()
{
  char *v0; // rcx

  if ( (unsigned __int64)qword_1801F8B90 >= 8 )
  {
    nullsub_4();
    sub_180010884(v0, 2 * qword_1801F8B90 + 2);
  }
  qword_1801F8B90 = 7LL;
  qword_1801F8B88 = 0LL;
  LOWORD(qword_1801F8B78) = 0;
}
