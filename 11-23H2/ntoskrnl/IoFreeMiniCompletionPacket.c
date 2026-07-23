/*
 * XREFs of IoFreeMiniCompletionPacket @ 0x14076CA30
 * Callers:
 *     PspJobDelete @ 0x140207000 (PspJobDelete.c)
 *     ExpDeleteWorkerFactory @ 0x140305880 (ExpDeleteWorkerFactory.c)
 *     AlpcpDeferredFreeCompletionPacketLookaside @ 0x140305948 (AlpcpDeferredFreeCompletionPacketLookaside.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x140319FD0 (ExpWorkerFactoryCompletionPacketRoutine.c)
 * Callees:
 *     IopFreeMiniCompletionPacket @ 0x140728E00 (IopFreeMiniCompletionPacket.c)
 */

void __fastcall IoFreeMiniCompletionPacket(ULONG_PTR a1)
{
  *(_QWORD *)(a1 + 56) = 0LL;
  IopFreeMiniCompletionPacket(a1);
}
