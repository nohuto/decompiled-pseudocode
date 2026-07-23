/*
 * XREFs of sub_1403C3F68 @ 0x1403C3F68
 * Callers:
 *     sub_140B0A8A8 @ 0x140B0A8A8 (sub_140B0A8A8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1403C3F68(int a1, char a2, int a3)
{
  __int64 result; // rax

  byte_140D07030[8 * a1] = a2;
  dword_140D07034[2 * a1] = a3;
  if ( (a2 & 2) != 0 )
    result = dword_140D3CD18[a1] & 0xFFFFFF80 | 0x64;
  else
    result = 0xFFFFFFFFLL;
  dword_140D3CD18[a1] = result;
  return result;
}
