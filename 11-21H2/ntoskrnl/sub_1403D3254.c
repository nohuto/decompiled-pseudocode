/*
 * XREFs of sub_1403D3254 @ 0x1403D3254
 * Callers:
 *     sub_1403D2D98 @ 0x1403D2D98 (sub_1403D2D98.c)
 *     sub_140572490 @ 0x140572490 (sub_140572490.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1403D3254(__int64 a1, int a2, _DWORD *a3)
{
  if ( (*(_DWORD *)(a1 + 2172) & 0x80u) != 0 )
  {
    *a3 = (unsigned __int16)word_140D05018;
    if ( a2 )
      return *(_QWORD *)(a1 + 2376);
    else
      return *(_QWORD *)(a1 + 2384);
  }
  else
  {
    *a3 = 1;
    return a1 + (-(__int64)(a2 != 0) & 0xFFFFFFFFFFFFFFF8uLL) + 2384;
  }
}
