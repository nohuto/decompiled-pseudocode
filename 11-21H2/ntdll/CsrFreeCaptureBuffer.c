/*
 * XREFs of CsrFreeCaptureBuffer @ 0x180079AF0
 * Callers:
 *     CsrpClientConnectToServer @ 0x180079A28 (CsrpClientConnectToServer.c)
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 */

__int64 __fastcall CsrFreeCaptureBuffer(__int64 a1)
{
  __int64 result; // rax

  if ( !LdrpIsSecureProcess )
    return RtlFreeHeap(CsrPortHeap, 0, a1);
  return result;
}
