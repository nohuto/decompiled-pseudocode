/*
 * XREFs of sub_1801180B0 @ 0x1801180B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_2 @ 0x18001110C (nullsub_2.c)
 */

void __fastcall sub_1801180B0()
{
  char *v0; // rcx

  if ( (unsigned __int64)qword_1801F5B30 >= 0x10 )
  {
    nullsub_2();
    sub_180010884(v0, qword_1801F5B30 + 1);
  }
  qword_1801F5B28 = 0LL;
  qword_1801F5B30 = 15LL;
  LOBYTE(qword_1801F5B18) = 0;
}
