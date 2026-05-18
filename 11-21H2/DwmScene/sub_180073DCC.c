/*
 * XREFs of sub_180073DCC @ 0x180073DCC
 * Callers:
 *     sub_1800710C0 @ 0x1800710C0 (sub_1800710C0.c)
 * Callees:
 *     _o_powf @ 0x18000C06C (_o_powf.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18001D734 @ 0x18001D734 (sub_18001D734.c)
 *     sub_180036808 @ 0x180036808 (sub_180036808.c)
 *     sub_180037388 @ 0x180037388 (sub_180037388.c)
 *     sub_180056B94 @ 0x180056B94 (sub_180056B94.c)
 *     sub_1800930E8 @ 0x1800930E8 (sub_1800930E8.c)
 *     sub_180093218 @ 0x180093218 (sub_180093218.c)
 *     sub_180093800 @ 0x180093800 (sub_180093800.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180073DCC(const __m128i *a1, __int64 a2, int a3)
{
  __int64 v5; // rdi
  int v6; // r13d
  int v7; // r15d
  __m128 v8; // xmm6
  int v9; // eax
  char v10; // si
  float v11; // xmm8_4
  float v12; // xmm6_4
  float v13; // xmm7_4
  float v14; // xmm15_4
  float v15; // xmm14_4
  float v16; // xmm13_4
  char v17; // al
  char v18; // r12
  int v19; // esi
  double v20; // xmm0_8
  float v21; // xmm7_4
  double v22; // xmm0_8
  float v23; // xmm6_4
  double v24; // xmm0_8
  double v25; // xmm0_8
  float v26; // xmm7_4
  double v27; // xmm0_8
  float v28; // xmm6_4
  double v29; // xmm0_8
  __int64 v30; // rax
  __int64 v31; // rdi
  _QWORD v33[2]; // [rsp+98h] [rbp-68h] BYREF
  __m128 v34; // [rsp+A8h] [rbp-58h]

  v5 = sub_180036808((__int64)a1, a3);
  v6 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v5 + 72LL))(v5, &qword_1801F82F8, 0LL);
  v7 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v5 + 72LL))(v5, &qword_1801F8318, 0LL);
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, &qword_1801F82B8, 0LL);
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, &qword_1801F8938, 0LL);
  v8 = (__m128)_mm_loadu_si128(a1 + 92);
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 88LL))(a2);
  v34 = _mm_mul_ps(
          v8,
          _mm_shuffle_ps((__m128)COERCE_UNSIGNED_INT((float)v9), (__m128)COERCE_UNSIGNED_INT((float)v9), 0));
  if ( _mm_movemask_ps(_mm_cmpneq_ps((__m128)xmmword_180128A30, (__m128)a1[92])) )
    a1[91].m128i_i8[1] = 1;
  else
    v34.m128_i32[1] = 0;
  v10 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, &qword_1801F8198, 0LL);
  if ( v10
    && (*(unsigned __int8 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, &qword_1801F81B8, 0LL) )
  {
    v11 = 1.0;
  }
  else
  {
    v11 = 0.0;
    if ( !v10 )
      goto LABEL_10;
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, &qword_1801F81D8, 0LL) )
  {
    v12 = 1.0;
    goto LABEL_11;
  }
LABEL_10:
  v12 = 0.0;
  if ( !v10 )
    goto LABEL_13;
LABEL_11:
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v5 + 64LL))(
          v5,
          &qword_1801F81F8,
          0LL) )
  {
LABEL_13:
    v13 = 0.0;
    if ( !v10 )
      goto LABEL_16;
    goto LABEL_14;
  }
  v13 = 1.0;
LABEL_14:
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, &qword_1801F8218, 0LL) )
  {
    v14 = 1.0;
    goto LABEL_17;
  }
LABEL_16:
  v14 = 0.0;
  if ( !v10 )
    goto LABEL_19;
LABEL_17:
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v5 + 64LL))(
          v5,
          &qword_1801F8238,
          0LL) )
  {
LABEL_19:
    v15 = 0.0;
    if ( !v10 )
      goto LABEL_22;
    goto LABEL_20;
  }
  v15 = 1.0;
LABEL_20:
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, &qword_1801F8258, 0LL) )
  {
    v16 = 1.0;
    goto LABEL_23;
  }
LABEL_22:
  v16 = 0.0;
  if ( !v10 )
  {
LABEL_30:
    v17 = 1;
    goto LABEL_31;
  }
LABEL_23:
  if ( v11 == 0.0 || v12 == 0.0 || v13 == 0.0 || v14 == 0.0 || v15 == 0.0 || v16 == 0.0 )
    goto LABEL_30;
  v17 = 0;
LABEL_31:
  if ( v7 || v6 != 2 || v17 )
    a1[91].m128i_i8[1] = 1;
  v18 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, &qword_1801FAA58, 0LL);
  v19 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v5 + 72LL))(v5, &qword_1801FAA78, 0LL);
  if ( v18 )
  {
    (*(float (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 88LL))(v5, &qword_1801FAA38);
    a1[91].m128i_i8[1] = 1;
  }
  if ( v19 )
    a1[91].m128i_i8[1] = 1;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, &qword_1801FAAF8, 0LL) )
  {
    v20 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 88LL))(v5, &qword_1801FAAD8);
    v21 = *(float *)&v20;
    v22 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 88LL))(v5, &qword_1801FAAB8);
    v23 = *(float *)&v22;
    v24 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 88LL))(v5, &qword_1801FAA98);
    sub_18001D734((__int64)v33, *(float *)&v24, v23, v21);
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 88LL))(v5, &qword_1801FAB18);
    a1[91].m128i_i8[1] = 1;
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, &qword_1801FAB98, 0LL) )
  {
    v25 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 88LL))(v5, &qword_1801FAB78);
    v26 = *(float *)&v25;
    v27 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 88LL))(v5, &qword_1801FAB58);
    v28 = *(float *)&v27;
    v29 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 88LL))(v5, &qword_1801FAB38);
    sub_18001D734((__int64)v33, *(float *)&v29, v28, v26);
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 88LL))(v5, &qword_1801FABB8);
    a1[91].m128i_i8[1] = 1;
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, &qword_1801FABF8, 0LL) )
  {
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 88LL))(v5, &qword_1801FABD8);
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 88LL))(v5, &qword_1801FAC18);
    a1[91].m128i_i8[1] = 1;
  }
  o_powf();
  o_powf();
  o_powf();
  o_powf();
  o_powf();
  o_powf();
  v30 = sub_180037388((__int64)a1);
  sub_180056B94(v30, v33);
  v31 = v33[0];
  sub_180093218(v33[0], &qword_1801F5398);
  sub_180093218(v31, &qword_1801F53B8);
  sub_1800930E8(v31);
  sub_1800930E8(v31);
  sub_1800930E8(v31);
  sub_1800930E8(v31);
  sub_1800930E8(v31);
  sub_1800930E8(v31);
  sub_1800930E8(v31);
  sub_1800930E8(v31);
  sub_180093800(v31);
  sub_180093800(v31);
  sub_180093800(v31);
  sub_180093800(v31);
  sub_180093800(v31);
  return sub_180010910((__int64)v33);
}
