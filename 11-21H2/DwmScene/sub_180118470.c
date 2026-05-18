/*
 * XREFs of sub_180118470 @ 0x180118470
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_2 @ 0x18001110C (nullsub_2.c)
 */

void __fastcall sub_180118470()
{
  char *v0; // rcx

  if ( (unsigned __int64)qword_1801F5C30 >= 0x10 )
  {
    nullsub_2();
    sub_180010884(v0, qword_1801F5C30 + 1);
  }
  qword_1801F5C28 = 0LL;
  qword_1801F5C30 = 15LL;
  LOBYTE(qword_1801F5C18) = 0;
}
