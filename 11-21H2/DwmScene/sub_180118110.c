/*
 * XREFs of sub_180118110 @ 0x180118110
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_2 @ 0x18001110C (nullsub_2.c)
 */

void __fastcall sub_180118110()
{
  char *v0; // rcx

  if ( (unsigned __int64)qword_1801F5B70 >= 0x10 )
  {
    nullsub_2();
    sub_180010884(v0, qword_1801F5B70 + 1);
  }
  qword_1801F5B68 = 0LL;
  qword_1801F5B70 = 15LL;
  LOBYTE(qword_1801F5B58) = 0;
}
