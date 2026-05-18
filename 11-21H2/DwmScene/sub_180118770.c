/*
 * XREFs of sub_180118770 @ 0x180118770
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_2 @ 0x18001110C (nullsub_2.c)
 */

void __fastcall sub_180118770()
{
  char *v0; // rcx

  if ( (unsigned __int64)qword_1801F5250 >= 0x10 )
  {
    nullsub_2();
    sub_180010884(v0, qword_1801F5250 + 1);
  }
  qword_1801F5248 = 0LL;
  qword_1801F5250 = 15LL;
  LOBYTE(qword_1801F5238) = 0;
}
