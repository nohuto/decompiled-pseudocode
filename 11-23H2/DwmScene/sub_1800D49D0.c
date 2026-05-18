/*
 * XREFs of sub_1800D49D0 @ 0x1800D49D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_1800C589C @ 0x1800C589C (sub_1800C589C.c)
 *     sub_1800C7750 @ 0x1800C7750 (sub_1800C7750.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800D49D0(__int64 a1, unsigned int **a2)
{
  unsigned int *v4; // rdx
  __m128i v5; // xmm0
  __int64 v6; // rax
  int v7; // ecx
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, __int128 *, __int64); // rsi
  int v10; // eax
  unsigned int *v11; // rax
  unsigned int *v12; // rdx
  __int64 v13; // rcx
  __int64 result; // rax
  __int64 v15; // rcx
  __int64 v16; // [rsp+20h] [rbp-59h] BYREF
  __int64 v17; // [rsp+28h] [rbp-51h] BYREF
  __int64 v18; // [rsp+30h] [rbp-49h]
  unsigned int **v19; // [rsp+38h] [rbp-41h]
  __int128 v20; // [rsp+40h] [rbp-39h] BYREF
  __int128 v21; // [rsp+50h] [rbp-29h]
  __int128 v22; // [rsp+60h] [rbp-19h]
  unsigned int v23; // [rsp+70h] [rbp-9h]
  __m128i si128; // [rsp+78h] [rbp-1h]
  __m128i v25; // [rsp+88h] [rbp+Fh]
  int v26; // [rsp+98h] [rbp+1Fh]
  int v27; // [rsp+9Ch] [rbp+23h]
  int v28; // [rsp+A0h] [rbp+27h]

  v19 = a2;
  sub_180011C50(a1 + 72, &v17);
  v4 = *a2;
  si128 = _mm_load_si128((const __m128i *)&xmmword_18019B8B0);
  v25 = _mm_load_si128((const __m128i *)&xmmword_18019B7D0);
  v26 = 4;
  v27 = 5;
  v28 = 16;
  LODWORD(v20) = si128.m128i_i32[*v4];
  v5 = _mm_load_si128((const __m128i *)&xmmword_1801068B0);
  si128 = v5;
  v25.m128i_i32[0] = 5;
  DWORD1(v20) = si128.m128i_i32[v4[1]];
  si128 = v5;
  v25.m128i_i32[0] = 5;
  DWORD2(v20) = si128.m128i_i32[v4[2]];
  si128 = v5;
  v25.m128i_i32[0] = 5;
  HIDWORD(v20) = si128.m128i_i32[v4[3]];
  v6 = 0LL;
  v7 = 1;
  do
    si128.m128i_i32[v6++] = v7++;
  while ( v6 < 8 );
  DWORD2(v21) = si128.m128i_i32[v4[6]];
  DWORD1(v21) = v4[5];
  v23 = v4[12];
  HIDWORD(v22) = v4[11];
  LODWORD(v21) = v4[4];
  HIDWORD(v21) = v4[7];
  LODWORD(v22) = v4[8];
  *(_QWORD *)((char *)&v22 + 4) = *(_QWORD *)(v4 + 9);
  sub_1800C589C(v17, &v16);
  v8 = v16;
  v9 = *(__int64 (__fastcall **)(__int64, __int128 *, __int64))(*(_QWORD *)v16 + 184LL);
  sub_18000E72C((__int64 *)(a1 + 184));
  v10 = v9(v8, &v20, a1 + 184);
  sub_1800C7750(v17, v10);
  *(_OWORD *)(a1 + 128) = v20;
  *(_OWORD *)(a1 + 144) = v21;
  *(_OWORD *)(a1 + 160) = v22;
  *(_DWORD *)(a1 + 176) = v23;
  v11 = *a2;
  v12 = a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  *(_QWORD *)(a1 + 96) = v11;
  v13 = *(_QWORD *)(a1 + 104);
  *(_QWORD *)(a1 + 104) = v12;
  if ( v13 )
    sub_180010530(v13);
  result = sub_18000E72C(&v16);
  if ( v18 )
    result = sub_180010530(v18);
  v15 = (__int64)a2[1];
  if ( v15 )
    return sub_180010530(v15);
  return result;
}
