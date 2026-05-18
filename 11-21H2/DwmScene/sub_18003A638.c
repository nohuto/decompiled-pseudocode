/*
 * XREFs of sub_18003A638 @ 0x18003A638
 * Callers:
 *     sub_18003ABF8 @ 0x18003ABF8 (sub_18003ABF8.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000B4C0 @ 0x18000B4C0 (sub_18000B4C0.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 *     sub_1800122B0 @ 0x1800122B0 (sub_1800122B0.c)
 *     sub_1800122C0 @ 0x1800122C0 (sub_1800122C0.c)
 *     sub_18001DE8C @ 0x18001DE8C (sub_18001DE8C.c)
 *     sub_18001E758 @ 0x18001E758 (sub_18001E758.c)
 *     sub_180026A18 @ 0x180026A18 (sub_180026A18.c)
 *     sub_180030CC8 @ 0x180030CC8 (sub_180030CC8.c)
 *     sub_180031A38 @ 0x180031A38 (sub_180031A38.c)
 *     sub_1800326EC @ 0x1800326EC (sub_1800326EC.c)
 *     sub_1800338B8 @ 0x1800338B8 (sub_1800338B8.c)
 *     sub_180037404 @ 0x180037404 (sub_180037404.c)
 *     sub_18003CDCC @ 0x18003CDCC (sub_18003CDCC.c)
 *     sub_18005F330 @ 0x18005F330 (sub_18005F330.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
char __fastcall sub_18003A638(__int64 a1)
{
  __int64 v1; // r14
  _QWORD *v3; // rdx
  char result; // al
  HANDLE CurrentProcess; // rax
  SIZE_T v6; // r11
  int v7; // r15d
  __int64 v8; // rbx
  signed __int64 v9; // rdi
  __int64 v10; // r9
  __int64 v11; // rsi
  _QWORD *v12; // r10
  _QWORD *i; // r8
  _QWORD *v14; // r8
  float v15; // xmm6_4
  float v16; // xmm0_4
  float v17; // xmm0_4
  float v18; // xmm0_4
  __int64 v19; // rdi
  void (__fastcall *v20)(__int64, char **, __m128i *, __int64 *); // rbx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r8
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // r9
  __int64 *v29; // rbp
  _BYTE *v30; // rax
  size_t v31; // r8
  __int64 v32; // [rsp+0h] [rbp-158h] BYREF
  __m128i v33; // [rsp+30h] [rbp-128h] BYREF
  __int64 v34[2]; // [rsp+40h] [rbp-118h] BYREF
  __int64 *v35; // [rsp+50h] [rbp-108h] BYREF
  __int64 v36; // [rsp+58h] [rbp-100h]
  stdext::exception *v37; // [rsp+68h] [rbp-F0h] BYREF
  char *v38; // [rsp+70h] [rbp-E8h] BYREF
  __int64 v39; // [rsp+78h] [rbp-E0h]
  __int64 v40; // [rsp+80h] [rbp-D8h]
  unsigned __int64 v41; // [rsp+88h] [rbp-D0h]
  __int64 v42[2]; // [rsp+90h] [rbp-C8h] BYREF
  __m128i si128; // [rsp+A0h] [rbp-B8h]
  float v44; // [rsp+B0h] [rbp-A8h]
  char v45; // [rsp+B8h] [rbp-A0h] BYREF
  PROCESS_MEMORY_COUNTERS ppsmemCounters; // [rsp+C0h] [rbp-98h] BYREF

  v1 = a1;
  v36 = a1;
  if ( !sub_1800122B0((_QWORD *)(a1 + 480)) || (result = sub_1800122B0((_QWORD *)(a1 + 496))) == 0 )
  {
    if ( sub_1800122C0(v3) )
    {
      CurrentProcess = GetCurrentProcess();
      K32GetProcessMemoryInfo(CurrentProcess, &ppsmemCounters, 0x48u);
      v6 = ppsmemCounters.PeakWorkingSetSize - *(_QWORD *)(v1 + 1168);
      v7 = 0;
      v8 = 0x7FFFFFFFFFFFFFFFLL;
      v9 = 0x8000000000000000uLL;
      v10 = 0LL;
      LODWORD(v11) = 0;
      v12 = *(_QWORD **)(v1 + 168);
      for ( i = (_QWORD *)*v12; i != v12; i = (_QWORD *)*v14 )
      {
        sub_18005F330(i[2], &v38);
        if ( (_DWORD)v38 )
        {
          if ( v39 < v8 )
            v8 = v39;
          if ( v9 < (__int64)v41 )
            v9 = v41;
          v10 += v40 * (unsigned int)v38;
          v7 += (int)v38;
        }
      }
      if ( v7 )
        v11 = v10 / v7;
      if ( (v6 & 0x8000000000000000uLL) != 0LL )
        v15 = (float)(int)(v6 & 1 | (v6 >> 1)) + (float)(int)(v6 & 1 | (v6 >> 1));
      else
        v15 = (float)(int)v6;
      si128 = _mm_load_si128((const __m128i *)&xmmword_1801BD760);
      LOBYTE(v42[0]) = 0;
      sub_180012190(v42, "Engine Max Memory Usage", 0x17uLL);
      v44 = v15;
      v33.m128i_i64[0] = (__int64)v42;
      v33.m128i_i64[1] = (__int64)&v45;
      sub_180031A38((__int64)v34, &v33);
      sub_18000B4C0((__int64)v42, 40LL, 1LL);
      if ( v7 )
      {
        v16 = sub_180026A18(v8);
        v40 = 0LL;
        v41 = 15LL;
        LOBYTE(v38) = 0;
        sub_180012190((__int64 *)&v38, "Min Time Per-render-update", 0x1AuLL);
        *(float *)sub_1800338B8(v34, (__int64)&v38) = v16;
        if ( v41 >= 0x10 )
          sub_180010884(v38, v41 + 1);
        v17 = sub_180026A18(v11);
        v40 = 0LL;
        v41 = 15LL;
        LOBYTE(v38) = 0;
        sub_180012190((__int64 *)&v38, "Avg Time Per-render-update", 0x1AuLL);
        *(float *)sub_1800338B8(v34, (__int64)&v38) = v17;
        if ( v41 >= 0x10 )
          sub_180010884(v38, v41 + 1);
        v18 = sub_180026A18(v9);
        v40 = 0LL;
        v41 = 15LL;
        LOBYTE(v38) = 0;
        sub_180012190((__int64 *)&v38, "Max Time Per-render-update", 0x1AuLL);
        *(float *)sub_1800338B8(v34, (__int64)&v38) = v18;
        if ( v41 >= 0x10 )
          sub_180010884(v38, v41 + 1);
      }
      v19 = sub_180037404(v1);
      v20 = *(void (__fastcall **)(__int64, char **, __m128i *, __int64 *))(*(_QWORD *)v19 + 40LL);
      v33 = 0LL;
      v35 = (__int64 *)sub_180011088(0x60uLL);
      sub_18001DE8C(v35, (__int64 *)&v35);
      sub_18001DE8C((__int64 *)(v21 + 8), (__int64 *)&v35);
      sub_18001DE8C((__int64 *)(v22 + 16), (__int64 *)&v35);
      *(_WORD *)(v23 + 24) = 257;
      v33.m128i_i64[0] = v23;
      v40 = 0LL;
      v41 = 15LL;
      LOBYTE(v38) = 0;
      sub_180012190((__int64 *)&v38, "Engine Shutting Down", 0x14uLL);
      v20(v19, &v38, &v33, v34);
      if ( v41 >= 0x10 )
        sub_180010884(v38, v41 + 1);
      v40 = 0LL;
      v41 = 15LL;
      LOBYTE(v38) = 0;
      sub_180030CC8((__int64)&v33, (__int64)&v33, *(char **)(v33.m128i_i64[0] + 8));
      sub_180010884((char *)v33.m128i_i64[0], 0x60uLL);
      sub_18001E758(v34);
    }
    result = sub_1800122C0((_QWORD *)(v1 + 496));
    if ( result )
    {
      v40 = 0LL;
      v41 = 15LL;
      LOBYTE(v38) = 0;
      sub_180012190((__int64 *)&v38, byte_180128042, 0LL);
      __ExceptionPtrCreate(v34);
      __ExceptionPtrCurrentException(v34);
      if ( __ExceptionPtrToBool(v34) )
      {
        sub_1800326EC(&v33, v34);
        try
        {
          sub_18003CDCC();
          JUMPOUT(0x18003ABEDLL);
        }
        catch ( stdext::exception *v37 )
        {
          v29 = &v32;
          v30 = (_BYTE *)(*(__int64 (__fastcall **)(stdext::exception *))(*(_QWORD *)v37 + 8LL))(v37);
          v31 = -1LL;
          do
            ++v31;
          while ( v30[v31] );
          sub_180012190(v29 + 14, v30, v31);
          v1 = v36;
          goto LABEL_31;
        }
      }
      __ExceptionPtrDestroy(v34);
LABEL_31:
      perf_frequency = Query_perf_frequency();
      perf_counter = Query_perf_counter();
      v26 = (unsigned int)(int)sub_180026A18(
                                 1000000000 * (perf_counter % perf_frequency) / perf_frequency
                               + 1000000000 * (perf_counter / perf_frequency)
                               - *(_DWORD *)(v1 + 1176));
      result = (*(__int64 (__fastcall **)(__int64, __int64))(v27 + 32))(v28, v26);
      if ( v41 >= 0x10 )
        return sub_180010884(v38, v41 + 1);
    }
  }
  return result;
}
