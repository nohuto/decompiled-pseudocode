/*
 * XREFs of sub_180117750 @ 0x180117750
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_2 @ 0x18001110C (nullsub_2.c)
 */

void __fastcall sub_180117750()
{
  char *v0; // rcx

  if ( (unsigned __int64)qword_1801F4C90 >= 0x10 )
  {
    nullsub_2();
    sub_180010884(v0, qword_1801F4C90 + 1);
  }
  qword_1801F4C88 = 0LL;
  qword_1801F4C90 = 15LL;
  LOBYTE(qword_1801F4C78) = 0;
}
