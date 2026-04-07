/*
 * XREFs of ?UnregisterWilFeatureConfigurationChange@details@wil@@YAXPEAX@Z @ 0x18009631C
 * Callers:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?UnregisterWilFeatureConfigurationChange@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180093D50 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-UnregisterWilFeatureConfigurationChange@.c)
 * Callees:
 *     ?wil_details_GetNtDllModuleHandle@@YAPEAUHINSTANCE__@@XZ @ 0x18000F7D8 (-wil_details_GetNtDllModuleHandle@@YAPEAUHINSTANCE__@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall wil::details::UnregisterWilFeatureConfigurationChange(wil::details *this, void *a2)
{
  FARPROC ProcAddress; // rax
  HMODULE NtDllModuleHandle; // rax

  ProcAddress = (FARPROC)g_wil_details_pfnRtlUnregisterFeatureConfigurationChangeNotification;
  if ( g_wil_details_pfnRtlUnregisterFeatureConfigurationChangeNotification
    || (NtDllModuleHandle = wil_details_GetNtDllModuleHandle(),
        ProcAddress = GetProcAddress(NtDllModuleHandle, "RtlUnregisterFeatureConfigurationChangeNotification"),
        (g_wil_details_pfnRtlUnregisterFeatureConfigurationChangeNotification = (__int64)ProcAddress) != 0) )
  {
    ((void (__fastcall *)(wil::details *, void *))ProcAddress)(this, a2);
  }
}
