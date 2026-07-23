/*
 * XREFs of RaiseException @ 0x1403DD870
 * Callers:
 *     _raise_exc_ex @ 0x1403DD960 (_raise_exc_ex.c)
 * Callees:
 *     RtlRaiseException @ 0x14030D3B0 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memmove @ 0x140435100 (memmove.c)
 *     memset @ 0x140435400 (memset.c)
 */

void __cdecl RaiseException(
        DWORD dwExceptionCode,
        DWORD dwExceptionFlags,
        DWORD nNumberOfArguments,
        const ULONG_PTR *lpArguments)
{
  char v4; // di
  DWORD v8; // eax
  EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-C8h] BYREF

  v4 = dwExceptionFlags;
  memset(&ExceptionRecord.NumberParameters + 1, 0, 0x7CuLL);
  HIDWORD(ExceptionRecord.ExceptionRecord) = 0;
  ExceptionRecord.ExceptionAddress = RaiseException;
  ExceptionRecord.ExceptionCode = dwExceptionCode;
  *(_QWORD *)&ExceptionRecord.ExceptionFlags = v4 & 1;
  if ( lpArguments )
  {
    v8 = 15;
    if ( nNumberOfArguments <= 0xF )
      v8 = nNumberOfArguments;
    ExceptionRecord.NumberParameters = v8;
    if ( v8 )
      memmove(ExceptionRecord.ExceptionInformation, lpArguments, 8LL * v8);
  }
  else
  {
    ExceptionRecord.NumberParameters = 0;
  }
  RtlRaiseException(&ExceptionRecord);
}
