/*
 * XREFs of sub_180119A30 @ 0x180119A30
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_2 @ 0x18001110C (nullsub_2.c)
 */

void __fastcall sub_180119A30()
{
  char *v0; // rcx

  if ( (unsigned __int64)qword_1801F5A10 >= 0x10 )
  {
    nullsub_2();
    sub_180010884(v0, qword_1801F5A10 + 1);
  }
  qword_1801F5A08 = 0LL;
  qword_1801F5A10 = 15LL;
  LOBYTE(qword_1801F59F8) = 0;
}
