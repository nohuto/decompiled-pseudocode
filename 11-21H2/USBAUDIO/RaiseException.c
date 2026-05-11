/*
 * XREFs of RaiseException @ 0x1C0018540
 * Callers:
 *     _raise_exc_ex @ 0x1C0018630 (_raise_exc_ex.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001010 (__security_check_cookie.c)
 *     RtlRaiseException_0 @ 0x1C00189EA (RtlRaiseException_0.c)
 *     memmove @ 0x1C0019680 (memmove.c)
 *     memset @ 0x1C0019940 (memset.c)
 */

void __fastcall RaiseException(DWORD a1, char a2, unsigned int a3, const void *a4)
{
  DWORD v8; // eax
  _EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-C8h] BYREF

  memset(&ExceptionRecord.NumberParameters + 1, 0, 0x7CuLL);
  HIDWORD(ExceptionRecord.ExceptionRecord) = 0;
  ExceptionRecord.ExceptionAddress = &RaiseException;
  ExceptionRecord.ExceptionCode = a1;
  *(_QWORD *)&ExceptionRecord.ExceptionFlags = a2 & 1;
  if ( a4 )
  {
    v8 = 15;
    if ( a3 <= 0xF )
      v8 = a3;
    ExceptionRecord.NumberParameters = v8;
    if ( v8 )
      memmove(ExceptionRecord.ExceptionInformation, a4, 8LL * v8);
  }
  else
  {
    ExceptionRecord.NumberParameters = 0;
  }
  RtlRaiseException_0(&ExceptionRecord);
}
