/*
 * XREFs of sub_18003B3FC @ 0x18003B3FC
 * Callers:
 *     sub_1800362B0 @ 0x1800362B0 (sub_1800362B0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18001FB6C @ 0x18001FB6C (sub_18001FB6C.c)
 *     sub_180026A18 @ 0x180026A18 (sub_180026A18.c)
 *     sub_18003372C @ 0x18003372C (sub_18003372C.c)
 *     sub_18003684C @ 0x18003684C (sub_18003684C.c)
 *     sub_1800B24C4 @ 0x1800B24C4 (sub_1800B24C4.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18003B3FC(__int64 a1)
{
  __int64 v2; // rsi
  _DWORD *v3; // rdi
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // rax
  __int64 v6; // r8
  float v7; // xmm6_4
  __int64 v8; // rax
  float v9; // xmm0_4
  float v10; // xmm6_4
  __int64 v11; // r8
  float v12; // xmm0_4
  float v13; // xmm0_4
  _QWORD v15[2]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v16[8]; // [rsp+30h] [rbp-48h] BYREF
  char *v17[3]; // [rsp+38h] [rbp-40h] BYREF
  unsigned __int64 v18; // [rsp+50h] [rbp-28h]

  sub_18003684C(a1, v15);
  v2 = v15[0];
  v3 = (_DWORD *)sub_1800B24C4(v15[0], v16);
  perf_frequency = Query_perf_frequency();
  perf_counter = Query_perf_counter();
  v7 = sub_180026A18(
         1000000000 * (perf_counter % perf_frequency) / perf_frequency
       + 1000000000 * (perf_counter / perf_frequency)
       - *v3);
  v8 = *(_QWORD *)(v2 + 280);
  if ( *(_QWORD *)(v2 + 272) == v8 )
    v9 = -3.4028235e38;
  else
    v9 = *(float *)(v8 - 4);
  v10 = v7 - v9;
  sub_18001FB6C((__int64 *)v17, L"CPU", v6);
  sub_18003372C((__int64 *)(a1 + 1392), (__int64 *)v17, v11);
  if ( v18 >= 8 )
    sub_180010884(v17[0], 2 * v18 + 2);
  if ( v10 > 0.0 )
  {
    v12 = *(float *)(a1 + 1368);
    if ( v10 > v12 )
      v12 = v10;
    *(float *)(a1 + 1368) = v12;
    v13 = *(float *)(a1 + 1372);
    if ( v13 > v10 )
      v13 = v10;
    *(float *)(a1 + 1372) = v13;
    *(float *)(a1 + 1376) = v10 + *(float *)(a1 + 1376);
    ++*(_QWORD *)(a1 + 1384);
  }
  return sub_180010910((__int64)v15);
}
