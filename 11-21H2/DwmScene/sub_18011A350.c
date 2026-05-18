/*
 * XREFs of sub_18011A350 @ 0x18011A350
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_2 @ 0x18001110C (nullsub_2.c)
 */

void __fastcall sub_18011A350()
{
  char *v0; // rcx

  if ( (unsigned __int64)qword_1801F6230 >= 0x10 )
  {
    nullsub_2();
    sub_180010884(v0, qword_1801F6230 + 1);
  }
  qword_1801F6228 = 0LL;
  qword_1801F6230 = 15LL;
  LOBYTE(qword_1801F6218) = 0;
}
