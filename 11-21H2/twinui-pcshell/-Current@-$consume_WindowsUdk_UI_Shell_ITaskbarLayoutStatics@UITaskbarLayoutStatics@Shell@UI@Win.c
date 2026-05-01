/*
 * XREFs of ?Current@?$consume_WindowsUdk_UI_Shell_ITaskbarLayoutStatics@UITaskbarLayoutStatics@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AUTaskbarLayout@Shell@UI@WindowsUdk@3@XZ @ 0x1800F9A1C
 * Callers:
 *     ?Current@TaskbarLayout@Shell@UI@WindowsUdk@winrt@@SA@XZ @ 0x1800F9C44 (-Current@TaskbarLayout@Shell@UI@WindowsUdk@winrt@@SA@XZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_a9de7e7a0851adce5db2c194794b7096_@@CA?AUTaskbarLayout@Shell@UI@WindowsUdk@winrt@@AEBUITaskbarLayoutStatics@3456@@Z @ 0x18017F950 (-_lambda_invoker_cdecl_@_lambda_a9de7e7a0851adce5db2c194794b7096_@@CA-AUTaskbarLayout@Shell@UI@W.c)
 *     ?ExtractMonitorInfo@MiniSearchAppPositionerConfig@@UEAA?AUMonitorInfo@@AEBUtagRECT@@@Z @ 0x1803AE3E0 (-ExtractMonitorInfo@MiniSearchAppPositionerConfig@@UEAA-AUMonitorInfo@@AEBUtagRECT@@@Z.c)
 *     ?CreateAppViewOperationToUpdateView@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewOperation@@@Z @ 0x1804F3E08 (-CreateAppViewOperationToUpdateView@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@PEAPEAU.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_WindowsUdk_UI_Shell_ITaskbarLayoutStatics<winrt::WindowsUdk::UI::Shell::ITaskbarLayoutStatics>::Current(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  int v4; // eax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  v6 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 48LL))(v2, &v6);
  if ( v4 < 0 )
    winrt::throw_hresult((unsigned int)v4);
  *a2 = v6;
  return a2;
}
