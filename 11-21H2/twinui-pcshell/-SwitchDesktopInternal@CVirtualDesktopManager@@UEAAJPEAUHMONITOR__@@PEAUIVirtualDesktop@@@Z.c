/*
 * XREFs of ?SwitchDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUHMONITOR__@@PEAUIVirtualDesktop@@@Z @ 0x18054ACB0
 * Callers:
 *     ?RemoveDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x180547810 (-RemoveDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 *     ?SwitchDesktop@CVirtualDesktopManager@@UEAAJPEAUHMONITOR__@@PEAUIVirtualDesktop@@@Z @ 0x18054ABE0 (-SwitchDesktop@CVirtualDesktopManager@@UEAAJPEAUHMONITOR__@@PEAUIVirtualDesktop@@@Z.c)
 *     ?TransitionToGlobalMode@CVirtualDesktopManager@@AEAAJAEBVSyncLockExclusive@Details@Wrappers@WRL@Microsoft@@@Z @ 0x18054B414 (-TransitionToGlobalMode@CVirtualDesktopManager@@AEAAJAEBVSyncLockExclusive@Details@Wrappers@WRL@.c)
 *     ?TransitionToPerMonitorMode@CVirtualDesktopManager@@AEAAJAEBVSyncLockExclusive@Details@Wrappers@WRL@Microsoft@@@Z @ 0x18054B82C (-TransitionToPerMonitorMode@CVirtualDesktopManager@@AEAAJAEBVSyncLockExclusive@Details@Wrappers@.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@V?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x180029E8C (-UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@V-$vector@V-$com_ptr_t@.c)
 *     ?GetCurrentDesktopCollection@CVirtualDesktopManager@@AEAA?AV?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@XZ @ 0x180029F94 (-GetCurrentDesktopCollection@CVirtualDesktopManager@@AEAA-AV-$vector@V-$com_ptr_t@UIVirtualDeskt.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180075C24 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIVirtualDesktop@@@Z @ 0x18009D1E4 (--0-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIVirtualDesktop@@@Z.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800ACAC8 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Par.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??B?$com_ptr_t@UIWindowManagementEvents@@Uerr_returncode_policy@wil@@@wil@@QEBA_NXZ @ 0x1800F9E14 (--B-$com_ptr_t@UIWindowManagementEvents@@Uerr_returncode_policy@wil@@@wil@@QEBA_NXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VwUpdates@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180106484 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VwUpdates@@@details@wil@@QEAAX_NW4Reporti.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18010F5F8 (--1-$unique_storage@U-$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1-WindowsDeleteString@@YAJ0@Z.c)
 *     ?GetCurrentDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUHMONITOR__@@PEAPEAUIVirtualDesktop@@@Z @ 0x18012FBF0 (-GetCurrentDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUHMONITOR__@@PEAPEAUIVirtualDesktop@@.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?IsSlideShowEnabled@CVirtualDesktopManager@@CA_NXZ @ 0x1801B5B60 (-IsSlideShowEnabled@CVirtualDesktopManager@@CA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_VwSotUpdates@@@details@wil@@QEAA_NXZ @ 0x1801B5CF0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_VwSotUpdates@@@details@wil@@QEAA_.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x1802D5260 (--1-$vector@V-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$com.c)
 *     ??I?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAUHSTRING__@@XZ @ 0x18034D3AC (--I-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1-WindowsDele.c)
 *     ??0?$com_ptr_t@UIObjectArray@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIObjectArray@@@Z @ 0x1805442A0 (--0-$com_ptr_t@UIObjectArray@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIObjectArray@@@Z.c)
 *     ??0?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1805443B8 (--0-$vector@V-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$com.c)
 *     ??1VirtualDesktopSwitchedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ @ 0x180544A3C (--1VirtualDesktopSwitchedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ.c)
 *     ?AssignWallpaperToDesktop@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z @ 0x180544C64 (-AssignWallpaperToDesktop@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z.c)
 *     ?GetCurrentRenderedWallpaperPath@CVirtualDesktopManager@@AEAAJPEAPEAUHSTRING__@@@Z @ 0x180545778 (-GetCurrentRenderedWallpaperPath@CVirtualDesktopManager@@AEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetMonitorsToNotify@CVirtualDesktopManager@@AEAAPEAUIObjectArray@@PEAUHMONITOR__@@@Z @ 0x180545B6C (-GetMonitorsToNotify@CVirtualDesktopManager@@AEAAPEAUIObjectArray@@PEAUHMONITOR__@@@Z.c)
 *     ?SetDesktopWallpaperInternal@CVirtualDesktopManager@@AEAAJPEAUHMONITOR__@@PEAUIVirtualDesktop@@PEAUHSTRING__@@@Z @ 0x180548360 (-SetDesktopWallpaperInternal@CVirtualDesktopManager@@AEAAJPEAUHMONITOR__@@PEAUIVirtualDesktop@@P.c)
 *     ?StartActivity@VirtualDesktopSwitchedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ @ 0x180548970 (-StartActivity@VirtualDesktopSwitchedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ.c)
 *     ?Stop@VirtualDesktopSwitchedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIVirtualDesktop@@0@Z @ 0x1805496BC (-Stop@VirtualDesktopSwitchedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIVirtualDe.c)
 *     ?UpdateCurrentDesktopForMonitor@CVirtualDesktopManager@@AEAAJPEAUHMONITOR__@@PEAUIVirtualDesktop@@1@Z @ 0x18054C184 (-UpdateCurrentDesktopForMonitor@CVirtualDesktopManager@@AEAAJPEAUHMONITOR__@@PEAUIVirtualDesktop.c)
 */

// Hidden C++ exception states: #wind=17
__int64 __fastcall CVirtualDesktopManager::SwitchDesktopInternal(
        __int64 **this,
        HMONITOR a2,
        struct IUnknown *a3,
        __int64 a4)
{
  int CurrentDesktopInternal; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  struct IVirtualDesktop *v10; // rdi
  __int64 *v11; // rcx
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r9
  unsigned int v16; // esi
  char v17; // r15
  __int64 v18; // rax
  int updated; // eax
  __int64 **v20; // rax
  __int64 (__fastcall **v21)(struct IVirtualDesktop *, GUID *, __int64 *); // rax
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rbx
  int (__fastcall *v25)(__int64, HSTRING *); // rsi
  HSTRING *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  HSTRING *v31; // rax
  CVirtualDesktopManager *v32; // rcx
  int v33; // eax
  struct IUnknownVtbl *lpVtbl; // rax
  int v35; // eax
  __int64 v36; // rbx
  int (__fastcall *v37)(__int64, HSTRING *); // rsi
  HSTRING *v38; // rax
  const struct _GUID *v39; // rbx
  int v40; // eax
  __int64 v41; // rbx
  __int64 (__fastcall *v42)(__int64, HSTRING *); // rsi
  HSTRING *v43; // rax
  int v44; // eax
  int v45; // eax
  int v46; // eax
  int v47; // eax
  struct IObjectArray *MonitorsToNotify; // rax
  int v49; // eax
  __int64 v51; // [rsp+30h] [rbp-D0h] BYREF
  HSTRING v52; // [rsp+38h] [rbp-C8h] BYREF
  HMONITOR v53; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v54; // [rsp+48h] [rbp-B8h] BYREF
  HSTRING v55; // [rsp+50h] [rbp-B0h] BYREF
  __int64 *v56; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v57; // [rsp+60h] [rbp-A0h] BYREF
  HSTRING v58; // [rsp+68h] [rbp-98h] BYREF
  struct IUnknown *v59; // [rsp+70h] [rbp-90h] BYREF
  struct IVirtualDesktop *v60; // [rsp+78h] [rbp-88h] BYREF
  __int64 *v61[3]; // [rsp+80h] [rbp-80h] BYREF
  __int64 *v62; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v63[40]; // [rsp+B0h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+238h] [rbp+138h]

  v53 = a2;
  v59 = 0LL;
  CurrentDesktopInternal = CVirtualDesktopManager::GetCurrentDesktopInternal(
                             (CVirtualDesktopManager *)this,
                             a2,
                             (struct IVirtualDesktop **)&v59,
                             a4);
  v8 = CurrentDesktopInternal;
  if ( CurrentDesktopInternal >= 0 )
  {
    if ( (unsigned int)SHIsSameObject(a3, v59) )
    {
      v8 = 0;
      goto LABEL_59;
    }
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v63,
      (__int64)"VirtualDesktopSwitchedActivity");
    v63[0] = &VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSwitchedActivity::`vftable';
    VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSwitchedActivity::StartActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSwitchedActivity *)v63);
    if ( *((_DWORD *)this + 69) )
    {
      v8 = -2147019873;
      v9 = 430LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
        (const char *)v8);
LABEL_58:
      VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSwitchedActivity::~VirtualDesktopSwitchedActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSwitchedActivity *)v63);
      goto LABEL_59;
    }
    if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, struct IUnknown *))(*this[11] + 32))(this[11], a3) )
    {
      v8 = -2147024809;
      v9 = 431LL;
      goto LABEL_11;
    }
    if ( !this[12] )
    {
      v8 = -2147417848;
      v9 = 432LL;
      goto LABEL_11;
    }
    wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>(
      &v60,
      (__int64)v59);
    v10 = v60;
    CVirtualDesktopManager::UpdateCurrentDesktopForMonitor(
      (CVirtualDesktopManager *)(this - 1),
      a2,
      v60,
      (struct IVirtualDesktop *)a3);
    v56 = 0LL;
    v11 = this[12];
    v12 = *v11;
    v56 = 0LL;
    v13 = (*(__int64 (__fastcall **)(__int64 *, __int64 **))(v12 + 24))(v11, &v56);
    v8 = v13;
    if ( v13 < 0 )
    {
      v14 = 438LL;
LABEL_16:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
        (const char *)(unsigned int)v13);
LABEL_57:
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v56);
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v60);
      goto LABEL_58;
    }
    v13 = (*(__int64 (__fastcall **)(__int64 *, unsigned int *))(*v56 + 24))(v56, &v54);
    v8 = v13;
    if ( v13 < 0 )
    {
      v14 = 441LL;
      goto LABEL_16;
    }
    CVirtualDesktopManager::GetCurrentDesktopCollection((__int64)(this - 1), v61);
    v16 = 0;
    v17 = 1;
    if ( v54 )
    {
      while ( 1 )
      {
        v51 = 0LL;
        v18 = *v56;
        v51 = 0LL;
        updated = (*(__int64 (__fastcall **)(__int64 *, _QWORD, GUID *, __int64 *))(v18 + 32))(
                    v56,
                    v16,
                    &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
                    &v51);
        v8 = updated;
        if ( updated < 0 )
          break;
        v20 = std::vector<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>::vector<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>(
                &v62,
                v61);
        updated = CVirtualDesktopManager::UpdateViewVisibility((__int64)(this - 1), v51, v20);
        v8 = updated;
        if ( updated < 0 )
        {
          v23 = 447LL;
          goto LABEL_25;
        }
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v51);
        if ( ++v16 >= v54 )
          goto LABEL_21;
      }
      v23 = 446LL;
LABEL_25:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v23,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
        (const char *)(unsigned int)updated);
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v51);
      goto LABEL_56;
    }
LABEL_21:
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_VwUpdates>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_VwUpdates>::GetImpl'::`2'::impl,
      1u,
      3u,
      v15);
    v51 = 0LL;
    v21 = *(__int64 (__fastcall ***)(struct IVirtualDesktop *, GUID *, __int64 *))v10;
    v51 = 0LL;
    v22 = (*v21)(v10, &GUID_eddfebdb_99be_41b5_924b_71dee9de176c, &v51);
    v8 = v22;
    if ( v22 >= 0 )
    {
      v52 = 0LL;
      v24 = v51;
      v25 = *(int (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v51 + 64LL);
      v26 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>>::operator&(&v52);
      if ( v25(v24, v26) < 0 || wil::com_ptr_t<IWindowManagementEvents,wil::err_returncode_policy>::operator bool(&v52) )
        v17 = 0;
      if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_VwSotUpdates>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_VwSotUpdates>::GetImpl'::`2'::impl)
        || v17 && !CVirtualDesktopManager::IsSlideShowEnabled(v28, v27, v29, v30) )
      {
        v58 = 0LL;
        v31 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>>::operator&(&v58);
        if ( (int)CVirtualDesktopManager::GetCurrentRenderedWallpaperPath(v32, v31) >= 0
          && wil::com_ptr_t<IWindowManagementEvents,wil::err_returncode_policy>::operator bool(&v58) )
        {
          v33 = CVirtualDesktopManager::AssignWallpaperToDesktop((CVirtualDesktopManager *)(this - 1), v10, v58);
          if ( v33 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x1D8,
              (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
              (const char *)(unsigned int)v33);
        }
        wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>(&v58);
      }
      v55 = 0LL;
      lpVtbl = a3->lpVtbl;
      v57 = 0LL;
      v35 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))lpVtbl->QueryInterface)(
              a3,
              &GUID_eddfebdb_99be_41b5_924b_71dee9de176c,
              &v57);
      v8 = v35;
      if ( v35 >= 0 )
      {
        v36 = v57;
        v37 = *(int (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v57 + 64LL);
        v38 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>>::operator&(&v55);
        if ( v37(v36, v38) >= 0
          && wil::com_ptr_t<IWindowManagementEvents,wil::err_returncode_policy>::operator bool(&v55) )
        {
          v39 = (const struct _GUID *)v53;
          v40 = CVirtualDesktopManager::SetDesktopWallpaperInternal(
                  (CVirtualDesktopManager *)(this - 1),
                  v53,
                  (struct IVirtualDesktop *)a3,
                  v55);
          if ( v40 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x1E2,
              (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
              (const char *)(unsigned int)v40);
        }
        else
        {
          v41 = v51;
          v42 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v51 + 64LL);
          v43 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>>::operator&(&v52);
          v44 = v42(v41, v43);
          if ( v44 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x1E7,
              (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
              (const char *)(unsigned int)v44);
          v45 = CVirtualDesktopManager::AssignWallpaperToDesktop(
                  (CVirtualDesktopManager *)(this - 1),
                  (struct IVirtualDesktop *)a3,
                  v52);
          if ( v45 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x1E8,
              (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
              (const char *)(unsigned int)v45);
          v39 = (const struct _GUID *)v53;
        }
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v57);
        wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>(&v55);
        wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>(&v52);
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v51);
        v46 = (*(__int64 (__fastcall **)(__int64 *, struct IUnknown *))(*this[15] + 24))(this[15], a3);
        if ( v46 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x1EB,
            (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
            (const char *)(unsigned int)v46);
        v47 = (*(__int64 (__fastcall **)(__int64 *, struct IUnknown *))(*this[16] + 32))(this[16], a3);
        if ( v47 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x1EC,
            (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
            (const char *)(unsigned int)v47);
        MonitorsToNotify = CVirtualDesktopManager::GetMonitorsToNotify((CVirtualDesktopManager *)(this - 1), v39);
        wil::com_ptr_t<IObjectArray,wil::err_returncode_policy>::com_ptr_t<IObjectArray,wil::err_returncode_policy>(
          &v53,
          (__int64)MonitorsToNotify);
        v49 = (*(__int64 (__fastcall **)(__int64 *, HMONITOR, struct IVirtualDesktop *, struct IUnknown *))(*this[14] + 88))(
                this[14],
                v53,
                v10,
                a3);
        if ( v49 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x1EE,
            (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
            (const char *)(unsigned int)v49);
        VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSwitchedActivity::Stop(
          (VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSwitchedActivity *)v63,
          v10,
          (struct IVirtualDesktop *)a3);
        v8 = 0;
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v53);
        goto LABEL_56;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1DE,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
        (const char *)(unsigned int)v35);
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v57);
      wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>(&v55);
      wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>(&v52);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1CF,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
        (const char *)(unsigned int)v22);
    }
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v51);
LABEL_56:
    std::vector<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>::~vector<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>(v61);
    goto LABEL_57;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1AA,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
    (const char *)(unsigned int)CurrentDesktopInternal);
LABEL_59:
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v59);
  return v8;
}
