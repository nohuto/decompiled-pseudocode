/*
 * XREFs of sub_180116D90 @ 0x180116D90
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_2 @ 0x18001110C (nullsub_2.c)
 */

void __fastcall sub_180116D90()
{
  char *v0; // rcx

  if ( (unsigned __int64)qword_1801F56D0 >= 0x10 )
  {
    nullsub_2();
    sub_180010884(v0, qword_1801F56D0 + 1);
  }
  qword_1801F56C8 = 0LL;
  qword_1801F56D0 = 15LL;
  LOBYTE(qword_1801F56B8) = 0;
}
