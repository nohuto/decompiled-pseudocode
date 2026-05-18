/*
 * XREFs of sub_180117F30 @ 0x180117F30
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_2 @ 0x18001110C (nullsub_2.c)
 */

void __fastcall sub_180117F30()
{
  char *v0; // rcx

  if ( (unsigned __int64)qword_1801F4E10 >= 0x10 )
  {
    nullsub_2();
    sub_180010884(v0, qword_1801F4E10 + 1);
  }
  qword_1801F4E08 = 0LL;
  qword_1801F4E10 = 15LL;
  LOBYTE(qword_1801F4DF8) = 0;
}
