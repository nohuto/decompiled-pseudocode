/*
 * XREFs of ?wil_StagingConfig_LogStagedFeatureUsage@@YAXIIE@Z @ 0x180050970
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_GetKernelBaseModuleHandle@@YAPEAUHINSTANCE__@@XZ @ 0x1800509EC (-wil_details_GetKernelBaseModuleHandle@@YAPEAUHINSTANCE__@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall wil_StagingConfig_LogStagedFeatureUsage(unsigned int a1, unsigned int a2, __int64 a3)
{
  FARPROC ProcAddress; // rax
  char v4; // bl
  HMODULE KernelBaseModuleHandle; // rax

  ProcAddress = (FARPROC)g_wil_details_pfnLogStagedFeatureUsage;
  v4 = a3;
  if ( g_wil_details_pfnLogStagedFeatureUsage
    || (KernelBaseModuleHandle = wil_details_GetKernelBaseModuleHandle(),
        ProcAddress = GetProcAddress(KernelBaseModuleHandle, "LogStagedFeatureUsage"),
        (g_wil_details_pfnLogStagedFeatureUsage = (__int64)ProcAddress) != 0) )
  {
    LOBYTE(a3) = v4;
    ((void (__fastcall *)(_QWORD, _QWORD, __int64))ProcAddress)(a1, a2, a3);
  }
}
