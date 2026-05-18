/*
 * XREFs of sub_180117930 @ 0x180117930
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_2 @ 0x18001110C (nullsub_2.c)
 */

void __fastcall sub_180117930()
{
  char *v0; // rcx

  if ( (unsigned __int64)qword_1801F4D70 >= 0x10 )
  {
    nullsub_2();
    sub_180010884(v0, qword_1801F4D70 + 1);
  }
  qword_1801F4D68 = 0LL;
  qword_1801F4D70 = 15LL;
  LOBYTE(qword_1801F4D58) = 0;
}
