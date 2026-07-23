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

LOGICAL __fastcall EtwpDereferenceUmGuidEntry(PRTL_BALANCED_NODE Node)
{
  LOGICAL result; // eax
  _RTL_BALANCED_NODE *v3; // r8

  result = _InterlockedExchangeAdd((volatile signed __int32 *)&Node[2].Left + 1, 0xFFFFFFFF);
  if ( result == 1 )
  {
    EtwpAcquireGuidEntryExclusive((__int64)Node);
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
