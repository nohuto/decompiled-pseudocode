/*
 * XREFs of EtwpDereferenceUmGuidEntry @ 0x180061D10
 * Callers:
 *     EtwNotificationUnregister @ 0x1800301E0 (EtwNotificationUnregister.c)
 *     EtwpUpdateEnableInfoAndCallback @ 0x1800320D8 (EtwpUpdateEnableInfoAndCallback.c)
 *     EtwDeliverDataBlock @ 0x180061670 (EtwDeliverDataBlock.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlRbRemoveNode @ 0x180038A70 (RtlRbRemoveNode.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     EtwpAcquireGuidEntryExclusive @ 0x180061CE0 (EtwpAcquireGuidEntryExclusive.c)
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
