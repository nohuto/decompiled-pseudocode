/*
 * XREFs of sub_1800533EC @ 0x1800533EC
 * Callers:
 *     sub_180074808 @ 0x180074808 (sub_180074808.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1800533EC(unsigned __int64 a1, char a2)
{
  int v2; // eax

  if ( a1 < 0x20 )
  {
    v2 = 1 << a1;
    if ( a2 )
      dword_1801F4B58 |= v2;
    else
      dword_1801F4B58 &= ~v2;
  }
}
