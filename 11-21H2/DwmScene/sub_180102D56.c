/*
 * XREFs of sub_180102D56 @ 0x180102D56
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 */

__int64 __fastcall sub_180102D56(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 344) & 2;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 344) &= ~2u;
    return sub_180010910(a2 + 112);
  }
  return result;
}
