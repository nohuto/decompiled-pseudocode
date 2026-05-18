/*
 * XREFs of sub_180116C70 @ 0x180116C70
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_2 @ 0x18001110C (nullsub_2.c)
 */

void __fastcall sub_180116C70()
{
  char *v0; // rcx

  if ( (unsigned __int64)qword_1801F5690 >= 0x10 )
  {
    nullsub_2();
    sub_180010884(v0, qword_1801F5690 + 1);
  }
  qword_1801F5688 = 0LL;
  qword_1801F5690 = 15LL;
  LOBYTE(qword_1801F5678) = 0;
}
