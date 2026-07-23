/*
 * XREFs of sub_1406C8B40 @ 0x1406C8B40
 * Callers:
 *     sub_1406C86A0 @ 0x1406C86A0 (sub_1406C86A0.c)
 *     sub_1406C8888 @ 0x1406C8888 (sub_1406C8888.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1406C8B40(__int64 a1)
{
  signed __int32 v1; // edx
  bool v2; // zf
  signed __int32 v3; // eax

  _m_prefetchw((const void *)(a1 + 512));
  v1 = *(_DWORD *)(a1 + 512);
  if ( !v1 )
    return 0LL;
  while ( 1 )
  {
    v3 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 512), v1 + 1, v1);
    v2 = v1 == v3;
    v1 = v3;
    if ( v2 )
      break;
    if ( !v3 )
      return 0LL;
  }
  return 1LL;
}
