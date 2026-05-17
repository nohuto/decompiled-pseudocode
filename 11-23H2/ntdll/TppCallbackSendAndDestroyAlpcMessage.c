/*
 * XREFs of TppCallbackSendAndDestroyAlpcMessage @ 0x180082D0C
 * Callers:
 *     TppWorkerThread @ 0x180035600 (TppWorkerThread.c)
 *     TppCallbackPerformDeferredWork @ 0x18007EC38 (TppCallbackPerformDeferredWork.c)
 *     TpCallbackSendPendingAlpcMessage @ 0x180082CD0 (TpCallbackSendPendingAlpcMessage.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     ZwAlpcSendWaitReceivePort @ 0x1800A2020 (ZwAlpcSendWaitReceivePort.c)
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
