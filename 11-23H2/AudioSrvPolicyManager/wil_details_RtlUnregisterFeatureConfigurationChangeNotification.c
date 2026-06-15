/*
 * XREFs of wil_details_RtlUnregisterFeatureConfigurationChangeNotification @ 0x18003AC50
 * Callers:
 *     ??1FeatureStateManager@details@wil@@QEAA@XZ @ 0x180013A84 (--1FeatureStateManager@details@wil@@QEAA@XZ.c)
 * Callees:
 *     ?wil_details_GetNtDllModuleHandle@@YAPEAUHINSTANCE__@@XZ @ 0x18001ACC4 (-wil_details_GetNtDllModuleHandle@@YAPEAUHINSTANCE__@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800476D0 (_guard_xfg_dispatch_icall_nop.c)
 */

FARPROC __fastcall wil_details_RtlUnregisterFeatureConfigurationChangeNotification(__int64 a1)
{
  FARPROC result; // rax
  HMODULE NtDllModuleHandle; // rax

  result = (FARPROC)g_wil_details_pfnRtlUnregisterFeatureConfigurationChangeNotification;
  if ( g_wil_details_pfnRtlUnregisterFeatureConfigurationChangeNotification )
    return (FARPROC)((__int64 (__fastcall *)(__int64))result)(a1);
  NtDllModuleHandle = wil_details_GetNtDllModuleHandle();
  result = GetProcAddress(NtDllModuleHandle, "RtlUnregisterFeatureConfigurationChangeNotification");
  g_wil_details_pfnRtlUnregisterFeatureConfigurationChangeNotification = (__int64)result;
  if ( result )
    return (FARPROC)((__int64 (__fastcall *)(__int64))result)(a1);
  return result;
}
