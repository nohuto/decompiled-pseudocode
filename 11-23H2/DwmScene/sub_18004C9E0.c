/*
 * XREFs of sub_18004C9E0 @ 0x18004C9E0
 * Callers:
 *     sub_18006A694 @ 0x18006A694 (sub_18006A694.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18004C9E0(unsigned __int64 a1, char a2)
{
  int v2; // eax

  if ( a1 < 0x20 )
  {
    v2 = 1 << a1;
    if ( a2 )
      dword_1801D2B78 |= v2;
    else
      dword_1801D2B78 &= ~v2;
  }
}
