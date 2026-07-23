/*
 * XREFs of sub_14099C75C @ 0x14099C75C
 * Callers:
 *     sub_1407EF258 @ 0x1407EF258 (sub_1407EF258.c)
 * Callees:
 *     sub_140990F10 @ 0x140990F10 (sub_140990F10.c)
 */

void __fastcall sub_14099C75C(int a1, int a2)
{
  if ( a1 == 1 )
  {
    if ( a2 != 1 )
      return;
    LOBYTE(xmmword_140C1F400) = 0;
  }
  *((_BYTE *)&unk_140C1F3C0 + 24 * a1) = 0;
  sub_140990F10();
}
