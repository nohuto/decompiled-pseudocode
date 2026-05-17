/*
 * XREFs of TppCallbackSendAndDestroyAlpcMessage @ 0x18008269C
 * Callers:
 *     TppWorkerThread @ 0x180035760 (TppWorkerThread.c)
 *     TppCallbackPerformDeferredWork @ 0x18007E5C8 (TppCallbackPerformDeferredWork.c)
 *     TpCallbackSendPendingAlpcMessage @ 0x180082660 (TpCallbackSendPendingAlpcMessage.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     ZwAlpcSendWaitReceivePort @ 0x18009FF60 (ZwAlpcSendWaitReceivePort.c)
 */

__int64 __fastcall TppCallbackSendAndDestroyAlpcMessage(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = ZwAlpcSendWaitReceivePort(
         *(_QWORD *)(a1 + 216),
         *(unsigned int *)(a1 + 224),
         *(_QWORD *)(a1 + 208),
         0LL,
         0LL,
         0LL,
         0LL,
         0LL);
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, *(_QWORD *)(a1 + 208));
  return v2;
}
