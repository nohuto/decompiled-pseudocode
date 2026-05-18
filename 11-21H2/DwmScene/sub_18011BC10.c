/*
 * XREFs of sub_18011BC10 @ 0x18011BC10
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_2 @ 0x18001110C (nullsub_2.c)
 */

void __fastcall sub_18011BC10()
{
  char *v0; // rcx

  if ( (unsigned __int64)qword_1801F6CD8 >= 0x10 )
  {
    nullsub_2();
    sub_180010884(v0, qword_1801F6CD8 + 1);
  }
  qword_1801F6CD0 = 0LL;
  qword_1801F6CD8 = 15LL;
  LOBYTE(qword_1801F6CC0) = 0;
}
