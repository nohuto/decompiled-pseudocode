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

void __fastcall RtlpDecRefWnfNameSubscription(char *BaseAddress)
{
  __int64 v2; // rcx
  void *v3; // r8

  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(qword_18017AAE0 + 8));
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)BaseAddress + 8);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)BaseAddress + 29, 0xFFFFFFFF) == 1 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v2 = (__int64)NtCurrentPeb()->SharedData + 564;
    else
      v2 = 2147353486LL;
    if ( *(_BYTE *)v2 )
      RtlpWnfETWEventNameSubRundown(*((_QWORD *)BaseAddress + 2), BaseAddress);
    NtUnsubscribeWnfStateChange((PCWNF_STATE_NAME)BaseAddress + 2);
    RtlRbRemoveNode((PRTL_RB_TREE)(qword_18017AAE0 + 16), (PRTL_BALANCED_NODE)(BaseAddress + 32));
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)BaseAddress + 8);
    v3 = (void *)*((_QWORD *)BaseAddress + 16);
    if ( v3 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  }
  else
  {
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)BaseAddress + 8);
  }
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(qword_18017AAE0 + 8));
}
