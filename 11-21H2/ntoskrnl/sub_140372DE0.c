/*
 * XREFs of sub_140372DE0 @ 0x140372DE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140372DE0(_DWORD *a1)
{
  __int64 result; // rax

  result = (a1[4] ^ (a1[26] >> a1[27])) & 1;
  a1[4] ^= result;
  return result;
}
