/*
 * XREFs of sub_18011BB70 @ 0x18011BB70
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_4 @ 0x1800126BC (nullsub_4.c)
 */

void __fastcall sub_18011BB70()
{
  char *v0; // rcx

  if ( (unsigned __int64)qword_1801FAD38 >= 8 )
  {
    nullsub_4();
    sub_180010884(v0, 2 * qword_1801FAD38 + 2);
  }
  qword_1801FAD38 = 7LL;
  qword_1801FAD30 = 0LL;
  LOWORD(qword_1801FAD20) = 0;
}
