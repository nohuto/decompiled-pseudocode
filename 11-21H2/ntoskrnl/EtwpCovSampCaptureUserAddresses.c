/*
 * XREFs of EtwpCovSampCaptureUserAddresses @ 0x140883A50
 * Callers:
 *     EtwpCovSampCaptureApc @ 0x140635A00 (EtwpCovSampCaptureApc.c)
 *     EtwpCovSampCaptureSample @ 0x140636520 (EtwpCovSampCaptureSample.c)
 * Callees:
 *     EtwpCovSampCaptureBufferAddIP @ 0x140460BA4 (EtwpCovSampCaptureBufferAddIP.c)
 *     EtwpCovSampCaptureBufferGet @ 0x140460BDC (EtwpCovSampCaptureBufferGet.c)
 *     EtwpCovSampCaptureUserStack @ 0x140883ABA (EtwpCovSampCaptureUserStack.c)
 *     EtwpCovSampCaptureBufferMapAddressesAndQueue @ 0x1409EE8FC (EtwpCovSampCaptureBufferMapAddressesAndQueue.c)
 */

__int64 __fastcall EtwpCovSampCaptureUserAddresses(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
  __int64 v6; // rdi

  v4 = EtwpCovSampCaptureBufferGet(a1);
  v5 = 0;
  v6 = v4;
  if ( v4 )
  {
    EtwpCovSampCaptureBufferAddIP(v4, a2);
    EtwpCovSampCaptureUserStack();
    EtwpCovSampCaptureBufferMapAddressesAndQueue(a1, v6);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v5;
}
