/*
 * XREFs of RtlDnsHostNameToComputerName @ 0x18008C940
 * Callers:
 *     <none>
 * Callees:
 *     RtlOemStringToUnicodeString @ 0x180058E70 (RtlOemStringToUnicodeString.c)
 *     RtlUpcaseUnicodeToOemN @ 0x18008A5E0 (RtlUpcaseUnicodeToOemN.c)
 *     RtlpDidUnicodeToOemWork @ 0x18008A640 (RtlpDidUnicodeToOemWork.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlDnsHostNameToComputerName(__int64 a1, __m128i *a2, char a3)
{
  __m128i v3; // xmm0
  unsigned int v5; // ebx
  unsigned int v7; // ecx
  unsigned __int16 v8; // dx
  __int64 result; // rax
  int v10; // eax
  unsigned __int16 v11; // [rsp+30h] [rbp-40h]
  __m128i v12; // [rsp+38h] [rbp-38h] BYREF
  unsigned __int16 v13[4]; // [rsp+48h] [rbp-28h] BYREF
  char *v14; // [rsp+50h] [rbp-20h]
  char v15; // [rsp+58h] [rbp-18h] BYREF

  v3 = *a2;
  v5 = 0;
  v7 = 0;
  v8 = _mm_cvtsi128_si32(*a2);
  v12 = v3;
  v12.m128i_i16[0] = v8;
  if ( v8 >> 1 )
  {
    while ( *(_WORD *)(v3.m128i_i64[1] + 2LL * v7) != 46 )
    {
      if ( ++v7 >= v8 >> 1 )
        goto LABEL_4;
    }
    v8 = 2 * v7;
    v12.m128i_i16[0] = 2 * v7;
  }
LABEL_4:
  if ( v8 < 2u )
    return 3221225762LL;
  result = RtlUpcaseUnicodeToOemN();
  if ( (int)result < 0 && (_DWORD)result != -2147483643 )
    return result;
  v14 = &v15;
  v13[1] = 16;
  v13[0] = v11;
  if ( !RtlpDidUnicodeToOemWork((__int64)v13, (__int64)&v12) )
    return 3221225762LL;
  v10 = RtlOemStringToUnicodeString(a1, v13, a3);
  if ( v10 < 0 )
    return (unsigned int)v10;
  return v5;
}
