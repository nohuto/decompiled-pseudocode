/*
 * XREFs of sub_1405C81A8 @ 0x1405C81A8
 * Callers:
 *     sub_1405C8D78 @ 0x1405C8D78 (sub_1405C8D78.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1405C81A8(unsigned __int32 *a1)
{
  unsigned int v1; // r9d
  unsigned __int32 v2; // eax
  unsigned __int32 v3; // r8d

  v1 = -1073741782;
  _m_prefetchw(a1);
  v2 = *a1;
  while ( HIBYTE(v2) - 4 <= 1u )
  {
    v3 = v2;
    v2 = _InterlockedCompareExchange(
           (volatile signed __int32 *)a1,
           ((v2 & 0xFFFFFF | 0x5000000) ^ ((v2 & 0xFFFFFF | 0x5000000) + 1)) & 0xFFFFFF ^ (v2 & 0xFFFFFF | 0x5000000),
           v2);
    if ( v2 == v3 )
      return 0;
  }
  return v1;
}
