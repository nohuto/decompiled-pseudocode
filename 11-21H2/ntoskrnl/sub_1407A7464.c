/*
 * XREFs of sub_1407A7464 @ 0x1407A7464
 * Callers:
 *     sub_1406CBB84 @ 0x1406CBB84 (sub_1406CBB84.c)
 *     sub_1407A74A4 @ 0x1407A74A4 (sub_1407A74A4.c)
 *     sub_1407A7B98 @ 0x1407A7B98 (sub_1407A7B98.c)
 *     sub_1407A9ED0 @ 0x1407A9ED0 (sub_1407A9ED0.c)
 *     sub_1407AC020 @ 0x1407AC020 (sub_1407AC020.c)
 * Callees:
 *     PsChargeProcessPagedPoolQuota @ 0x1406A6F60 (PsChargeProcessPagedPoolQuota.c)
 */

__int64 __fastcall sub_1407A7464(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rtt

  _m_prefetchw((const void *)(a1 + 2072));
  while ( 1 )
  {
    v2 = *(_QWORD *)(a1 + 2072);
    if ( v2 < a2 )
      break;
    v3 = *(_QWORD *)(a1 + 2072);
    if ( v3 == _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 2072), v2 - a2, v2) )
      return 0LL;
  }
  return PsChargeProcessPagedPoolQuota(a1, a2);
}
