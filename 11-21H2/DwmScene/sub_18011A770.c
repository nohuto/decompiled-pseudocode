/*
 * XREFs of sub_18011A770 @ 0x18011A770
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_2 @ 0x18001110C (nullsub_2.c)
 */

void __fastcall sub_18011A770()
{
  char *v0; // rcx

  if ( (unsigned __int64)qword_1801F6270 >= 0x10 )
  {
    nullsub_2();
    sub_180010884(v0, qword_1801F6270 + 1);
  }
  qword_1801F6268 = 0LL;
  qword_1801F6270 = 15LL;
  LOBYTE(qword_1801F6258) = 0;
}
