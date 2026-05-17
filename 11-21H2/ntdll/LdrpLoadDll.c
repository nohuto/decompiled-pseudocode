/*
 * XREFs of LdrpLoadDll @ 0x180044E5C
 * Callers:
 *     LdrLoadDll @ 0x18003AE00 (LdrLoadDll.c)
 *     LdrpInitShimEngine @ 0x1800726D8 (LdrpInitShimEngine.c)
 *     LdrpLoadShimEngine @ 0x180072888 (LdrpLoadShimEngine.c)
 *     LdrpCorInitialize @ 0x180072FF8 (LdrpCorInitialize.c)
 *     LdrpInitializeImportRedirection @ 0x1800888BC (LdrpInitializeImportRedirection.c)
 *     LdrpLoadWow64 @ 0x180089F1C (LdrpLoadWow64.c)
 *     LdrpGetProcApphelpCheckModule @ 0x1800DCB54 (LdrpGetProcApphelpCheckModule.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800E630C (AVrfpLoadAndInitializeProvider.c)
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x180025BF0 (NtdllpFreeStringRoutine.c)
 *     LdrpLoadDllInternal @ 0x18003B940 (LdrpLoadDllInternal.c)
 *     LdrpPreprocessDllName @ 0x18004494C (LdrpPreprocessDllName.c)
 *     LdrpLogDllState @ 0x180044F74 (LdrpLogDllState.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpLoadDll(unsigned __int16 *a1, int a2, unsigned int a3, __int64 *a4)
{
  unsigned int v8; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v9; // [rsp+58h] [rbp-A8h] BYREF
  int v10; // [rsp+60h] [rbp-A0h] BYREF
  _WORD *v11; // [rsp+68h] [rbp-98h]
  _WORD v12[128]; // [rsp+70h] [rbp-90h] BYREF

  v8 = a3;
  LdrpLogDllState(0LL, a1, 5288LL);
  v10 = 0x1000000;
  v11 = v12;
  v12[0] = 0;
  v9 = LdrpPreprocessDllName(a1, (unsigned __int16 *)&v10, 0LL, (int *)&v8);
  if ( (v9 & 0x80000000) == 0 )
    LdrpLoadDllInternal((__int64)&v10, a2, v8, 4, 0LL, 0LL, a4, (int *)&v9, 0LL);
  if ( v12 != v11 )
    NtdllpFreeStringRoutine((__int64)v11);
  v10 = 0x1000000;
  v11 = v12;
  v12[0] = 0;
  LdrpLogDllState(0LL, a1, 5289LL);
  return v9;
}
