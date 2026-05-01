/*
 * XREFs of ?GetTelemetryIdForView@ApplicationViewTraceLoggingHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z @ 0x1805BC520
 * Callers:
 *     ?GetAppLayoutItemName@TabletModeTraceLogging@@CAJPEAUIAppLayoutItem@@PEAPEAG@Z @ 0x1805BBC00 (-GetAppLayoutItemName@TabletModeTraceLogging@@CAJPEAUIAppLayoutItem@@PEAPEAG@Z.c)
 *     ?StartActivity@ApplicationViewChangedFocus@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@@Z @ 0x1805BF77C (-StartActivity@ApplicationViewChangedFocus@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@@Z.c)
 *     ?StartActivity@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@HAEBUtagRECT@@K@Z @ 0x1805BFC14 (-StartActivity@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@H.c)
 *     ?StartActivity@ShowWindowAttempted@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@PEAUHWND__@@I@Z @ 0x1805BFDE4 (-StartActivity@ShowWindowAttempted@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@PEAUHWND__.c)
 *     ?StartActivity@TMPControlGained@TabletModeTraceLogging@@QEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x1805BFF14 (-StartActivity@TMPControlGained@TabletModeTraceLogging@@QEAAXPEAUIObjectArray@@W4SHELL_POSITIONE.c)
 *     ?StartActivity@TMPControlLost@TabletModeTraceLogging@@QEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x1805C007C (-StartActivity@TMPControlLost@TabletModeTraceLogging@@QEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_.c)
 *     ?ViewForceEvicted@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@AEBUtagRECT@@1@Z @ 0x1805C2038 (-ViewForceEvicted@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationView.c)
 *     ?ViewForceMaximized@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@AEBUtagRECT@@1@Z @ 0x1805C21B4 (-ViewForceMaximized@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationVi.c)
 *     ?ViewPositionAdjusted@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@AEBUtagRECT@@1@Z @ 0x1805C25B8 (-ViewPositionAdjusted@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplication.c)
 *     ?Stop@ProcessView@CSnapComponentTelemetry@@QEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@_NW4SnappedWindowOcclusionModel@@22@Z @ 0x180667618 (-Stop@ProcessView@CSnapComponentTelemetry@@QEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@_NW.c)
 *     ?StartActivity@SnapAssistProcessing@CSnapComponentTelemetry@@QEAAXPEAUIApplicationView@@W4WINDOW_SNAPPING_MODE@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18066BDB8 (-StartActivity@SnapAssistProcessing@CSnapComponentTelemetry@@QEAAXPEAUIApplicationView@@W4WINDOW.c)
 * Callees:
 *     ?CopyTo@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAJPEAPEAG@Z @ 0x18000DBE0 (-CopyTo@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAJPEAPEAG@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18015423C (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18016270C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Concat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJAEBV123@@Z @ 0x1802D08F6 (-Concat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJAEBV123@@Z.c)
 *     ?ConcatFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x1802E6440 (-ConcatFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windo_ea_1802E6440.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ApplicationViewTraceLoggingHelpers::GetTelemetryIdForView(
        int (__fastcall ***this)(ApplicationViewTraceLoggingHelpers *, GUID *, __int64 *),
        struct IApplicationView *a2,
        unsigned __int16 **a3)
{
  int (__fastcall *v5)(ApplicationViewTraceLoggingHelpers *, GUID *, __int64 *); // rbx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  int (__fastcall *v9)(ApplicationViewTraceLoggingHelpers *, GUID *, __int64 *); // rbx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  __int64 v14; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v15[3]; // [rsp+28h] [rbp-D8h] BYREF
  HWND hWnd; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+50h] [rbp-B0h]
  __int64 v19; // [rsp+58h] [rbp-A8h]
  WCHAR ClassName[264]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+298h] [rbp+198h]

  memset(v15, 0, sizeof(v15));
  v14 = 0LL;
  v5 = **this;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
  if ( v5((ApplicationViewTraceLoggingHelpers *)this, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, &v14) < 0 )
  {
    v6 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
           (__int64)v15,
           L"Win32: ",
           0xFFFFFFFFFFFFFFFFuLL);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 25LL;
      goto LABEL_19;
    }
    v6 = ((__int64 (__fastcall *)(int (__fastcall ***)(ApplicationViewTraceLoggingHelpers *, GUID *, __int64 *), HWND *))(*this)[9])(
           this,
           &hWnd);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 28LL;
      goto LABEL_19;
    }
    if ( GetClassNameW(hWnd, ClassName, 260) )
    {
      v11 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::ConcatFormat(
              (__int64)v15,
              L"Class[%s] ",
              ClassName);
      if ( v11 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x20,
          (int)"desktop\\internal\\shell\\inc\\private\\ApplicationViewTraceLoggingHelpers.h",
          (const char *)(unsigned int)v11);
    }
    v12 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::ConcatFormat(
            (__int64)v15,
            L"Window[%lx]",
            (unsigned int)hWnd);
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x23,
        (int)"desktop\\internal\\shell\\inc\\private\\ApplicationViewTraceLoggingHelpers.h",
        (const char *)(unsigned int)v12);
  }
  else
  {
    v6 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
           (__int64)v15,
           L"WinRT: ",
           0xFFFFFFFFFFFFFFFFuLL);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 14LL;
      goto LABEL_19;
    }
    v17 = 0LL;
    v18 = 0LL;
    v19 = 0LL;
    v9 = (*this)[17];
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v17);
    v18 = -1LL;
    v19 = -1LL;
    if ( ((int (__fastcall *)(int (__fastcall ***)(ApplicationViewTraceLoggingHelpers *, GUID *, __int64 *), __int64 *))v9)(
           this,
           &v17) >= 0 )
    {
      v10 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Concat(
              (__int64)v15,
              &v17);
      if ( v10 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x13,
          (int)"desktop\\internal\\shell\\inc\\private\\ApplicationViewTraceLoggingHelpers.h",
          (const char *)(unsigned int)v10);
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v17);
  }
  v6 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::CopyTo(v15, a2);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v7 = 0;
    goto LABEL_21;
  }
  v8 = 38LL;
LABEL_19:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (int)"desktop\\internal\\shell\\inc\\private\\ApplicationViewTraceLoggingHelpers.h",
    (const char *)(unsigned int)v6);
LABEL_21:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v15);
  return v7;
}
