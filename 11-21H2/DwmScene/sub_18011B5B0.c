/*
 * XREFs of sub_18011B5B0 @ 0x18011B5B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_2 @ 0x18001110C (nullsub_2.c)
 */

void __fastcall sub_18011B5B0()
{
  char *v0; // rcx

  if ( (unsigned __int64)qword_1801F6770 >= 0x10 )
  {
    nullsub_2();
    sub_180010884(v0, qword_1801F6770 + 1);
  }
  qword_1801F6768 = 0LL;
  qword_1801F6770 = 15LL;
  LOBYTE(qword_1801F6758) = 0;
}
