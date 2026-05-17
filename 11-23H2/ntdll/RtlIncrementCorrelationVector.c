/*
 * XREFs of RtlIncrementCorrelationVector @ 0x180109A90
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     _snprintf_s @ 0x180099F10 (_snprintf_s.c)
 *     sscanf_s @ 0x18009AAA0 (sscanf_s.c)
 *     strcpy_s @ 0x18009AB90 (strcpy_s.c)
 *     RtlValidateCorrelationVector @ 0x180109C10 (RtlValidateCorrelationVector.c)
 *     RtlpGetCorrelationVectorBufferLength @ 0x180109DDC (RtlpGetCorrelationVectorBufferLength.c)
 *     RtlpGetCorrelationVectorLastDotPosition @ 0x180109E44 (RtlpGetCorrelationVectorLastDotPosition.c)
 */

__int64 __fastcall RtlIncrementCorrelationVector(__int64 a1)
{
  int CorrelationVectorBufferLength; // ebp
  int v3; // ebx
  int CorrelationVectorLastDotPosition; // eax
  int v5; // esi
  __int64 v6; // rdi
  int v7; // eax
  int v9; // [rsp+30h] [rbp-28h] BYREF
  char Buffer[16]; // [rsp+38h] [rbp-20h] BYREF

  v9 = 0;
  CorrelationVectorBufferLength = RtlpGetCorrelationVectorBufferLength();
  v3 = RtlValidateCorrelationVector();
  if ( v3 >= 0 )
  {
    CorrelationVectorLastDotPosition = RtlpGetCorrelationVectorLastDotPosition(a1);
    v5 = CorrelationVectorLastDotPosition;
    if ( CorrelationVectorLastDotPosition >= 0
      && (v6 = CorrelationVectorLastDotPosition + 1 + a1, sscanf_s((const char *const)(v6 + 1), "%d", &v9) == 1)
      && (++v9, v7 = snprintf_s(Buffer, 0xCuLL, 0xCuLL, "%d", v9), v7 < CorrelationVectorBufferLength - v5 - 2) )
    {
      strcpy_s((char *)(v6 + 1), v7 + 1, Buffer);
    }
    else
    {
      return (unsigned int)-2147483643;
    }
  }
  return (unsigned int)v3;
}
