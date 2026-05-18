/*
 * XREFs of sub_1800A6170 @ 0x1800A6170
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800120F4 @ 0x1800120F4 (sub_1800120F4.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 *     sub_18002850C @ 0x18002850C (sub_18002850C.c)
 *     sub_180036808 @ 0x180036808 (sub_180036808.c)
 *     sub_180049AF0 @ 0x180049AF0 (sub_180049AF0.c)
 *     sub_180049B94 @ 0x180049B94 (sub_180049B94.c)
 *     sub_180049BBC @ 0x180049BBC (sub_180049BBC.c)
 *     sub_1800520F8 @ 0x1800520F8 (sub_1800520F8.c)
 *     sub_1800533C0 @ 0x1800533C0 (sub_1800533C0.c)
 *     sub_180053418 @ 0x180053418 (sub_180053418.c)
 *     sub_180065394 @ 0x180065394 (sub_180065394.c)
 *     sub_18006558C @ 0x18006558C (sub_18006558C.c)
 *     sub_1800933B8 @ 0x1800933B8 (sub_1800933B8.c)
 *     sub_1800935DC @ 0x1800935DC (sub_1800935DC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_1800A6170(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, _QWORD *a5)
{
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 *v11; // r15
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rbx
  __int64 v19; // rdx
  signed __int32 v20; // eax
  signed __int32 v21; // ett
  __m128 v22; // xmm0
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // rax
  int v27; // edx
  unsigned int v28; // ebx
  _QWORD **v29; // rax
  __int64 v30; // rbx
  __int64 v31; // rdx
  signed __int32 v32; // eax
  signed __int32 v33; // ett
  void (__fastcall *v35)(__int64, __int128 *, __int64, __int64, char **); // [rsp+30h] [rbp-D0h]
  void (__fastcall *v36)(__int64, __int128 *, __int64, __int64, char **); // [rsp+30h] [rbp-D0h]
  __int128 v37; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v38; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v39; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v40; // [rsp+68h] [rbp-98h] BYREF
  __int128 v41; // [rsp+80h] [rbp-80h] BYREF
  __int64 v42[2]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v43[2]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v44[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v45; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD *v46; // [rsp+D0h] [rbp-30h]
  _QWORD *v47; // [rsp+D8h] [rbp-28h]
  _BYTE v48[16]; // [rsp+E0h] [rbp-20h] BYREF
  __m128 v49; // [rsp+F0h] [rbp-10h] BYREF
  char *v50[3]; // [rsp+100h] [rbp+0h] BYREF
  unsigned __int64 v51; // [rsp+118h] [rbp+18h]
  char *v52[3]; // [rsp+120h] [rbp+20h] BYREF
  unsigned __int64 v53; // [rsp+138h] [rbp+38h]

  v46 = a4;
  v47 = a5;
  v9 = *(_QWORD *)(a1 + 24);
  v10 = *(_QWORD *)(a1 + 240);
  if ( v10 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    v10 = *(_QWORD *)(a1 + 240);
  }
  v42[0] = *(_QWORD *)(a1 + 232);
  v42[1] = v10;
  sub_18006558C(v9, v42);
  v45 = 0LL;
  sub_180065394(*(_QWORD *)(a1 + 24), (__int64 *)&v45);
  *(_BYTE *)(*(_QWORD *)(a1 + 24) + 465LL) &= 0xF8u;
  v11 = (__int64 *)(a1 + 72);
  v12 = *(_QWORD *)(a1 + 72);
  v37 = 0LL;
  v13 = *(_QWORD *)(a1 + 256);
  if ( v13 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
    v13 = *(_QWORD *)(a1 + 256);
  }
  *(_QWORD *)&v37 = *(_QWORD *)(a1 + 248);
  *((_QWORD *)&v37 + 1) = v13;
  sub_180053418(v12, &v37);
  sub_180049B94(*(_QWORD *)(a1 + 248), -1LL, 0);
  sub_180049BBC(*(_QWORD **)(a1 + 248), 0, v14, (unsigned int)(v14 + 2));
  v15 = *(_QWORD *)(a1 + 200);
  v43[0] = *a5;
  v43[1] = a5[1];
  *a5 = 0LL;
  a5[1] = 0LL;
  sub_1800933B8(v15, &qword_1801F5FD8, v43);
  v16 = *(_QWORD *)(a1 + 200);
  v38 = 0LL;
  v17 = *(_QWORD *)(a1 + 48);
  if ( v17 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v17 + 8));
    v17 = *(_QWORD *)(a1 + 48);
  }
  *(_QWORD *)&v38 = *(_QWORD *)(a1 + 40);
  *((_QWORD *)&v38 + 1) = v17;
  sub_1800935DC(v16, &qword_1801F5FD8, &v38);
  v18 = *(_QWORD *)(a1 + 24);
  v35 = *(void (__fastcall **)(__int64, __int128 *, __int64, __int64, char **))(*(_QWORD *)v18 + 208LL);
  v50[2] = 0LL;
  v51 = 15LL;
  LOBYTE(v50[0]) = 0;
  sub_180012190((__int64 *)v50, "Bloom Phase 1", 0xDuLL);
  v39 = 0LL;
  v19 = *(_QWORD *)(a2 + 16);
  if ( !v19 )
LABEL_22:
    sub_1800120F4();
  v20 = *(_DWORD *)(v19 + 8);
  do
  {
    if ( !v20 )
      goto LABEL_22;
    v21 = v20;
    v20 = _InterlockedCompareExchange((volatile signed __int32 *)(v19 + 8), v20 + 1, v20);
  }
  while ( v21 != v20 );
  v39 = *(_OWORD *)(a2 + 8);
  v35(v18, &v39, a3, a1 + 72, v50);
  sub_180010910((__int64)&v39);
  if ( v51 >= 0x10 )
    sub_180010884(v50[0], v51 + 1);
  v22 = (__m128)*(unsigned int *)(a1 + 280);
  v22.m128_f32[0] = fmaxf(v22.m128_f32[0], 0.0);
  v22.m128_f32[0] = fminf(v22.m128_f32[0], 1.0);
  v23 = *(_QWORD *)(a1 + 200);
  v44[0] = *a4;
  v44[1] = a4[1];
  *a4 = 0LL;
  a4[1] = 0LL;
  sub_1800933B8(v23, &qword_1801F5FD8, v44);
  LOBYTE(v24) = 1;
  sub_180049AF0(*(_QWORD *)(a1 + 248), (__int64)&qword_1801F5F38, v24);
  *(_BYTE *)(*(_QWORD *)(a1 + 24) + 465LL) &= 0xF8u;
  v25 = sub_18002850C(a2);
  v26 = sub_180036808(v25, 1);
  v28 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v26 + 72LL))(
          v26,
          &qword_1801F9A58,
          (unsigned int)(v27 + 13));
  v29 = (_QWORD **)sub_1800520F8(*v11, (__int64)v48);
  sub_180049BBC(*v29, v28, 0LL, 2LL);
  sub_180010910((__int64)v48);
  v49 = _mm_mul_ps(_mm_shuffle_ps(v22, v22, 0), (__m128)xmmword_180128A30);
  sub_1800533C0((_DWORD *)*v11, &v49);
  v30 = *(_QWORD *)(a1 + 24);
  v36 = *(void (__fastcall **)(__int64, __int128 *, __int64, __int64, char **))(*(_QWORD *)v30 + 208LL);
  v52[2] = 0LL;
  v53 = 15LL;
  LOBYTE(v52[0]) = 0;
  sub_180012190((__int64 *)v52, "Bloom Scene Overlay", 0x13uLL);
  v40 = 0LL;
  v31 = *(_QWORD *)(a2 + 16);
  if ( !v31 )
LABEL_23:
    sub_1800120F4();
  v32 = *(_DWORD *)(v31 + 8);
  do
  {
    if ( !v32 )
      goto LABEL_23;
    v33 = v32;
    v32 = _InterlockedCompareExchange((volatile signed __int32 *)(v31 + 8), v32 + 1, v32);
  }
  while ( v33 != v32 );
  v40 = *(_OWORD *)(a2 + 8);
  v36(v30, &v40, a3, a1 + 72, v52);
  sub_180010910((__int64)&v40);
  if ( v53 >= 0x10 )
    sub_180010884(v52[0], v53 + 1);
  v41 = xmmword_180128A30;
  sub_1800533C0((_DWORD *)*v11, &v41);
  v41 = 0LL;
  sub_1800933B8(*(_QWORD *)(a1 + 200), &qword_1801F5FD8, &v41);
  sub_180010910((__int64)a4);
  return sub_180010910((__int64)a5);
}
