/*
 * XREFs of sub_1800385C0 @ 0x1800385C0
 * Callers:
 *     sub_180070B80 @ 0x180070B80 (sub_180070B80.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 *     sub_1800210CC @ 0x1800210CC (sub_1800210CC.c)
 *     sub_1800211B8 @ 0x1800211B8 (sub_1800211B8.c)
 *     sub_180028460 @ 0x180028460 (sub_180028460.c)
 *     sub_180031DF4 @ 0x180031DF4 (sub_180031DF4.c)
 *     sub_180032F84 @ 0x180032F84 (sub_180032F84.c)
 *     sub_18003684C @ 0x18003684C (sub_18003684C.c)
 *     sub_180037E5C @ 0x180037E5C (sub_180037E5C.c)
 *     sub_1800B24D8 @ 0x1800B24D8 (sub_1800B24D8.c)
 *     sub_1800B3608 @ 0x1800B3608 (sub_1800B3608.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall sub_1800385C0(_QWORD *a1, __int64 a2, __int64 *a3, _QWORD *a4)
{
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rbx
  __int64 v16; // rax
  __int128 v18; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v19; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v20; // [rsp+68h] [rbp-98h] BYREF
  __int128 v21; // [rsp+78h] [rbp-88h] BYREF
  __int64 v22; // [rsp+88h] [rbp-78h] BYREF
  int v23; // [rsp+90h] [rbp-70h]
  __int64 v24; // [rsp+98h] [rbp-68h]
  _QWORD v25[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v26[4]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v27[8]; // [rsp+D0h] [rbp-30h] BYREF
  char *v28[3]; // [rsp+110h] [rbp+10h] BYREF
  unsigned __int64 v29; // [rsp+128h] [rbp+28h]

  v19 = 0LL;
  v7 = a1[59];
  if ( v7 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
    v7 = a1[59];
  }
  *(_QWORD *)&v19 = a1[58];
  *((_QWORD *)&v19 + 1) = v7;
  sub_1800210CC(
    v27,
    &v19,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    1511,
    (__int64)"PostRenderScene",
    (__int64)"kSpectreRenderCB_PostRender");
  v28[2] = 0LL;
  v29 = 15LL;
  LOBYTE(v28[0]) = 0;
  sub_180012190((__int64 *)v28, "kSpectreRenderCB_PostRender", 0x1BuLL);
  v8 = sub_18003684C((__int64)a1, v25);
  v18 = 0LL;
  v9 = v8[1];
  if ( v9 )
  {
    *(_QWORD *)&v18 = *v8;
    *((_QWORD *)&v18 + 1) = v9;
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 12));
  }
  sub_180031DF4(v26, &v18, (__int64)v28);
  if ( *((_QWORD *)&v18 + 1)
    && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v18 + 1) + 12LL), 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v18 + 1) + 8LL))(*((_QWORD *)&v18 + 1));
  }
  sub_180010910((__int64)v25);
  if ( v29 >= 0x10 )
    sub_180010884(v28[0], v29 + 1);
  v22 = a1[121];
  v10 = v22;
  v23 = 4;
  perf_frequency = Query_perf_frequency();
  perf_counter = Query_perf_counter();
  v24 = 1000000000 * (perf_counter % perf_frequency) / perf_frequency + 1000000000 * (perf_counter / perf_frequency);
  sub_1800B24D8(v10, &v22);
  v20 = 0LL;
  v13 = a4[1];
  if ( v13 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
    v13 = a4[1];
  }
  *(_QWORD *)&v20 = *a4;
  *((_QWORD *)&v20 + 1) = v13;
  v21 = 0LL;
  v14 = a3[1];
  if ( v14 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
    v14 = a3[1];
  }
  *(_QWORD *)&v21 = *a3;
  *((_QWORD *)&v21 + 1) = v14;
  sub_180037E5C((__int64)a1, 4u, (__int64)&v21, (__int64)&v20);
  sub_180032F84(v26);
  sub_1800211B8((__int64)v27);
  v15 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a4 + 184LL))(*a4);
  v16 = sub_180028460(*a3);
  return sub_1800B3608(v15, v16);
}
