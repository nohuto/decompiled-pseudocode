/*
 * XREFs of sub_180114330 @ 0x180114330
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_4 @ 0x1800126BC (nullsub_4.c)
 */

void __fastcall sub_180114330()
{
  char *v0; // rcx

  if ( (unsigned __int64)qword_1801FAC90 >= 8 )
  {
    nullsub_4();
    sub_180010884(v0, 2 * qword_1801FAC90 + 2);
  }
  qword_1801FAC90 = 7LL;
  qword_1801FAC88 = 0LL;
  LOWORD(qword_1801FAC78) = 0;
}
