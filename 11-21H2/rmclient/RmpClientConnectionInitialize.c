/*
 * XREFs of RmpClientConnectionInitialize @ 0x18000A580
 * Callers:
 *     RmpClientConnectToResourceManager @ 0x18000A458 (RmpClientConnectToResourceManager.c)
 * Callees:
 *     HamIpcChannelInitialize @ 0x180005C08 (HamIpcChannelInitialize.c)
 *     memset_0 @ 0x18001570E (memset_0.c)
 */

__int64 __fastcall RmpClientConnectionInitialize(__int64 a1)
{
  __int64 *v2; // rax

  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  memset_0((void *)(a1 + 24), 0, 0x50uLL);
  HamIpcChannelInitialize(
    (__int64)RmpClientSubscriptionDeliverPayload,
    (__int64)HampConnectionObjectCompareToObject,
    (__int64)RmpClientCallbackCompareToPayload,
    (_QWORD *)(a1 + 24));
  RtlAcquireSRWLockExclusive(&RmpClientConnectionListLock);
  v2 = (__int64 *)qword_1800327B8;
  if ( *(__int64 **)qword_1800327B8 != &RmpClientConnectionListHead )
    __fastfail(3u);
  *(_QWORD *)a1 = &RmpClientConnectionListHead;
  *(_QWORD *)(a1 + 8) = v2;
  *v2 = a1;
  qword_1800327B8 = a1;
  return RtlReleaseSRWLockExclusive(&RmpClientConnectionListLock);
}
