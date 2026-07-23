/*
 * XREFs of CsrFreeCaptureBuffer @ 0x180074980
 * Callers:
 *     CsrpClientConnectToServer @ 0x18007442C (CsrpClientConnectToServer.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 */

LOGICAL __fastcall CsrFreeCaptureBuffer(PVOID BaseAddress)
{
  LOGICAL result; // eax

  if ( !LdrpIsSecureProcess )
    return RtlFreeHeap(CsrPortHeap, 0, BaseAddress);
  return result;
}
