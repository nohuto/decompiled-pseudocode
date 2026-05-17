/*
 * XREFs of RtlDnsHostNameToComputerName @ 0x18000B300
 * Callers:
 *     <none>
 * Callees:
 *     RtlOemStringToUnicodeString @ 0x18000C250 (RtlOemStringToUnicodeString.c)
 *     RtlpDidUnicodeToOemWork @ 0x18000C458 (RtlpDidUnicodeToOemWork.c)
 *     RtlUpcaseUnicodeToOemN @ 0x18000C510 (RtlUpcaseUnicodeToOemN.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 */

__int64 __fastcall RtlDnsHostNameToComputerName(__int64 a1, __m128i *a2, char a3)
{
  __m128i v3; // xmm0
  unsigned int v5; // ebx
  unsigned int v7; // ecx
  unsigned __int16 v8; // dx
  __int64 result; // rax
  __int64 v10; // r8
  int v11; // eax
  __int16 v12; // [rsp+30h] [rbp-40h] BYREF
  __m128i v13; // [rsp+38h] [rbp-38h] BYREF
  _WORD v14[4]; // [rsp+48h] [rbp-28h] BYREF
  _BYTE *v15; // [rsp+50h] [rbp-20h]
  _BYTE v16[16]; // [rsp+58h] [rbp-18h] BYREF

  v3 = *a2;
  v5 = 0;
  v7 = 0;
  v8 = _mm_cvtsi128_si32(*a2);
  v13 = v3;
  v13.m128i_i16[0] = v8;
  if ( v8 >> 1 )
  {
    while ( *(_WORD *)(v3.m128i_i64[1] + 2LL * v7) != 46 )
    {
      if ( ++v7 >= v8 >> 1 )
        goto LABEL_6;
    }
    v8 = 2 * v7;
    v13.m128i_i16[0] = 2 * v7;
  }
LABEL_6:
  if ( v8 < 2u )
    return 3221225762LL;
  result = RtlUpcaseUnicodeToOemN((unsigned int)v16, 15, (unsigned int)&v12, v3.m128i_i32[2], v8);
  if ( (int)result < 0 && (_DWORD)result != -2147483643 )
    return result;
  v15 = v16;
  v14[1] = 16;
  v14[0] = v12;
  if ( !(unsigned __int8)RtlpDidUnicodeToOemWork(v14, &v13) )
    return 3221225762LL;
  LOBYTE(v10) = a3;
  v11 = RtlOemStringToUnicodeString(a1, v14, v10);
  if ( v11 < 0 )
    return (unsigned int)v11;
  return v5;
}
