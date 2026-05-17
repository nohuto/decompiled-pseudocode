/*
 * XREFs of LdrpInitShimEngine @ 0x180079158
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D4658 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpLoadDll @ 0x18001927C (LdrpLoadDll.c)
 *     LdrpDereferenceModule @ 0x1800226FC (LdrpDereferenceModule.c)
 *     LdrpLogInternal @ 0x180026D80 (LdrpLogInternal.c)
 *     LdrpInitializeDllPath @ 0x18002B234 (LdrpInitializeDllPath.c)
 *     RtlReleasePath @ 0x180032EC0 (RtlReleasePath.c)
 *     NtdllpFreeStringRoutine @ 0x1800397A0 (NtdllpFreeStringRoutine.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     LdrpPinModule @ 0x180079308 (LdrpPinModule.c)
 *     LdrpBuildSystem32FileName @ 0x1800793C4 (LdrpBuildSystem32FileName.c)
 *     LdrpGetShimEngineInterface @ 0x180079438 (LdrpGetShimEngineInterface.c)
 *     LdrpLoadShimEngine @ 0x1800797E8 (LdrpLoadShimEngine.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 */

_WORD *__fastcall LdrpInitShimEngine(__int64 a1)
{
  int v2; // eax
  int Dll; // ebx
  int ShimEngineInterface; // eax
  _WORD *result; // rax
  int v6; // [rsp+28h] [rbp-D8h]
  int v7; // [rsp+28h] [rbp-D8h]
  int v8; // [rsp+28h] [rbp-D8h]
  __int64 v9; // [rsp+30h] [rbp-D0h] BYREF
  int v10; // [rsp+38h] [rbp-C8h] BYREF
  PCWSTR SourceString; // [rsp+40h] [rbp-C0h]
  int v12; // [rsp+48h] [rbp-B8h] BYREF
  const wchar_t *v13; // [rsp+50h] [rbp-B0h]
  int v14; // [rsp+60h] [rbp-A0h] BYREF
  _WORD *v15; // [rsp+68h] [rbp-98h]
  _WORD v16[128]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v17[15]; // [rsp+170h] [rbp+70h] BYREF
  char v18; // [rsp+1ECh] [rbp+ECh]
  _BYTE v19[512]; // [rsp+1F0h] [rbp+F0h] BYREF

  v12 = 1572886;
  v13 = L"apphelp.dll";
  v14 = 0x1000000;
  v15 = v16;
  v16[0] = 0;
  v2 = LdrpBuildSystem32FileName(&v14, &v12);
  if ( v2 < 0 )
  {
    v6 = v2;
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      3273LL,
      (__int64)"LdrpInitShimEngine",
      0LL,
      "Building shim engine DLL system32 filename failed with status 0x%08lx\n",
      v6);
  }
  else
  {
    LdrpInitializeDllPath(0LL, 16385LL, v17);
    Dll = LdrpLoadDll((__int64)&v14, (int)v17, 0, (__int64)&v9);
    if ( v18 )
      RtlReleasePath(v17[0]);
    if ( Dll < 0 )
    {
      v8 = Dll;
      LdrpLogInternal(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        3292LL,
        (__int64)"LdrpInitShimEngine",
        0LL,
        "Loading the shim engine DLL failed with status 0x%08lx\n",
        v8);
    }
    else
    {
      *(_DWORD *)(v9 + 104) |= 0x100u;
      g_pShimEngineModule = *(_QWORD *)(v9 + 48);
      LdrpPinModule(v9);
      LdrpDereferenceModule(v9);
      ShimEngineInterface = LdrpGetShimEngineInterface();
      if ( ShimEngineInterface < 0 )
      {
        v7 = ShimEngineInterface;
        LdrpLogInternal(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          3306LL,
          (__int64)"LdrpInitShimEngine",
          0LL,
          "Getting the shim engine exports failed with status 0x%08lx\n",
          v7);
      }
      else
      {
        SourceString = (PCWSTR)v19;
        v10 = 0x2000000;
        if ( ((int (__fastcall *)(int *, __int64, __int64))(__ROR8__(
                                                              g_pfnSE_InitializeEngine,
                                                              64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))(
               &v10,
               LdrpImageEntry + 72,
               a1) >= 0 )
        {
          LdrpLoadShimEngine(SourceString);
          if ( SourceString != (PCWSTR)v19 )
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)SourceString);
        }
      }
    }
  }
  result = v16;
  if ( v16 != v15 )
    return (_WORD *)NtdllpFreeStringRoutine((__int64)v15);
  return result;
}
