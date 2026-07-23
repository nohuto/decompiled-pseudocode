/*
 * XREFs of sub_140546200 @ 0x140546200
 * Callers:
 *     <none>
 * Callees:
 *     sub_14039D8F0 @ 0x14039D8F0 (sub_14039D8F0.c)
 *     HvlInvokeHypercall @ 0x14039DF00 (HvlInvokeHypercall.c)
 *     sub_14039DF90 @ 0x14039DF90 (sub_14039DF90.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14054CA70 @ 0x14054CA70 (sub_14054CA70.c)
 */

__int64 __fastcall sub_140546200(_BYTE *a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rsi
  unsigned __int16 v4; // bx
  __m256i v6; // [rsp+20h] [rbp-E8h] BYREF
  __m256i v7; // [rsp+40h] [rbp-C8h] BYREF
  int v8; // [rsp+60h] [rbp-A8h]
  _BYTE v9[16]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v10[2064]; // [rsp+78h] [rbp-90h] BYREF

  v8 = 0;
  v7.m256i_i32[0] = 0;
  memset(&v7.m256i_u64[1], 0, 24);
  memset(&v6.m256i_u64[1], 0, 24);
  v2 = sub_14039DF90((PHYSICAL_ADDRESS *)&v7.m256i_i64[1], 1, (__int64)v9, 8LL);
  v3 = sub_14039DF90((PHYSICAL_ADDRESS *)&v6.m256i_i64[1], 2, (__int64)v10, 1032LL);
  *v2 = 0LL;
  *(_DWORD *)v2 = 20;
  v4 = HvlInvokeHypercall(123);
  if ( !v4 )
    *a1 = *(_BYTE *)v3;
  sub_14039D8F0((__int64)&v6.m256i_i64[1]);
  sub_14039D8F0((__int64)&v7.m256i_i64[1]);
  return sub_14054CA70(v4);
}
