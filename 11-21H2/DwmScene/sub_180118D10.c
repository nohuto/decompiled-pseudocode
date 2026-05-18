/*
 * XREFs of sub_180118D10 @ 0x180118D10
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_2 @ 0x18001110C (nullsub_2.c)
 */

void __fastcall sub_180118D10()
{
  char *v0; // rcx

  if ( (unsigned __int64)qword_1801F5070 >= 0x10 )
  {
    nullsub_2();
    sub_180010884(v0, qword_1801F5070 + 1);
  }
  qword_1801F5068 = 0LL;
  qword_1801F5070 = 15LL;
  LOBYTE(qword_1801F5058) = 0;
}
