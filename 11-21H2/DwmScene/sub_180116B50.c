/*
 * XREFs of sub_180116B50 @ 0x180116B50
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_2 @ 0x18001110C (nullsub_2.c)
 */

void __fastcall sub_180116B50()
{
  char *v0; // rcx

  if ( (unsigned __int64)qword_1801F5610 >= 0x10 )
  {
    nullsub_2();
    sub_180010884(v0, qword_1801F5610 + 1);
  }
  qword_1801F5608 = 0LL;
  qword_1801F5610 = 15LL;
  LOBYTE(qword_1801F55F8) = 0;
}
