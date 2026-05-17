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

__int64 __fastcall LdrpGetProcApphelpCheckModule(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  __int64 v6; // r8
  int Dll; // ebx
  int ShimEngineInterface; // eax
  __int64 v9; // rdx
  __int64 v11; // [rsp+40h] [rbp-C0h] BYREF
  const void *v12[3]; // [rsp+48h] [rbp-B8h] BYREF
  int v13; // [rsp+60h] [rbp-A0h] BYREF
  _WORD *v14; // [rsp+68h] [rbp-98h]
  _WORD v15[128]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v16[15]; // [rsp+170h] [rbp+70h] BYREF
  char v17; // [rsp+1ECh] [rbp+ECh]

  v4 = 0;
  v12[1] = L"apphelp.dll";
  LODWORD(v12[0]) = 1572886;
  v14 = v15;
  v13 = 0x1000000;
  v15[0] = 0;
  if ( g_pfnApphelpCheckModuleProc )
  {
    v6 = MEMORY[0x7FFE0330] ^ __ROR8__(g_pfnApphelpCheckModuleProc, 64 - (MEMORY[0x7FFE0330] & 0x3Fu));
    *a1 = v6;
    if ( !v6 )
      return (unsigned int)-1073741823;
    return v4;
  }
  else
  {
    Dll = LdrpBuildSystem32FileName((unsigned __int16 *)&v13, v12, 0LL, a4);
    if ( Dll >= 0 )
    {
      LdrpInitializeDllPath(0LL, 16385LL, v16);
      Dll = LdrpLoadDll((__int64)&v13, (int)v16, 0, (__int64)&v11);
      if ( v17 )
        RtlReleasePath(v16[0]);
      if ( Dll >= 0 )
      {
        *(_DWORD *)(v11 + 104) |= 0x100u;
        g_pShimEngineModule = *(_QWORD *)(v11 + 48);
        ShimEngineInterface = LdrpGetShimEngineInterface();
        Dll = ShimEngineInterface;
        if ( ShimEngineInterface >= 0 )
        {
          Dll = 0;
          v9 = MEMORY[0x7FFE0330] ^ __ROR8__(g_pfnApphelpCheckModuleProc, 64 - (MEMORY[0x7FFE0330] & 0x3Fu));
          *a1 = v9;
          if ( !v9 )
            Dll = -1073741823;
        }
        else
        {
          LdrpLogInternal(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            3572LL,
            (__int64)"LdrpGetProcApphelpCheckModule",
            0LL,
            "Getting the shim engine exports failed with status 0x%08lx\n",
            ShimEngineInterface);
        }
      }
      else
      {
        LdrpLogInternal(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          3561LL,
          (__int64)"LdrpGetProcApphelpCheckModule",
          0LL,
          "Loading the shim engine DLL \"%wZ\" failed with status 0x%08lx\n",
          &v13,
          Dll);
      }
    }
    if ( v15 != v14 )
      NtdllpFreeStringRoutine((__int64)v14);
  }
  return (unsigned int)Dll;
}
