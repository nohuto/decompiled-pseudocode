/*
 * XREFs of ?GetCensoredAumidFromView@VoiceAssistantPositionerTelemetry@@CAPEBGPEAUIApplicationView@@@Z @ 0x18003F90C
 * Callers:
 *     ?StartActivity@VAPositioner_ShouldHandleActivationActivity@VoiceAssistantPositionerTelemetry@@QEAAXPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x18003F7D4 (-StartActivity@VAPositioner_ShouldHandleActivationActivity@VoiceAssistantPositionerTelemetry@@QE.c)
 *     ?StartActivity@VAPositioner_ControlGainedForActivationActivity@VoiceAssistantPositionerTelemetry@@QEAAXPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x1805AE3F8 (-StartActivity@VAPositioner_ControlGainedForActivationActivity@VoiceAssistantPositionerTelemetry.c)
 *     ?StartActivity@VAPositioner_HandleSwitchToViewActivity@VoiceAssistantPositionerTelemetry@@QEAAXPEAUIApplicationView@@@Z @ 0x1805AE700 (-StartActivity@VAPositioner_HandleSwitchToViewActivity@VoiceAssistantPositionerTelemetry@@QEAAXP.c)
 *     ?StartActivity@VAPositioner_InitializePositionActivity@VoiceAssistantPositionerTelemetry@@QEAAXPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x1805AE7BC (-StartActivity@VAPositioner_InitializePositionActivity@VoiceAssistantPositionerTelemetry@@QEAAXP.c)
 *     ?StartActivity@VAPositioner_OnViewClosingActivity@VoiceAssistantPositionerTelemetry@@QEAAXPEAUIApplicationView@@@Z @ 0x1805AEB14 (-StartActivity@VAPositioner_OnViewClosingActivity@VoiceAssistantPositionerTelemetry@@QEAAXPEAUIA.c)
 *     ?StartActivity@VAPositioner_ResizeViewActivity@VoiceAssistantPositionerTelemetry@@QEAAXPEAUIApplicationView@@UtagSIZE@@@Z @ 0x1805AEBD0 (-StartActivity@VAPositioner_ResizeViewActivity@VoiceAssistantPositionerTelemetry@@QEAAXPEAUIAppl.c)
 *     ?Stop@VAPositioner_ControlLostActivity@VoiceAssistantPositionerTelemetry@@QEAAXPEAUIApplicationView@@@Z @ 0x1805AEFC8 (-Stop@VAPositioner_ControlLostActivity@VoiceAssistantPositionerTelemetry@@QEAAXPEAUIApplicationV.c)
 *     ?VAPositioner_AppViewDestroyed_@VoiceAssistantPositionerTelemetry@@QEBAXPEAUIApplicationView@@@Z @ 0x1805B1450 (-VAPositioner_AppViewDestroyed_@VoiceAssistantPositionerTelemetry@@QEBAXPEAUIApplicationView@@@Z.c)
 *     ?VAPositioner_CacheViewToManage_@VoiceAssistantPositionerTelemetry@@QEBAXPEAUIApplicationView@@@Z @ 0x1805B14C4 (-VAPositioner_CacheViewToManage_@VoiceAssistantPositionerTelemetry@@QEBAXPEAUIApplicationView@@@.c)
 *     ?VAPositioner_ControlLostHelper_@VoiceAssistantPositionerTelemetry@@QEBAXPEAUIApplicationView@@@Z @ 0x1805B1538 (-VAPositioner_ControlLostHelper_@VoiceAssistantPositionerTelemetry@@QEBAXPEAUIApplicationView@@@.c)
 *     ?VAPositioner_CreateAppViewOperationToUpdateView_@VoiceAssistantPositionerTelemetry@@QEBAXPEAUIApplicationView@@_NUtagRECT@@HHUtagSIZE@@@Z @ 0x1805B15AC (-VAPositioner_CreateAppViewOperationToUpdateView_@VoiceAssistantPositionerTelemetry@@QEBAXPEAUIA.c)
 *     ?VAPositioner_HandleRecoveryForView_@VoiceAssistantPositionerTelemetry@@QEBAXPEAUIApplicationView@@@Z @ 0x1805B16C4 (-VAPositioner_HandleRecoveryForView_@VoiceAssistantPositionerTelemetry@@QEBAXPEAUIApplicationVie.c)
 *     ?VAPositioner_HideView_@VoiceAssistantPositionerTelemetry@@QEBAXPEAUIApplicationView@@@Z @ 0x1805B1738 (-VAPositioner_HideView_@VoiceAssistantPositionerTelemetry@@QEBAXPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?CensorAppIdAnyPath@AppIdCensorUtility@LoggingUtil@@SAPEBGPEBG@Z @ 0x18003B970 (-CensorAppIdAnyPath@AppIdCensorUtility@LoggingUtil@@SAPEBGPEBG@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18016270C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
const unsigned __int16 *__fastcall VoiceAssistantPositionerTelemetry::GetCensoredAumidFromView(
        struct IApplicationView *a1)
{
  void (__fastcall *v2)(struct IApplicationView *, LPCWSTR *); // rbx
  const WCHAR *v3; // rcx
  const unsigned __int16 *v4; // rax
  const WCHAR *v5; // rbx
  LPCWSTR pszPath; // [rsp+20h] [rbp-20h] BYREF
  __int64 v8; // [rsp+28h] [rbp-18h]
  __int64 v9; // [rsp+30h] [rbp-10h]

  pszPath = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v2 = *(void (__fastcall **)(struct IApplicationView *, LPCWSTR *))(*(_QWORD *)a1 + 136LL);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&pszPath);
  v8 = -1LL;
  v9 = -1LL;
  v2(a1, &pszPath);
  v3 = pszPath;
  pszPath = 0LL;
  v9 = 0LL;
  v8 = 0LL;
  v4 = LoggingUtil::AppIdCensorUtility::CensorAppIdAnyPath(v3);
  v5 = &LocaleName;
  if ( v4 )
    v5 = v4;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&pszPath);
  return v5;
}
