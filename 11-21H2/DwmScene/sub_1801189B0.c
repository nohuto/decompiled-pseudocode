/*
 * XREFs of sub_1801189B0 @ 0x1801189B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_2 @ 0x18001110C (nullsub_2.c)
 */

void __fastcall sub_1801189B0()
{
  char *v0; // rcx

  if ( (unsigned __int64)qword_1801F5190 >= 0x10 )
  {
    nullsub_2();
    sub_180010884(v0, qword_1801F5190 + 1);
  }
  qword_1801F5188 = 0LL;
  qword_1801F5190 = 15LL;
  LOBYTE(qword_1801F5178) = 0;
}
