/*
 * XREFs of sub_1403E5840 @ 0x1403E5840
 * Callers:
 *     sub_1403E5930 @ 0x1403E5930 (sub_1403E5930.c)
 * Callees:
 *     RtlRaiseException @ 0x140294A60 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void __fastcall sub_1403E5840(DWORD a1, char a2, unsigned int a3, const void *a4)
{
  DWORD v8; // eax
  EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-C8h] BYREF

  memset(&ExceptionRecord.NumberParameters + 1, 0, 0x7CuLL);
  HIDWORD(ExceptionRecord.ExceptionRecord) = 0;
  ExceptionRecord.ExceptionAddress = &sub_1403E5840;
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
  RtlRaiseException(&ExceptionRecord);
}
