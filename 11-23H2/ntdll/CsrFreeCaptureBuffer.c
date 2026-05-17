/*
 * XREFs of CsrFreeCaptureBuffer @ 0x180074FF0
 * Callers:
 *     CsrpClientConnectToServer @ 0x180074A9C (CsrpClientConnectToServer.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 */

__int64 __fastcall CsrFreeCaptureBuffer(__int64 a1)
{
  __int64 result; // rax

  if ( !LdrpIsSecureProcess )
    return RtlFreeHeap(CsrPortHeap, 0, a1);
  return result;
}
