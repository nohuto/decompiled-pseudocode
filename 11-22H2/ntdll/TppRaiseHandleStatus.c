/*
 * XREFs of TppRaiseHandleStatus @ 0x180125D20
 * Callers:
 *     TppSetupNextWait @ 0x18002FEE0 (TppSetupNextWait.c)
 *     TppJobpRundownJob @ 0x180050F50 (TppJobpRundownJob.c)
 *     TppWaitTimerExpiration @ 0x180085CD8 (TppWaitTimerExpiration.c)
 * Callees:
 *     RtlRaiseException @ 0x1800549A0 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 */

void __fastcall TppRaiseHandleStatus(int a1, unsigned __int64 a2, unsigned __int64 a3)
{
  void (__fastcall *v3)(PTP_CALLBACK_INSTANCE, _BYTE *, PTP_WAIT, unsigned int); // r9
  __int64 v4; // rax
  EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-59h] BYREF

  if ( a3 )
  {
    v3 = *(void (__fastcall **)(PTP_CALLBACK_INSTANCE, _BYTE *, PTP_WAIT, unsigned int))(a3 + 80);
    ExceptionRecord.NumberParameters = 5;
    if ( v3 == RtlpTpWaitCallback && (v4 = *(_QWORD *)(a3 + 88), *(_QWORD *)(v4 + 32)) )
      ExceptionRecord.ExceptionInformation[4] = *(_QWORD *)(v4 + 32);
    else
      ExceptionRecord.ExceptionInformation[4] = (unsigned __int64)v3;
  }
  else
  {
    ExceptionRecord.NumberParameters = 4;
  }
  ExceptionRecord.ExceptionRecord = 0LL;
  ExceptionRecord.ExceptionInformation[3] = 0LL;
  ExceptionRecord.ExceptionInformation[0] = a1;
  ExceptionRecord.ExceptionCode = -1073740022;
  ExceptionRecord.ExceptionInformation[1] = a2;
  ExceptionRecord.ExceptionInformation[2] = a3;
  ExceptionRecord.ExceptionFlags = 1;
  RtlRaiseException(&ExceptionRecord);
}
