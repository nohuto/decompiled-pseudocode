/*
 * XREFs of RtlIncrementCorrelationVector @ 0x18008C3C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetCorrelationVectorLastDotPosition @ 0x18008C4A4 (RtlpGetCorrelationVectorLastDotPosition.c)
 *     RtlpGetCorrelationVectorBufferLength @ 0x18008C4F0 (RtlpGetCorrelationVectorBufferLength.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     _snprintf_s @ 0x18009E590 (_snprintf_s.c)
 *     sscanf_s @ 0x18009F100 (sscanf_s.c)
 *     strcpy_s @ 0x18009F200 (strcpy_s.c)
 *     RtlValidateCorrelationVector @ 0x1801088F0 (RtlValidateCorrelationVector.c)
 */

__int64 __fastcall RtlIncrementCorrelationVector(__int64 a1, __int64 a2, __int64 a3)
{
  int CorrelationVectorBufferLength; // ebp
  int v5; // ebx
  int CorrelationVectorLastDotPosition; // eax
  int v7; // esi
  __int64 v8; // rdi
  int v9; // eax
  int v11; // [rsp+30h] [rbp-28h] BYREF
  char Buffer[16]; // [rsp+38h] [rbp-20h] BYREF

  v11 = 0;
  CorrelationVectorBufferLength = RtlpGetCorrelationVectorBufferLength(a1, a2, a3);
  v5 = RtlValidateCorrelationVector();
  if ( v5 >= 0 )
  {
    CorrelationVectorLastDotPosition = RtlpGetCorrelationVectorLastDotPosition(a1);
    v7 = CorrelationVectorLastDotPosition;
    if ( CorrelationVectorLastDotPosition >= 0
      && (v8 = CorrelationVectorLastDotPosition + 1 + a1, sscanf_s((const char *const)(v8 + 1), "%d", &v11) == 1)
      && (++v11, v9 = snprintf_s(Buffer, 0xCuLL, 0xCuLL, "%d", v11), v9 < CorrelationVectorBufferLength - v7 - 2) )
    {
      strcpy_s((char *)(v8 + 1), v9 + 1, Buffer);
    }
    else
    {
      return (unsigned int)-2147483643;
    }
  }
  return (unsigned int)v5;
}
