/*
 * XREFs of RtlpDecRefWnfNameSubscription @ 0x18005AF70
 * Callers:
 *     RtlpRemoveUserSubFromNameSub @ 0x18005A51C (RtlpRemoveUserSubFromNameSub.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x18005A7BC (RtlpWnfProcessCurrentDescriptor.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlRbRemoveNode @ 0x18001A490 (RtlRbRemoveNode.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     NtUnsubscribeWnfStateChange @ 0x1800A7B80 (NtUnsubscribeWnfStateChange.c)
 *     RtlpWnfETWEventNameSubRundown @ 0x1800E9F40 (RtlpWnfETWEventNameSubRundown.c)
 */

signed __int64 __fastcall RtlpDecRefWnfNameSubscription(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // r9
  __int64 v9; // rcx
  __int64 v10; // r8

  RtlAcquireSRWLockExclusive(qword_18017AAE0 + 8, a2, a3, a4);
  RtlAcquireSRWLockExclusive(a1 + 64, v5, v6, v7);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 116), 0xFFFFFFFF) == 1 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v9 = (__int64)NtCurrentPeb()->SharedData + 564;
    else
      v9 = 2147353486LL;
    if ( *(_BYTE *)v9 )
      RtlpWnfETWEventNameSubRundown(*(_QWORD *)(a1 + 16), a1);
    NtUnsubscribeWnfStateChange(a1 + 16);
    RtlRbRemoveNode((unsigned __int64 *)(qword_18017AAE0 + 16), a1 + 32);
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 64));
    v10 = *(_QWORD *)(a1 + 128);
    if ( v10 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v10);
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
  }
  else
  {
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 64));
  }
  return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(qword_18017AAE0 + 8));
}
