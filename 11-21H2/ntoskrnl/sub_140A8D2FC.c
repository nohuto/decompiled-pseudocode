/*
 * XREFs of sub_140A8D2FC @ 0x140A8D2FC
 * Callers:
 *     sub_1402D3080 @ 0x1402D3080 (sub_1402D3080.c)
 * Callees:
 *     sub_140AA5A48 @ 0x140AA5A48 (sub_140AA5A48.c)
 *     sub_140AA5BCC @ 0x140AA5BCC (sub_140AA5BCC.c)
 */

__int64 __fastcall sub_140A8D2FC(__int64 a1, char a2)
{
  __int64 result; // rax

  result = sub_140AA5A48(a1);
  if ( result )
  {
    if ( (a2 & 1) != 0 )
      *(_DWORD *)(result + 56) |= 0x100000u;
    if ( (a2 & 2) != 0 )
      *(_DWORD *)(result + 56) |= 0x20u;
    return sub_140AA5BCC(result);
  }
  return result;
}
