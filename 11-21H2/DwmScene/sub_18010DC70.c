/*
 * XREFs of sub_18010DC70 @ 0x18010DC70
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_2 @ 0x18001110C (nullsub_2.c)
 */

void __fastcall sub_18010DC70()
{
  char *v0; // rcx

  if ( (unsigned __int64)qword_1801F4C30 >= 0x10 )
  {
    nullsub_2();
    sub_180010884(v0, qword_1801F4C30 + 1);
  }
  qword_1801F4C28 = 0LL;
  qword_1801F4C30 = 15LL;
  LOBYTE(qword_1801F4C18) = 0;
}
