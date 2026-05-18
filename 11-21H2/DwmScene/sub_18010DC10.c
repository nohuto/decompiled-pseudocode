/*
 * XREFs of sub_18010DC10 @ 0x18010DC10
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_2 @ 0x18001110C (nullsub_2.c)
 */

void __fastcall sub_18010DC10()
{
  char *v0; // rcx

  if ( (unsigned __int64)qword_1801F4C50 >= 0x10 )
  {
    nullsub_2();
    sub_180010884(v0, qword_1801F4C50 + 1);
  }
  qword_1801F4C48 = 0LL;
  qword_1801F4C50 = 15LL;
  LOBYTE(qword_1801F4C38) = 0;
}
