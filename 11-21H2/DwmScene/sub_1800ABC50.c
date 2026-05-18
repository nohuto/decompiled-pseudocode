/*
 * XREFs of sub_1800ABC50 @ 0x1800ABC50
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000B4C0 @ 0x18000B4C0 (sub_18000B4C0.c)
 *     _o_powf @ 0x18000C06C (_o_powf.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_18002850C @ 0x18002850C (sub_18002850C.c)
 *     sub_180028B24 @ 0x180028B24 (sub_180028B24.c)
 *     sub_180036808 @ 0x180036808 (sub_180036808.c)
 *     sub_180037388 @ 0x180037388 (sub_180037388.c)
 *     sub_180049AB8 @ 0x180049AB8 (sub_180049AB8.c)
 *     sub_180049AC8 @ 0x180049AC8 (sub_180049AC8.c)
 *     sub_180049AD8 @ 0x180049AD8 (sub_180049AD8.c)
 *     sub_180049B94 @ 0x180049B94 (sub_180049B94.c)
 *     sub_180049D1C @ 0x180049D1C (sub_180049D1C.c)
 *     sub_180049D2C @ 0x180049D2C (sub_180049D2C.c)
 *     sub_180049D54 @ 0x180049D54 (sub_180049D54.c)
 *     sub_180049E28 @ 0x180049E28 (sub_180049E28.c)
 *     sub_18004A080 @ 0x18004A080 (sub_18004A080.c)
 *     sub_18004A0C8 @ 0x18004A0C8 (sub_18004A0C8.c)
 *     sub_180056C78 @ 0x180056C78 (sub_180056C78.c)
 *     sub_18006C3A8 @ 0x18006C3A8 (sub_18006C3A8.c)
 *     sub_18007B520 @ 0x18007B520 (sub_18007B520.c)
 *     sub_1800AB0F0 @ 0x1800AB0F0 (sub_1800AB0F0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800ABC50(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  char v7; // r15
  int v8; // ebx
  __int64 v9; // rcx
  int v10; // edx
  __int64 v11; // r13
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  bool v15; // zf
  __int16 v16; // ax
  char v17; // r14
  char v18; // r12
  char v19; // al
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 *v22; // rax
  __int64 v23; // rbx
  int v24; // ebx
  __m128 v25; // xmm0
  __m128 v26; // xmm7
  __m128 v27; // xmm0
  __m128 v28; // xmm6
  __m128 v29; // xmm0
  unsigned int v30; // edx
  __int64 v31; // rax
  __m128 v32; // xmm0
  __m128 v33; // xmm7
  __m128 v34; // xmm0
  __m128 v35; // xmm6
  __m128 v36; // xmm0
  unsigned int v37; // edx
  __int64 v38; // rax
  unsigned int v39; // edx
  __int64 v40; // rax
  __m128i *p_si128; // rax
  unsigned int v42; // edx
  __int64 v43; // rax
  __m128 v44; // xmm0
  __m128 v45; // xmm7
  __m128 v46; // xmm0
  __m128 v47; // xmm6
  __m128 v48; // xmm0
  unsigned int v49; // edx
  __int64 v50; // rax
  __m128 v52; // [rsp+28h] [rbp-71h] BYREF
  __m128i si128; // [rsp+38h] [rbp-61h] BYREF
  __int64 v54; // [rsp+48h] [rbp-51h]
  __int64 v55[4]; // [rsp+50h] [rbp-49h] BYREF
  __int64 v56; // [rsp+70h] [rbp-29h] BYREF

  v54 = a4;
  v7 = *(_BYTE *)(a3 + 162);
  v8 = 1;
  switch ( v7 )
  {
    case 0:
      sub_180049D2C(a2);
      v10 = 0;
LABEL_10:
      sub_180049D1C(v9, v10);
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
  v11 = sub_180028B24(a4);
  v13 = sub_18002850C(v12);
  v14 = sub_180036808(v13, 1);
  v15 = (*(unsigned __int8 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v14 + 64LL))(
          v14,
          &qword_1801F8938,
          0LL) == 0;
  v16 = *(_WORD *)(a2 + 112);
  if ( v15 || (v16 & 0x10) == 0 )
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
  sub_180049AD8(a2);
  if ( !v8 )
  {
    *(_WORD *)(a2 + 112) &= ~1u;
    *(_WORD *)(a2 + 112) |= 2u;
  }
  v20 = sub_18002850C(v54);
  v21 = sub_180037388(v20);
  sub_18001875C(v55, (__int64)&qword_1801F5D98);
  v52.m128_u64[0] = (unsigned __int64)v55;
  v52.m128_u64[1] = (unsigned __int64)&v56;
  v22 = (__int64 *)sub_18006C3A8((__int64)&si128, (__m128i *)&v52);
  v23 = sub_180056C78(v21, v22);
  sub_18000B4C0((__int64)v55, 32LL, 1LL);
  sub_180049B94(a2, v23, v17);
  v24 = *(_DWORD *)(a3 + 4);
  if ( (v24 & 1) != 0 )
  {
    v52.m128_i32[0] = *(_DWORD *)(a3 + 16);
    v52 = _mm_mul_ps(
            (__m128)xmmword_1801373A0,
            _mm_add_ps(
              _mm_cvtepi32_ps((__m128i)_mm_xor_ps(
                                         _mm_and_ps(
                                           _mm_shuffle_ps((__m128)v52.m128_u32[0], (__m128)v52.m128_u32[0], 0),
                                           (__m128)xmmword_180128320),
                                         (__m128)xmmword_180128380)),
              (__m128)xmmword_180128370));
    if ( v18 )
    {
      v25 = (__m128)v52.m128_u32[2];
      o_powf();
      v26 = v25;
      v27 = (__m128)v52.m128_u32[1];
      o_powf();
      v28 = v27;
      v29 = (__m128)v52.m128_u32[0];
      o_powf();
      v52 = _mm_movelh_ps(_mm_unpacklo_ps(v29, v28), _mm_unpacklo_ps(v26, (__m128)v52.m128_u32[3]));
    }
    if ( !v17 && v52.m128_f32[3] < 1.0 && !v7 )
      sub_180049D1C(a2, 3);
    v30 = *(_DWORD *)(a3 + 20);
    if ( v30 )
    {
      v31 = sub_18007B520(v11, v30, a5);
      sub_180049E28(a2, (__int64)&qword_1801F4C78, v31, v11);
      sub_180049AB8(a2);
      sub_1800AB0F0(&si128, v54, *(_BYTE **)(a3 + 24));
      sub_18004A080(a2, (__int64)&qword_1801F4C78, &si128);
      if ( v18 )
      {
        v52.m128_u64[0] = 0x3F8000003F800000LL;
        v52.m128_i32[2] = 1065353216;
      }
      sub_180010910((__int64)&si128);
    }
    sub_180049AC8(a2);
  }
  if ( (v24 & 2) != 0 )
  {
    v52.m128_i32[0] = *(_DWORD *)(a3 + 36);
    v52 = _mm_mul_ps(
            (__m128)xmmword_1801373A0,
            _mm_add_ps(
              _mm_cvtepi32_ps((__m128i)_mm_xor_ps(
                                         _mm_and_ps(
                                           _mm_shuffle_ps((__m128)v52.m128_u32[0], (__m128)v52.m128_u32[0], 0),
                                           (__m128)xmmword_180128320),
                                         (__m128)xmmword_180128380)),
              (__m128)xmmword_180128370));
    if ( v18 )
    {
      v32 = (__m128)v52.m128_u32[2];
      o_powf();
      v33 = v32;
      v34 = (__m128)v52.m128_u32[1];
      o_powf();
      v35 = v34;
      v36 = (__m128)v52.m128_u32[0];
      o_powf();
      v52 = _mm_movelh_ps(_mm_unpacklo_ps(v36, v35), _mm_unpacklo_ps(v33, (__m128)v52.m128_u32[3]));
    }
    v37 = *(_DWORD *)(a3 + 40);
    if ( v37 )
    {
      v38 = sub_18007B520(v11, v37, a5);
      sub_180049E28(a2, (__int64)&qword_1801F4CB8, v38, v11);
      sub_180049AB8(a2);
      sub_1800AB0F0(&si128, v54, *(_BYTE **)(a3 + 48));
      sub_18004A080(a2, (__int64)&qword_1801F4CB8, &si128);
      if ( v18 )
        v52 = (__m128)xmmword_1801BD9C0;
      sub_180010910((__int64)&si128);
    }
    sub_180049AC8(a2);
  }
  if ( (v24 & 4) != 0 )
  {
    v39 = *(_DWORD *)(a3 + 84);
    if ( v39 )
    {
      v40 = sub_18007B520(v11, v39, a5);
      sub_180049E28(a2, (__int64)&qword_1801F4C98, v40, v11);
      sub_180049AB8(a2);
      sub_1800AB0F0(&si128, v54, *(_BYTE **)(a3 + 88));
      sub_18004A080(a2, (__int64)&qword_1801F4C98, &si128);
      sub_180010910((__int64)&si128);
    }
    if ( v17 )
    {
      v52.m128_i32[0] = *(_DWORD *)(a3 + 96);
      v52.m128_i32[1] = v52.m128_i32[0];
      v52.m128_u64[1] = 0x3F8000003F800000LL;
      p_si128 = (__m128i *)&v52;
    }
    else
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_1801BD9C0);
      p_si128 = &si128;
    }
    si128 = *p_si128;
    sub_18004A0C8(a2);
  }
  if ( (v24 & 0x10) != 0 )
  {
    v42 = *(_DWORD *)(a3 + 68);
    if ( v42 )
    {
      v43 = sub_18007B520(v11, v42, a5);
      sub_180049E28(a2, (__int64)&qword_1801F4CD8, v43, v11);
      sub_180049AB8(a2);
      sub_1800AB0F0(&si128, v54, *(_BYTE **)(a3 + 72));
      sub_18004A080(a2, (__int64)&qword_1801F4CD8, &si128);
      sub_180010910((__int64)&si128);
    }
    if ( v17 )
    {
      v52.m128_i32[0] = *(_DWORD *)(a3 + 60);
      v52 = _mm_mul_ps(
              (__m128)xmmword_1801373A0,
              _mm_add_ps(
                _mm_cvtepi32_ps((__m128i)_mm_xor_ps(
                                           _mm_and_ps(
                                             _mm_shuffle_ps((__m128)v52.m128_u32[0], (__m128)v52.m128_u32[0], 0),
                                             (__m128)xmmword_180128320),
                                           (__m128)xmmword_180128380)),
                (__m128)xmmword_180128370));
      if ( v18 )
      {
        v44 = (__m128)v52.m128_u32[2];
        o_powf();
        v45 = v44;
        v46 = (__m128)v52.m128_u32[1];
        o_powf();
        v47 = v46;
        v48 = (__m128)v52.m128_u32[0];
        o_powf();
        v52 = _mm_movelh_ps(_mm_unpacklo_ps(v48, v47), _mm_unpacklo_ps(v45, (__m128)v52.m128_u32[3]));
      }
      sub_180049AC8(a2);
    }
  }
  if ( (v24 & 0x20) != 0 )
  {
    v49 = *(_DWORD *)(a3 + 120);
    if ( v49 )
    {
      v50 = sub_18007B520(v11, v49, a5);
      sub_180049E28(a2, (__int64)&qword_1801F4D18, v50, v11);
      sub_180049AB8(a2);
      sub_1800AB0F0(&si128, v54, *(_BYTE **)(a3 + 128));
      sub_18004A080(a2, (__int64)&qword_1801F4D18, &si128);
      sub_180010910((__int64)&si128);
    }
    if ( v17 )
      sub_180049D54(a2);
  }
  return sub_180049D54(a2);
}
