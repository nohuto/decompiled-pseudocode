/*
 * XREFs of LdrpGetProcApphelpCheckModule @ 0x1800DCB54
 * Callers:
 *     LdrpDynamicShimModule @ 0x18004E0F4 (LdrpDynamicShimModule.c)
 * Callees:
 *     RtlReleasePath @ 0x18001CC00 (RtlReleasePath.c)
 *     NtdllpFreeStringRoutine @ 0x180025BF0 (NtdllpFreeStringRoutine.c)
 *     LdrpInitializeDllPath @ 0x180038594 (LdrpInitializeDllPath.c)
 *     LdrpLogInternal @ 0x18003F290 (LdrpLogInternal.c)
 *     LdrpLoadDll @ 0x180044E5C (LdrpLoadDll.c)
 *     LdrpGetShimEngineInterface @ 0x180072C90 (LdrpGetShimEngineInterface.c)
 *     LdrpBuildSystem32FileName @ 0x1800731B8 (LdrpBuildSystem32FileName.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpGetProcApphelpCheckModule(_QWORD *a1)
{
  unsigned int v1; // edi
  __int64 v3; // r8
  int Dll; // ebx
  int ShimEngineInterface; // eax
  __int64 v6; // rdx
  _DWORD *v8; // [rsp+40h] [rbp-C0h] BYREF
  int v9; // [rsp+48h] [rbp-B8h] BYREF
  const wchar_t *v10; // [rsp+50h] [rbp-B0h]
  int v11; // [rsp+60h] [rbp-A0h] BYREF
  _WORD *v12; // [rsp+68h] [rbp-98h]
  _WORD v13[128]; // [rsp+70h] [rbp-90h] BYREF
  PWSTR Path[15]; // [rsp+170h] [rbp+70h] BYREF
  char v15; // [rsp+1ECh] [rbp+ECh]

  v1 = 0;
  v10 = L"apphelp.dll";
  v9 = 1572886;
  v12 = v13;
  v11 = 0x1000000;
  v13[0] = 0;
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
    Dll = LdrpBuildSystem32FileName((unsigned __int16 *)&v11, (unsigned __int16 *)&v9);
    if ( Dll >= 0 )
    {
      LdrpInitializeDllPath(0LL, (const WCHAR *)0x4001, (const WCHAR **)Path);
      Dll = LdrpLoadDll((unsigned __int16 *)&v11, (int)Path, 0, (PVOID *)&v8);
      if ( v15 )
        RtlReleasePath(Path[0]);
      if ( Dll >= 0 )
      {
        v8[26] |= 0x100u;
        g_pShimEngineModule = (PVOID)*((_QWORD *)v8 + 6);
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
            3556,
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
          3545,
          (__int64)"LdrpGetProcApphelpCheckModule",
          0,
          "Loading the shim engine DLL \"%wZ\" failed with status 0x%08lx\n",
          &v11,
          Dll);
      }
    }
    if ( v13 != v12 )
      NtdllpFreeStringRoutine(v12);
  }
  return (unsigned int)Dll;
}
