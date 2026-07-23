/*
 * XREFs of TppCallbackPerformDeferredWork @ 0x18007EC38
 * Callers:
 *     TppWorkerThread @ 0x180035600 (TppWorkerThread.c)
 * Callees:
 *     TppCallbackSendAndDestroyAlpcMessage @ 0x180082D0C (TppCallbackSendAndDestroyAlpcMessage.c)
 */

NTSTATUS __fastcall TppCallbackPerformDeferredWork(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 228) & 1) != 0 )
  {
    TppCallbackSendAndDestroyAlpcMessage(a1);
    *(_DWORD *)(a1 + 228) &= ~1u;
  }
  *(_QWORD *)(a1 + 248) = 0LL;
  return RtlClearThreadWorkOnBehalfTicket();
}
