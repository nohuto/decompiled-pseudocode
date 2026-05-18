/*
 * XREFs of sub_18011B6D0 @ 0x18011B6D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_2 @ 0x18001110C (nullsub_2.c)
 */

void __fastcall sub_18011B6D0()
{
  char *v0; // rcx

  if ( (unsigned __int64)qword_1801F6810 >= 0x10 )
  {
    nullsub_2();
    sub_180010884(v0, qword_1801F6810 + 1);
  }
  qword_1801F6808 = 0LL;
  qword_1801F6810 = 15LL;
  LOBYTE(qword_1801F67F8) = 0;
}
