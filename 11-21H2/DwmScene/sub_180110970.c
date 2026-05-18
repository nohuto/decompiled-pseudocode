/*
 * XREFs of sub_180110970 @ 0x180110970
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_4 @ 0x1800126BC (nullsub_4.c)
 */

void __fastcall sub_180110970()
{
  char *v0; // rcx

  if ( (unsigned __int64)qword_1801F8790 >= 8 )
  {
    nullsub_4();
    sub_180010884(v0, 2 * qword_1801F8790 + 2);
  }
  qword_1801F8790 = 7LL;
  qword_1801F8788 = 0LL;
  LOWORD(qword_1801F8778) = 0;
}
