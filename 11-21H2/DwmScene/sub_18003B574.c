/*
 * XREFs of sub_18003B574 @ 0x18003B574
 * Callers:
 *     sub_18003BCD0 @ 0x18003BCD0 (sub_18003BCD0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 *     sub_1800210CC @ 0x1800210CC (sub_1800210CC.c)
 *     sub_1800211B8 @ 0x1800211B8 (sub_1800211B8.c)
 *     sub_18002C460 @ 0x18002C460 (sub_18002C460.c)
 *     j_LanguageEnumProc @ 0x18002C8D8 (j_LanguageEnumProc.c)
 *     sub_180031DF4 @ 0x180031DF4 (sub_180031DF4.c)
 *     sub_180032F84 @ 0x180032F84 (sub_180032F84.c)
 *     sub_18003684C @ 0x18003684C (sub_18003684C.c)
 *     sub_180037450 @ 0x180037450 (sub_180037450.c)
 *     sub_180037E5C @ 0x180037E5C (sub_180037E5C.c)
 *     sub_1800476C0 @ 0x1800476C0 (sub_1800476C0.c)
 *     sub_1800B24D8 @ 0x1800B24D8 (sub_1800B24D8.c)
 *     sub_1800FBAC4 @ 0x1800FBAC4 (sub_1800FBAC4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=39
__int64 __fastcall sub_18003B574(_QWORD *a1, __int64 *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  _QWORD *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 result; // rax
  __int128 v24; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v25; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v26; // [rsp+68h] [rbp-98h] BYREF
  __int128 v27; // [rsp+78h] [rbp-88h] BYREF
  __int128 v28; // [rsp+88h] [rbp-78h] BYREF
  __int128 v29; // [rsp+98h] [rbp-68h] BYREF
  __int128 v30; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v31; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v32; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v33; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v34; // [rsp+E8h] [rbp-18h]
  __int128 v35; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v36; // [rsp+100h] [rbp+0h] BYREF
  __int64 v37; // [rsp+110h] [rbp+10h] BYREF
  char v38; // [rsp+118h] [rbp+18h]
  __int64 v39; // [rsp+120h] [rbp+20h] BYREF
  char v40; // [rsp+128h] [rbp+28h]
  __int64 v41; // [rsp+130h] [rbp+30h] BYREF
  int v42; // [rsp+138h] [rbp+38h]
  __int64 v43; // [rsp+140h] [rbp+40h]
  _QWORD v44[2]; // [rsp+148h] [rbp+48h] BYREF
  _QWORD v45[2]; // [rsp+158h] [rbp+58h] BYREF
  _QWORD v46[2]; // [rsp+168h] [rbp+68h] BYREF
  _QWORD v47[2]; // [rsp+178h] [rbp+78h] BYREF
  __int64 v48[3]; // [rsp+188h] [rbp+88h] BYREF
  __int64 v49[3]; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v50[3]; // [rsp+1B8h] [rbp+B8h] BYREF
  __int64 v51[4]; // [rsp+1D0h] [rbp+D0h] BYREF
  _QWORD v52[8]; // [rsp+1F0h] [rbp+F0h] BYREF
  _QWORD v53[8]; // [rsp+230h] [rbp+130h] BYREF
  _QWORD v54[8]; // [rsp+270h] [rbp+170h] BYREF
  _QWORD v55[8]; // [rsp+2B0h] [rbp+1B0h] BYREF
  char *v56[3]; // [rsp+2F0h] [rbp+1F0h] BYREF
  unsigned __int64 v57; // [rsp+308h] [rbp+208h]
  char *v58[3]; // [rsp+310h] [rbp+210h] BYREF
  unsigned __int64 v59; // [rsp+328h] [rbp+228h]
  char *v60[3]; // [rsp+330h] [rbp+230h] BYREF
  unsigned __int64 v61; // [rsp+348h] [rbp+248h]
  char *v62[3]; // [rsp+350h] [rbp+250h] BYREF
  unsigned __int64 v63; // [rsp+368h] [rbp+268h]

  sub_18002C460((__int64)(a1 + 1), (__int64)&v39);
  sub_18002C460(*a2 + 16, (__int64)&v37);
  sub_180037450(v4, &v28, a2);
  if ( (_QWORD)v28 )
    sub_1800FBAC4();
  sub_180010910((__int64)&v28);
  v29 = 0LL;
  v5 = a1[59];
  if ( v5 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v5 + 8), 1u);
    v5 = a1[59];
  }
  *(_QWORD *)&v29 = a1[58];
  *((_QWORD *)&v29 + 1) = v5;
  sub_1800210CC(
    v52,
    &v29,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    750,
    (__int64)"UpdateScene",
    (__int64)"PreUpdateScene");
  v56[2] = 0LL;
  v57 = 15LL;
  LOBYTE(v56[0]) = 0;
  sub_180012190((__int64 *)v56, "PreUpdateScene", 0xEuLL);
  v6 = sub_18003684C((__int64)a1, v44);
  v24 = 0LL;
  v7 = v6[1];
  if ( v7 )
  {
    *(_QWORD *)&v24 = *v6;
    *((_QWORD *)&v24 + 1) = v7;
    _InterlockedAdd((volatile signed __int32 *)(v7 + 12), 1u);
  }
  sub_180031DF4(v48, &v24, (__int64)v56);
  if ( *((_QWORD *)&v24 + 1)
    && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v24 + 1) + 12LL), 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v24 + 1) + 8LL))(*((_QWORD *)&v24 + 1));
  }
  sub_180010910((__int64)v44);
  if ( v57 >= 0x10 )
    sub_180010884(v56[0], v57 + 1);
  (*(void (__fastcall **)(_QWORD *, __int64 *))(*a1 + 96LL))(a1, a2);
  sub_180032F84(v48);
  sub_1800211B8((__int64)v52);
  v30 = 0LL;
  v8 = a1[59];
  if ( v8 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v8 + 8), 1u);
    v8 = a1[59];
  }
  *(_QWORD *)&v30 = a1[58];
  *((_QWORD *)&v30 + 1) = v8;
  sub_1800210CC(
    v53,
    &v30,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    765,
    (__int64)"UpdateScene",
    (__int64)"kSpectreRenderCB_PreSceneUpdate");
  v58[2] = 0LL;
  v59 = 15LL;
  LOBYTE(v58[0]) = 0;
  sub_180012190((__int64 *)v58, "kSpectreRenderCB_PreSceneUpdate", 0x1FuLL);
  v9 = sub_18003684C((__int64)a1, v45);
  v25 = 0LL;
  v10 = v9[1];
  if ( v10 )
  {
    *(_QWORD *)&v25 = *v9;
    *((_QWORD *)&v25 + 1) = v10;
    _InterlockedAdd((volatile signed __int32 *)(v10 + 12), 1u);
  }
  sub_180031DF4(v49, &v25, (__int64)v58);
  if ( *((_QWORD *)&v25 + 1)
    && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v25 + 1) + 12LL), 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v25 + 1) + 8LL))(*((_QWORD *)&v25 + 1));
  }
  sub_180010910((__int64)v45);
  if ( v59 >= 0x10 )
    sub_180010884(v58[0], v59 + 1);
  v41 = a1[121];
  v11 = v41;
  v42 = 1;
  perf_frequency = Query_perf_frequency();
  perf_counter = Query_perf_counter();
  v43 = 1000000000 * (perf_counter % perf_frequency) / perf_frequency + 1000000000 * (perf_counter / perf_frequency);
  sub_1800B24D8(v11, &v41);
  v35 = 0LL;
  v36 = 0LL;
  sub_180037E5C((__int64)a1, 1u, (__int64)&v36, (__int64)&v35);
  sub_180032F84(v49);
  sub_1800211B8((__int64)v53);
  v31 = 0LL;
  v14 = a1[59];
  if ( v14 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v14 + 8), 1u);
    v14 = a1[59];
  }
  *(_QWORD *)&v31 = a1[58];
  *((_QWORD *)&v31 + 1) = v14;
  sub_1800210CC(
    v54,
    &v31,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    771,
    (__int64)"UpdateScene",
    (__int64)"Update Scene");
  v60[2] = 0LL;
  v61 = 15LL;
  LOBYTE(v60[0]) = 0;
  sub_180012190((__int64 *)v60, "Update Scene", 0xCuLL);
  v15 = sub_18003684C((__int64)a1, v46);
  v26 = 0LL;
  v16 = v15[1];
  if ( v16 )
  {
    *(_QWORD *)&v26 = *v15;
    *((_QWORD *)&v26 + 1) = v16;
    _InterlockedAdd((volatile signed __int32 *)(v16 + 12), 1u);
  }
  sub_180031DF4(v50, &v26, (__int64)v60);
  if ( *((_QWORD *)&v26 + 1)
    && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v26 + 1) + 12LL), 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v26 + 1) + 8LL))(*((_QWORD *)&v26 + 1));
  }
  sub_180010910((__int64)v46);
  if ( v61 >= 0x10 )
    sub_180010884(v60[0], v61 + 1);
  sub_1800476C0(*a2, a1 + 46);
  sub_180032F84(v50);
  sub_1800211B8((__int64)v54);
  v32 = 0LL;
  v17 = a1[59];
  if ( v17 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v17 + 8), 1u);
    v17 = a1[59];
  }
  *(_QWORD *)&v32 = a1[58];
  *((_QWORD *)&v32 + 1) = v17;
  sub_1800210CC(
    v55,
    &v32,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    777,
    (__int64)"UpdateScene",
    (__int64)"kSpectreRenderCB_PostSceneUpdate");
  v62[2] = 0LL;
  v63 = 15LL;
  LOBYTE(v62[0]) = 0;
  sub_180012190((__int64 *)v62, "kSpectreRenderCB_PostSceneUpdate", 0x20uLL);
  v18 = sub_18003684C((__int64)a1, v47);
  v27 = 0LL;
  v19 = v18[1];
  if ( v19 )
  {
    *(_QWORD *)&v27 = *v18;
    *((_QWORD *)&v27 + 1) = v19;
    _InterlockedAdd((volatile signed __int32 *)(v19 + 12), 1u);
  }
  sub_180031DF4(v51, &v27, (__int64)v62);
  if ( *((_QWORD *)&v27 + 1)
    && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v27 + 1) + 12LL), 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v27 + 1) + 8LL))(*((_QWORD *)&v27 + 1));
  }
  sub_180010910((__int64)v47);
  if ( v63 >= 0x10 )
    sub_180010884(v62[0], v63 + 1);
  *(_QWORD *)&v33 = a1[121];
  v20 = v33;
  DWORD2(v33) = 2;
  v21 = Query_perf_frequency();
  v22 = Query_perf_counter();
  v34 = 1000000000 * (v22 % v21) / v21 + 1000000000 * (v22 / v21);
  sub_1800B24D8(v20, &v33);
  v28 = 0LL;
  v33 = 0LL;
  sub_180037E5C((__int64)a1, 2u, (__int64)&v33, (__int64)&v28);
  sub_180032F84(v51);
  sub_1800211B8((__int64)v55);
  result = (*(__int64 (__fastcall **)(_QWORD *, __int64 *))(*a1 + 104LL))(a1, a2);
  if ( v38 )
    result = j_LanguageEnumProc(v37);
  if ( v40 )
    return j_LanguageEnumProc(v39);
  return result;
}
