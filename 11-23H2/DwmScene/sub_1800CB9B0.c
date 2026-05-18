/*
 * XREFs of sub_1800CB9B0 @ 0x1800CB9B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001145C @ 0x18001145C (sub_18001145C.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180017600 @ 0x180017600 (sub_180017600.c)
 *     sub_180028AB4 @ 0x180028AB4 (sub_180028AB4.c)
 *     sub_18002963C @ 0x18002963C (sub_18002963C.c)
 *     sub_180097908 @ 0x180097908 (sub_180097908.c)
 *     sub_1800C589C @ 0x1800C589C (sub_1800C589C.c)
 *     sub_1800C7750 @ 0x1800C7750 (sub_1800C7750.c)
 *     sub_1800C9EC8 @ 0x1800C9EC8 (sub_1800C9EC8.c)
 *     sub_1800CBFA8 @ 0x1800CBFA8 (sub_1800CBFA8.c)
 *     sub_1800CF0C8 @ 0x1800CF0C8 (sub_1800CF0C8.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_1800CB9B0(__int64 a1, int a2, int a3, int a4, int a5)
{
  int v7; // r15d
  int v8; // r12d
  __int64 *v9; // rax
  bool v10; // di
  int v11; // edx
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, __int64, _DWORD *, __int64); // rdi
  int v14; // eax
  const char *v15; // rax
  __m128 v16; // xmm2
  __m128 v17; // xmm0
  __int64 result; // rax
  __int64 v19; // [rsp+30h] [rbp-91h] BYREF
  __int64 v20; // [rsp+38h] [rbp-89h] BYREF
  __int64 v21[2]; // [rsp+40h] [rbp-81h] BYREF
  __int64 v22; // [rsp+50h] [rbp-71h] BYREF
  __int64 v23; // [rsp+58h] [rbp-69h]
  __int64 v24; // [rsp+60h] [rbp-61h] BYREF
  __int64 v25; // [rsp+68h] [rbp-59h]
  _DWORD v26[3]; // [rsp+70h] [rbp-51h] BYREF
  __int64 v27; // [rsp+7Ch] [rbp-45h]
  __int64 v28; // [rsp+88h] [rbp-39h] BYREF
  __int64 v29; // [rsp+90h] [rbp-31h]
  _QWORD v30[4]; // [rsp+98h] [rbp-29h] BYREF
  _BYTE v31[20]; // [rsp+B8h] [rbp-9h] BYREF
  unsigned int v32; // [rsp+CCh] [rbp+Bh]

  v7 = 1;
  if ( a2 )
    v7 = a2;
  v8 = 1;
  if ( a3 )
    v8 = a3;
  sub_1800CBFA8(a1, v7, v8, a4, a5);
  sub_180011C50(a1 + 72, &v28);
  v9 = sub_18001246C(&v22, &v28);
  sub_180097908(&v24, v9);
  sub_1800C589C(v24, &v19);
  sub_18001246C(v21, (_QWORD *)(a1 + 96));
  sub_180017600((__int64)&v22);
  sub_1800CF0C8(v22, v21);
  (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v21[0] + 80LL))(v21[0], v31);
  v10 = v32 > 1;
  v27 = 0LL;
  if ( (unsigned int)(a4 - 23) <= 1 )
    v11 = 2;
  else
    v11 = (a5 & 8) != 0;
  v26[0] = sub_1800C9EC8(a4, v11);
  v26[1] = v10 ? 6 : 4;
  v26[2] = 0;
  sub_1800CF0C8(v22, &v20);
  v12 = v19;
  v13 = *(__int64 (__fastcall **)(__int64, __int64, _DWORD *, __int64))(*(_QWORD *)v19 + 72LL);
  sub_18000E72C((__int64 *)(a1 + 128));
  v14 = v13(v12, v20, v26, a1 + 128);
  sub_1800C7750(v24, v14);
  v15 = (const char *)sub_18002963C(a1, v30);
  if ( *((_QWORD *)v15 + 3) >= 0x10uLL )
    v15 = *(const char **)v15;
  sub_18001145C(*(_QWORD *)(a1 + 128), v15);
  sub_180011B24((__int64)v30);
  v16 = 0LL;
  v16.m128_f32[0] = (float)v8;
  v17 = 0LL;
  v17.m128_f32[0] = (float)v7;
  sub_180028AB4(a1, _mm_unpacklo_ps(v17, v16).m128_i64[0]);
  sub_18000E72C(&v20);
  sub_18000E72C(v21);
  if ( v23 )
    sub_180010530(v23);
  result = sub_18000E72C(&v19);
  if ( v25 )
    result = sub_180010530(v25);
  if ( v29 )
    return sub_180010530(v29);
  return result;
}
