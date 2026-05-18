/*
 * XREFs of sub_180113F70 @ 0x180113F70
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_4 @ 0x1800126BC (nullsub_4.c)
 */

void __fastcall sub_180113F70()
{
  char *v0; // rcx

  if ( (unsigned __int64)qword_1801F9330 >= 8 )
  {
    nullsub_4();
    sub_180010884(v0, 2 * qword_1801F9330 + 2);
  }
  qword_1801F9330 = 7LL;
  qword_1801F9328 = 0LL;
  LOWORD(qword_1801F9318) = 0;
}
