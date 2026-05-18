/*
 * XREFs of sub_180117AB0 @ 0x180117AB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_2 @ 0x18001110C (nullsub_2.c)
 */

void __fastcall sub_180117AB0()
{
  char *v0; // rcx

  if ( (unsigned __int64)qword_1801F4D30 >= 0x10 )
  {
    nullsub_2();
    sub_180010884(v0, qword_1801F4D30 + 1);
  }
  qword_1801F4D28 = 0LL;
  qword_1801F4D30 = 15LL;
  LOBYTE(qword_1801F4D18) = 0;
}
