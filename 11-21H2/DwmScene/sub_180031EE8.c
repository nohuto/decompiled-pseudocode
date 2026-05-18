/*
 * XREFs of sub_180031EE8 @ 0x180031EE8
 * Callers:
 *     sub_18006C5AC @ 0x18006C5AC (sub_18006C5AC.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 *     sub_18001DE70 @ 0x18001DE70 (sub_18001DE70.c)
 *     sub_18001DE8C @ 0x18001DE8C (sub_18001DE8C.c)
 *     sub_18001FB6C @ 0x18001FB6C (sub_18001FB6C.c)
 *     sub_18002C2F4 @ 0x18002C2F4 (sub_18002C2F4.c)
 *     sub_180030724 @ 0x180030724 (sub_180030724.c)
 *     sub_180030730 @ 0x180030730 (sub_180030730.c)
 *     sub_1800307C8 @ 0x1800307C8 (sub_1800307C8.c)
 *     sub_1800308A4 @ 0x1800308A4 (sub_1800308A4.c)
 *     sub_1800319BC @ 0x1800319BC (sub_1800319BC.c)
 *     sub_180034C70 @ 0x180034C70 (sub_180034C70.c)
 *     sub_180058180 @ 0x180058180 (sub_180058180.c)
 *     sub_18008021C @ 0x18008021C (sub_18008021C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=35
__int64 __fastcall sub_180031EE8(__int64 a1, int a2, _QWORD *a3, _QWORD *a4, _QWORD *a5)
{
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r8
  __int64 v14; // r8
  volatile __int32 *v15; // rax
  __int32 v16; // edx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r8
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r8
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r8
  __int64 v32; // rax
  __int64 v33; // rbx
  __int64 *v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdx
  volatile signed __int32 *v38; // rcx
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // rax
  HANDLE CurrentProcess; // rax
  __int64 v43; // [rsp+20h] [rbp-E0h] BYREF
  __int64 *v44; // [rsp+28h] [rbp-D8h] BYREF
  unsigned int v45; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v46; // [rsp+38h] [rbp-C8h] BYREF
  __int64 *v47; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *v48; // [rsp+48h] [rbp-B8h] BYREF
  __int64 *v49; // [rsp+50h] [rbp-B0h] BYREF
  __int64 *v50; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v51[2]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v52[7]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v53; // [rsp+A8h] [rbp-58h] BYREF
  PROCESS_MEMORY_COUNTERS ppsmemCounters; // [rsp+C0h] [rbp-40h] BYREF

  v52[2] = a1;
  v52[3] = a3;
  v52[4] = a4;
  v52[5] = a5;
  sub_18002C2F4(a1 + 8, a2);
  *(_QWORD *)a1 = &Spectre::Engine::Engine::`vftable';
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  sub_18002C2F4(a1 + 112, a2);
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 176) = 0LL;
  v50 = (__int64 *)sub_180011088(0x20uLL);
  sub_180030730(v50, (__int64 *)&v50);
  sub_180030730((__int64 *)(v9 + 8), (__int64 *)&v50);
  *(_QWORD *)(a1 + 168) = v10;
  v43 = a1 + 184;
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  v46 = (__int64 *)sub_180011088(0x40uLL);
  sub_18001DE8C(v46, (__int64 *)&v46);
  sub_18001DE8C((__int64 *)(v11 + 8), (__int64 *)&v46);
  sub_18001DE8C((__int64 *)(v12 + 16), (__int64 *)&v46);
  *(_WORD *)(v13 + 24) = 257;
  *(_QWORD *)(a1 + 184) = v13;
  *(_DWORD *)(a1 + 200) = -1082130432;
  *(_DWORD *)(a1 + 204) = -1082130432;
  *(_QWORD *)(a1 + 208) = 2LL;
  *(_DWORD *)(a1 + 216) = 0;
  *(_DWORD *)(a1 + 220) = -1082130432;
  *(_DWORD *)(a1 + 224) = -1082130432;
  *(_QWORD *)(a1 + 228) = 2LL;
  *(_DWORD *)(a1 + 236) = 0;
  *(_DWORD *)(a1 + 240) = 2;
  *(_DWORD *)(a1 + 248) = 0;
  v45 = 0;
  sub_180030724(&v45);
  v15 = (volatile __int32 *)sub_18001DE70(v14);
  _InterlockedExchange(v15, v16);
  *(_QWORD *)(a1 + 256) = 0LL;
  *(_QWORD *)(a1 + 264) = 0LL;
  *(_QWORD *)(a1 + 272) = 0LL;
  *(_QWORD *)(a1 + 280) = 0LL;
  *(_QWORD *)(a1 + 288) = 0LL;
  *(_QWORD *)(a1 + 296) = 0LL;
  *(_QWORD *)(a1 + 304) = 0LL;
  sub_18002C2F4(a1 + 312, a2);
  sub_18008021C(a1 + 368);
  *(_QWORD *)(a1 + 464) = 0LL;
  *(_QWORD *)(a1 + 472) = 0LL;
  *(_QWORD *)(a1 + 464) = *a3;
  *(_QWORD *)(a1 + 472) = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  *(_QWORD *)(a1 + 480) = 0LL;
  *(_QWORD *)(a1 + 488) = 0LL;
  *(_QWORD *)(a1 + 480) = *a4;
  *(_QWORD *)(a1 + 488) = a4[1];
  *a4 = 0LL;
  a4[1] = 0LL;
  *(_QWORD *)(a1 + 496) = 0LL;
  *(_QWORD *)(a1 + 504) = 0LL;
  *(_QWORD *)(a1 + 496) = *a5;
  *(_QWORD *)(a1 + 504) = a5[1];
  *a5 = 0LL;
  a5[1] = 0LL;
  *(_QWORD *)(a1 + 512) = 0LL;
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_QWORD *)(a1 + 528) = 0LL;
  *(_QWORD *)(a1 + 536) = 0LL;
  *(_DWORD *)(a1 + 544) = 0;
  *(_QWORD *)(a1 + 548) = 1LL;
  *(_BYTE *)(a1 + 556) = 1;
  *(_DWORD *)(a1 + 560) = 1;
  *(_DWORD *)(a1 + 568) = 1;
  *(_QWORD *)(a1 + 576) = 0LL;
  *(_QWORD *)(a1 + 584) = 0LL;
  *(_BYTE *)(a1 + 592) = 0;
  *(_DWORD *)(a1 + 596) = 40960;
  *(_QWORD *)(a1 + 600) = 45312LL;
  *(_QWORD *)(a1 + 608) = 1LL;
  *(_QWORD *)(a1 + 616) = 0LL;
  *(_QWORD *)(a1 + 624) = 0LL;
  *(_QWORD *)(a1 + 632) = 0LL;
  *(_QWORD *)(a1 + 640) = 0LL;
  *(_QWORD *)(a1 + 648) = 0LL;
  *(_DWORD *)(a1 + 656) = 0;
  *(_DWORD *)(a1 + 664) = 3;
  *(_QWORD *)(a1 + 672) = 0LL;
  *(_QWORD *)(a1 + 680) = 0LL;
  *(_DWORD *)(a1 + 688) = 0;
  *(_DWORD *)(a1 + 696) = 0;
  *(_QWORD *)(a1 + 704) = 0LL;
  *(_QWORD *)(a1 + 712) = 0LL;
  *(_QWORD *)(a1 + 720) = 0LL;
  v43 = a1 + 728;
  *(_QWORD *)(a1 + 728) = 0LL;
  *(_QWORD *)(a1 + 736) = 0LL;
  v47 = (__int64 *)sub_180011088(0x48uLL);
  sub_18001DE8C(v47, (__int64 *)&v47);
  sub_18001DE8C((__int64 *)(v17 + 8), (__int64 *)&v47);
  sub_18001DE8C((__int64 *)(v18 + 16), (__int64 *)&v47);
  *(_WORD *)(v19 + 24) = 257;
  *(_QWORD *)(a1 + 728) = v19;
  *(_BYTE *)(a1 + 744) = 1;
  *(_OWORD *)(a1 + 748) = 0LL;
  *(_OWORD *)(a1 + 764) = 0LL;
  *(_OWORD *)(a1 + 780) = 0LL;
  *(_QWORD *)(a1 + 796) = 0LL;
  *(_DWORD *)(a1 + 804) = 0;
  sub_18002C2F4(a1 + 808, a2);
  *(_QWORD *)(a1 + 864) = 0LL;
  *(_QWORD *)(a1 + 872) = 0LL;
  *(_QWORD *)(a1 + 880) = 0LL;
  *(_QWORD *)(a1 + 888) = 0LL;
  *(_QWORD *)(a1 + 896) = 0LL;
  *(_QWORD *)(a1 + 904) = 0LL;
  *(_QWORD *)(a1 + 912) = 0LL;
  *(_QWORD *)(a1 + 920) = 0LL;
  *(_QWORD *)(a1 + 928) = 0x8000000000000000uLL;
  *(_DWORD *)(a1 + 936) = 0;
  *(_QWORD *)(a1 + 944) = 1LL;
  *(_DWORD *)(a1 + 952) = 2139095039;
  *(_QWORD *)(a1 + 956) = 1023960469LL;
  v20 = sub_18001D684();
  v21 = v20;
  if ( v20 )
  {
    *(_DWORD *)(v20 + 8) = 1;
    *(_DWORD *)(v20 + 12) = 1;
    *(_QWORD *)v20 = &std::_Ref_count_obj2<Spectre::Engine::CpuProfiler>::`vftable';
    sub_1800307C8(v20 + 16);
  }
  else
  {
    v21 = 0LL;
  }
  *(_QWORD *)(a1 + 968) = v21 + 16;
  *(_QWORD *)(a1 + 976) = v21;
  sub_1800319BC((__int64 *)(a1 + 984));
  *(_QWORD *)(a1 + 1072) = 0LL;
  *(_QWORD *)(a1 + 1080) = 0LL;
  *(_QWORD *)(a1 + 1088) = 0LL;
  v48 = (__int64 *)sub_180011088(0x38uLL);
  sub_18001DE8C(v48, (__int64 *)&v48);
  sub_18001DE8C((__int64 *)(v22 + 8), (__int64 *)&v48);
  sub_18001DE8C((__int64 *)(v23 + 16), (__int64 *)&v48);
  *(_WORD *)(v24 + 24) = 257;
  *(_QWORD *)(a1 + 1080) = v24;
  *(_DWORD *)(a1 + 1096) = 1;
  sub_18002C2F4(a1 + 1104, a2);
  *(_BYTE *)(a1 + 1160) = 0;
  *(_QWORD *)(a1 + 1176) = 0LL;
  *(_OWORD *)(a1 + 1184) = 0LL;
  *(_DWORD *)(a1 + 1200) = 60;
  Cnd_init_in_situ((_Cnd_t)(a1 + 1208));
  Mtx_init_in_situ((_Mtx_t)(a1 + 1280), 2);
  *(_DWORD *)(a1 + 1368) = -8388609;
  *(_QWORD *)(a1 + 1372) = 2139095039LL;
  *(_QWORD *)(a1 + 1384) = 0LL;
  sub_18001FB6C((__int64 *)(a1 + 1392), &word_1801289A4, v25);
  *(_QWORD *)(a1 + 1424) = 0LL;
  *(_QWORD *)(a1 + 1432) = 0LL;
  v49 = (__int64 *)sub_180011088(0x60uLL);
  sub_18001DE8C(v49, (__int64 *)&v49);
  sub_18001DE8C((__int64 *)(v26 + 8), (__int64 *)&v49);
  sub_18001DE8C((__int64 *)(v27 + 16), (__int64 *)&v49);
  *(_WORD *)(v28 + 24) = 257;
  *(_QWORD *)(a1 + 1424) = v28;
  *(_QWORD *)(a1 + 1440) = 0LL;
  *(_QWORD *)(a1 + 1448) = 0LL;
  v44 = (__int64 *)sub_180011088(0x30uLL);
  sub_18001DE8C(v44, (__int64 *)&v44);
  sub_18001DE8C((__int64 *)(v29 + 8), (__int64 *)&v44);
  sub_18001DE8C((__int64 *)(v30 + 16), (__int64 *)&v44);
  *(_WORD *)(v31 + 24) = 257;
  *(_QWORD *)(a1 + 1440) = v31;
  sub_180034C70(a1);
  v43 = a1;
  v32 = sub_18001D684();
  v33 = v32;
  v52[6] = v32;
  if ( v32 )
  {
    *(_OWORD *)v32 = 0LL;
    *(_DWORD *)(v32 + 8) = 1;
    *(_DWORD *)(v32 + 12) = 1;
    *(_QWORD *)v32 = &std::_Ref_count_obj2<Spectre::Engine::ShaderManager>::`vftable';
    sub_1800308A4(v32 + 16, &v43);
  }
  else
  {
    v33 = 0LL;
  }
  v34 = (__int64 *)(v33 + 16);
  if ( v33 != -16 )
  {
    v35 = *(_QWORD *)(v33 + 24);
    if ( !v35 || !*(_DWORD *)(v35 + 8) )
    {
      if ( v33 )
        _InterlockedIncrement((volatile signed __int32 *)(v33 + 8));
      v51[0] = v33 + 16;
      v51[1] = v33;
      v36 = 0LL;
      v37 = 0LL;
      if ( v33 )
      {
        v36 = v33 + 16;
        v37 = v33;
        _InterlockedIncrement((volatile signed __int32 *)(v33 + 12));
      }
      *v34 = v36;
      v38 = *(volatile signed __int32 **)(v33 + 24);
      *(_QWORD *)(v33 + 24) = v37;
      if ( v38 && _InterlockedExchangeAdd(v38 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 8LL))(v38);
      sub_180010910((__int64)v51);
    }
  }
  v53 = 0LL;
  v52[0] = *(_QWORD *)(a1 + 512);
  *(_QWORD *)(a1 + 512) = v34;
  v52[1] = *(_QWORD *)(a1 + 520);
  *(_QWORD *)(a1 + 520) = v33;
  sub_180010910((__int64)v52);
  sub_180010910((__int64)&v53);
  sub_180058180(*(_QWORD *)(a1 + 512));
  perf_frequency = Query_perf_frequency();
  perf_counter = Query_perf_counter();
  *(_QWORD *)(a1 + 1176) = 1000000000 * (perf_counter % perf_frequency) / perf_frequency
                         + 1000000000 * (perf_counter / perf_frequency);
  CurrentProcess = GetCurrentProcess();
  K32GetProcessMemoryInfo(CurrentProcess, &ppsmemCounters, 0x48u);
  *(_QWORD *)(a1 + 1168) = ppsmemCounters.PeakWorkingSetSize;
  sub_180010910((__int64)a3);
  sub_180010910((__int64)a4);
  sub_180010910((__int64)a5);
  return a1;
}
