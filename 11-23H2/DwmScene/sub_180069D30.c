/*
 * XREFs of sub_180069D30 @ 0x180069D30
 * Callers:
 *     sub_180067610 @ 0x180067610 (sub_180067610.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001C240 @ 0x18001C240 (sub_18001C240.c)
 *     sub_180034094 @ 0x180034094 (sub_180034094.c)
 *     sub_180034870 @ 0x180034870 (sub_180034870.c)
 *     sub_18004FB08 @ 0x18004FB08 (sub_18004FB08.c)
 *     sub_180062B54 @ 0x180062B54 (sub_180062B54.c)
 *     sub_180062B7C @ 0x180062B7C (sub_180062B7C.c)
 *     sub_180067E40 @ 0x180067E40 (sub_180067E40.c)
 *     sub_1800853E8 @ 0x1800853E8 (sub_1800853E8.c)
 *     sub_1800854F4 @ 0x1800854F4 (sub_1800854F4.c)
 *     sub_180085A64 @ 0x180085A64 (sub_180085A64.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180069D30(const __m128i *a1, __int64 a2, int a3)
{
  __int64 v5; // rdi
  int v6; // r15d
  int v7; // r13d
  __m128 v8; // xmm6
  int v9; // eax
  char v10; // bl
  float v11; // xmm11_4
  float v12; // xmm9_4
  float v13; // xmm8_4
  float v14; // xmm7_4
  float v15; // xmm6_4
  float v16; // xmm14_4
  float v17; // xmm13_4
  char v18; // al
  float v19; // xmm12_4
  int v20; // r12d
  int v21; // xmm15_4
  int v22; // ebx
  double v23; // xmm0_8
  double v24; // xmm0_8
  float v25; // xmm7_4
  double v26; // xmm0_8
  float v27; // xmm6_4
  __int64 v28; // rax
  double v29; // xmm0_8
  float v30; // xmm7_4
  double v31; // xmm0_8
  float v32; // xmm6_4
  __int64 v33; // rax
  double v34; // xmm0_8
  __int128 v35; // xmm6
  __int128 v36; // xmm0
  __int64 v37; // rax
  __int64 v38; // rbx
  __int64 result; // rax
  __int128 v40; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v41; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v42; // [rsp+58h] [rbp-B0h]
  __int64 v43; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v44; // [rsp+68h] [rbp-A0h]
  float v45; // [rsp+70h] [rbp-98h]
  float v46; // [rsp+74h] [rbp-94h]
  float v47; // [rsp+78h] [rbp-90h]
  float v48; // [rsp+7Ch] [rbp-8Ch]
  float v49; // [rsp+80h] [rbp-88h]
  float v50; // [rsp+84h] [rbp-84h]
  int v51; // [rsp+88h] [rbp-80h]
  float v52; // [rsp+8Ch] [rbp-7Ch]
  __m128 v53; // [rsp+90h] [rbp-78h]
  float v54; // [rsp+1A0h] [rbp+98h]

  v5 = sub_180034094((__int64)a1, a3);
  v6 = sub_180062B7C(v5);
  LODWORD(v42) = v6;
  v7 = sub_180062B54(v5);
  (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, &unk_1801D4248, 0LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, &unk_1801D48C8, 0LL);
  v8 = (__m128)_mm_loadu_si128(a1 + 92);
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 88LL))(a2);
  v53 = _mm_mul_ps(
          v8,
          _mm_shuffle_ps((__m128)COERCE_UNSIGNED_INT((float)v9), (__m128)COERCE_UNSIGNED_INT((float)v9), 0));
  if ( _mm_movemask_ps(_mm_cmpneq_ps((__m128)xmmword_180106A80, (__m128)a1[92])) )
    a1[91].m128i_i8[1] = 1;
  else
    v53.m128_i32[1] = 0;
  v10 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, &unk_1801D4128, 0LL);
  v11 = 1.0;
  if ( v10
    && (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, &unk_1801D4148, 0LL) )
  {
    v12 = 1.0;
  }
  else
  {
    v12 = 0.0;
    if ( !v10 )
      goto LABEL_10;
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, &unk_1801D4168, 0LL) )
  {
    v13 = 1.0;
    goto LABEL_11;
  }
LABEL_10:
  v13 = 0.0;
  if ( !v10 )
    goto LABEL_13;
LABEL_11:
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, &unk_1801D4188, 0LL) )
  {
LABEL_13:
    v14 = 0.0;
    if ( !v10 )
      goto LABEL_16;
    goto LABEL_14;
  }
  v14 = 1.0;
LABEL_14:
  if ( (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, &unk_1801D41A8, 0LL) )
  {
    v15 = 1.0;
    goto LABEL_17;
  }
LABEL_16:
  v15 = 0.0;
  if ( !v10 )
    goto LABEL_19;
LABEL_17:
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, &unk_1801D41C8, 0LL) )
  {
LABEL_19:
    v16 = 0.0;
    if ( !v10 )
      goto LABEL_22;
    goto LABEL_20;
  }
  v16 = 1.0;
LABEL_20:
  if ( (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, &unk_1801D41E8, 0LL) )
  {
    v17 = 1.0;
    goto LABEL_23;
  }
LABEL_22:
  v17 = 0.0;
  if ( !v10 )
  {
LABEL_30:
    v18 = 1;
    goto LABEL_31;
  }
LABEL_23:
  if ( v12 == 0.0 || v13 == 0.0 || v14 == 0.0 || v15 == 0.0 || v16 == 0.0 || v17 == 0.0 )
    goto LABEL_30;
  v18 = 0;
LABEL_31:
  if ( v7 || v6 != 2 || v18 )
    a1[91].m128i_i8[1] = 1;
  v40 = xmmword_1801084E0;
  v41 = xmmword_1801084E0;
  v54 = 0.0;
  v19 = 1.0;
  v20 = (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, &unk_1801D69E8, 0LL);
  v21 = 0;
  v22 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v5 + 72LL))(v5, &unk_1801D6A08, 0LL);
  if ( (_BYTE)v20 )
  {
    v23 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v5 + 88LL))(v5, &unk_1801D69C8);
    v19 = *(float *)&v23 / 100.0;
    a1[91].m128i_i8[1] = 1;
  }
  if ( v22 )
  {
    if ( v22 == 2 )
      v21 = 1065353216;
    a1[91].m128i_i8[1] = 1;
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, &unk_1801D6A88, 0LL) )
  {
    v24 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v5 + 88LL))(v5, &unk_1801D6A68);
    v25 = *(float *)&v24;
    v26 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v5 + 88LL))(v5, &unk_1801D6A48);
    v27 = *(float *)&v26;
    *(float *)&v26 = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v5 + 88LL))(v5, &unk_1801D6A28);
    v28 = sub_18001C240((__int64)&v43, *(float *)&v26, v27, v25);
    *(_QWORD *)&v40 = *(_QWORD *)v28;
    DWORD2(v40) = *(_DWORD *)(v28 + 8);
    HIDWORD(v40) = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v5 + 88LL))(v5, &unk_1801D6AA8);
    a1[91].m128i_i8[1] = 1;
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, &unk_1801D6B28, 0LL) )
  {
    v29 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v5 + 88LL))(v5, &unk_1801D6B08);
    v30 = *(float *)&v29;
    v31 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v5 + 88LL))(v5, &unk_1801D6AE8);
    v32 = *(float *)&v31;
    *(float *)&v31 = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v5 + 88LL))(v5, &unk_1801D6AC8);
    v33 = sub_18001C240((__int64)&v43, *(float *)&v31, v32, v30);
    *(_QWORD *)&v41 = *(_QWORD *)v33;
    DWORD2(v41) = *(_DWORD *)(v33 + 8);
    HIDWORD(v41) = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v5 + 88LL))(v5, &unk_1801D6B48);
    a1[91].m128i_i8[1] = 1;
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, &unk_1801D6B88, 0LL) )
  {
    v34 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v5 + 88LL))(v5, &unk_1801D6B68);
    v11 = *(float *)&v34 / 100.0;
    v54 = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v5 + 88LL))(v5, &unk_1801D6BA8);
    a1[91].m128i_i8[1] = 1;
  }
  v35 = *(_OWORD *)sub_180067E40((int *)&v40, &v43);
  v36 = *(_OWORD *)sub_180067E40((int *)&v41, &v43);
  v41 = v35;
  v40 = v36;
  v45 = v11;
  v46 = v11;
  v47 = v11;
  v48 = v54;
  v49 = v19;
  v50 = (float)v20;
  v51 = v21;
  v52 = (float)(v22 != 0);
  v37 = sub_180034870((__int64)a1);
  sub_18004FB08(v37, &v43);
  v38 = v43;
  sub_1800854F4(v43, &unk_1801D7588);
  sub_1800854F4(v38, &unk_1801D75A8);
  sub_1800853E8(v38);
  sub_1800853E8(v38);
  sub_1800853E8(v38);
  sub_1800853E8(v38);
  sub_1800853E8(v38);
  sub_1800853E8(v38);
  sub_1800853E8(v38);
  sub_1800853E8(v38);
  sub_180085A64(v38);
  sub_180085A64(v38);
  sub_180085A64(v38);
  sub_180085A64(v38);
  result = sub_180085A64(v38);
  if ( v44 )
    return sub_180010530(v44);
  return result;
}
