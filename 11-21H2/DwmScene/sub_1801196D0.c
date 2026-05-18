/*
 * XREFs of sub_1801196D0 @ 0x1801196D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_2 @ 0x18001110C (nullsub_2.c)
 */

void __fastcall sub_1801196D0()
{
  char *v0; // rcx

  if ( (unsigned __int64)qword_1801F5A70 >= 0x10 )
  {
    nullsub_2();
    sub_180010884(v0, qword_1801F5A70 + 1);
  }
  qword_1801F5A68 = 0LL;
  qword_1801F5A70 = 15LL;
  LOBYTE(qword_1801F5A58) = 0;
}
