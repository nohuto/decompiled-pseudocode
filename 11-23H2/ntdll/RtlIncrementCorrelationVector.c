/*
 * XREFs of RtlIncrementCorrelationVector @ 0x180109A60
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     _snprintf_s @ 0x180099F10 (_snprintf_s.c)
 *     sscanf_s @ 0x18009AAA0 (sscanf_s.c)
 *     strcpy_s @ 0x18009AB90 (strcpy_s.c)
 *     RtlValidateCorrelationVector @ 0x180109BE0 (RtlValidateCorrelationVector.c)
 *     RtlpGetCorrelationVectorBufferLength @ 0x180109DAC (RtlpGetCorrelationVectorBufferLength.c)
 *     RtlpGetCorrelationVectorLastDotPosition @ 0x180109E14 (RtlpGetCorrelationVectorLastDotPosition.c)
 */

DWORD __cdecl RtlIncrementCorrelationVector(PCORRELATION_VECTOR CorrelationVector)
{
  int CorrelationVectorBufferLength; // ebp
  PCORRELATION_VECTOR v3; // rcx
  int v4; // ebx
  int CorrelationVectorLastDotPosition; // eax
  int v6; // esi
  CHAR *v7; // rdi
  int v8; // eax
  int v10; // [rsp+30h] [rbp-28h] BYREF
  char Buffer[16]; // [rsp+38h] [rbp-20h] BYREF

  v10 = 0;
  CorrelationVectorBufferLength = RtlpGetCorrelationVectorBufferLength();
  v4 = RtlValidateCorrelationVector(v3);
  if ( v4 >= 0 )
  {
    CorrelationVectorLastDotPosition = RtlpGetCorrelationVectorLastDotPosition(CorrelationVector);
    v6 = CorrelationVectorLastDotPosition;
    if ( CorrelationVectorLastDotPosition >= 0
      && (v7 = &CorrelationVector->Vector[CorrelationVectorLastDotPosition], sscanf_s(v7 + 1, "%d", &v10) == 1)
      && (++v10, v8 = snprintf_s(Buffer, 0xCuLL, 0xCuLL, "%d", v10), v8 < CorrelationVectorBufferLength - v6 - 2) )
    {
      strcpy_s(v7 + 1, v8 + 1, Buffer);
    }
    else
    {
      return -2147483643;
    }
  }
  return v4;
}
