/*
 * XREFs of sub_18011B610 @ 0x18011B610
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_2 @ 0x18001110C (nullsub_2.c)
 */

void __fastcall sub_18011B610()
{
  char *v0; // rcx

  if ( (unsigned __int64)qword_1801F6490 >= 0x10 )
  {
    nullsub_2();
    sub_180010884(v0, qword_1801F6490 + 1);
  }
  qword_1801F6488 = 0LL;
  qword_1801F6490 = 15LL;
  LOBYTE(qword_1801F6478) = 0;
}
