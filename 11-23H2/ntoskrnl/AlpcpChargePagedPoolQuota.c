/*
 * XREFs of AlpcpChargePagedPoolQuota @ 0x14071CB4C
 * Callers:
 *     AlpcpCreateSecurityContext @ 0x14071C9C8 (AlpcpCreateSecurityContext.c)
 *     AlpcpSendMessage @ 0x1407390A0 (AlpcpSendMessage.c)
 *     AlpcpCaptureMessageData @ 0x14073AA20 (AlpcpCaptureMessageData.c)
 *     AlpcpCreateReserve @ 0x1407CFE74 (AlpcpCreateReserve.c)
 * Callees:
 *     PsChargeProcessPagedPoolQuota @ 0x1407B0A30 (PsChargeProcessPagedPoolQuota.c)
 */

__int64 __fastcall AlpcpChargePagedPoolQuota(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax

  _m_prefetchw((const void *)(a1 + 2072));
  v2 = *(_QWORD *)(a1 + 2072);
  if ( v2 < a2 )
    return PsChargeProcessPagedPoolQuota(a1);
  while ( v2 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 2072), v2 - a2, v2) )
  {
    v2 = *(_QWORD *)(a1 + 2072);
    if ( v2 < a2 )
      return PsChargeProcessPagedPoolQuota(a1);
  }
  return 0LL;
}
