/*
 * XREFs of sub_180036AD4 @ 0x180036AD4
 * Callers:
 *     sub_180036F2C @ 0x180036F2C (sub_180036F2C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000B4B0 @ 0x18000B4B0 (sub_18000B4B0.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_180011CA0 @ 0x180011CA0 (sub_180011CA0.c)
 *     sub_180011DD0 @ 0x180011DD0 (sub_180011DD0.c)
 *     sub_180011DE0 @ 0x180011DE0 (sub_180011DE0.c)
 *     sub_18001D2D8 @ 0x18001D2D8 (sub_18001D2D8.c)
 *     sub_180024BC0 @ 0x180024BC0 (sub_180024BC0.c)
 *     sub_180030DE4 @ 0x180030DE4 (sub_180030DE4.c)
 *     sub_180030ECC @ 0x180030ECC (sub_180030ECC.c)
 *     sub_18003182C @ 0x18003182C (sub_18003182C.c)
 *     sub_1800321D4 @ 0x1800321D4 (sub_1800321D4.c)
 *     sub_1800348EC @ 0x1800348EC (sub_1800348EC.c)
 *     sub_1800579D8 @ 0x1800579D8 (sub_1800579D8.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
char __fastcall sub_180036AD4(_QWORD *a1)
{
  _QWORD *v1; // r14
  _QWORD *v2; // r15
  _QWORD *v3; // rdx
  char result; // al
  HANDLE CurrentProcess; // rax
  SIZE_T v6; // r11
  int v7; // r12d
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
  __int64 v19; // rsi
  void (__fastcall *v20)(__int64, void **, __int64 *, void **); // rdi
  __int64 *v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // r9
  _BYTE *v26; // rax
  size_t v27; // r8
  void *v28[3]; // [rsp+30h] [rbp-148h] BYREF
  _QWORD *v29; // [rsp+48h] [rbp-130h]
  stdext::exception *v30; // [rsp+50h] [rbp-128h] BYREF
  __m128i v31; // [rsp+60h] [rbp-118h] BYREF
  __int64 v32; // [rsp+70h] [rbp-108h]
  signed __int64 v33; // [rsp+78h] [rbp-100h]
  void *v34[3]; // [rsp+80h] [rbp-F8h] BYREF
  _QWORD v35[4]; // [rsp+A0h] [rbp-D8h] BYREF
  _QWORD v36[4]; // [rsp+C0h] [rbp-B8h] BYREF
  float v37; // [rsp+E0h] [rbp-98h]
  char v38; // [rsp+E8h] [rbp-90h] BYREF
  PROCESS_MEMORY_COUNTERS ppsmemCounters; // [rsp+F0h] [rbp-88h] BYREF

  v1 = a1;
  v29 = a1;
  v2 = a1 + 62;
  v28[2] = a1 + 62;
  if ( !sub_180011DD0(a1 + 60) || (result = sub_180011DD0(v2)) == 0 )
  {
    if ( sub_180011DE0(v3) )
    {
      CurrentProcess = GetCurrentProcess();
      K32GetProcessMemoryInfo(CurrentProcess, &ppsmemCounters, 0x48u);
      v6 = ppsmemCounters.PeakWorkingSetSize - v1[146];
      v7 = 0;
      v8 = 0x7FFFFFFFFFFFFFFFLL;
      v9 = 0x8000000000000000uLL;
      v10 = 0LL;
      LODWORD(v11) = 0;
      v12 = (_QWORD *)v1[21];
      for ( i = (_QWORD *)*v12; i != v12; i = (_QWORD *)*v14 )
      {
        sub_1800579D8(i[2], &v31);
        if ( v31.m128i_i32[0] )
        {
          if ( v31.m128i_i64[1] < v8 )
            v8 = v31.m128i_i64[1];
          if ( v9 < v33 )
            v9 = v33;
          v10 += v32 * v31.m128i_u32[0];
          v7 += v31.m128i_i32[0];
        }
      }
      if ( v7 )
        v11 = v10 / v7;
      if ( (v6 & 0x8000000000000000uLL) != 0LL )
        v15 = (float)(int)(v6 & 1 | (v6 >> 1)) + (float)(int)(v6 & 1 | (v6 >> 1));
      else
        v15 = (float)(int)v6;
      sub_180010DD0(v36, (__int64)"Engine Max Memory Usage");
      v37 = v15;
      v31.m128i_i64[0] = (__int64)v36;
      v31.m128i_i64[1] = (__int64)&v38;
      sub_180030DE4((__int64 *)v28, &v31);
      sub_18000B4B0((__int64)v36, 40LL, 1LL);
      if ( v7 )
      {
        v16 = sub_180024BC0(v8);
        sub_180010DD0(v34, (__int64)"Min Time Per-render-update");
        *(float *)sub_1800321D4((__int64 *)v28, (__int64)v34) = v16;
        sub_180011B24((__int64)v34);
        v17 = sub_180024BC0(v11);
        sub_180010DD0(&v31, (__int64)"Avg Time Per-render-update");
        *(float *)sub_1800321D4((__int64 *)v28, (__int64)&v31) = v17;
        sub_180011B24((__int64)&v31);
        v18 = sub_180024BC0(v9);
        sub_180010DD0(v35, (__int64)"Max Time Per-render-update");
        *(float *)sub_1800321D4((__int64 *)v28, (__int64)v35) = v18;
        sub_180011B24((__int64)v35);
      }
      v19 = sub_1800348EC((__int64)v1);
      v20 = *(void (__fastcall **)(__int64, void **, __int64 *, void **))(*(_QWORD *)v19 + 40LL);
      v21 = sub_180030ECC(v31.m128i_i64);
      sub_180010DD0(v34, (__int64)"Engine Shutting Down");
      v20(v19, v34, v21, v28);
      sub_180011B24((__int64)v34);
      sub_18003182C((void **)&v31);
      sub_18001D2D8(v28);
    }
    result = sub_180011DE0(v2);
    if ( result )
    {
      sub_180010DD0(v34, (__int64)byte_180106082);
      __ExceptionPtrCreate(v35);
      __ExceptionPtrCurrentException(v35);
      if ( __ExceptionPtrToBool(v35) )
      {
        __ExceptionPtrCopy(&v31, v35);
        try
        {
          v28[0] = &v31;
          __ExceptionPtrRethrow(&v31);
        }
        catch ( stdext::exception *v30 )
        {
          v26 = (_BYTE *)(*(__int64 (__fastcall **)(stdext::exception *))(*(_QWORD *)v30 + 8LL))(v30);
          v27 = -1LL;
          do
            ++v27;
          while ( v26[v27] );
          sub_180011BA0(v34, v26, v27);
        }
        v1 = v29;
      }
      else
      {
        __ExceptionPtrDestroy(v35);
      }
      v22 = *sub_180011CA0(v28) - v1[147];
      v23 = (unsigned int)(int)sub_180024BC0(v22);
      (*(void (__fastcall **)(__int64, __int64))(v24 + 32))(v25, v23);
      return sub_180011B24((__int64)v34);
    }
  }
  return result;
}
