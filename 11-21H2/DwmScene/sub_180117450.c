/*
 * XREFs of sub_180117450 @ 0x180117450
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_2 @ 0x18001110C (nullsub_2.c)
 */

void __fastcall sub_180117450()
{
  char *v0; // rcx

  if ( (unsigned __int64)qword_1801F5010 >= 0x10 )
  {
    nullsub_2();
    sub_180010884(v0, qword_1801F5010 + 1);
  }
  qword_1801F5008 = 0LL;
  qword_1801F5010 = 15LL;
  LOBYTE(qword_1801F4FF8) = 0;
}
