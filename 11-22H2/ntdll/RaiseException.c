/*
 * XREFs of RaiseException @ 0x180097410
 * Callers:
 *     _raise_exc_ex @ 0x1800978E4 (_raise_exc_ex.c)
 * Callees:
 *     RtlRaiseException @ 0x1800549A0 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 */

void __stdcall RaiseException(
        DWORD dwExceptionCode,
        DWORD dwExceptionFlags,
        DWORD nNumberOfArguments,
        const ULONG_PTR *lpArguments)
{
  DWORD v4; // eax
  EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF

  HIDWORD(ExceptionRecord.ExceptionRecord) = 0;
  ExceptionRecord.ExceptionCode = dwExceptionCode;
  *(_QWORD *)&ExceptionRecord.ExceptionFlags = dwExceptionFlags & 1;
  ExceptionRecord.ExceptionAddress = RaiseException;
  if ( lpArguments )
  {
    v4 = 15;
    if ( nNumberOfArguments <= 0xF )
      v4 = nNumberOfArguments;
    ExceptionRecord.NumberParameters = v4;
    if ( v4 )
      memmove(ExceptionRecord.ExceptionInformation, lpArguments, 8LL * v4);
  }
  else
  {
    ExceptionRecord.NumberParameters = 0;
  }
  RtlRaiseException(&ExceptionRecord);
}
