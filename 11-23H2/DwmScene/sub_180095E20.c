/*
 * XREFs of sub_180095E20 @ 0x180095E20
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_18001112C @ 0x18001112C (sub_18001112C.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_180011D4C @ 0x180011D4C (sub_180011D4C.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180026618 @ 0x180026618 (sub_180026618.c)
 *     sub_180034094 @ 0x180034094 (sub_180034094.c)
 *     sub_1800446D8 @ 0x1800446D8 (sub_1800446D8.c)
 *     sub_180044770 @ 0x180044770 (sub_180044770.c)
 *     sub_180044798 @ 0x180044798 (sub_180044798.c)
 *     sub_18004B9E4 @ 0x18004B9E4 (sub_18004B9E4.c)
 *     sub_18004C9B4 @ 0x18004C9B4 (sub_18004C9B4.c)
 *     sub_18004CA0C @ 0x18004CA0C (sub_18004CA0C.c)
 *     sub_18005D0B8 @ 0x18005D0B8 (sub_18005D0B8.c)
 *     sub_18005D26C @ 0x18005D26C (sub_18005D26C.c)
 *     sub_180085680 @ 0x180085680 (sub_180085680.c)
 *     sub_180085870 @ 0x180085870 (sub_180085870.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_180095E20(__int64 a1, __int64 a2, __int64 a3, __m128 *a4, __m128 *a5)
{
  __int64 *v8; // rax
  __int64 v9; // r8
  __int64 *v10; // r14
  _QWORD *v11; // rax
  __int64 v12; // r8
  int v13; // r8d
  __int64 v14; // rcx
  _QWORD *v15; // rax
  __int64 v16; // r9
  __int64 v17; // rdi
  void (__fastcall *v18)(__int64, __int64, __int64, __int64, _QWORD *); // rbx
  __int64 v19; // rax
  __m128 v20; // xmm0
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  int v24; // ebx
  __int64 *v25; // rax
  __int64 v26; // rdi
  void (__fastcall *v27)(__int64, __int64, __int64, __int64, _QWORD *); // rbx
  __int64 v28; // rax
  __int64 result; // rax
  __int64 v30; // rcx
  __int64 v31; // rcx
  __m128 v32; // [rsp+38h] [rbp-51h] BYREF
  __int64 v33; // [rsp+48h] [rbp-41h]
  __m128 *v34; // [rsp+50h] [rbp-39h]
  __int64 v35; // [rsp+58h] [rbp-31h]
  _QWORD v36[4]; // [rsp+60h] [rbp-29h] BYREF

  v33 = a2;
  v34 = a4;
  v35 = (__int64)a5;
  v8 = sub_18001246C(&v32, (_QWORD *)(a1 + 232));
  sub_18005D26C(v9, v8);
  v32 = 0LL;
  sub_18005D0B8(*(_QWORD *)(a1 + 24), (__int64 *)&v32);
  *(_BYTE *)(*(_QWORD *)(a1 + 24) + 465LL) &= 0xF8u;
  v10 = (__int64 *)(a1 + 72);
  v11 = sub_18001246C(&v32, (_QWORD *)(a1 + 248));
  sub_18004CA0C(v12, v11);
  sub_180044770(*(_QWORD *)(a1 + 248), -1LL, 0);
  sub_180044798(*(_QWORD *)(a1 + 248), 0, v13, v13 + 2);
  v14 = *(_QWORD *)(a1 + 200);
  v32 = *a5;
  a5->m128_u64[0] = 0LL;
  a5->m128_u64[1] = 0LL;
  sub_180085680(v14, qword_1801D7EE8, &v32);
  v15 = sub_18001246C(&v32, (_QWORD *)(a1 + 40));
  sub_180085870(v16, qword_1801D7EE8, v15);
  v17 = *(_QWORD *)(a1 + 24);
  v18 = *(void (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD *))(*(_QWORD *)v17 + 208LL);
  sub_180010DD0(v36, (__int64)"Bloom Phase 1");
  v19 = sub_180011D4C(v33 + 8, &v32);
  v18(v17, v19, a3, a1 + 72, v36);
  if ( v32.m128_u64[1] )
    sub_180010530(v32.m128_i64[1]);
  sub_180011B24((__int64)v36);
  v20 = (__m128)*(unsigned int *)(a1 + 280);
  v20.m128_f32[0] = sub_18001112C(v20.m128_f32[0], 0.0, 1.0);
  v21 = *(_QWORD *)(a1 + 200);
  v32 = *a4;
  a4->m128_u64[0] = 0LL;
  a4->m128_u64[1] = 0LL;
  sub_180085680(v21, qword_1801D7EE8, &v32);
  sub_1800446D8(*(_QWORD *)(a1 + 248), (__int64)&unk_1801D8148, 1);
  *(_BYTE *)(*(_QWORD *)(a1 + 24) + 465LL) &= 0xF8u;
  v22 = sub_180026618(v33);
  v23 = sub_180034094(v22, 1);
  v24 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v23 + 72LL))(v23, &unk_1801D59E8, 14LL);
  v25 = (__int64 *)sub_18004B9E4(*v10, (__int64)&v32);
  sub_180044798(*v25, v24, 0, 2);
  if ( v32.m128_u64[1] )
    sub_180010530(v32.m128_i64[1]);
  v32 = _mm_mul_ps(_mm_shuffle_ps(v20, v20, 0), (__m128)xmmword_180106A80);
  sub_18004C9B4((_DWORD *)*v10, &v32);
  v26 = *(_QWORD *)(a1 + 24);
  v27 = *(void (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD *))(*(_QWORD *)v26 + 208LL);
  sub_180010DD0(v36, (__int64)"Bloom Scene Overlay");
  v28 = sub_180011D4C(v33 + 8, &v32);
  v27(v26, v28, a3, a1 + 72, v36);
  if ( v32.m128_u64[1] )
    sub_180010530(v32.m128_i64[1]);
  sub_180011B24((__int64)v36);
  v32 = (__m128)xmmword_180106A80;
  sub_18004C9B4((_DWORD *)*v10, &v32);
  v32 = 0LL;
  result = sub_180085680(*(_QWORD *)(a1 + 200), qword_1801D7EE8, &v32);
  v30 = a4->m128_i64[1];
  if ( v30 )
    result = sub_180010530(v30);
  v31 = a5->m128_i64[1];
  if ( v31 )
    return sub_180010530(v31);
  return result;
}
