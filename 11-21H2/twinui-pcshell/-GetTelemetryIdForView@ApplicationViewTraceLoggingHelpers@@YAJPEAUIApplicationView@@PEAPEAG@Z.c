/*
 * XREFs of ?GetTelemetryIdForView@ApplicationViewTraceLoggingHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z @ 0x180503F10
 * Callers:
 *     ?GetAppLayoutItemName@TabletModeTraceLogging@@CAJPEAUIAppLayoutItem@@PEAPEAG@Z @ 0x180503420 (-GetAppLayoutItemName@TabletModeTraceLogging@@CAJPEAUIAppLayoutItem@@PEAPEAG@Z.c)
 *     ?StartActivity@ApplicationViewChangedFocus@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@@Z @ 0x18050724C (-StartActivity@ApplicationViewChangedFocus@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@@Z.c)
 *     ?StartActivity@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@HAEBUtagRECT@@K@Z @ 0x1805076F4 (-StartActivity@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@H.c)
 *     ?StartActivity@ShowWindowAttempted@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@PEAUHWND__@@I@Z @ 0x1805078B8 (-StartActivity@ShowWindowAttempted@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@PEAUHWND__.c)
 *     ?StartActivity@TMPControlGained@TabletModeTraceLogging@@QEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x1805079F0 (-StartActivity@TMPControlGained@TabletModeTraceLogging@@QEAAXPEAUIObjectArray@@W4SHELL_POSITIONE.c)
 *     ?StartActivity@TMPControlLost@TabletModeTraceLogging@@QEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x180507B60 (-StartActivity@TMPControlLost@TabletModeTraceLogging@@QEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_.c)
 *     ?ViewForceEvicted@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@AEBUtagRECT@@1@Z @ 0x180509B78 (-ViewForceEvicted@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationView.c)
 *     ?ViewForceMaximized@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@AEBUtagRECT@@1@Z @ 0x180509CE4 (-ViewForceMaximized@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationVi.c)
 *     ?ViewPositionAdjusted@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@AEBUtagRECT@@1@Z @ 0x18050A0D8 (-ViewPositionAdjusted@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplication.c)
 *     ?Stop@ProcessView@CSnapComponentTelemetry@@QEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@_NW4SnappedWindowOcclusionModel@@2@Z @ 0x1805991F8 (-Stop@ProcessView@CSnapComponentTelemetry@@QEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@_NW.c)
 *     ?StartActivity@SnapAssistProcessing@CSnapComponentTelemetry@@QEAAXPEAUIApplicationView@@W4WINDOW_SNAPPING_MODE@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18059CF20 (-StartActivity@SnapAssistProcessing@CSnapComponentTelemetry@@QEAAXPEAUIApplicationView@@W4WINDOW.c)
 * Callees:
 *     ?_EnsureCapacity@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_K@Z @ 0x18008D0C0 (-_EnsureCapacity@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18010FD6C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?CopyTo@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAJPEAPEAG@Z @ 0x18015D144 (-CopyTo@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAJPEAPEAG@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Concat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJAEBV123@@Z @ 0x18022AC0C (-Concat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJAEBV123@@Z.c)
 *     ?ConcatFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x180237DAE (-ConcatFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windo_ea_180237DAE.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ApplicationViewTraceLoggingHelpers::GetTelemetryIdForView(
        int (__fastcall ***this)(ApplicationViewTraceLoggingHelpers *, GUID *, __int64 *),
        struct IApplicationView *a2,
        unsigned __int16 **a3)
{
  unsigned int v5; // edi
  int (__fastcall *v6)(ApplicationViewTraceLoggingHelpers *, GUID *, __int64 *); // rbx
  int v7; // eax
  int v8; // ebx
  __int64 v9; // rax
  _WORD *v10; // rcx
  char *v11; // rdx
  __int16 v12; // r8
  int (__fastcall *v13)(ApplicationViewTraceLoggingHelpers *, __int64 *); // rbx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rax
  _WORD *v17; // rcx
  char *v18; // rdx
  __int16 v19; // r8
  int v20; // eax
  int v21; // eax
  int v23[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v24; // [rsp+28h] [rbp-D8h]
  __int64 v25; // [rsp+30h] [rbp-D0h]
  __int64 v26; // [rsp+38h] [rbp-C8h] BYREF
  HWND hWnd; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v28; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v29; // [rsp+50h] [rbp-B0h]
  __int64 v30; // [rsp+58h] [rbp-A8h]
  WCHAR ClassName[264]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2A8h] [rbp+1A8h]

  v5 = 0;
  *(_QWORD *)v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v6 = **this;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v26);
  if ( v6((ApplicationViewTraceLoggingHelpers *)this, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, &v26) >= 0 )
  {
    v7 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCapacity(
           (LPVOID *)v23,
           7uLL);
    v8 = v7;
    if ( v7 >= 0 )
    {
      v9 = 8LL;
      v10 = *(_WORD **)v23;
      v11 = (char *)L"WinRT: " - *(_QWORD *)v23;
      while ( --v9 )
      {
        v12 = *(_WORD *)((char *)v10 + (_QWORD)v11);
        if ( !v12 )
          break;
        *v10++ = v12;
      }
      *v10 = 0;
      v24 = 7LL;
      v28 = 0LL;
      v29 = 0LL;
      v30 = 0LL;
      v13 = (int (__fastcall *)(ApplicationViewTraceLoggingHelpers *, __int64 *))(*this)[17];
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v28);
      v29 = -1LL;
      v30 = -1LL;
      if ( v13((ApplicationViewTraceLoggingHelpers *)this, &v28) >= 0 )
      {
        v14 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Concat(
                (__int64)v23,
                &v28);
        if ( v14 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x13,
            (__int64)"internal\\shell\\private\\inc\\ApplicationViewTraceLoggingHelpers.h",
            (const char *)(unsigned int)v14);
      }
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v28);
      goto LABEL_24;
    }
    v15 = 14LL;
LABEL_27:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"internal\\shell\\private\\inc\\ApplicationViewTraceLoggingHelpers.h",
      (const char *)(unsigned int)v7);
    v5 = v8;
    goto LABEL_28;
  }
  v7 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCapacity(
         (LPVOID *)v23,
         7uLL);
  v8 = v7;
  if ( v7 < 0 )
  {
    v15 = 25LL;
    goto LABEL_27;
  }
  v16 = 8LL;
  v17 = *(_WORD **)v23;
  v18 = (char *)L"Win32: " - *(_QWORD *)v23;
  while ( --v16 )
  {
    v19 = *(_WORD *)((char *)v17 + (_QWORD)v18);
    if ( !v19 )
      break;
    *v17++ = v19;
  }
  *v17 = 0;
  v24 = 7LL;
  v7 = ((__int64 (__fastcall *)(int (__fastcall ***)(ApplicationViewTraceLoggingHelpers *, GUID *, __int64 *), HWND *))(*this)[9])(
         this,
         &hWnd);
  v8 = v7;
  if ( v7 < 0 )
  {
    v15 = 28LL;
    goto LABEL_27;
  }
  if ( GetClassNameW(hWnd, ClassName, 260) )
  {
    v20 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::ConcatFormat(
            (__int64)v23,
            L"Class[%s] ",
            ClassName);
    if ( v20 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x20,
        (__int64)"internal\\shell\\private\\inc\\ApplicationViewTraceLoggingHelpers.h",
        (const char *)(unsigned int)v20);
  }
  v21 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::ConcatFormat(
          (__int64)v23,
          L"Window[%lx]",
          (unsigned int)hWnd);
  if ( v21 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x23,
      (__int64)"internal\\shell\\private\\inc\\ApplicationViewTraceLoggingHelpers.h",
      (const char *)(unsigned int)v21);
LABEL_24:
  v7 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::CopyTo((__int64 *)v23, a2);
  v8 = v7;
  if ( v7 < 0 )
  {
    v15 = 38LL;
    goto LABEL_27;
  }
LABEL_28:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v26);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v23);
  return v5;
}
