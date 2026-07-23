/*
 * XREFs of sub_14070EF5C @ 0x14070EF5C
 * Callers:
 *     sub_14070BD10 @ 0x14070BD10 (sub_14070BD10.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1406C48C8 @ 0x1406C48C8 (sub_1406C48C8.c)
 *     sub_14070F040 @ 0x14070F040 (sub_14070F040.c)
 */

__int64 __fastcall sub_14070EF5C(__int64 a1, __m128i *a2)
{
  __int64 result; // rax
  __m128i v4; // xmm2
  __int64 v5; // xmm3_8
  __m128i v6; // [rsp+20h] [rbp-48h] BYREF
  __int64 v7; // [rsp+30h] [rbp-38h]
  __m128i v8; // [rsp+40h] [rbp-28h] BYREF
  __int64 v9; // [rsp+50h] [rbp-18h]

  v8 = 0LL;
  v9 = 0LL;
  result = sub_14070F040(a1, L"MitigationOptions", &v8);
  if ( (int)result >= 0 )
  {
    v4 = v8;
    v5 = v9;
    v6 = v8;
    v7 = v9;
    result = sub_1406C48C8(&v6, 1);
    if ( (int)result >= 0 )
    {
      *a2 = v4;
      a2[1].m128i_i64[0] = v5;
    }
  }
  return result;
}
