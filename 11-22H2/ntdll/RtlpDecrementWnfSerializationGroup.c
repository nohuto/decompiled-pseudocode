/*
 * XREFs of RtlpDecrementWnfSerializationGroup @ 0x180050498
 * Callers:
 *     RtlpDecRefWnfUserSubscription @ 0x18004E3EC (RtlpDecRefWnfUserSubscription.c)
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x18005BC2C (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 */

signed __int64 __fastcall RtlpDecrementWnfSerializationGroup(__int64 a1)
{
  __int64 v3; // rdx
  _QWORD *v4; // rcx

  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(qword_180184D10 + 48));
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 32), 0xFFFFFFFF) != 1 )
    return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(qword_180184D10 + 48));
  v3 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(v3 + 8) != a1 + 8 || (v4 = *(_QWORD **)(a1 + 16), *v4 != a1 + 8) )
    __fastfail(3u);
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(qword_180184D10 + 48));
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
}
