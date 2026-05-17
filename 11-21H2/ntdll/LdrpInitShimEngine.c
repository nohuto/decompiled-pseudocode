/*
 * XREFs of LdrpInitShimEngine @ 0x1800726D8
 * Callers:
 *     LdrpInitializeProcess @ 0x1800DE07C (LdrpInitializeProcess.c)
 * Callees:
 *     RtlReleasePath @ 0x18001CC00 (RtlReleasePath.c)
 *     NtdllpFreeStringRoutine @ 0x180025BF0 (NtdllpFreeStringRoutine.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     LdrpPinModule @ 0x180032A78 (LdrpPinModule.c)
 *     LdrpDereferenceModule @ 0x180038484 (LdrpDereferenceModule.c)
 *     LdrpInitializeDllPath @ 0x180038594 (LdrpInitializeDllPath.c)
 *     LdrpLogInternal @ 0x18003F290 (LdrpLogInternal.c)
 *     LdrpLoadDll @ 0x180044E5C (LdrpLoadDll.c)
 *     LdrpLoadShimEngine @ 0x180072888 (LdrpLoadShimEngine.c)
 *     LdrpGetShimEngineInterface @ 0x180072C90 (LdrpGetShimEngineInterface.c)
 *     LdrpBuildSystem32FileName @ 0x1800731B8 (LdrpBuildSystem32FileName.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 */

_WORD *__fastcall LdrpInitShimEngine(__int64 a1)
{
  int v2; // eax
  unsigned __int64 v3; // rdx
  int v4; // ebx
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // r9
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r9
  int ShimEngineInterface; // eax
  _WORD *result; // rax
  int v12; // [rsp+28h] [rbp-D8h]
  int v13; // [rsp+28h] [rbp-D8h]
  int v14; // [rsp+28h] [rbp-D8h]
  __int64 v15; // [rsp+30h] [rbp-D0h] BYREF
  int v16; // [rsp+38h] [rbp-C8h] BYREF
  PCWSTR SourceString; // [rsp+40h] [rbp-C0h]
  int v18; // [rsp+48h] [rbp-B8h] BYREF
  const wchar_t *v19; // [rsp+50h] [rbp-B0h]
  int v20; // [rsp+60h] [rbp-A0h] BYREF
  _WORD *v21; // [rsp+68h] [rbp-98h]
  _WORD v22[128]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v23[15]; // [rsp+170h] [rbp+70h] BYREF
  char v24; // [rsp+1ECh] [rbp+ECh]
  _BYTE v25[512]; // [rsp+1F0h] [rbp+F0h] BYREF

  v18 = 1572886;
  v19 = L"apphelp.dll";
  v20 = 0x1000000;
  v21 = v22;
  v22[0] = 0;
  v2 = LdrpBuildSystem32FileName(&v20, &v18);
  if ( v2 < 0 )
  {
    v12 = v2;
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      3259,
      (__int64)"LdrpInitShimEngine",
      0,
      "Building shim engine DLL system32 filename failed with status 0x%08lx\n",
      v12);
  }
  else
  {
    LdrpInitializeDllPath(0LL, 16385LL, v23);
    v4 = LdrpLoadDll((unsigned __int16 *)&v20, (int)v23, 0, &v15);
    if ( v24 )
      RtlReleasePath(v23[0], v3, v5, v6);
    if ( v4 < 0 )
    {
      v14 = v4;
      LdrpLogInternal(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        3278,
        (__int64)"LdrpInitShimEngine",
        0,
        "Loading the shim engine DLL failed with status 0x%08lx\n",
        v14);
    }
    else
    {
      *(_DWORD *)(v15 + 104) |= 0x100u;
      g_pShimEngineModule = *(_QWORD *)(v15 + 48);
      LdrpPinModule(v15, v3, v5, v6);
      LdrpDereferenceModule(v15, v7, v8, v9);
      ShimEngineInterface = LdrpGetShimEngineInterface();
      if ( ShimEngineInterface < 0 )
      {
        v13 = ShimEngineInterface;
        LdrpLogInternal(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          3292,
          (__int64)"LdrpInitShimEngine",
          0,
          "Getting the shim engine exports failed with status 0x%08lx\n",
          v13);
      }
      else
      {
        SourceString = (PCWSTR)v25;
        v16 = 0x2000000;
        if ( ((int (__fastcall *)(int *, __int64, __int64))(__ROR8__(
                                                              g_pfnSE_InitializeEngine,
                                                              64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))(
               &v16,
               LdrpImageEntry + 72,
               a1) >= 0 )
        {
          LdrpLoadShimEngine(SourceString);
          if ( SourceString != (PCWSTR)v25 )
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)SourceString);
        }
      }
    }
  }
  result = v22;
  if ( v22 != v21 )
    return (_WORD *)NtdllpFreeStringRoutine((__int64)v21);
  return result;
}
