/*
 * XREFs of sub_1800F1FF1 @ 0x1800F1FF1
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010F30 @ 0x180010F30 (sub_180010F30.c)
 */

__int64 __fastcall sub_1800F1FF1(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return sub_180010F30();
  }
  return result;
}
