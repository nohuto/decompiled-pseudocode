/*
 * XREFs of sub_140545C94 @ 0x140545C94
 * Callers:
 *     sub_1403DE4F0 @ 0x1403DE4F0 (sub_1403DE4F0.c)
 *     sub_14054C1A4 @ 0x14054C1A4 (sub_14054C1A4.c)
 * Callees:
 *     sub_14039D8F0 @ 0x14039D8F0 (sub_14039D8F0.c)
 *     HvlInvokeHypercall @ 0x14039DF00 (HvlInvokeHypercall.c)
 *     sub_14039DF90 @ 0x14039DF90 (sub_14039DF90.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 sub_140545C94()
{
  unsigned int v0; // edi
  _QWORD *v1; // rbx
  _QWORD *v2; // rsi
  __m256i v4; // [rsp+20h] [rbp-E8h] BYREF
  __m256i v5; // [rsp+40h] [rbp-C8h] BYREF
  int v6; // [rsp+60h] [rbp-A8h]
  _BYTE v7[16]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v8[2064]; // [rsp+78h] [rbp-90h] BYREF

  v6 = 0;
  memset(&v5.m256i_u64[1], 0, 24);
  v5.m256i_i32[0] = 0;
  memset(&v4.m256i_u64[1], 0, 24);
  v0 = 0;
  v1 = sub_14039DF90((PHYSICAL_ADDRESS *)&v5.m256i_i64[1], 1, (__int64)v7, 8LL);
  v2 = sub_14039DF90((PHYSICAL_ADDRESS *)&v4.m256i_i64[1], 2, (__int64)v8, 1032LL);
  *(_DWORD *)v1 = 15;
  if ( !(unsigned __int16)HvlInvokeHypercall(123) )
    v0 = *(_DWORD *)v2;
  sub_14039D8F0((__int64)&v4.m256i_i64[1]);
  sub_14039D8F0((__int64)&v5.m256i_i64[1]);
  return v0;
}
