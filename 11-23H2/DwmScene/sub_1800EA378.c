/*
 * XREFs of sub_1800EA378 @ 0x1800EA378
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800179F0 @ 0x1800179F0 (sub_1800179F0.c)
 */

__int64 __fastcall sub_1800EA378(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 48) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    return sub_1800179F0();
  }
  return result;
}
