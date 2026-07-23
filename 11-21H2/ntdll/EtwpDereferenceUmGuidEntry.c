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

LOGICAL __fastcall EtwpDereferenceUmGuidEntry(PRTL_BALANCED_NODE Node)
{
  LOGICAL result; // eax
  _RTL_BALANCED_NODE *v3; // r8

  result = _InterlockedExchangeAdd((volatile signed __int32 *)&Node[2].Left + 1, 0xFFFFFFFF);
  if ( result == 1 )
  {
    EtwpAcquireGuidEntryExclusive(Node);
    RtlAcquireSRWLockExclusive(&EtwpProvLock);
    RtlRbRemoveNode(&EtwpGuidEntryTable, Node);
    RtlReleaseSRWLockExclusive(&EtwpProvLock);
    LODWORD(Node[2].Children[0]) = 0;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)&Node[1].16);
    v3 = Node[7].Children[0];
    if ( v3 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Node);
  }
  return result;
}
