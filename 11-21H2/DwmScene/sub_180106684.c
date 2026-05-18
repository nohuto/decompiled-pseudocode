/*
 * XREFs of sub_180106684 @ 0x180106684
 * Callers:
 *     <none>
 * Callees:
 *     sub_180018A80 @ 0x180018A80 (sub_180018A80.c)
 */

__int64 __fastcall sub_180106684(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 48) & 2;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~2u;
    return sub_180018A80(a2 + 64);
  }
  return result;
}
