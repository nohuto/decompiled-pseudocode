/*
 * XREFs of sub_1800321A0 @ 0x1800321A0
 * Callers:
 *     sub_180036F90 @ 0x180036F90 (sub_180036F90.c)
 *     sub_180057870 @ 0x180057870 (sub_180057870.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800321A0(__int64 a1, __int128 *a2)
{
  __int128 v2; // xmm1
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 8) )
  {
    o_abort();
    __debugbreak();
  }
  v2 = *a2;
  result = a1;
  *a2 = 0LL;
  *(_OWORD *)a1 = v2;
  return result;
}
