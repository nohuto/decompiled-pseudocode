/*
 * XREFs of IoAllocateMiniCompletionPacket @ 0x140785FE0
 * Callers:
 *     NtSetInformationJobObject @ 0x1406A4040 (NtSetInformationJobObject.c)
 *     NtCreateWorkerFactory @ 0x140785B90 (NtCreateWorkerFactory.c)
 *     AlpcpAllocateCompletionPacketLookaside @ 0x140785F08 (AlpcpAllocateCompletionPacketLookaside.c)
 * Callees:
 *     IopAllocateMiniCompletionPacket @ 0x14073DFC8 (IopAllocateMiniCompletionPacket.c)
 */

PSLIST_ENTRY __fastcall IoAllocateMiniCompletionPacket(__int64 a1, _SLIST_ENTRY *a2)
{
  PSLIST_ENTRY result; // rax

  result = IopAllocateMiniCompletionPacket(4, 0);
  if ( result )
  {
    *((_QWORD *)&result[3].Next + 1) = a1;
    result[4].Next = a2;
    *((_BYTE *)&result[4].Next + 8) = 1;
  }
  return result;
}
