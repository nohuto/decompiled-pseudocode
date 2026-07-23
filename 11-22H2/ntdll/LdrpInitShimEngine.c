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

int __fastcall LdrpInitShimEngine(__int64 a1)
{
  int v2; // eax
  int Dll; // ebx
  int ShimEngineInterface; // eax
  _WORD *v5; // rax
  int v7; // [rsp+28h] [rbp-D8h]
  int v8; // [rsp+28h] [rbp-D8h]
  int v9; // [rsp+28h] [rbp-D8h]
  PVOID v10; // [rsp+30h] [rbp-D0h] BYREF
  int v11; // [rsp+38h] [rbp-C8h] BYREF
  PVOID BaseAddress; // [rsp+40h] [rbp-C0h]
  int v13; // [rsp+48h] [rbp-B8h] BYREF
  const wchar_t *v14; // [rsp+50h] [rbp-B0h]
  int v15; // [rsp+60h] [rbp-A0h] BYREF
  _WORD *v16; // [rsp+68h] [rbp-98h]
  _WORD v17[128]; // [rsp+70h] [rbp-90h] BYREF
  PWSTR Path[15]; // [rsp+170h] [rbp+70h] BYREF
  char v19; // [rsp+1ECh] [rbp+ECh]
  _BYTE v20[512]; // [rsp+1F0h] [rbp+F0h] BYREF

  v13 = 1572886;
  v14 = L"apphelp.dll";
  v15 = 0x1000000;
  v16 = v17;
  v17[0] = 0;
  v2 = LdrpBuildSystem32FileName(&v15, &v13);
  if ( v2 < 0 )
  {
    v7 = v2;
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      3273,
      (__int64)"LdrpInitShimEngine",
      0,
      "Building shim engine DLL system32 filename failed with status 0x%08lx\n",
      v7);
  }
  else
  {
    LdrpInitializeDllPath(0LL, 16385LL, (__int64 *)Path);
    Dll = LdrpLoadDll((__int64)&v15, (int)Path, 0, (__int64)&v10);
    if ( v19 )
      RtlReleasePath(Path[0]);
    if ( Dll < 0 )
    {
      v9 = Dll;
      LdrpLogInternal(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        3292,
        (__int64)"LdrpInitShimEngine",
        0,
        "Loading the shim engine DLL failed with status 0x%08lx\n",
        v9);
    }
    else
    {
      *((_DWORD *)v10 + 26) |= 0x100u;
      g_pShimEngineModule = (PVOID)*((_QWORD *)v10 + 6);
      LdrpPinModule(v10);
      LdrpDereferenceModule((char *)v10);
      ShimEngineInterface = LdrpGetShimEngineInterface();
      if ( ShimEngineInterface < 0 )
      {
        v8 = ShimEngineInterface;
        LdrpLogInternal(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          3306,
          (__int64)"LdrpInitShimEngine",
          0,
          "Getting the shim engine exports failed with status 0x%08lx\n",
          v8);
      }
      else
      {
        BaseAddress = v20;
        v11 = 0x2000000;
        if ( ((int (__fastcall *)(int *, __int64, __int64))(__ROR8__(
                                                              g_pfnSE_InitializeEngine,
                                                              64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))(
               &v11,
               LdrpImageEntry + 72,
               a1) >= 0 )
        {
          LdrpLoadShimEngine((PCWSTR)BaseAddress);
          if ( BaseAddress != v20 )
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
        }
      }
    }
  }
  v5 = v17;
  if ( v17 != v16 )
    LODWORD(v5) = NtdllpFreeStringRoutine(v16);
  return (int)v5;
}
