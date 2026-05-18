/*
 * XREFs of sub_180113F10 @ 0x180113F10
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_4 @ 0x1800126BC (nullsub_4.c)
 */

void __fastcall sub_180113F10()
{
  char *v0; // rcx

  if ( (unsigned __int64)qword_1801F9310 >= 8 )
  {
    nullsub_4();
    sub_180010884(v0, 2 * qword_1801F9310 + 2);
  }
  qword_1801F9310 = 7LL;
  qword_1801F9308 = 0LL;
  LOWORD(qword_1801F92F8) = 0;
}
