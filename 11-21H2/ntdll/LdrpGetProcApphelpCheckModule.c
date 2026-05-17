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
  int v4; // ebx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // r9
  int ShimEngineInterface; // eax
  __int64 v9; // rdx
  __int64 v11; // [rsp+40h] [rbp-C0h] BYREF
  int v12; // [rsp+48h] [rbp-B8h] BYREF
  const wchar_t *v13; // [rsp+50h] [rbp-B0h]
  int v14; // [rsp+60h] [rbp-A0h] BYREF
  _WORD *v15; // [rsp+68h] [rbp-98h]
  _WORD v16[128]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v17[15]; // [rsp+170h] [rbp+70h] BYREF
  char v18; // [rsp+1ECh] [rbp+ECh]

  v1 = 0;
  v13 = L"apphelp.dll";
  v12 = 1572886;
  v15 = v16;
  v14 = 0x1000000;
  v16[0] = 0;
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
    v4 = LdrpBuildSystem32FileName((unsigned __int16 *)&v14, (unsigned __int16 *)&v12);
    if ( v4 >= 0 )
    {
      LdrpInitializeDllPath(0LL, 16385LL, v17);
      v4 = LdrpLoadDll((unsigned __int16 *)&v14, (int)v17, 0, &v11);
      if ( v18 )
        RtlReleasePath(v17[0], v5, v6, v7);
      if ( v4 >= 0 )
      {
        *(_DWORD *)(v11 + 104) |= 0x100u;
        g_pShimEngineModule = *(_QWORD *)(v11 + 48);
        ShimEngineInterface = LdrpGetShimEngineInterface();
        v4 = ShimEngineInterface;
        if ( ShimEngineInterface >= 0 )
        {
          v4 = 0;
          v9 = MEMORY[0x7FFE0330] ^ __ROR8__(g_pfnApphelpCheckModuleProc, 64 - (MEMORY[0x7FFE0330] & 0x3Fu));
          *a1 = v9;
          if ( !v9 )
            v4 = -1073741823;
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
          &v14,
          v4);
      }
    }
    if ( v16 != v15 )
      NtdllpFreeStringRoutine((__int64)v15);
  }
  return (unsigned int)v4;
}
