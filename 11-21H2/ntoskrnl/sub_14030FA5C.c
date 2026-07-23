/*
 * XREFs of sub_14030FA5C @ 0x14030FA5C
 * Callers:
 *     sub_1407BA750 @ 0x1407BA750 (sub_1407BA750.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14030FA5C(__int64 a1)
{
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 48) & 0x6200000) != 0x4200000 )
    return 0LL;
  result = 1LL;
  if ( (*(_DWORD *)(a1 + 64) & 1) != 0 )
    return 0LL;
  return result;
}
