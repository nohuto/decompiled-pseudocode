/*
 * XREFs of sub_18011B430 @ 0x18011B430
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_2 @ 0x18001110C (nullsub_2.c)
 */

void __fastcall sub_18011B430()
{
  char *v0; // rcx

  if ( (unsigned __int64)qword_1801F6730 >= 0x10 )
  {
    nullsub_2();
    sub_180010884(v0, qword_1801F6730 + 1);
  }
  qword_1801F6728 = 0LL;
  qword_1801F6730 = 15LL;
  LOBYTE(qword_1801F6718) = 0;
}
