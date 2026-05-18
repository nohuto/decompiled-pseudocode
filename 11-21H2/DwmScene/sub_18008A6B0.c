/*
 * XREFs of sub_18008A6B0 @ 0x18008A6B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000B4C0 @ 0x18000B4C0 (sub_18000B4C0.c)
 *     sub_18000C8D4 @ 0x18000C8D4 (sub_18000C8D4.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800122C0 @ 0x1800122C0 (sub_1800122C0.c)
 *     sub_180012520 @ 0x180012520 (sub_180012520.c)
 *     sub_1800126E8 @ 0x1800126E8 (sub_1800126E8.c)
 *     sub_180069460 @ 0x180069460 (sub_180069460.c)
 *     sub_180088A5C @ 0x180088A5C (sub_180088A5C.c)
 *     sub_180088B98 @ 0x180088B98 (sub_180088B98.c)
 *     sub_180088D8C @ 0x180088D8C (sub_180088D8C.c)
 *     sub_1800932CC @ 0x1800932CC (sub_1800932CC.c)
 *     sub_180093800 @ 0x180093800 (sub_180093800.c)
 *     sub_180093844 @ 0x180093844 (sub_180093844.c)
 *     sub_1800B6DE4 @ 0x1800B6DE4 (sub_1800B6DE4.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall sub_18008A6B0(_QWORD *a1, __int64 *a2)
{
  __int64 v4; // r8
  __int64 v5; // rdx
  signed __int32 v6; // eax
  signed __int32 v7; // ett
  __int64 v8; // rdx
  signed __int32 v9; // eax
  signed __int32 v10; // ett
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rsi
  __m128i v14; // xmm1
  __m128i v15; // xmm1
  _OWORD *v16; // rdi
  __int128 v18; // [rsp+30h] [rbp-D0h] BYREF
  char *v19; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v20; // [rsp+48h] [rbp-B8h]
  char *v21; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v22; // [rsp+60h] [rbp-A0h]
  __int128 v23; // [rsp+70h] [rbp-90h] BYREF
  __int128 v24; // [rsp+80h] [rbp-80h]
  char *v25; // [rsp+90h] [rbp-70h] BYREF
  char *v26; // [rsp+98h] [rbp-68h]
  char *v27; // [rsp+A0h] [rbp-60h]
  _QWORD v28[2]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v29[4]; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v30; // [rsp+D8h] [rbp-28h] BYREF
  char *v31[3]; // [rsp+E8h] [rbp-18h] BYREF
  char *v32[3]; // [rsp+100h] [rbp+0h] BYREF
  char *v33[3]; // [rsp+118h] [rbp+18h] BYREF
  char *v34[3]; // [rsp+130h] [rbp+30h] BYREF
  char *v35[3]; // [rsp+148h] [rbp+48h] BYREF
  _BYTE v36[48]; // [rsp+160h] [rbp+60h] BYREF

  v30 = 0LL;
  sub_18000C8D4((__int64)v36, 16LL, 3LL);
  v4 = *a2;
  v23 = 0LL;
  v5 = *(_QWORD *)(v4 + 64);
  if ( v5 )
  {
    v6 = *(_DWORD *)(v5 + 8);
    while ( v6 )
    {
      v7 = v6;
      v6 = _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 8), v6 + 1, v6);
      if ( v7 == v6 )
      {
        v23 = *(_OWORD *)(v4 + 56);
        break;
      }
    }
  }
  v18 = 0LL;
  v8 = *(_QWORD *)(v23 + 80);
  if ( v8 )
  {
    v9 = *(_DWORD *)(v8 + 8);
    while ( v9 )
    {
      v10 = v9;
      v9 = _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 8), v9 + 1, v9);
      if ( v10 == v9 )
      {
        v11 = *(_QWORD *)(v23 + 72);
        v18 = *(_OWORD *)(v23 + 72);
        goto LABEL_12;
      }
    }
  }
  v11 = v18;
LABEL_12:
  sub_180010910((__int64)&v23);
  sub_180012520(v11, (__int64)&v21);
  sub_180088B98(v11, (__int64)&v19);
  sub_1800B6DE4((unsigned int)&v21, (unsigned int)&v19, (_DWORD)a1 + 152, (unsigned int)&v30, (__int64)v36);
  v12 = a1[8];
  if ( v12 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
    v12 = a1[8];
  }
  v29[0] = a1[7];
  v29[1] = v12;
  sub_180069460(v29[0], v28, 9);
  sub_180010910((__int64)v29);
  if ( sub_1800122C0(v28) )
  {
    v13 = v28[0];
    sub_180093800(v28[0]);
    sub_180093800(v13);
    sub_180093800(v13);
    v14 = (__m128i)_mm_sub_ps(*(__m128 *)(a1[27] + 240LL), *(__m128 *)(a1[27] + 272LL));
    v29[2] = v14.m128i_i64[0];
    v29[3] = _mm_srli_si128(v14, 8).m128i_u64[0];
    sub_180093800(v13);
    v15 = (__m128i)_mm_sub_ps(*(__m128 *)(a1[27] + 256LL), *(__m128 *)(a1[27] + 272LL));
    *(_QWORD *)&v24 = v15.m128i_i64[0];
    *((_QWORD *)&v24 + 1) = _mm_srli_si128(v15, 8).m128i_u64[0];
    sub_180093800(v13);
    sub_180093800(v13);
    sub_180093800(v13);
    sub_180093800(v13);
    sub_180093800(v13);
    v24 = *(_OWORD *)(a1[27] + 336LL);
    sub_180093800(v13);
    sub_180088A5C((__int64 *)v35, a1[27] + 496LL, a1[27] + 544LL);
    sub_180093844(v13, &qword_1801F4F98, v35);
    sub_180088A5C((__int64 *)v34, a1[27] + 544LL, a1[27] + 592LL);
    sub_180093844(v13, &qword_1801F4FB8, v34);
    sub_180088A5C((__int64 *)v33, a1[27] + 448LL, a1[27] + 496LL);
    sub_180093844(v13, &qword_1801F5038, v33);
    sub_180088A5C((__int64 *)v32, a1[27] + 400LL, a1[27] + 448LL);
    sub_180093844(v13, &qword_1801F5018, v32);
    sub_180088A5C((__int64 *)v31, a1[27] + 352LL, a1[27] + 400LL);
    sub_180093844(v13, &qword_1801F4FF8, v31);
    v16 = (_OWORD *)a1[27];
    v25 = (char *)sub_180011088(0xC0uLL);
    v26 = v25;
    v27 = v25 + 192;
    v26 = (char *)sub_180088D8C(v16, v16 + 12, v25);
    sub_1800932CC(v13, &qword_1801F4FD8, &v25);
    if ( v25 )
      sub_180010884(v25, (v27 - v25) & 0xFFFFFFFFFFFFFFC0uLL);
    if ( v31[0] )
      sub_180010884(v31[0], (v31[2] - v31[0]) & 0xFFFFFFFFFFFFFFF0uLL);
    if ( v32[0] )
      sub_180010884(v32[0], (v32[2] - v32[0]) & 0xFFFFFFFFFFFFFFF0uLL);
    if ( v33[0] )
      sub_180010884(v33[0], (v33[2] - v33[0]) & 0xFFFFFFFFFFFFFFF0uLL);
    if ( v34[0] )
      sub_180010884(v34[0], (v34[2] - v34[0]) & 0xFFFFFFFFFFFFFFF0uLL);
    if ( v35[0] )
      sub_180010884(v35[0], (v35[2] - v35[0]) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  sub_180010910((__int64)v28);
  if ( v19 )
  {
    sub_1800126E8((__int64)v19, v20);
    sub_180010884(v19, (*((_QWORD *)&v20 + 1) - (_QWORD)v19) & 0xFFFFFFFFFFFFFFF0uLL);
    v19 = 0LL;
    v20 = 0LL;
  }
  if ( v21 )
  {
    sub_1800126E8((__int64)v21, v22);
    sub_180010884(v21, (*((_QWORD *)&v22 + 1) - (_QWORD)v21) & 0xFFFFFFFFFFFFFFF0uLL);
    v21 = 0LL;
    v22 = 0LL;
  }
  sub_180010910((__int64)&v18);
  sub_18000B4C0((__int64)v36, 16LL, 3LL);
  return sub_180010910((__int64)&v30);
}
