/*
 * XREFs of EtwpDereferenceUmGuidEntry @ 0x18005EE80
 * Callers:
 *     EtwNotificationUnregister @ 0x180030010 (EtwNotificationUnregister.c)
 *     EtwpUpdateEnableInfoAndCallback @ 0x180031F78 (EtwpUpdateEnableInfoAndCallback.c)
 *     EtwDeliverDataBlock @ 0x18005E7E0 (EtwDeliverDataBlock.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     RtlRbRemoveNode @ 0x180038910 (RtlRbRemoveNode.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     EtwpAcquireGuidEntryExclusive @ 0x18005EE50 (EtwpAcquireGuidEntryExclusive.c)
 */

__int64 __fastcall EtwpDereferenceUmGuidEntry(unsigned __int64 a1)
{
  __int64 result; // rax
  __int64 v3; // r8

  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 52), 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    EtwpAcquireGuidEntryExclusive(a1);
    RtlAcquireSRWLockExclusive(&EtwpProvLock);
    RtlRbRemoveNode((__int64)&EtwpGuidEntryTable, a1);
    RtlReleaseSRWLockExclusive(&EtwpProvLock);
    *(_DWORD *)(a1 + 48) = 0;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 40));
    v3 = *(_QWORD *)(a1 + 168);
    if ( v3 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v3);
    return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
  }
  return result;
}
