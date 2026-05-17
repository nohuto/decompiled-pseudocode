/*
 * XREFs of RtlpDecRefWnfNameSubscription @ 0x18004FBF8
 * Callers:
 *     RtlpRemoveUserSubFromNameSub @ 0x18004C6DC (RtlpRemoveUserSubFromNameSub.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x18004DD84 (RtlpWnfProcessCurrentDescriptor.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlRbRemoveNode @ 0x180038A70 (RtlRbRemoveNode.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     NtUnsubscribeWnfStateChange @ 0x1800A2980 (NtUnsubscribeWnfStateChange.c)
 *     RtlpWnfETWEventNameSubRundown @ 0x1800E8F98 (RtlpWnfETWEventNameSubRundown.c)
 */

signed __int64 __fastcall RtlpDecRefWnfNameSubscription(__int64 a1)
{
  __int64 v3; // rcx
  __int64 v4; // r8

  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(qword_180184D10 + 8));
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 64));
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 116), 0xFFFFFFFF) == 1 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v3 = (__int64)NtCurrentPeb()->SharedData + 564;
    else
      v3 = 2147353486LL;
    if ( *(_BYTE *)v3 )
      RtlpWnfETWEventNameSubRundown(*(_QWORD *)(a1 + 16), a1);
    NtUnsubscribeWnfStateChange(a1 + 16);
    RtlRbRemoveNode(qword_180184D10 + 16, a1 + 32);
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 64));
    v4 = *(_QWORD *)(a1 + 128);
    if ( v4 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v4);
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
  }
  else
  {
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 64));
  }
  return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(qword_180184D10 + 8));
}
