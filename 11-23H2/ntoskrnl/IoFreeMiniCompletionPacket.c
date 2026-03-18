/*
 * XREFs of IoFreeMiniCompletionPacket @ 0x14076C840
 * Callers:
 *     PspJobDelete @ 0x140207000 (PspJobDelete.c)
 *     ExpDeleteWorkerFactory @ 0x1403055F0 (ExpDeleteWorkerFactory.c)
 *     AlpcpDeferredFreeCompletionPacketLookaside @ 0x1403056B8 (AlpcpDeferredFreeCompletionPacketLookaside.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x140319D40 (ExpWorkerFactoryCompletionPacketRoutine.c)
 * Callees:
 *     IopFreeMiniCompletionPacket @ 0x140728C00 (IopFreeMiniCompletionPacket.c)
 */

void __fastcall IoFreeMiniCompletionPacket(ULONG_PTR a1)
{
  *(_QWORD *)(a1 + 56) = 0LL;
  IopFreeMiniCompletionPacket(a1);
}
