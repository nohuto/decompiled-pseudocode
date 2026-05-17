/*
 * XREFs of RtlpTpImpersonate @ 0x1800714A0
 * Callers:
 *     RtlpTpTimerCallback @ 0x180020130 (RtlpTpTimerCallback.c)
 *     RtlpTpWorkCallback @ 0x180070EB0 (RtlpTpWorkCallback.c)
 *     RtlpTpWaitCallback @ 0x18007F040 (RtlpTpWaitCallback.c)
 * Callees:
 *     RtlRaiseException @ 0x180032D00 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtSetInformationThread @ 0x1800A4210 (NtSetInformationThread.c)
 *     memset @ 0x1800AAE00 (memset.c)
 */

void __fastcall RtlpTpImpersonate(__int64 a1)
{
  unsigned int v1; // ebx
  int v2; // edi
  __int64 v3; // [rsp+20h] [rbp-C8h] BYREF
  EXCEPTION_RECORD ExceptionRecord; // [rsp+30h] [rbp-B8h] BYREF

  v3 = a1;
  v1 = 0;
  while ( 1 )
  {
    ++v1;
    v2 = NtSetInformationThread(-2LL, 5LL, &v3, 8LL);
    if ( v2 >= 0 )
      break;
    if ( v1 >= 2 )
    {
      memset(&ExceptionRecord.ExceptionFlags, 0, 0x94uLL);
      ExceptionRecord.ExceptionCode = v2;
      RtlRaiseException(&ExceptionRecord);
      return;
    }
  }
}
