/*
 * XREFs of RtlpDecRefWnfNameSubscription @ 0x18004FA98
 * Callers:
 *     RtlpRemoveUserSubFromNameSub @ 0x18004C57C (RtlpRemoveUserSubFromNameSub.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x18004DC24 (RtlpWnfProcessCurrentDescriptor.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     RtlRbRemoveNode @ 0x180038910 (RtlRbRemoveNode.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 *     NtUnsubscribeWnfStateChange @ 0x1800A4A40 (NtUnsubscribeWnfStateChange.c)
 *     RtlpWnfETWEventNameSubRundown @ 0x1800EA2C8 (RtlpWnfETWEventNameSubRundown.c)
 */

void __fastcall RtlpDecRefWnfNameSubscription(char *BaseAddress)
{
  __int64 v2; // rcx
  void *v3; // r8

  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(qword_180187E00 + 8));
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
    RtlRbRemoveNode((PRTL_RB_TREE)(qword_180187E00 + 16), (PRTL_BALANCED_NODE)(BaseAddress + 32));
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
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(qword_180187E00 + 8));
}
