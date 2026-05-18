/*
 * XREFs of sub_18009AD20 @ 0x18009AD20
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000B4B0 @ 0x18000B4B0 (sub_18000B4B0.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_180026618 @ 0x180026618 (sub_180026618.c)
 *     sub_180026B2C @ 0x180026B2C (sub_180026B2C.c)
 *     sub_180034094 @ 0x180034094 (sub_180034094.c)
 *     sub_180034870 @ 0x180034870 (sub_180034870.c)
 *     sub_1800446A0 @ 0x1800446A0 (sub_1800446A0.c)
 *     sub_1800446B0 @ 0x1800446B0 (sub_1800446B0.c)
 *     sub_1800446C0 @ 0x1800446C0 (sub_1800446C0.c)
 *     sub_180044770 @ 0x180044770 (sub_180044770.c)
 *     sub_1800448C0 @ 0x1800448C0 (sub_1800448C0.c)
 *     sub_1800448D0 @ 0x1800448D0 (sub_1800448D0.c)
 *     sub_1800448F8 @ 0x1800448F8 (sub_1800448F8.c)
 *     sub_1800449A4 @ 0x1800449A4 (sub_1800449A4.c)
 *     sub_180044AE8 @ 0x180044AE8 (sub_180044AE8.c)
 *     sub_180044B1C @ 0x180044B1C (sub_180044B1C.c)
 *     sub_18004FBD8 @ 0x18004FBD8 (sub_18004FBD8.c)
 *     sub_180063D24 @ 0x180063D24 (sub_180063D24.c)
 *     sub_180067E40 @ 0x180067E40 (sub_180067E40.c)
 *     sub_180070348 @ 0x180070348 (sub_180070348.c)
 *     sub_180098B1C @ 0x180098B1C (sub_180098B1C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18009AD20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  char v7; // r15
  int v8; // ebx
  __int64 v9; // rcx
  int v10; // edx
  __int64 v11; // r12
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  char v15; // al
  __int16 v16; // cx
  char v17; // r14
  char v18; // r13
  char v19; // cl
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 *v22; // rax
  __int64 v23; // rbx
  int v24; // ebx
  _DWORD *v25; // rax
  __int32 v26; // xmm1_4
  unsigned int v27; // edx
  __int64 v28; // rax
  unsigned int v29; // edx
  __int64 v30; // rax
  unsigned int v31; // edx
  __int64 v32; // rax
  __m128i *p_si128; // rax
  unsigned int v34; // edx
  __int64 v35; // rax
  unsigned int v36; // edx
  __int64 v37; // rax
  __m128 v39; // [rsp+20h] [rbp-60h] BYREF
  __m128i si128; // [rsp+30h] [rbp-50h] BYREF
  __int64 v41; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v42[4]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v43; // [rsp+68h] [rbp-18h] BYREF

  v39.m128_u64[0] = a4;
  v7 = *(_BYTE *)(a3 + 162);
  v8 = 1;
  switch ( v7 )
  {
    case 0:
      sub_1800448D0(a2);
      v10 = 0;
LABEL_10:
      sub_1800448C0(v9, v10);
      break;
    case 2:
      v10 = 1;
LABEL_9:
      v9 = a2;
      goto LABEL_10;
    case 3:
      v10 = 3;
      goto LABEL_9;
    case 4:
      v10 = 2;
      goto LABEL_9;
  }
  *(_WORD *)(a2 + 112) = *(_WORD *)(a3 + 160);
  v41 = a4;
  v11 = sub_180026B2C(a4);
  v13 = sub_180026618(v12);
  v14 = sub_180034094(v13, 1);
  v15 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v14 + 64LL))(v14, &unk_1801D48C8, 0LL);
  v16 = *(_WORD *)(a2 + 112);
  if ( !v15 || (v16 & 0x10) == 0 )
  {
    v17 = 0;
    goto LABEL_16;
  }
  v17 = 1;
  if ( (v16 & 0x20) != 0 )
  {
LABEL_16:
    v18 = 1;
    goto LABEL_17;
  }
  v18 = 0;
LABEL_17:
  v19 = v16 & 1;
  if ( !v17 || !v19 )
    v8 = 0;
  sub_1800446C0(a2);
  if ( !v8 )
  {
    *(_WORD *)(a2 + 112) &= ~1u;
    *(_WORD *)(a2 + 112) |= 2u;
  }
  v20 = sub_180026618(v39.m128_i64[0]);
  v21 = sub_180034870(v20);
  sub_180017648(v42, (__int64)&unk_1801D7E68);
  v39.m128_u64[0] = (unsigned __int64)v42;
  v39.m128_u64[1] = (unsigned __int64)&v43;
  v22 = sub_180063D24(si128.m128i_i64, (__m128i *)&v39);
  v23 = sub_18004FBD8(v21, (void **)v22);
  sub_18000B4B0((__int64)v42, 32LL, 1LL);
  sub_180044770(a2, v23, v17);
  v24 = *(_DWORD *)(a3 + 4);
  if ( (v24 & 1) != 0 )
  {
    v39.m128_i32[0] = *(_DWORD *)(a3 + 16);
    v39 = _mm_mul_ps(
            _mm_add_ps(
              _mm_cvtepi32_ps((__m128i)_mm_xor_ps(
                                         _mm_and_ps(
                                           _mm_shuffle_ps((__m128)v39.m128_u32[0], (__m128)v39.m128_u32[0], 0),
                                           (__m128)xmmword_180106380),
                                         (__m128)xmmword_1801063E0)),
              (__m128)xmmword_1801063D0),
            (__m128)xmmword_180115390);
    if ( v18 )
    {
      v25 = sub_180067E40((int *)&v39, &si128);
      v39.m128_u64[0] = *(_QWORD *)v25;
      v39.m128_i32[2] = v25[2];
      v26 = v25[3];
      v39.m128_i32[3] = v26;
    }
    else
    {
      v26 = v39.m128_i32[3];
    }
    if ( !v17 && *(float *)&v26 < 1.0 && !v7 )
      sub_1800448C0(a2, 3);
    v27 = *(_DWORD *)(a3 + 20);
    if ( v27 )
    {
      v28 = sub_180070348(v11, v27, a5);
      sub_1800449A4(a2, (__int64)&unk_1801D6D88, v28, v11);
      sub_1800446A0(a2);
      sub_180098B1C(&v41, (__int64)&si128);
      sub_180044AE8(a2, (__int64)&unk_1801D6D88, &si128);
      if ( v18 )
      {
        v39.m128_u64[0] = 0x3F8000003F800000LL;
        v39.m128_i32[2] = 1065353216;
      }
      if ( si128.m128i_i64[1] )
        sub_180010530(si128.m128i_i64[1]);
    }
    sub_1800446B0(a2);
  }
  if ( (v24 & 2) != 0 )
  {
    v39.m128_i32[0] = *(_DWORD *)(a3 + 36);
    v39 = _mm_mul_ps(
            _mm_add_ps(
              _mm_cvtepi32_ps((__m128i)_mm_xor_ps(
                                         _mm_and_ps(
                                           _mm_shuffle_ps((__m128)v39.m128_u32[0], (__m128)v39.m128_u32[0], 0),
                                           (__m128)xmmword_180106380),
                                         (__m128)xmmword_1801063E0)),
              (__m128)xmmword_1801063D0),
            (__m128)xmmword_180115390);
    if ( v18 )
      v39 = *(__m128 *)sub_180067E40((int *)&v39, &si128);
    v29 = *(_DWORD *)(a3 + 40);
    if ( v29 )
    {
      v30 = sub_180070348(v11, v29, a5);
      sub_1800449A4(a2, (__int64)&unk_1801D6DC8, v30, v11);
      sub_1800446A0(a2);
      sub_180098B1C(&v41, (__int64)&si128);
      sub_180044AE8(a2, (__int64)&unk_1801D6DC8, &si128);
      if ( v18 )
        v39 = (__m128)xmmword_18019BA40;
      if ( si128.m128i_i64[1] )
        sub_180010530(si128.m128i_i64[1]);
    }
    sub_1800446B0(a2);
  }
  if ( (v24 & 4) != 0 )
  {
    v31 = *(_DWORD *)(a3 + 84);
    if ( v31 )
    {
      v32 = sub_180070348(v11, v31, a5);
      sub_1800449A4(a2, (__int64)&unk_1801D6DA8, v32, v11);
      sub_1800446A0(a2);
      sub_180098B1C(&v41, (__int64)&si128);
      sub_180044AE8(a2, (__int64)&unk_1801D6DA8, &si128);
      if ( si128.m128i_i64[1] )
        sub_180010530(si128.m128i_i64[1]);
    }
    if ( v17 )
    {
      v39.m128_i32[0] = *(_DWORD *)(a3 + 96);
      v39.m128_i32[1] = v39.m128_i32[0];
      v39.m128_u64[1] = 0x3F8000003F800000LL;
      p_si128 = (__m128i *)&v39;
    }
    else
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_18019BA40);
      p_si128 = &si128;
    }
    si128 = *p_si128;
    sub_180044B1C(a2);
  }
  if ( (v24 & 0x10) != 0 )
  {
    v34 = *(_DWORD *)(a3 + 68);
    if ( v34 )
    {
      v35 = sub_180070348(v11, v34, a5);
      sub_1800449A4(a2, (__int64)&unk_1801D6DE8, v35, v11);
      sub_1800446A0(a2);
      sub_180098B1C(&v41, (__int64)&si128);
      sub_180044AE8(a2, (__int64)&unk_1801D6DE8, &si128);
      if ( si128.m128i_i64[1] )
        sub_180010530(si128.m128i_i64[1]);
    }
    if ( v17 )
    {
      v39.m128_i32[0] = *(_DWORD *)(a3 + 60);
      v39 = _mm_mul_ps(
              _mm_add_ps(
                _mm_cvtepi32_ps((__m128i)_mm_xor_ps(
                                           _mm_and_ps(
                                             _mm_shuffle_ps((__m128)v39.m128_u32[0], (__m128)v39.m128_u32[0], 0),
                                             (__m128)xmmword_180106380),
                                           (__m128)xmmword_1801063E0)),
                (__m128)xmmword_1801063D0),
              (__m128)xmmword_180115390);
      if ( v18 )
        v39 = *(__m128 *)sub_180067E40((int *)&v39, &si128);
      sub_1800446B0(a2);
    }
  }
  if ( (v24 & 0x20) != 0 )
  {
    v36 = *(_DWORD *)(a3 + 120);
    if ( v36 )
    {
      v37 = sub_180070348(v11, v36, a5);
      sub_1800449A4(a2, (__int64)&unk_1801D6E28, v37, v11);
      sub_1800446A0(a2);
      sub_180098B1C(&v41, (__int64)&si128);
      sub_180044AE8(a2, (__int64)&unk_1801D6E28, &si128);
      if ( si128.m128i_i64[1] )
        sub_180010530(si128.m128i_i64[1]);
    }
    if ( v17 )
      sub_1800448F8(a2);
  }
  return sub_1800448F8(a2);
}
