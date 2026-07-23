/*
 * XREFs of RtlIncrementCorrelationVector @ 0x180108630
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     _snprintf_s @ 0x180099710 (_snprintf_s.c)
 *     sscanf_s @ 0x18009A2A0 (sscanf_s.c)
 *     strcpy_s @ 0x18009A390 (strcpy_s.c)
 *     RtlpGetCorrelationVectorBufferLength @ 0x180108994 (RtlpGetCorrelationVectorBufferLength.c)
 */

DWORD __cdecl RtlIncrementCorrelationVector(PCORRELATION_VECTOR CorrelationVector)
{
  __int64 v1; // rdx
  DWORD v2; // ebx
  int CorrelationVectorBufferLength; // ebp
  int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // eax
  __int64 v9; // r8
  int v10; // r9d
  __int64 v11; // r10
  __int64 v12; // rax
  char v13; // dl
  int v14; // ecx
  __int64 v15; // rsi
  int v16; // eax
  int v18; // [rsp+30h] [rbp-28h] BYREF
  char Buffer[16]; // [rsp+38h] [rbp-20h] BYREF

  v2 = 0;
  v18 = 0;
  CorrelationVectorBufferLength = RtlpGetCorrelationVectorBufferLength(CorrelationVector, v1, CorrelationVector);
  v4 = -1;
  v8 = RtlpGetCorrelationVectorBufferLength(v6, v5, v7);
  v11 = v8;
  if ( v8 <= 0 )
    return -2147483643;
  v12 = 0LL;
  do
  {
    v13 = *(_BYTE *)(v9 + v12 + 1);
    v14 = v10;
    if ( !v13 )
      break;
    ++v10;
    ++v12;
    if ( v13 != 46 )
      v14 = v4;
    v4 = v14;
  }
  while ( v12 < v11 );
  if ( v4 < 0 )
    return -2147483643;
  v15 = v9 + v4 + 1;
  if ( sscanf_s((const char *const)(v15 + 1), "%d", &v18) != 1 )
    return -2147483643;
  v16 = snprintf_s(Buffer, 0xCuLL, 0xCuLL, "%d", ++v18);
  if ( v16 >= CorrelationVectorBufferLength - v4 - 2 )
    return -2147483643;
  strcpy_s((char *)(v15 + 1), v16 + 1, Buffer);
  return v2;
}
