/*
 * XREFs of sub_180106657 @ 0x180106657
 * Callers:
 *     <none>
 * Callees:
 *     sub_180018A80 @ 0x180018A80 (sub_180018A80.c)
 */

__int64 __fastcall sub_180106657(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 48) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    return sub_180018A80(a2 + 88);
  }
  return result;
}
