/*
 * XREFs of sub_18010DBB0 @ 0x18010DBB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_2 @ 0x18001110C (nullsub_2.c)
 */

void __fastcall sub_18010DBB0()
{
  char *v0; // rcx

  if ( *((_QWORD *)&xmmword_1801F4BE8 + 1) >= 0x10uLL )
  {
    nullsub_2();
    sub_180010884(v0, *((_QWORD *)&xmmword_1801F4BE8 + 1) + 1LL);
  }
  *(_QWORD *)&xmmword_1801F4BE8 = 0LL;
  *((_QWORD *)&xmmword_1801F4BE8 + 1) = 15LL;
  LOBYTE(xmmword_1801F4BD8) = 0;
}
