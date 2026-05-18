/*
 * XREFs of sub_18011AB30 @ 0x18011AB30
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_2 @ 0x18001110C (nullsub_2.c)
 */

void __fastcall sub_18011AB30()
{
  char *v0; // rcx

  if ( (unsigned __int64)qword_1801F63F0 >= 0x10 )
  {
    nullsub_2();
    sub_180010884(v0, qword_1801F63F0 + 1);
  }
  qword_1801F63E8 = 0LL;
  qword_1801F63F0 = 15LL;
  LOBYTE(qword_1801F63D8) = 0;
}
