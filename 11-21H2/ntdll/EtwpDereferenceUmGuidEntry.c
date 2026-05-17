/*
 * XREFs of EtwpDereferenceUmGuidEntry @ 0x180007B1C
 * Callers:
 *     EtwNotificationUnregister @ 0x1800065F0 (EtwNotificationUnregister.c)
 *     EtwDeliverDataBlock @ 0x180007500 (EtwDeliverDataBlock.c)
 *     EtwpUpdateEnableInfoAndCallback @ 0x180015ED4 (EtwpUpdateEnableInfoAndCallback.c)
 * Callees:
 *     EtwpAcquireGuidEntryExclusive @ 0x180007BA4 (EtwpAcquireGuidEntryExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlRbRemoveNode @ 0x18001A490 (RtlRbRemoveNode.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 */

__int64 __fastcall EtwpDereferenceUmGuidEntry(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // r8

  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 52), 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    EtwpAcquireGuidEntryExclusive(a1);
    RtlAcquireSRWLockExclusive(&EtwpProvLock);
    RtlRbRemoveNode(&EtwpGuidEntryTable, a1);
    RtlReleaseSRWLockExclusive(&EtwpProvLock);
    *(_DWORD *)(a1 + 48) = 0;
    RtlReleaseSRWLockExclusive(a1 + 40);
    v3 = *(_QWORD *)(a1 + 168);
    if ( v3 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v3);
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, a1);
  }
  return result;
}
