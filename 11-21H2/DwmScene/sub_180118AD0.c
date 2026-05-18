/*
 * XREFs of sub_180118AD0 @ 0x180118AD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_2 @ 0x18001110C (nullsub_2.c)
 */

void __fastcall sub_180118AD0()
{
  char *v0; // rcx

  if ( (unsigned __int64)qword_1801F5110 >= 0x10 )
  {
    nullsub_2();
    sub_180010884(v0, qword_1801F5110 + 1);
  }
  qword_1801F5108 = 0LL;
  qword_1801F5110 = 15LL;
  LOBYTE(qword_1801F50F8) = 0;
}
