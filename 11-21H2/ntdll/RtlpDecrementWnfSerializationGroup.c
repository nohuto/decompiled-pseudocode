/*
 * XREFs of RtlpDecrementWnfSerializationGroup @ 0x18005B450
 * Callers:
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x180059C2C (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 *     RtlpDecRefWnfUserSubscription @ 0x18005AEA4 (RtlpDecRefWnfUserSubscription.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 */

signed __int64 __fastcall RtlpDecrementWnfSerializationGroup(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  __int64 v6; // rcx
  _QWORD *v7; // rdx

  RtlAcquireSRWLockExclusive(qword_18017AAE0 + 48, a2, a3, a4);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 32), 0xFFFFFFFF) != 1 )
    return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(qword_18017AAE0 + 48));
  v6 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(v6 + 8) != a1 + 8 || (v7 = *(_QWORD **)(a1 + 16), *v7 != a1 + 8) )
    __fastfail(3u);
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(qword_18017AAE0 + 48));
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
}
