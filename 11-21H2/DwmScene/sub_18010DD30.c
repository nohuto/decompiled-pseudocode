/*
 * XREFs of sub_18010DD30 @ 0x18010DD30
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_4 @ 0x1800126BC (nullsub_4.c)
 */

void __fastcall sub_18010DD30()
{
  char *v0; // rcx

  if ( (unsigned __int64)qword_1801F8010 >= 8 )
  {
    nullsub_4();
    sub_180010884(v0, 2 * qword_1801F8010 + 2);
  }
  qword_1801F8010 = 7LL;
  qword_1801F8008 = 0LL;
  LOWORD(qword_1801F7FF8) = 0;
}
