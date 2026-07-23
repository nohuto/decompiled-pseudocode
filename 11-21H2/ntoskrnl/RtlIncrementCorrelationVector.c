/*
 * XREFs of RtlIncrementCorrelationVector @ 0x1409BB750
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _snprintf_s @ 0x1403E6530 (_snprintf_s.c)
 *     sscanf_s @ 0x1403E70A0 (sscanf_s.c)
 *     strcpy_s @ 0x1403E71A0 (strcpy_s.c)
 *     sub_1405EC2AC @ 0x1405EC2AC (sub_1405EC2AC.c)
 *     RtlValidateCorrelationVector @ 0x1409BB8C0 (RtlValidateCorrelationVector.c)
 *     sub_1409BBA8C @ 0x1409BBA8C (sub_1409BBA8C.c)
 */

DWORD __cdecl RtlIncrementCorrelationVector(PCORRELATION_VECTOR CorrelationVector)
{
  int v2; // ebp
  __int64 v3; // rdx
  int v4; // ebx
  int v5; // eax
  int v6; // esi
  CHAR *v7; // rdi
  int v8; // eax
  int v10; // [rsp+30h] [rbp-28h] BYREF
  char DstBuf[16]; // [rsp+38h] [rbp-20h] BYREF

  v10 = 0;
  v2 = sub_1409BBA8C(CorrelationVector);
  v4 = RtlValidateCorrelationVector(CorrelationVector);
  if ( v4 >= 0 )
  {
    v5 = sub_1405EC2AC((__int64)CorrelationVector, v3);
    v6 = v5;
    if ( v5 >= 0
      && (v7 = &CorrelationVector->Vector[v5], sscanf_s(v7 + 1, "%d", &v10) == 1)
      && (++v10, v8 = snprintf_s(DstBuf, 0xCuLL, 0xCuLL, "%d", v10), v8 < v2 - v6 - 2) )
    {
      strcpy_s(v7 + 1, v8 + 1, DstBuf);
    }
    else
    {
      return -2147483643;
    }
  }
  return v4;
}
