/*
 * XREFs of sub_18011B490 @ 0x18011B490
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_2 @ 0x18001110C (nullsub_2.c)
 */

void __fastcall sub_18011B490()
{
  char *v0; // rcx

  if ( (unsigned __int64)qword_1801F6410 >= 0x10 )
  {
    nullsub_2();
    sub_180010884(v0, qword_1801F6410 + 1);
  }
  qword_1801F6408 = 0LL;
  qword_1801F6410 = 15LL;
  LOBYTE(qword_1801F63F8) = 0;
}
