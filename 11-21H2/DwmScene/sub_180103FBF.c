/*
 * XREFs of sub_180103FBF @ 0x180103FBF
 * Callers:
 *     <none>
 * Callees:
 *     sub_180012AD0 @ 0x180012AD0 (sub_180012AD0.c)
 */

__int64 __fastcall sub_180103FBF(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 48) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    return sub_180012AD0(a2 + 1040);
  }
  return result;
}
