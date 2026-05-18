/*
 * XREFs of sub_18003888C @ 0x18003888C
 * Callers:
 *     sub_18005F684 @ 0x18005F684 (sub_18005F684.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 *     sub_1800210CC @ 0x1800210CC (sub_1800210CC.c)
 *     sub_1800211B8 @ 0x1800211B8 (sub_1800211B8.c)
 *     sub_180031DF4 @ 0x180031DF4 (sub_180031DF4.c)
 *     sub_180032F84 @ 0x180032F84 (sub_180032F84.c)
 *     sub_18003684C @ 0x18003684C (sub_18003684C.c)
 *     sub_180037E5C @ 0x180037E5C (sub_180037E5C.c)
 *     sub_1800B24D8 @ 0x1800B24D8 (sub_1800B24D8.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=17
__int64 __fastcall sub_18003888C(_QWORD *a1, _QWORD *a2, _QWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int128 v22; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v23; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v24; // [rsp+68h] [rbp-98h] BYREF
  __int128 v25; // [rsp+78h] [rbp-88h] BYREF
  __int128 v26; // [rsp+88h] [rbp-78h] BYREF
  __int128 v27; // [rsp+98h] [rbp-68h] BYREF
  __int64 v28; // [rsp+A8h] [rbp-58h] BYREF
  int v29; // [rsp+B0h] [rbp-50h]
  __int64 v30; // [rsp+B8h] [rbp-48h]
  _QWORD v31[2]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v32[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v33[3]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v34[3]; // [rsp+F8h] [rbp-8h] BYREF
  _QWORD v35[8]; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v36[8]; // [rsp+150h] [rbp+50h] BYREF
  char *v37[3]; // [rsp+190h] [rbp+90h] BYREF
  unsigned __int64 v38; // [rsp+1A8h] [rbp+A8h]
  char *v39[3]; // [rsp+1B0h] [rbp+B0h] BYREF
  unsigned __int64 v40; // [rsp+1C8h] [rbp+C8h]

  v24 = 0LL;
  v10 = a1[59];
  if ( v10 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    v10 = a1[59];
  }
  *(_QWORD *)&v24 = a1[58];
  *((_QWORD *)&v24 + 1) = v10;
  sub_1800210CC(
    v35,
    &v24,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    1050,
    (__int64)"PresentFrame",
    (__int64)"PresentFrame");
  v37[2] = 0LL;
  v38 = 15LL;
  LOBYTE(v37[0]) = 0;
  sub_180012190((__int64 *)v37, "PresentFrame", 0xCuLL);
  v11 = sub_18003684C((__int64)a1, v31);
  v22 = 0LL;
  v12 = v11[1];
  if ( v12 )
  {
    *(_QWORD *)&v22 = *v11;
    *((_QWORD *)&v22 + 1) = v12;
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 12));
  }
  sub_180031DF4(v33, &v22, (__int64)v37);
  if ( *((_QWORD *)&v22 + 1)
    && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v22 + 1) + 12LL), 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v22 + 1) + 8LL))(*((_QWORD *)&v22 + 1));
  }
  sub_180010910((__int64)v31);
  if ( v38 >= 0x10 )
    sub_180010884(v37[0], v38 + 1);
  (*(void (__fastcall **)(_QWORD, _QWORD *, __int64, __int64, __int64))(*(_QWORD *)*a2 + 216LL))(*a2, a3, a4, a5, a6);
  sub_180032F84(v33);
  sub_1800211B8((__int64)v35);
  v25 = 0LL;
  v13 = a1[59];
  if ( v13 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
    v13 = a1[59];
  }
  *(_QWORD *)&v25 = a1[58];
  *((_QWORD *)&v25 + 1) = v13;
  sub_1800210CC(
    v36,
    &v25,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    1056,
    (__int64)"PresentFrame",
    (__int64)"kSpectreRenderCB_PostPresent");
  v39[2] = 0LL;
  v40 = 15LL;
  LOBYTE(v39[0]) = 0;
  sub_180012190((__int64 *)v39, "kSpectreRenderCB_PostPresent", 0x1CuLL);
  v14 = sub_18003684C((__int64)a1, v32);
  v23 = 0LL;
  v15 = v14[1];
  if ( v15 )
  {
    *(_QWORD *)&v23 = *v14;
    *((_QWORD *)&v23 + 1) = v15;
    _InterlockedIncrement((volatile signed __int32 *)(v15 + 12));
  }
  sub_180031DF4(v34, &v23, (__int64)v39);
  if ( *((_QWORD *)&v23 + 1)
    && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v23 + 1) + 12LL), 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v23 + 1) + 8LL))(*((_QWORD *)&v23 + 1));
  }
  sub_180010910((__int64)v32);
  if ( v40 >= 0x10 )
    sub_180010884(v39[0], v40 + 1);
  v28 = a1[121];
  v16 = v28;
  v29 = 6;
  perf_frequency = Query_perf_frequency();
  perf_counter = Query_perf_counter();
  v30 = 1000000000 * (perf_counter % perf_frequency) / perf_frequency + 1000000000 * (perf_counter / perf_frequency);
  sub_1800B24D8(v16, &v28);
  v26 = 0LL;
  v19 = a3[1];
  if ( v19 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
    v19 = a3[1];
  }
  *(_QWORD *)&v26 = *a3;
  *((_QWORD *)&v26 + 1) = v19;
  v27 = 0LL;
  v20 = a2[1];
  if ( v20 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v20 + 8));
    v20 = a2[1];
  }
  *(_QWORD *)&v27 = *a2;
  *((_QWORD *)&v27 + 1) = v20;
  sub_180037E5C((__int64)a1, 6u, (__int64)&v27, (__int64)&v26);
  sub_180032F84(v34);
  return sub_1800211B8((__int64)v36);
}
