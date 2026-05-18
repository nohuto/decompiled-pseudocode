/*
 * XREFs of sub_18011B070 @ 0x18011B070
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_2 @ 0x18001110C (nullsub_2.c)
 */

void __fastcall sub_18011B070()
{
  char *v0; // rcx

  if ( (unsigned __int64)qword_1801F6510 >= 0x10 )
  {
    nullsub_2();
    sub_180010884(v0, qword_1801F6510 + 1);
  }
  qword_1801F6508 = 0LL;
  qword_1801F6510 = 15LL;
  LOBYTE(qword_1801F64F8) = 0;
}
