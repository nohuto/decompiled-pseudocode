/*
 * XREFs of CsrFreeCaptureBuffer @ 0x180079AF0
 * Callers:
 *     CsrpClientConnectToServer @ 0x180079A28 (CsrpClientConnectToServer.c)
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 */

LOGICAL __fastcall CsrFreeCaptureBuffer(PVOID BaseAddress)
{
  LOGICAL result; // eax

  if ( !LdrpIsSecureProcess )
    return RtlFreeHeap(CsrPortHeap, 0, BaseAddress);
  return result;
}
