/*
 * XREFs of sub_180111ED0 @ 0x180111ED0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_4 @ 0x1800126BC (nullsub_4.c)
 */

void __fastcall sub_180111ED0()
{
  char *v0; // rcx

  if ( (unsigned __int64)qword_1801F8EB0 >= 8 )
  {
    nullsub_4();
    sub_180010884(v0, 2 * qword_1801F8EB0 + 2);
  }
  qword_1801F8EB0 = 7LL;
  qword_1801F8EA8 = 0LL;
  LOWORD(qword_1801F8E98) = 0;
}
