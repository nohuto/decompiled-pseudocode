/*
 * XREFs of sub_180069750 @ 0x180069750
 * Callers:
 *     sub_180067340 @ 0x180067340 (sub_180067340.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_180011DE0 @ 0x180011DE0 (sub_180011DE0.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180033EB4 @ 0x180033EB4 (sub_180033EB4.c)
 *     sub_180034094 @ 0x180034094 (sub_180034094.c)
 *     sub_18003C3B4 @ 0x18003C3B4 (sub_18003C3B4.c)
 *     sub_18003C4C0 @ 0x18003C4C0 (sub_18003C4C0.c)
 *     sub_1800631C0 @ 0x1800631C0 (sub_1800631C0.c)
 *     sub_180092CC4 @ 0x180092CC4 (sub_180092CC4.c)
 *     sub_180092CD4 @ 0x180092CD4 (sub_180092CD4.c)
 *     sub_180092D30 @ 0x180092D30 (sub_180092D30.c)
 *     sub_180092D40 @ 0x180092D40 (sub_180092D40.c)
 *     sub_180092D50 @ 0x180092D50 (sub_180092D50.c)
 *     sub_180092D60 @ 0x180092D60 (sub_180092D60.c)
 *     sub_180092D70 @ 0x180092D70 (sub_180092D70.c)
 *     sub_180092D80 @ 0x180092D80 (sub_180092D80.c)
 *     sub_180092D90 @ 0x180092D90 (sub_180092D90.c)
 *     sub_180092DA0 @ 0x180092DA0 (sub_180092DA0.c)
 *     sub_180092DB0 @ 0x180092DB0 (sub_180092DB0.c)
 *     sub_180092DC0 @ 0x180092DC0 (sub_180092DC0.c)
 *     sub_180092DD0 @ 0x180092DD0 (sub_180092DD0.c)
 *     sub_180092DE0 @ 0x180092DE0 (sub_180092DE0.c)
 *     sub_180092DF0 @ 0x180092DF0 (sub_180092DF0.c)
 *     sub_180092E20 @ 0x180092E20 (sub_180092E20.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall sub_180069750(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rax
  _QWORD *v5; // rax
  __int64 v6; // r8
  __int64 v7; // rdi
  __int64 v8; // r8
  __int64 v9; // rbx
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 v13; // r8
  __int64 v14; // r8
  __int64 v15; // r8
  __int64 v16; // r8
  unsigned __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // r8
  __int64 v32; // rax
  __int64 v33; // r8
  __int64 v34; // rax
  __int64 v35; // r8
  __int64 v36; // rax
  __int64 v37; // r8
  unsigned int v38; // eax
  void (__fastcall *v39)(__int64, __int64 *, _QWORD, __int64); // r11
  unsigned int v40; // eax
  void (__fastcall *v41)(__int64, __int64 *, _QWORD, __int64); // r11
  __int64 v42; // r8
  void (__fastcall *v43)(__int64, __int64 *, __int64, __int64); // r11
  __int64 v44; // rax
  __int64 v45; // r8
  __int64 v46; // rax
  __int64 v47; // r8
  __int64 v48; // rax
  __int64 v49; // r8
  int v51; // [rsp+30h] [rbp-50h] BYREF
  __m128 v52; // [rsp+40h] [rbp-40h] BYREF
  __int64 v53; // [rsp+50h] [rbp-30h] BYREF
  __int64 v54; // [rsp+58h] [rbp-28h]
  __int64 v55; // [rsp+60h] [rbp-20h] BYREF
  __int64 v56; // [rsp+68h] [rbp-18h]

  v4 = *a2;
  if ( *(_BYTE *)(*a2 + 116LL) )
  {
    v5 = sub_18001246C(&v53, a2);
    sub_180033EB4(a1, &v55, v6, v5);
    v7 = sub_180034094(a1, *(_DWORD *)(*a2 + 112LL));
    LOBYTE(v4) = sub_180011DE0(&v55);
    if ( (_BYTE)v4 )
    {
      v9 = v55;
      if ( (*(_DWORD *)(v55 + 440) & 0x2000000) != 0 )
      {
        (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v7 + 168LL))(
          v7,
          qword_1801D64E8,
          v8,
          1LL);
        sub_180011C50(v9 + 56, &v53);
        if ( sub_180011DE0(&v53) )
        {
          sub_18003C3B4(v53, (__int64)&v51);
          sub_18003C4C0(v53, &v52);
          (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v7 + 168LL))(
            v7,
            qword_1801D6508,
            v10,
            1LL);
          (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v7 + 168LL))(
            v7,
            qword_1801D6528,
            v11,
            1LL);
          (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v7 + 168LL))(
            v7,
            qword_1801D6548,
            v12,
            1LL);
          (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v7 + 168LL))(
            v7,
            qword_1801D6568,
            v13,
            1LL);
          (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v7 + 168LL))(
            v7,
            qword_1801D6588,
            v14,
            1LL);
          (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v7 + 168LL))(
            v7,
            qword_1801D65A8,
            v15,
            1LL);
          (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v7 + 168LL))(
            v7,
            qword_1801D65C8,
            v16,
            1LL);
        }
        sub_1800631C0((__int64 *)&v52, &v55);
        LOBYTE(v4) = sub_180011DE0(&v52);
        if ( (_BYTE)v4 )
        {
          v17 = v52.m128_u64[0];
          v18 = sub_180092D70(v52.m128_u64[0]);
          (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(v18 + 168))(v7, qword_1801D6688, v19, 1LL);
          v20 = sub_180092D80(v17);
          (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(v20 + 168))(v7, qword_1801D66A8, v21, 1LL);
          v22 = sub_180092D90(v17);
          (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(v22 + 168))(v7, qword_1801D66E8, v23, 1LL);
          v24 = sub_180092D60(v17);
          (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(v24 + 168))(v7, qword_1801D6708, v25, 1LL);
          v26 = sub_180092D30(v17);
          (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(v26 + 168))(v7, qword_1801D66C8, v27, 1LL);
          v28 = sub_180092DB0(v17);
          (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(v28 + 168))(v7, qword_1801D6728, v29, 1LL);
          v30 = sub_180092DD0(v17);
          (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(v30 + 168))(v7, qword_1801D6748, v31, 1LL);
          v32 = sub_180092DC0(v17);
          (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(v32 + 168))(v7, qword_1801D6768, v33, 1LL);
          v34 = sub_180092DF0(v17);
          (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(v34 + 168))(v7, qword_1801D6788, v35, 1LL);
          v36 = sub_180092DE0(v17);
          (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(v36 + 168))(v7, qword_1801D67A8, v37, 1LL);
          v38 = sub_180092CD4(v17);
          v39(v7, qword_1801D6668, v38, 1LL);
          v40 = sub_180092DA0(v17);
          v41(v7, qword_1801D67C8, v40, 1LL);
          LOBYTE(v42) = sub_180092E20(v17);
          v43(v7, qword_1801D6808, v42, 1LL);
          v44 = sub_180092D40(v17);
          (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(v44 + 168))(v7, qword_1801D68A8, v45, 1LL);
          v46 = sub_180092D50(v17);
          (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(v46 + 168))(v7, qword_1801D6888, v47, 1LL);
          v48 = sub_180092CC4(v17);
          LOBYTE(v4) = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64, __int64))(v48 + 168))(
                         v7,
                         qword_1801D6868,
                         v49,
                         1LL);
        }
        if ( v52.m128_u64[1] )
          LOBYTE(v4) = sub_180010530(v52.m128_i64[1]);
        if ( v54 )
          LOBYTE(v4) = sub_180010530(v54);
      }
    }
    if ( v56 )
      LOBYTE(v4) = sub_180010530(v56);
  }
  return v4;
}
