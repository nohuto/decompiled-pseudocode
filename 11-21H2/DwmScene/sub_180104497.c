/*
 * XREFs of sub_180104497 @ 0x180104497
 * Callers:
 *     <none>
 * Callees:
 *     sub_180012AD0 @ 0x180012AD0 (sub_180012AD0.c)
 */

__int64 __fastcall sub_180104497(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return sub_180012AD0(a2 + 136);
  }
  return result;
}
