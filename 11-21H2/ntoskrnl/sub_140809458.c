/*
 * XREFs of sub_140809458 @ 0x140809458
 * Callers:
 *     sub_1408063DC @ 0x1408063DC (sub_1408063DC.c)
 *     sub_140811764 @ 0x140811764 (sub_140811764.c)
 *     sub_14098BDD4 @ 0x14098BDD4 (sub_14098BDD4.c)
 *     sub_14099F25C @ 0x14099F25C (sub_14099F25C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140809458(_DWORD *a1, _DWORD *a2, int *a3)
{
  char v3; // bl
  __int64 result; // rax
  int v6; // r10d
  int v7; // ett
  __int16 v8; // cx

  v3 = dword_140C24070;
  _m_prefetchw(&stru_140C24040);
  LODWORD(result) = stru_140C24040.HandleAttributes;
  v6 = 0;
  do
  {
    v7 = result;
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)&stru_140C24040, result, result);
  }
  while ( v7 != (_DWORD)result );
  v8 = result;
  if ( a1 )
  {
    *a1 = 0;
    result = 0LL;
    if ( (v3 & 1) != 0 )
    {
      *a1 = 1;
      result = 1LL;
    }
    if ( (v3 & 2) != 0 )
    {
      result = (unsigned int)result | 2;
      *a1 = result;
    }
  }
  if ( a2 )
  {
    *a2 = 0;
    result = 0LL;
    if ( (v8 & 0x1000) != 0 )
    {
      *a2 = 1;
      result = 1LL;
    }
    if ( (v8 & 0x2000) != 0 )
    {
      result = (unsigned int)result | 2;
      *a2 = result;
    }
  }
  if ( a3 )
  {
    *a3 = 0;
    if ( (v8 & 0x400) != 0 )
    {
      *a3 = 1;
      v6 = 1;
    }
    if ( (v8 & 0x800) != 0 )
      *a3 = v6 | 2;
  }
  return result;
}
