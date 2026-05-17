/*
 * XREFs of RtlpDecrementWnfSerializationGroup @ 0x180050338
 * Callers:
 *     RtlpDecRefWnfUserSubscription @ 0x18004E28C (RtlpDecRefWnfUserSubscription.c)
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x1800613FC (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 */

signed __int64 __fastcall RtlpDecrementWnfSerializationGroup(__int64 a1)
{
  __int64 v3; // rdx
  _QWORD *v4; // rcx

  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(qword_180187E00 + 48));
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 32), 0xFFFFFFFF) != 1 )
    return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(qword_180187E00 + 48));
  v3 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(v3 + 8) != a1 + 8 || (v4 = *(_QWORD **)(a1 + 16), *v4 != a1 + 8) )
    __fastfail(3u);
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(qword_180187E00 + 48));
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
}
