/*
 * XREFs of CsrFreeCaptureBuffer @ 0x180074FF0
 * Callers:
 *     CsrpClientConnectToServer @ 0x180074A9C (CsrpClientConnectToServer.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 */

LOGICAL __fastcall CsrFreeCaptureBuffer(PVOID BaseAddress)
{
  LOGICAL result; // eax

  if ( !LdrpIsSecureProcess )
    return RtlFreeHeap(CsrPortHeap, 0, BaseAddress);
  return result;
}
