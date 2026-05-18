/*
 * XREFs of sub_180119E70 @ 0x180119E70
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_2 @ 0x18001110C (nullsub_2.c)
 */

void __fastcall sub_180119E70()
{
  char *v0; // rcx

  if ( (unsigned __int64)qword_1801F6110 >= 0x10 )
  {
    nullsub_2();
    sub_180010884(v0, qword_1801F6110 + 1);
  }
  qword_1801F6108 = 0LL;
  qword_1801F6110 = 15LL;
  LOBYTE(qword_1801F60F8) = 0;
}
