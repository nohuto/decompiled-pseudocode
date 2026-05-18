/*
 * XREFs of sub_18011A8F0 @ 0x18011A8F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_2 @ 0x18001110C (nullsub_2.c)
 */

void __fastcall sub_18011A8F0()
{
  char *v0; // rcx

  if ( (unsigned __int64)qword_1801F62F0 >= 0x10 )
  {
    nullsub_2();
    sub_180010884(v0, qword_1801F62F0 + 1);
  }
  qword_1801F62E8 = 0LL;
  qword_1801F62F0 = 15LL;
  LOBYTE(qword_1801F62D8) = 0;
}
