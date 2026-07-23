/*
 * XREFs of LdrpGetProcApphelpCheckModule @ 0x1800DCC84
 * Callers:
 *     LdrpDynamicShimModule @ 0x18002E624 (LdrpDynamicShimModule.c)
 * Callees:
 *     LdrpLoadDll @ 0x18001906C (LdrpLoadDll.c)
 *     LdrpLogInternal @ 0x180026C30 (LdrpLogInternal.c)
 *     LdrpInitializeDllPath @ 0x18002B064 (LdrpInitializeDllPath.c)
 *     RtlReleasePath @ 0x180032D60 (RtlReleasePath.c)
 *     NtdllpFreeStringRoutine @ 0x180039640 (NtdllpFreeStringRoutine.c)
 *     LdrpBuildSystem32FileName @ 0x180079A34 (LdrpBuildSystem32FileName.c)
 *     LdrpGetShimEngineInterface @ 0x180079AA8 (LdrpGetShimEngineInterface.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpGetProcApphelpCheckModule(_QWORD *a1)
{
  unsigned int v1; // edi
  __int64 v3; // r8
  int Dll; // ebx
  int ShimEngineInterface; // eax
  __int64 v6; // rdx
  __int64 v8; // [rsp+40h] [rbp-C0h] BYREF
  const void *v9[3]; // [rsp+48h] [rbp-B8h] BYREF
  int v10; // [rsp+60h] [rbp-A0h] BYREF
  _WORD *v11; // [rsp+68h] [rbp-98h]
  _WORD v12[128]; // [rsp+70h] [rbp-90h] BYREF
  PWSTR Path[15]; // [rsp+170h] [rbp+70h] BYREF
  char v14; // [rsp+1ECh] [rbp+ECh]

  v1 = 0;
  v9[1] = L"apphelp.dll";
  LODWORD(v9[0]) = 1572886;
  v11 = v12;
  v10 = 0x1000000;
  v12[0] = 0;
  if ( g_pfnApphelpCheckModuleProc )
  {
    v3 = MEMORY[0x7FFE0330] ^ __ROR8__(g_pfnApphelpCheckModuleProc, 64 - (MEMORY[0x7FFE0330] & 0x3Fu));
    *a1 = v3;
    if ( !v3 )
      return (unsigned int)-1073741823;
    return v1;
  }
  else
  {
    Dll = LdrpBuildSystem32FileName((unsigned __int16 *)&v10, v9);
    if ( Dll >= 0 )
    {
      LdrpInitializeDllPath(0LL, 16385LL, (__int64 *)Path);
      Dll = LdrpLoadDll((__int64)&v10, (int)Path, 0, (__int64)&v8);
      if ( v14 )
        RtlReleasePath(Path[0]);
      if ( Dll >= 0 )
      {
        *(_DWORD *)(v8 + 104) |= 0x100u;
        g_pShimEngineModule = *(PVOID *)(v8 + 48);
        ShimEngineInterface = LdrpGetShimEngineInterface();
        Dll = ShimEngineInterface;
        if ( ShimEngineInterface >= 0 )
        {
          Dll = 0;
          v6 = MEMORY[0x7FFE0330] ^ __ROR8__(g_pfnApphelpCheckModuleProc, 64 - (MEMORY[0x7FFE0330] & 0x3Fu));
          *a1 = v6;
          if ( !v6 )
            Dll = -1073741823;
        }
        else
        {
          LdrpLogInternal(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            3572,
            (__int64)"LdrpGetProcApphelpCheckModule",
            0,
            "Getting the shim engine exports failed with status 0x%08lx\n",
            ShimEngineInterface);
        }
      }
      else
      {
        LdrpLogInternal(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          3561,
          (__int64)"LdrpGetProcApphelpCheckModule",
          0,
          "Loading the shim engine DLL \"%wZ\" failed with status 0x%08lx\n",
          &v10,
          Dll);
      }
    }
    if ( v12 != v11 )
      NtdllpFreeStringRoutine(v11);
  }
  return (unsigned int)Dll;
}
