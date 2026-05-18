/*
 * XREFs of sub_180110130 @ 0x180110130
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_4 @ 0x1800126BC (nullsub_4.c)
 */

void __fastcall sub_180110130()
{
  char *v0; // rcx

  if ( (unsigned __int64)qword_1801FA890 >= 8 )
  {
    nullsub_4();
    sub_180010884(v0, 2 * qword_1801FA890 + 2);
  }
  qword_1801FA890 = 7LL;
  qword_1801FA888 = 0LL;
  LOWORD(qword_1801FA878) = 0;
}
