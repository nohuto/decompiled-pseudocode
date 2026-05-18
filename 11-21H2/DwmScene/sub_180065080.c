/*
 * XREFs of sub_180065080 @ 0x180065080
 * Callers:
 *     sub_180064450 @ 0x180064450 (sub_180064450.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180037388 @ 0x180037388 (sub_180037388.c)
 *     sub_180057DD4 @ 0x180057DD4 (sub_180057DD4.c)
 *     sub_180057E0C @ 0x180057E0C (sub_180057E0C.c)
 *     sub_180057E58 @ 0x180057E58 (sub_180057E58.c)
 *     sub_180063D14 @ 0x180063D14 (sub_180063D14.c)
 *     sub_18008E70C @ 0x18008E70C (sub_18008E70C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
char __fastcall sub_180065080(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  char v6; // r12
  char v7; // al
  char v8; // r15
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // rax
  __m128 v12; // xmm0
  __m128 v13; // xmm1
  __m128 v14; // xmm4
  __m128 v15; // xmm5
  __m128 v16; // xmm0
  __m128 v17; // xmm3
  __m128i v18; // xmm1
  _QWORD v20[2]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v21[2]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v22[2]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v23[2]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v24[16]; // [rsp+60h] [rbp-A0h] BYREF
  __m128 v25; // [rsp+70h] [rbp-90h]
  __m128 v26; // [rsp+80h] [rbp-80h]
  __m128 v27; // [rsp+90h] [rbp-70h]
  __m128 v28; // [rsp+A0h] [rbp-60h]
  __m128 v29; // [rsp+B0h] [rbp-50h]

  if ( *(_DWORD *)(a1 + 172) )
  {
    v4 = *(_QWORD *)(a1 + 160);
    if ( v4 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
      v4 = *(_QWORD *)(a1 + 160);
    }
    v5 = *(_QWORD *)(a1 + 152);
    v23[0] = v5;
    v23[1] = v4;
    (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v5 + 48LL))(v5, v24);
    v6 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v5 + 72LL))(
           v5,
           a2,
           *(unsigned int *)(a1 + 172));
    v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v5 + 72LL))(v5, a2, 3LL);
    v8 = v7;
    if ( v6 || v7 )
    {
      v9 = sub_18008E70C(a1);
      v10 = sub_180037388(v9);
      if ( *(_QWORD *)(a1 + 200) && v6 )
      {
        (*(void (__fastcall **)(__int64, _QWORD *, _QWORD))(*(_QWORD *)v5 + 56LL))(v5, v21, *(unsigned int *)(a1 + 172));
        (*(void (__fastcall **)(__int64, _QWORD *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, v20, *(unsigned int *)(a1 + 172));
        sub_180057E0C(v10, a1 + 184, v21);
        sub_180057E58(v10, a1 + 184, v20);
        sub_180010910((__int64)v20);
        sub_180010910((__int64)v21);
      }
      if ( *(_QWORD *)(a1 + 232) && v8 )
      {
        (*(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)v5 + 56LL))(v5, v22, 3LL);
        sub_180057E0C(v10, a1 + 216, v22);
        sub_180010910((__int64)v22);
      }
      if ( *(_QWORD *)(a1 + 264) )
      {
        v11 = sub_180063D14(a1, 2, 0);
        v29 = *(__m128 *)v11;
        v12 = *(__m128 *)(v11 + 16);
        v13 = *(__m128 *)(v11 + 48);
        v14 = _mm_shuffle_ps(v29, v12, 68);
        v15 = _mm_shuffle_ps(v29, v12, 238);
        v16 = _mm_shuffle_ps(*(__m128 *)(v11 + 32), v13, 68);
        v17 = _mm_shuffle_ps(*(__m128 *)(v11 + 32), v13, 238);
        v18 = (__m128i)_mm_shuffle_ps(v14, v16, 136);
        v29.m128_u64[0] = v18.m128i_i64[0];
        v29.m128_u64[1] = _mm_srli_si128(v18, 8).m128i_u64[0];
        v25 = v29;
        v26 = _mm_shuffle_ps(v14, v16, 221);
        v27 = _mm_shuffle_ps(v15, v17, 136);
        v28 = _mm_shuffle_ps(v15, v17, 221);
        sub_180057DD4(v10);
      }
    }
    sub_180010910((__int64)v24);
    sub_180010910((__int64)v23);
  }
  return 1;
}
