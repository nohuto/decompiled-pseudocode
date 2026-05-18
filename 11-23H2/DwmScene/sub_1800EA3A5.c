/*
 * XREFs of sub_1800EA3A5 @ 0x1800EA3A5
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800179F0 @ 0x1800179F0 (sub_1800179F0.c)
 */

__int64 __fastcall sub_1800EA3A5(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 48) & 2;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~2u;
    return sub_1800179F0();
  }
  return result;
}
