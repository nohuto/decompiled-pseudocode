/*
 * XREFs of sub_1800E4A8B @ 0x1800E4A8B
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010F30 @ 0x180010F30 (sub_180010F30.c)
 */

__int64 __fastcall sub_1800E4A8B(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 2;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~2u;
    return sub_180010F30();
  }
  return result;
}
