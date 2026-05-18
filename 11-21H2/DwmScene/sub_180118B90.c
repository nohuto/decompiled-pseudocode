/*
 * XREFs of sub_180118B90 @ 0x180118B90
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_2 @ 0x18001110C (nullsub_2.c)
 */

void __fastcall sub_180118B90()
{
  char *v0; // rcx

  if ( (unsigned __int64)qword_1801F5170 >= 0x10 )
  {
    nullsub_2();
    sub_180010884(v0, qword_1801F5170 + 1);
  }
  qword_1801F5168 = 0LL;
  qword_1801F5170 = 15LL;
  LOBYTE(qword_1801F5158) = 0;
}
