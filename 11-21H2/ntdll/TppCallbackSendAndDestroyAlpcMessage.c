/*
 * XREFs of TppCallbackSendAndDestroyAlpcMessage @ 0x180088444
 * Callers:
 *     TppWorkerThread @ 0x180016A00 (TppWorkerThread.c)
 *     TpCallbackSendPendingAlpcMessage @ 0x1800900D0 (TpCallbackSendPendingAlpcMessage.c)
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     ZwAlpcSendWaitReceivePort @ 0x1800A51E0 (ZwAlpcSendWaitReceivePort.c)
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
