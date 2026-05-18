/*
 * XREFs of sub_18003BCD0 @ 0x18003BCD0
 * Callers:
 *     sub_180078410 @ 0x180078410 (sub_180078410.c)
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
 *     sub_18003B574 @ 0x18003B574 (sub_18003B574.c)
 *     sub_1800802EC @ 0x1800802EC (sub_1800802EC.c)
 *     sub_180080304 @ 0x180080304 (sub_180080304.c)
 *     sub_1800804F8 @ 0x1800804F8 (sub_1800804F8.c)
 *     sub_1800806E0 @ 0x1800806E0 (sub_1800806E0.c)
 *     sub_180080778 @ 0x180080778 (sub_180080778.c)
 *     sub_1800B24D8 @ 0x1800B24D8 (sub_1800B24D8.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=17
__int64 __fastcall sub_18003BCD0(_QWORD *a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // rax
  __int64 *v11; // r12
  __int64 *v12; // rdi
  __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // rax
  __int128 v17; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v18; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v19; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v20; // [rsp+78h] [rbp-90h] BYREF
  __int128 v21; // [rsp+88h] [rbp-80h] BYREF
  __int64 v22; // [rsp+98h] [rbp-70h]
  __int128 v23; // [rsp+A0h] [rbp-68h] BYREF
  __m256i v24; // [rsp+B0h] [rbp-58h]
  __int128 v25; // [rsp+D0h] [rbp-38h] BYREF
  _QWORD v26[2]; // [rsp+E0h] [rbp-28h] BYREF
  _QWORD v27[2]; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v28[3]; // [rsp+100h] [rbp-8h] BYREF
  __int64 v29[4]; // [rsp+118h] [rbp+10h] BYREF
  _QWORD v30[8]; // [rsp+138h] [rbp+30h] BYREF
  _QWORD v31[8]; // [rsp+178h] [rbp+70h] BYREF
  char *v32[3]; // [rsp+1B8h] [rbp+B0h] BYREF
  unsigned __int64 v33; // [rsp+1D0h] [rbp+C8h]
  char *v34[3]; // [rsp+1D8h] [rbp+D0h] BYREF
  unsigned __int64 v35; // [rsp+1F0h] [rbp+E8h]

  v20 = 0LL;
  v2 = a1[59];
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = a1[59];
  }
  *(_QWORD *)&v20 = a1[58];
  *((_QWORD *)&v20 + 1) = v2;
  sub_1800210CC(
    v31,
    &v20,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    707,
    (__int64)"UpdateScenes",
    (__int64)"UpdateScenes");
  v32[2] = 0LL;
  v33 = 15LL;
  LOBYTE(v32[0]) = 0;
  sub_180012190((__int64 *)v32, "UpdateScenes", 0xCuLL);
  v3 = sub_18003684C((__int64)a1, v26);
  v18 = 0LL;
  v4 = v3[1];
  if ( v4 )
  {
    *(_QWORD *)&v18 = *v3;
    *((_QWORD *)&v18 + 1) = v4;
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 12));
  }
  sub_180031DF4(v29, &v18, (__int64)v32);
  if ( *((_QWORD *)&v18 + 1)
    && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v18 + 1) + 12LL), 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v18 + 1) + 8LL))(*((_QWORD *)&v18 + 1));
  }
  sub_180010910((__int64)v26);
  if ( v33 >= 0x10 )
    sub_180010884(v32[0], v33 + 1);
  v17 = 0LL;
  v5 = a1[59];
  if ( v5 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
    v5 = a1[59];
  }
  *(_QWORD *)&v17 = a1[58];
  *((_QWORD *)&v17 + 1) = v5;
  sub_1800210CC(
    v30,
    &v17,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    712,
    (__int64)"UpdateScenes",
    (__int64)"kSpectreRenderCB_BeginFrame");
  v34[2] = 0LL;
  v35 = 15LL;
  LOBYTE(v34[0]) = 0;
  sub_180012190((__int64 *)v34, "kSpectreRenderCB_BeginFrame", 0x1BuLL);
  v6 = sub_18003684C((__int64)a1, v27);
  v19 = 0LL;
  v7 = v6[1];
  if ( v7 )
  {
    *(_QWORD *)&v19 = *v6;
    *((_QWORD *)&v19 + 1) = v7;
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 12));
  }
  sub_180031DF4(v28, &v19, (__int64)v34);
  if ( *((_QWORD *)&v19 + 1)
    && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v19 + 1) + 12LL), 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v19 + 1) + 8LL))(*((_QWORD *)&v19 + 1));
  }
  sub_180010910((__int64)v27);
  if ( v35 >= 0x10 )
    sub_180010884(v34[0], v35 + 1);
  *(_QWORD *)&v21 = a1[121];
  v8 = v21;
  DWORD2(v21) = 0;
  perf_frequency = Query_perf_frequency();
  perf_counter = Query_perf_counter();
  v22 = 1000000000 * (perf_counter % perf_frequency) / perf_frequency + 1000000000 * (perf_counter / perf_frequency);
  sub_1800B24D8(v8, &v21);
  v25 = 0LL;
  v21 = 0LL;
  sub_180037E5C((__int64)a1, 0, (__int64)&v21, (__int64)&v25);
  sub_180032F84(v28);
  sub_1800211B8((__int64)v30);
  v11 = (__int64 *)a1[89];
  v12 = (__int64 *)a1[88];
  if ( v12 != v11 )
  {
    v13 = sub_1800802EC(a1 + 46);
    do
    {
      v14 = sub_1800804F8(v13);
      v23 = *(_OWORD *)v14;
      v24 = *(__m256i *)(v14 + 16);
      v15 = sub_1800804F8(a1 + 25);
      if ( (*(float *)v15 == -1.0
         && *(float *)(v15 + 4) == -1.0
         && *(_DWORD *)(v15 + 8) == 2
         && !*(_DWORD *)(v15 + 12)
         && !*(_DWORD *)(v15 + 16)
         || *(float *)(v15 + 20) == -1.0
         && *(float *)(v15 + 24) == -1.0
         && *(_DWORD *)(v15 + 28) == 2
         && !*(_DWORD *)(v15 + 32)
         && !*(_DWORD *)(v15 + 36))
        && (*(float *)&v23 != -1.0 || *((float *)&v23 + 1) != -1.0 || *((_QWORD *)&v23 + 1) != 2LL || v24.m256i_i32[0])
        && (*(float *)&v24.m256i_i32[1] != -1.0
         || *(float *)&v24.m256i_i32[2] != -1.0
         || *(__int64 *)((char *)&v24.m256i_i64[1] + 4) != 2
         || v24.m256i_i32[5]) )
      {
        sub_180080778(a1 + 25, &v23);
      }
      sub_180080304(a1 + 46, a1 + 25);
      sub_18003B574(a1, v12);
      v12 += 2;
    }
    while ( v12 != v11 );
  }
  sub_1800806E0(a1 + 25);
  sub_180032F84(v29);
  return sub_1800211B8((__int64)v31);
}
