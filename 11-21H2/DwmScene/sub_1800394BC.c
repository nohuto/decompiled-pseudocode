/*
 * XREFs of sub_1800394BC @ 0x1800394BC
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
 *     sub_180037388 @ 0x180037388 (sub_180037388.c)
 *     sub_180037E5C @ 0x180037E5C (sub_180037E5C.c)
 *     sub_180056510 @ 0x180056510 (sub_180056510.c)
 *     sub_1800B24D8 @ 0x1800B24D8 (sub_1800B24D8.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=35
__int64 __fastcall sub_1800394BC(_QWORD *a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  signed __int32 v13; // eax
  signed __int32 v14; // ett
  __int64 v15; // rcx
  __int64 v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  _QWORD *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rcx
  _QWORD *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int128 v35; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v36; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v37; // [rsp+70h] [rbp-90h] BYREF
  __int128 v38; // [rsp+80h] [rbp-80h] BYREF
  __int128 v39; // [rsp+90h] [rbp-70h] BYREF
  __int128 v40; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v41; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v42; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v43; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v44; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v45; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v46; // [rsp+100h] [rbp+0h] BYREF
  __int128 v47; // [rsp+110h] [rbp+10h] BYREF
  __int64 v48; // [rsp+120h] [rbp+20h] BYREF
  int v49; // [rsp+128h] [rbp+28h]
  __int64 v50; // [rsp+130h] [rbp+30h]
  __int64 v51; // [rsp+138h] [rbp+38h] BYREF
  int v52; // [rsp+140h] [rbp+40h]
  __int64 v53; // [rsp+148h] [rbp+48h]
  _QWORD v54[2]; // [rsp+150h] [rbp+50h] BYREF
  _QWORD v55[2]; // [rsp+160h] [rbp+60h] BYREF
  _QWORD v56[2]; // [rsp+170h] [rbp+70h] BYREF
  _QWORD v57[2]; // [rsp+180h] [rbp+80h] BYREF
  _BYTE v58[8]; // [rsp+190h] [rbp+90h] BYREF
  __int64 v59; // [rsp+198h] [rbp+98h]
  __int64 v60[3]; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v61[3]; // [rsp+1B8h] [rbp+B8h] BYREF
  __int64 v62[3]; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 v63[3]; // [rsp+1E8h] [rbp+E8h] BYREF
  _QWORD v64[8]; // [rsp+200h] [rbp+100h] BYREF
  _QWORD v65[8]; // [rsp+240h] [rbp+140h] BYREF
  _QWORD v66[8]; // [rsp+280h] [rbp+180h] BYREF
  _QWORD v67[8]; // [rsp+2C0h] [rbp+1C0h] BYREF
  char *v68[3]; // [rsp+300h] [rbp+200h] BYREF
  unsigned __int64 v69; // [rsp+318h] [rbp+218h]
  char *v70[3]; // [rsp+320h] [rbp+220h] BYREF
  unsigned __int64 v71; // [rsp+338h] [rbp+238h]
  char *v72[3]; // [rsp+340h] [rbp+240h] BYREF
  unsigned __int64 v73; // [rsp+358h] [rbp+258h]
  char *v74[3]; // [rsp+360h] [rbp+260h] BYREF
  unsigned __int64 v75; // [rsp+378h] [rbp+278h]

  v40 = 0LL;
  v8 = a1[59];
  if ( v8 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    v8 = a1[59];
  }
  *(_QWORD *)&v40 = a1[58];
  *((_QWORD *)&v40 + 1) = v8;
  sub_1800210CC(
    v67,
    &v40,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    1017,
    (__int64)"RenderContent",
    (__int64)"RenderContent");
  v68[2] = 0LL;
  v69 = 15LL;
  LOBYTE(v68[0]) = 0;
  sub_180012190((__int64 *)v68, "RenderContent", 0xDuLL);
  v9 = sub_18003684C((__int64)a1, v57);
  v36 = 0LL;
  v10 = v9[1];
  if ( v10 )
  {
    *(_QWORD *)&v36 = *v9;
    *((_QWORD *)&v36 + 1) = v10;
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 12));
  }
  sub_180031DF4(v63, &v36, (__int64)v68);
  if ( *((_QWORD *)&v36 + 1)
    && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v36 + 1) + 12LL), 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v36 + 1) + 8LL))(*((_QWORD *)&v36 + 1));
  }
  sub_180010910((__int64)v57);
  if ( v69 >= 0x10 )
    sub_180010884(v68[0], v69 + 1);
  v11 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*a4 + 376LL))(*a4, v58);
  v35 = 0LL;
  v12 = *(_QWORD *)(v11 + 8);
  if ( v12 )
  {
    v13 = *(_DWORD *)(v12 + 8);
    while ( v13 )
    {
      v14 = v13;
      v13 = _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 8), v13 + 1, v13);
      if ( v14 == v13 )
      {
        v35 = *(_OWORD *)v11;
        break;
      }
    }
  }
  v15 = v59;
  if ( v59 && _InterlockedExchangeAdd((volatile signed __int32 *)(v59 + 12), 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v15 + 8LL))(v15, v12, v11);
  if ( (_QWORD)v35
    && (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)v35 + 16LL))(v35, v12, v11) )
  {
    v41 = 0LL;
    v16 = a1[59];
    if ( v16 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
      v16 = a1[59];
    }
    *(_QWORD *)&v41 = a1[58];
    *((_QWORD *)&v41 + 1) = v16;
    sub_1800210CC(
      v64,
      &v41,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
      1025,
      (__int64)"RenderContent",
      (__int64)"kSpectreRenderCB_PreRender");
    v70[2] = 0LL;
    v71 = 15LL;
    LOBYTE(v70[0]) = 0;
    sub_180012190((__int64 *)v70, "kSpectreRenderCB_PreRender", 0x1AuLL);
    v17 = sub_18003684C((__int64)a1, v54);
    v37 = 0LL;
    v18 = v17[1];
    if ( v18 )
    {
      *(_QWORD *)&v37 = *v17;
      *((_QWORD *)&v37 + 1) = v18;
      _InterlockedIncrement((volatile signed __int32 *)(v18 + 12));
    }
    sub_180031DF4(v60, &v37, (__int64)v70);
    if ( *((_QWORD *)&v37 + 1)
      && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v37 + 1) + 12LL), 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v37 + 1) + 8LL))(*((_QWORD *)&v37 + 1));
    }
    sub_180010910((__int64)v54);
    if ( v71 >= 0x10 )
      sub_180010884(v70[0], v71 + 1);
    v48 = a1[121];
    v19 = v48;
    v49 = 3;
    perf_frequency = Query_perf_frequency();
    perf_counter = Query_perf_counter();
    v50 = 1000000000 * (perf_counter % perf_frequency) / perf_frequency + 1000000000 * (perf_counter / perf_frequency);
    sub_1800B24D8(v19, &v48);
    v42 = 0LL;
    v22 = a4[1];
    if ( v22 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v22 + 8));
      v22 = a4[1];
    }
    *(_QWORD *)&v42 = *a4;
    *((_QWORD *)&v42 + 1) = v22;
    v46 = 0LL;
    if ( *((_QWORD *)&v35 + 1) )
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v35 + 1) + 8LL));
    v46 = v35;
    sub_180037E5C((__int64)a1, 3u, (__int64)&v46, (__int64)&v42);
    sub_180032F84(v60);
    sub_1800211B8((__int64)v64);
    v43 = 0LL;
    v23 = a1[59];
    if ( v23 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v23 + 8));
      v23 = a1[59];
    }
    *(_QWORD *)&v43 = a1[58];
    *((_QWORD *)&v43 + 1) = v23;
    sub_1800210CC(
      v65,
      &v43,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
      1030,
      (__int64)"RenderContent",
      (__int64)"RenderScene");
    v72[2] = 0LL;
    v73 = 15LL;
    LOBYTE(v72[0]) = 0;
    sub_180012190((__int64 *)v72, "RenderScene", 0xBuLL);
    v24 = sub_18003684C((__int64)a1, v55);
    v38 = 0LL;
    v25 = v24[1];
    if ( v25 )
    {
      *(_QWORD *)&v38 = *v24;
      *((_QWORD *)&v38 + 1) = v25;
      _InterlockedIncrement((volatile signed __int32 *)(v25 + 12));
    }
    sub_180031DF4(v61, &v38, (__int64)v72);
    if ( *((_QWORD *)&v38 + 1)
      && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v38 + 1) + 12LL), 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v38 + 1) + 8LL))(*((_QWORD *)&v38 + 1));
    }
    sub_180010910((__int64)v55);
    if ( v73 >= 0x10 )
      sub_180010884(v72[0], v73 + 1);
    (*(void (__fastcall **)(_QWORD *, __int64, __int64, __int128 *, _QWORD *))(*a1 + 128LL))(a1, a2, a3, &v35, a4);
    sub_180032F84(v61);
    sub_1800211B8((__int64)v65);
    v44 = 0LL;
    v26 = a1[59];
    if ( v26 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v26 + 8));
      v26 = a1[59];
    }
    *(_QWORD *)&v44 = a1[58];
    *((_QWORD *)&v44 + 1) = v26;
    sub_1800210CC(
      v66,
      &v44,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
      1036,
      (__int64)"RenderContent",
      (__int64)"kSpectreRenderCB_EndFrame");
    v74[2] = 0LL;
    v75 = 15LL;
    LOBYTE(v74[0]) = 0;
    sub_180012190((__int64 *)v74, "kSpectreRenderCB_EndFrame", 0x19uLL);
    v27 = sub_18003684C((__int64)a1, v56);
    v39 = 0LL;
    v28 = v27[1];
    if ( v28 )
    {
      *(_QWORD *)&v39 = *v27;
      *((_QWORD *)&v39 + 1) = v28;
      _InterlockedIncrement((volatile signed __int32 *)(v28 + 12));
    }
    sub_180031DF4(v62, &v39, (__int64)v74);
    if ( *((_QWORD *)&v39 + 1)
      && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v39 + 1) + 12LL), 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v39 + 1) + 8LL))(*((_QWORD *)&v39 + 1));
    }
    sub_180010910((__int64)v56);
    if ( v75 >= 0x10 )
      sub_180010884(v74[0], v75 + 1);
    v51 = a1[121];
    v29 = v51;
    v52 = 5;
    v30 = Query_perf_frequency();
    v31 = Query_perf_counter();
    v53 = 1000000000 * (v31 % v30) / v30 + 1000000000 * (v31 / v30);
    sub_1800B24D8(v29, &v51);
    v45 = 0LL;
    v32 = a4[1];
    if ( v32 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v32 + 8));
      v32 = a4[1];
    }
    *(_QWORD *)&v45 = *a4;
    *((_QWORD *)&v45 + 1) = v32;
    v47 = 0LL;
    if ( *((_QWORD *)&v35 + 1) )
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v35 + 1) + 8LL));
    v47 = v35;
    sub_180037E5C((__int64)a1, 5u, (__int64)&v47, (__int64)&v45);
    sub_180032F84(v62);
    sub_1800211B8((__int64)v66);
  }
  sub_180010910((__int64)&v35);
  v33 = sub_180037388((__int64)a1);
  sub_180056510(v33);
  sub_180032F84(v63);
  return sub_1800211B8((__int64)v67);
}
