/*
 * XREFs of CsrFreeCaptureBuffer @ 0x180074980
 * Callers:
 *     CsrpClientConnectToServer @ 0x18007442C (CsrpClientConnectToServer.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 */

__int64 __fastcall CsrFreeCaptureBuffer(__int64 a1)
{
  __int64 result; // rax

  if ( !LdrpIsSecureProcess )
    return RtlFreeHeap(CsrPortHeap, 0, a1);
  return result;
}
