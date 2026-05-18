/*
 * XREFs of sub_180075D60 @ 0x180075D60
 * Callers:
 *     sub_18006D0B0 @ 0x18006D0B0 (sub_18006D0B0.c)
 *     sub_1800713F0 @ 0x1800713F0 (sub_1800713F0.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18001380C @ 0x18001380C (sub_18001380C.c)
 *     sub_18001483C @ 0x18001483C (sub_18001483C.c)
 *     sub_180036808 @ 0x180036808 (sub_180036808.c)
 *     sub_1800406D4 @ 0x1800406D4 (sub_1800406D4.c)
 *     sub_180042AB0 @ 0x180042AB0 (sub_180042AB0.c)
 *     sub_180042B30 @ 0x180042B30 (sub_180042B30.c)
 *     sub_180043668 @ 0x180043668 (sub_180043668.c)
 *     sub_1800441D8 @ 0x1800441D8 (sub_1800441D8.c)
 *     sub_1800705E8 @ 0x1800705E8 (sub_1800705E8.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180075D60(__int64 a1, _QWORD *a2, char a3)
{
  __m128 v3; // xmm0
  __int64 v7; // rbx
  __int64 result; // rax
  __m128 v9; // xmm13
  __int64 v10; // r8
  char v11; // al
  char v12; // r15
  double v13; // xmm0_8
  unsigned int v14; // xmm7_4
  double v15; // xmm0_8
  unsigned int v16; // xmm8_4
  double v17; // xmm0_8
  unsigned int v18; // xmm9_4
  double v19; // xmm0_8
  unsigned int v20; // xmm10_4
  double v21; // xmm0_8
  unsigned int v22; // xmm11_4
  double v23; // xmm0_8
  int v24; // xmm12_4
  __int64 v25; // rcx
  __int64 v26; // rbx
  __m128 v27; // xmm0
  __m128 v28; // xmm0
  unsigned __int64 v29; // [rsp+28h] [rbp-E0h]
  _QWORD v30[3]; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int32 v31; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v32; // [rsp+68h] [rbp-A0h] BYREF
  int v33; // [rsp+70h] [rbp-98h]
  unsigned __int32 v34; // [rsp+7Ch] [rbp-8Ch]
  unsigned __int64 v35; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int32 v36; // [rsp+90h] [rbp-78h]
  unsigned __int64 v37; // [rsp+98h] [rbp-70h] BYREF
  unsigned __int32 v38; // [rsp+A0h] [rbp-68h]
  __int128 v39; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v40[3]; // [rsp+B8h] [rbp-50h] BYREF
  unsigned int v41; // [rsp+D0h] [rbp-38h]

  v7 = sub_180036808(a1, *(_DWORD *)(*a2 + 112LL));
  result = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v7 + 64LL))(v7, &qword_1801F89D8, 0LL);
  if ( (_BYTE)result )
  {
    *(double *)v3.m128_u64 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 88LL))(v7, &qword_1801F89B8);
    v9 = v3;
    LOBYTE(v10) = 1;
    (*(void (__fastcall **)(__int64, __int64 *, __int64))(*(_QWORD *)v7 + 64LL))(v7, &qword_1801F89F8, v10);
    v12 = v11;
    v13 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 88LL))(v7, &qword_1801F8A18);
    v14 = LODWORD(v13);
    v15 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 88LL))(v7, &qword_1801F8A38);
    v16 = LODWORD(v15);
    v17 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 88LL))(v7, &qword_1801F8A58);
    v18 = LODWORD(v17);
    v19 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 88LL))(v7, &qword_1801F8A78);
    v20 = LODWORD(v19);
    v21 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 88LL))(v7, &qword_1801F8A98);
    v22 = LODWORD(v21);
    v23 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 88LL))(v7, &qword_1801F8AB8);
    v24 = LODWORD(v23);
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 88LL))(v7, &qword_1801F8AD8);
    sub_1800705E8(v25, v30, a2);
    v26 = v30[0];
    if ( !v30[0] )
      return sub_180010910((__int64)v30);
    if ( !a3 )
    {
      if ( !*(_BYTE *)sub_1800441D8(a1 + 1467) )
      {
LABEL_11:
        if ( !*(_BYTE *)sub_1800441D8(a1 + 1468) )
        {
LABEL_14:
          if ( *(_BYTE *)sub_1800441D8(a1 + 1466) )
          {
            v26 = v30[0];
            goto LABEL_16;
          }
          return sub_180010910((__int64)v30);
        }
        v26 = v30[0];
LABEL_13:
        v32 = __PAIR64__(v22, v20);
        v33 = v24;
        sub_1800406D4((__int64)&v39, &v32);
        sub_180042AB0(v26, &v39);
        if ( a3 )
        {
LABEL_16:
          sub_180043668(v26);
          v41 = *(_DWORD *)(v26 + 180);
          v28 = _mm_mul_ps(
                  _mm_shuffle_ps(v9, v9, 0),
                  _mm_movelh_ps((__m128)*(unsigned __int64 *)(v26 + 172), (__m128)v41));
          v34 = _mm_shuffle_ps(v28, v28, 170).m128_u32[0];
          v37 = v28.m128_u64[0];
          v38 = v34;
          sub_180042B30(v26, &v37);
          return sub_180010910((__int64)v30);
        }
        goto LABEL_14;
      }
      v26 = v30[0];
    }
    v29 = 0LL;
    if ( v12 )
    {
      sub_18001483C(v26, v40);
      if ( v40[0] )
        *((float *)&v29 + 1) = *(float *)(v40[0] + 104LL) + 0.0;
      sub_180010910((__int64)v40);
    }
    v27 = _mm_add_ps(_mm_movelh_ps((__m128)__PAIR64__(v16, v14), (__m128)v18), _mm_movelh_ps((__m128)v29, (__m128)0));
    v31 = _mm_shuffle_ps(v27, v27, 170).m128_u32[0];
    v35 = v27.m128_u64[0];
    v36 = v31;
    sub_18001380C(v26, &v35);
    if ( a3 )
      goto LABEL_13;
    goto LABEL_11;
  }
  return result;
}
