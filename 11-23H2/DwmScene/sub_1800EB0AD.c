/*
 * XREFs of sub_1800EB0AD @ 0x1800EB0AD
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005FC64 @ 0x18005FC64 (sub_18005FC64.c)
 */

__int64 __fastcall sub_1800EB0AD(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 40) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 40) &= ~1u;
    return sub_18005FC64();
  }
  return result;
}
