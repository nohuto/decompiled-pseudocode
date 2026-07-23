/*
 * XREFs of sub_14029A6AC @ 0x14029A6AC
 * Callers:
 *     sub_14029A2A0 @ 0x14029A2A0 (sub_14029A2A0.c)
 *     sub_140322F10 @ 0x140322F10 (sub_140322F10.c)
 * Callees:
 *     sub_140232694 @ 0x140232694 (sub_140232694.c)
 */

__int64 __fastcall sub_14029A6AC(__int64 a1)
{
  __int64 result; // rax
  unsigned __int64 *v3; // rdi
  char v4; // cl

  result = 0LL;
  if ( *(__int64 *)(a1 + 40) >= 0 )
  {
    v3 = (unsigned __int64 *)(a1 + 16);
    if ( (*(_BYTE *)(a1 + 16) & 6) != 0 )
    {
      v4 = *(_BYTE *)(a1 + 34);
      if ( (v4 & 8) == 0 )
      {
        result = sub_140232694(v3, 1, 1);
        *v3 &= ~2uLL;
        v4 = *(_BYTE *)(a1 + 34);
      }
      *(_BYTE *)(a1 + 34) = v4 | 0x10;
    }
  }
  return result;
}
