/*
 * XREFs of sub_180117270 @ 0x180117270
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_2 @ 0x18001110C (nullsub_2.c)
 */

void __fastcall sub_180117270()
{
  char *v0; // rcx

  if ( (unsigned __int64)qword_1801F4EB0 >= 0x10 )
  {
    nullsub_2();
    sub_180010884(v0, qword_1801F4EB0 + 1);
  }
  qword_1801F4EA8 = 0LL;
  qword_1801F4EB0 = 15LL;
  LOBYTE(qword_1801F4E98) = 0;
}
