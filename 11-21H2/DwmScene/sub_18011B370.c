/*
 * XREFs of sub_18011B370 @ 0x18011B370
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_2 @ 0x18001110C (nullsub_2.c)
 */

void __fastcall sub_18011B370()
{
  char *v0; // rcx

  if ( (unsigned __int64)qword_1801F6430 >= 0x10 )
  {
    nullsub_2();
    sub_180010884(v0, qword_1801F6430 + 1);
  }
  qword_1801F6428 = 0LL;
  qword_1801F6430 = 15LL;
  LOBYTE(qword_1801F6418) = 0;
}
