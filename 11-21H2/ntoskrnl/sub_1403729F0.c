/*
 * XREFs of sub_1403729F0 @ 0x1403729F0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1403729F0(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax

  memset(a2 + 1, 0, 0x7CuLL);
  a2[9] |= 2u;
  result = 0LL;
  *a2 = 1;
  return result;
}
