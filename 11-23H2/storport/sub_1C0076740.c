/*
 * XREFs of sub_1C0076740 @ 0x1C0076740
 * Callers:
 *     sub_1C00AF8D0 @ 0x1C00AF8D0 (sub_1C00AF8D0.c)
 *     sub_1C00AFE68 @ 0x1C00AFE68 (sub_1C00AFE68.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C0076740(__int64 a1, int a2, int a3, char a4, unsigned int a5)
{
  __int64 result; // rax

  *(_BYTE *)a1 = -47;
  if ( a2 == 1 )
    *(_BYTE *)(a1 + 56) = a4;
  *(_BYTE *)(a1 + 60) = 3;
  if ( !a2 )
  {
    *(_DWORD *)(a1 + 60) ^= (*(_DWORD *)(a1 + 60) ^ (a3 << 8)) & 0xFFFF00;
    result = a5 >> 2;
    *(_DWORD *)(a1 + 40) = result;
  }
  *(_DWORD *)(a1 + 60) ^= (*(_DWORD *)(a1 + 60) ^ (a2 << 24)) & 0xF000000;
  return result;
}
