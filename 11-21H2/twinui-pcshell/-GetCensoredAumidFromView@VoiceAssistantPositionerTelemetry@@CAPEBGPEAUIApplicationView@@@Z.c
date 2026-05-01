/*
 * XREFs of ?GetCensoredAumidFromView@VoiceAssistantPositionerTelemetry@@CAPEBGPEAUIApplicationView@@@Z @ 0x180092220
 * Callers:
 *     ?StartActivity@VAPositioner_ShouldHandleActivationActivity@VoiceAssistantPositionerTelemetry@@QEAAXPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x180092014 (-StartActivity@VAPositioner_ShouldHandleActivationActivity@VoiceAssistantPositionerTelemetry@@QE.c)
 *     ?StartActivity@VAPositioner_ControlGainedForActivationActivity@VoiceAssistantPositionerTelemetry@@QEAAXPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x1804F670C (-StartActivity@VAPositioner_ControlGainedForActivationActivity@VoiceAssistantPositionerTelemetry.c)
 *     ?StartActivity@VAPositioner_HandleSwitchToViewActivity@VoiceAssistantPositionerTelemetry@@QEAAXPEAUIApplicationView@@@Z @ 0x1804F6A34 (-StartActivity@VAPositioner_HandleSwitchToViewActivity@VoiceAssistantPositionerTelemetry@@QEAAXP.c)
 *     ?StartActivity@VAPositioner_InitializePositionActivity@VoiceAssistantPositionerTelemetry@@QEAAXPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x1804F6AF8 (-StartActivity@VAPositioner_InitializePositionActivity@VoiceAssistantPositionerTelemetry@@QEAAXP.c)
 *     ?StartActivity@VAPositioner_OnViewClosingActivity@VoiceAssistantPositionerTelemetry@@QEAAXPEAUIApplicationView@@@Z @ 0x1804F6E5C (-StartActivity@VAPositioner_OnViewClosingActivity@VoiceAssistantPositionerTelemetry@@QEAAXPEAUIA.c)
 *     ?StartActivity@VAPositioner_ResizeViewActivity@VoiceAssistantPositionerTelemetry@@QEAAXPEAUIApplicationView@@UtagSIZE@@@Z @ 0x1804F6F20 (-StartActivity@VAPositioner_ResizeViewActivity@VoiceAssistantPositionerTelemetry@@QEAAXPEAUIAppl.c)
 *     ?Stop@VAPositioner_ControlLostActivity@VoiceAssistantPositionerTelemetry@@QEAAXPEAUIApplicationView@@@Z @ 0x1804F7204 (-Stop@VAPositioner_ControlLostActivity@VoiceAssistantPositionerTelemetry@@QEAAXPEAUIApplicationV.c)
 *     ?VAPositioner_AppViewDestroyed_@VoiceAssistantPositionerTelemetry@@QEBAXPEAUIApplicationView@@@Z @ 0x1804F9740 (-VAPositioner_AppViewDestroyed_@VoiceAssistantPositionerTelemetry@@QEBAXPEAUIApplicationView@@@Z.c)
 *     ?VAPositioner_CacheViewToManage_@VoiceAssistantPositionerTelemetry@@QEBAXPEAUIApplicationView@@@Z @ 0x1804F97B4 (-VAPositioner_CacheViewToManage_@VoiceAssistantPositionerTelemetry@@QEBAXPEAUIApplicationView@@@.c)
 *     ?VAPositioner_ControlLostHelper_@VoiceAssistantPositionerTelemetry@@QEBAXPEAUIApplicationView@@@Z @ 0x1804F9828 (-VAPositioner_ControlLostHelper_@VoiceAssistantPositionerTelemetry@@QEBAXPEAUIApplicationView@@@.c)
 *     ?VAPositioner_CreateAppViewOperationToUpdateView_@VoiceAssistantPositionerTelemetry@@QEBAXPEAUIApplicationView@@_NUtagRECT@@HHUtagSIZE@@@Z @ 0x1804F989C (-VAPositioner_CreateAppViewOperationToUpdateView_@VoiceAssistantPositionerTelemetry@@QEBAXPEAUIA.c)
 *     ?VAPositioner_HandleRecoveryForView_@VoiceAssistantPositionerTelemetry@@QEBAXPEAUIApplicationView@@@Z @ 0x1804F99B4 (-VAPositioner_HandleRecoveryForView_@VoiceAssistantPositionerTelemetry@@QEBAXPEAUIApplicationVie.c)
 *     ?VAPositioner_HideView_@VoiceAssistantPositionerTelemetry@@QEBAXPEAUIApplicationView@@@Z @ 0x1804F9A28 (-VAPositioner_HideView_@VoiceAssistantPositionerTelemetry@@QEBAXPEAUIApplicationView@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
const unsigned __int16 *__fastcall VoiceAssistantPositionerTelemetry::GetCensoredAumidFromView(
        struct IApplicationView *a1)
{
  __int64 v1; // rax
  const WCHAR *FileNameW; // rbx
  WCHAR *v3; // rcx
  LPCWSTR pszPath; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+28h] [rbp-20h]
  __int64 v7; // [rsp+30h] [rbp-18h]

  pszPath = 0LL;
  v1 = *(_QWORD *)a1;
  v6 = -1LL;
  v7 = -1LL;
  (*(void (__fastcall **)(struct IApplicationView *, LPCWSTR *))(v1 + 136))(a1, &pszPath);
  FileNameW = pszPath;
  v3 = 0LL;
  pszPath = 0LL;
  v7 = 0LL;
  v6 = 0LL;
  if ( FileNameW )
  {
    if ( PathIsFileSpecW(FileNameW) || (FileNameW = PathFindFileNameW(FileNameW)) != 0LL )
    {
      v3 = (WCHAR *)pszPath;
      goto LABEL_4;
    }
    v3 = (WCHAR *)pszPath;
  }
  FileNameW = &LocaleName;
LABEL_4:
  if ( v3 )
    CoTaskMemFree(v3);
  return FileNameW;
}
