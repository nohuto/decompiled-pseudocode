/*
 * XREFs of sub_1800F18EB @ 0x1800F18EB
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000D430 @ 0x18000D430 (sub_18000D430.c)
 */

__int64 __fastcall sub_1800F18EB(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 48) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    return sub_18000D430();
  }
  return result;
}
