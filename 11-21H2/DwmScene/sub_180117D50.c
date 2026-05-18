/*
 * XREFs of sub_180117D50 @ 0x180117D50
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_2 @ 0x18001110C (nullsub_2.c)
 */

void __fastcall sub_180117D50()
{
  char *v0; // rcx

  if ( (unsigned __int64)qword_1801F5CB0 >= 0x10 )
  {
    nullsub_2();
    sub_180010884(v0, qword_1801F5CB0 + 1);
  }
  Size = 0LL;
  qword_1801F5CB0 = 15LL;
  LOBYTE(Src) = 0;
}
