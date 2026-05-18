/*
 * XREFs of sub_180116DF0 @ 0x180116DF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_2 @ 0x18001110C (nullsub_2.c)
 */

void __fastcall sub_180116DF0()
{
  char *v0; // rcx

  if ( (unsigned __int64)qword_1801F5670 >= 0x10 )
  {
    nullsub_2();
    sub_180010884(v0, qword_1801F5670 + 1);
  }
  qword_1801F5668 = 0LL;
  qword_1801F5670 = 15LL;
  LOBYTE(qword_1801F5658) = 0;
}
