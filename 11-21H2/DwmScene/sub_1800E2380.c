/*
 * XREFs of sub_1800E2380 @ 0x1800E2380
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180011AC0 @ 0x180011AC0 (sub_180011AC0.c)
 *     sub_180018704 @ 0x180018704 (sub_180018704.c)
 *     sub_18002AA20 @ 0x18002AA20 (sub_18002AA20.c)
 *     sub_18002B9EC @ 0x18002B9EC (sub_18002B9EC.c)
 *     sub_1800DA968 @ 0x1800DA968 (sub_1800DA968.c)
 *     sub_1800DD668 @ 0x1800DD668 (sub_1800DD668.c)
 *     sub_1800E0240 @ 0x1800E0240 (sub_1800E0240.c)
 *     sub_1800E2B34 @ 0x1800E2B34 (sub_1800E2B34.c)
 *     sub_1800E6288 @ 0x1800E6288 (sub_1800E6288.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall sub_1800E2380(__int64 a1, int a2, int a3, int a4, int a5)
{
  int v7; // eax
  int v8; // ecx
  __int64 v9; // rdx
  signed __int32 v10; // eax
  signed __int32 v11; // ett
  __int64 v12; // r12
  __int64 v13; // rcx
  __int64 v14; // rsi
  bool v15; // bl
  int v16; // edx
  __int64 v17; // rdi
  __int64 (__fastcall *v18)(__int64, _QWORD, _DWORD *, __int64); // r13
  __int64 *v19; // r15
  __int64 v20; // rcx
  __int64 v21; // rbx
  int v22; // eax
  __int64 *v23; // rax
  __m128 v24; // xmm2
  __m128 v25; // xmm0
  int v27; // [rsp+30h] [rbp-D0h]
  int v28; // [rsp+34h] [rbp-CCh]
  __int128 v29; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v30; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v31; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v32[4]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v33[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v34[2]; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v35[3]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v36; // [rsp+ACh] [rbp-54h]
  __int128 v37; // [rsp+C0h] [rbp-40h]
  char *v38; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int64 v39; // [rsp+E8h] [rbp-18h]
  _BYTE v40[20]; // [rsp+F0h] [rbp-10h] BYREF
  unsigned int v41; // [rsp+104h] [rbp+4h]

  v7 = 1;
  if ( a2 )
    v7 = a2;
  v28 = v7;
  v8 = 1;
  if ( a3 )
    v8 = a3;
  v27 = v8;
  sub_1800E2B34(a1, v7, v8, a4, a5);
  v29 = 0LL;
  v9 = *(_QWORD *)(a1 + 80);
  if ( v9 )
  {
    v10 = *(_DWORD *)(v9 + 8);
    while ( v10 )
    {
      v11 = v10;
      v10 = _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 8), v10 + 1, v10);
      if ( v11 == v10 )
      {
        v29 = *(_OWORD *)(a1 + 72);
        break;
      }
    }
  }
  if ( *((_QWORD *)&v29 + 1) )
    _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)&v29 + 1) + 8LL), 1u);
  v37 = v29;
  sub_180018704((__int64)v34);
  v12 = v34[0];
  sub_1800DA968(v34[0], &v31);
  v13 = *(_QWORD *)(a1 + 104);
  if ( v13 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v13 + 8), 1u);
    v13 = *(_QWORD *)(a1 + 104);
    v12 = v34[0];
  }
  v32[2] = *(_QWORD *)(a1 + 96);
  v32[3] = v13;
  sub_180018704((__int64)v33);
  sub_1800E6288(v33[0], &v30);
  v14 = v30;
  (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v30 + 80LL))(v30, v40);
  v15 = v41 > 1;
  v36 = 0LL;
  if ( (unsigned int)(a4 - 23) <= 1 )
    v16 = 2;
  else
    v16 = (a5 & 8) != 0;
  v35[0] = sub_1800E0240(a4, v16);
  v35[1] = v15 ? 6 : 4;
  v35[2] = 0;
  sub_1800E6288(v33[0], v32);
  v17 = v31;
  v18 = *(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *, __int64))(*(_QWORD *)v31 + 72LL);
  v19 = (__int64 *)(a1 + 128);
  v20 = *(_QWORD *)(a1 + 128);
  if ( v20 )
  {
    *v19 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  v21 = v32[0];
  v22 = v18(v17, v32[0], v35, a1 + 128);
  sub_1800DD668(v12, v22);
  v23 = sub_18002B9EC(a1, (__int64 *)&v38);
  if ( (unsigned __int64)v23[3] >= 0x10 )
    v23 = (__int64 *)*v23;
  sub_180011AC0(*v19, (const char *)v23);
  if ( v39 >= 0x10 )
    sub_180010884(v38, v39 + 1);
  v24 = 0LL;
  v24.m128_f32[0] = (float)v27;
  v25 = 0LL;
  v25.m128_f32[0] = (float)v28;
  sub_18002AA20(a1, _mm_unpacklo_ps(v25, v24).m128_i64[0]);
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  sub_180010910((__int64)v33);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  sub_180010910((__int64)v34);
  return sub_180010910((__int64)&v29);
}
