/*
 * XREFs of sub_180116F70 @ 0x180116F70
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_2 @ 0x18001110C (nullsub_2.c)
 */

void __fastcall sub_180116F70()
{
  char *v0; // rcx

  if ( (unsigned __int64)qword_1801F55F0 >= 0x10 )
  {
    nullsub_2();
    sub_180010884(v0, qword_1801F55F0 + 1);
  }
  qword_1801F55E8 = 0LL;
  qword_1801F55F0 = 15LL;
  LOBYTE(qword_1801F55D8) = 0;
}
