/*
 * XREFs of sub_14056AB40 @ 0x14056AB40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14056AB40(__int64 a1, __int16 a2)
{
  __int64 result; // rax

  result = 384LL;
  *(_WORD *)(a1 + 110) ^= (*(_WORD *)(a1 + 110) ^ (a2 << 7)) & 0x180;
  return result;
}
