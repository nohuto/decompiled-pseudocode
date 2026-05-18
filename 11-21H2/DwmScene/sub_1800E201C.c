/*
 * XREFs of sub_1800E201C @ 0x1800E201C
 * Callers:
 *     sub_180011740 @ 0x180011740 (sub_180011740.c)
 *     sub_1800E2680 @ 0x1800E2680 (sub_1800E2680.c)
 *     sub_1800F2C64 @ 0x1800F2C64 (sub_1800F2C64.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180010D08 @ 0x180010D08 (sub_180010D08.c)
 *     sub_180016ED0 @ 0x180016ED0 (sub_180016ED0.c)
 *     sub_180018704 @ 0x180018704 (sub_180018704.c)
 *     sub_18001DC84 @ 0x18001DC84 (sub_18001DC84.c)
 *     sub_18002AA20 @ 0x18002AA20 (sub_18002AA20.c)
 *     sub_18002B9EC @ 0x18002B9EC (sub_18002B9EC.c)
 *     sub_18002BC44 @ 0x18002BC44 (sub_18002BC44.c)
 *     sub_1800E3AA8 @ 0x1800E3AA8 (sub_1800E3AA8.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall sub_1800E201C(__int64 a1, __int64 *a2, __int64 *a3, _QWORD *a4, int a5, int a6)
{
  int v10; // r12d
  int v11; // r13d
  __int64 v12; // rdx
  signed __int32 v13; // eax
  signed __int32 v14; // ett
  __int64 *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rbx
  __int64 *v24; // rax
  __int64 *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  __m128 v29; // xmm2
  __m128 v30; // xmm0
  __int64 result; // rax
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  _QWORD v35[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v36; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v37; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v38; // [rsp+48h] [rbp-B8h]
  __int64 v39; // [rsp+50h] [rbp-B0h]
  __int64 v40; // [rsp+58h] [rbp-A8h]
  __int64 v41; // [rsp+60h] [rbp-A0h]
  _QWORD v42[2]; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v43[2]; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v44[2]; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v45[5]; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v46[2]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v47[2]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v48[32]; // [rsp+E0h] [rbp-20h] BYREF
  char *v49; // [rsp+100h] [rbp+0h] BYREF
  unsigned __int64 v50; // [rsp+118h] [rbp+18h]

  v45[2] = a2;
  v45[3] = a3;
  v45[4] = a4;
  v10 = 1;
  if ( a5 )
    v10 = a5;
  v11 = 1;
  if ( a6 )
    v11 = a6;
  v37 = 0LL;
  v12 = *(_QWORD *)(a1 + 80);
  if ( v12 )
  {
    v13 = *(_DWORD *)(v12 + 8);
    while ( v13 )
    {
      v14 = v13;
      v13 = _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 8), v13 + 1, v13);
      if ( v14 == v13 )
      {
        v37 = *(_OWORD *)(a1 + 72);
        break;
      }
    }
  }
  v15 = sub_180016ED0(v37, v46);
  v16 = *v15;
  v17 = v15[1];
  *v15 = 0LL;
  v15[1] = 0LL;
  v42[0] = *(_QWORD *)(a1 + 96);
  *(_QWORD *)(a1 + 96) = v16;
  v42[1] = *(_QWORD *)(a1 + 104);
  *(_QWORD *)(a1 + 104) = v17;
  sub_180010910((__int64)v42);
  sub_180010910((__int64)v46);
  v18 = *(_QWORD *)(a1 + 104);
  if ( v18 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v18 + 8));
    v18 = *(_QWORD *)(a1 + 104);
  }
  v38 = *(_QWORD *)(a1 + 96);
  v39 = v18;
  sub_180018704((__int64)v45);
  v19 = *a3;
  v36 = v19;
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
  sub_1800E3AA8(v45[0], &v36, 0LL);
  if ( sub_180010D08(a4) )
  {
    v20 = sub_180016ED0(v37, v47);
    v21 = *v20;
    v22 = v20[1];
    *v20 = 0LL;
    v20[1] = 0LL;
    v43[0] = *(_QWORD *)(a1 + 112);
    *(_QWORD *)(a1 + 112) = v21;
    v43[1] = *(_QWORD *)(a1 + 120);
    *(_QWORD *)(a1 + 120) = v22;
    sub_180010910((__int64)v43);
    sub_180010910((__int64)v47);
    v23 = *(_QWORD *)(a1 + 112);
    v24 = sub_18002B9EC(a1, (__int64 *)&v49);
    v25 = (__int64 *)sub_18001DC84((__int64)v48, v24);
    sub_18002BC44(v23, v25);
    if ( v50 >= 0x10 )
      sub_180010884(v49, v50 + 1);
    v26 = *(_QWORD *)(a1 + 120);
    if ( v26 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v26 + 8));
      v26 = *(_QWORD *)(a1 + 120);
    }
    v40 = *(_QWORD *)(a1 + 112);
    v41 = v26;
    sub_180018704((__int64)v44);
    v35[0] = 0LL;
    if ( v35 != a4 )
    {
      v35[0] = *a4;
      *a4 = 0LL;
    }
    sub_1800E3AA8(v44[0], v35, 128LL);
    sub_180010910((__int64)v44);
  }
  v27 = 0LL;
  if ( v35 != a2 )
  {
    v27 = *a2;
    *a2 = 0LL;
  }
  v28 = *(_QWORD *)(a1 + 128);
  *(_QWORD *)(a1 + 128) = v27;
  if ( v28 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  v29 = 0LL;
  v29.m128_f32[0] = (float)v11;
  v30 = 0LL;
  v30.m128_f32[0] = (float)v10;
  sub_18002AA20(a1, _mm_unpacklo_ps(v30, v29).m128_i64[0]);
  sub_180010910((__int64)v45);
  result = sub_180010910((__int64)&v37);
  v32 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  }
  v33 = *a3;
  if ( *a3 )
  {
    *a3 = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  }
  v34 = *a4;
  if ( *a4 )
  {
    *a4 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
  }
  return result;
}
