/*
 * XREFs of LdrpGetShimEngineInterface @ 0x180072C90
 * Callers:
 *     LdrpInitShimEngine @ 0x1800726D8 (LdrpInitShimEngine.c)
 *     LdrInitShimEngineDynamic @ 0x1800DC800 (LdrInitShimEngineDynamic.c)
 *     LdrpGetProcApphelpCheckModule @ 0x1800DCB54 (LdrpGetProcApphelpCheckModule.c)
 * Callees:
 *     LdrProtectMrdata @ 0x18001C904 (LdrProtectMrdata.c)
 *     RtlInitAnsiString @ 0x180035350 (RtlInitAnsiString.c)
 *     LdrUnloadDll @ 0x180038270 (LdrUnloadDll.c)
 *     LdrpLogInternal @ 0x18003F290 (LdrpLogInternal.c)
 *     LdrGetProcedureAddressEx @ 0x180072FD0 (LdrGetProcedureAddressEx.c)
 */

__int64 LdrpGetShimEngineInterface()
{
  NTSTATUS v0; // ebx
  PVOID v2; // [rsp+30h] [rbp-50h] BYREF
  PVOID v3; // [rsp+38h] [rbp-48h] BYREF
  PVOID v4; // [rsp+40h] [rbp-40h] BYREF
  PVOID v5; // [rsp+48h] [rbp-38h] BYREF
  PVOID v6; // [rsp+50h] [rbp-30h] BYREF
  PVOID v7; // [rsp+58h] [rbp-28h] BYREF
  PVOID v8; // [rsp+60h] [rbp-20h] BYREF
  _STRING DestinationString; // [rsp+68h] [rbp-18h] BYREF
  PVOID ProcedureAddress; // [rsp+A0h] [rbp+20h] BYREF
  PVOID v11; // [rsp+A8h] [rbp+28h] BYREF
  PVOID v12; // [rsp+B0h] [rbp+30h] BYREF
  PVOID v13; // [rsp+B8h] [rbp+38h] BYREF

  RtlInitAnsiString(&DestinationString, "SE_InitializeEngine");
  v0 = LdrGetProcedureAddressEx(g_pShimEngineModule, &DestinationString, 0, &ProcedureAddress, 0);
  if ( v0 < 0 )
    goto LABEL_14;
  RtlInitAnsiString(&DestinationString, "SE_ShimDllLoaded");
  v0 = LdrGetProcedureAddressEx(g_pShimEngineModule, &DestinationString, 0, &v11, 0);
  if ( v0 < 0 )
    goto LABEL_14;
  RtlInitAnsiString(&DestinationString, "SE_InstallBeforeInit");
  v0 = LdrGetProcedureAddressEx(g_pShimEngineModule, &DestinationString, 0, &v12, 0);
  if ( v0 < 0 )
    goto LABEL_14;
  RtlInitAnsiString(&DestinationString, "SE_InstallAfterInit");
  v0 = LdrGetProcedureAddressEx(g_pShimEngineModule, &DestinationString, 0, &v13, 0);
  if ( v0 < 0 )
    goto LABEL_14;
  RtlInitAnsiString(&DestinationString, "SE_DllLoaded");
  v0 = LdrGetProcedureAddressEx(g_pShimEngineModule, &DestinationString, 0, &v2, 0);
  if ( v0 < 0 )
    goto LABEL_14;
  RtlInitAnsiString(&DestinationString, "SE_DllUnloaded");
  v0 = LdrGetProcedureAddressEx(g_pShimEngineModule, &DestinationString, 0, &v3, 0);
  if ( v0 < 0 )
    goto LABEL_14;
  RtlInitAnsiString(&DestinationString, "SE_LdrEntryRemoved");
  v0 = LdrGetProcedureAddressEx(g_pShimEngineModule, &DestinationString, 0, &v4, 0);
  if ( v0 < 0 )
    goto LABEL_14;
  RtlInitAnsiString(&DestinationString, "SE_ProcessDying");
  v0 = LdrGetProcedureAddressEx(g_pShimEngineModule, &DestinationString, 0, &v5, 0);
  if ( v0 < 0
    || (RtlInitAnsiString(&DestinationString, "SE_LdrResolveDllName"),
        v0 = LdrGetProcedureAddressEx(g_pShimEngineModule, &DestinationString, 0, &v7, 0),
        v0 < 0)
    || (RtlInitAnsiString(&DestinationString, "SE_GetProcAddressForCaller"),
        v0 = LdrGetProcedureAddressEx(g_pShimEngineModule, &DestinationString, 0, &v6, 0),
        v0 < 0)
    || (RtlInitAnsiString(&DestinationString, "ApphelpCheckModule"),
        v0 = LdrGetProcedureAddressEx(g_pShimEngineModule, &DestinationString, 0, &v8, 0),
        v0 < 0) )
  {
LABEL_14:
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      2861,
      (__int64)"LdrpGetShimEngineInterface",
      0,
      "Could not locate procedure \"%s\" in the shim engine DLL\n",
      DestinationString.Buffer);
    g_ShimsEnabled = 0;
    LdrUnloadDll(g_pShimEngineModule);
    g_pShimEngineModule = 0LL;
  }
  else
  {
    LdrProtectMrdata(0);
    g_pfnSE_InitializeEngine = __ROR8__(
                                 (unsigned __int64)ProcedureAddress ^ MEMORY[0x7FFE0330],
                                 MEMORY[0x7FFE0330] & 0x3F);
    g_pfnSE_ShimDllLoaded = __ROR8__((unsigned __int64)v11 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
    g_pfnSE_InstallBeforeInit = __ROR8__((unsigned __int64)v12 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
    g_pfnSE_InstallAfterInit = __ROR8__((unsigned __int64)v13 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
    g_pfnSE_DllLoaded = __ROR8__((unsigned __int64)v2 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
    g_pfnSE_DllUnloaded = __ROR8__((unsigned __int64)v3 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
    g_pfnSE_LdrEntryRemoved = __ROR8__((unsigned __int64)v4 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
    g_pfnSE_ProcessDying = __ROR8__((unsigned __int64)v5 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
    g_pfnSE_GetProcAddressForCaller = __ROR8__((unsigned __int64)v6 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
    g_pfnSE_LdrResolveDllName = __ROR8__((unsigned __int64)v7 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
    g_pfnApphelpCheckModuleProc = __ROR8__((unsigned __int64)v8 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
    LdrProtectMrdata(1);
  }
  return (unsigned int)v0;
}
