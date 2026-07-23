/*
 * XREFs of AlpcpQueueIoCompletion @ 0x14031ABF8
 * Callers:
 *     AlpcpSignal @ 0x1402B6F00 (AlpcpSignal.c)
 *     AlpcpLookasidePacketCallbackRoutine @ 0x140319E90 (AlpcpLookasidePacketCallbackRoutine.c)
 *     AlpcpQueueIoCompletionPort @ 0x14031A9F0 (AlpcpQueueIoCompletionPort.c)
 * Callees:
 *     IoSetIoCompletionEx3 @ 0x14031ACA0 (IoSetIoCompletionEx3.c)
 */

_BOOL8 __fastcall AlpcpQueueIoCompletion(int a1, int a2, int a3, __int64 a4, char a5, int a6)
{
  return (int)IoSetIoCompletionEx3(a1, a2, a3, 0, 0LL, 0, a4, a5, a6 != 0) >= 0;
}
