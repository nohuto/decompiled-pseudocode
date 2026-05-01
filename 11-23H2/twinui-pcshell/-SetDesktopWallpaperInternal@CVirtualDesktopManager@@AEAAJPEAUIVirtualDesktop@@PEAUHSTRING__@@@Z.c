/*
 * XREFs of ?SetDesktopWallpaperInternal@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z @ 0x18060384C
 * Callers:
 *     ?SetDesktopWallpaper@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z @ 0x1806037C0 (-SetDesktopWallpaper@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z.c)
 *     ?SwitchDesktopInternalPrivate@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@Z @ 0x1806060A4 (-SwitchDesktopInternalPrivate@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktop.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x1800DF498 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18010A38C (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Par.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1801626F8 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1-WindowsDele.c)
 *     ?GetCurrentDesktopInternal@CVirtualDesktopManager@@UEAAJPEAPEAUIVirtualDesktop@@@Z @ 0x180163F10 (-GetCurrentDesktopInternal@CVirtualDesktopManager@@UEAAJPEAPEAUIVirtualDesktop@@@Z.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAUHSTRING__@@XZ @ 0x1801B68B0 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1-WindowsDe.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     ??1ProtocolLauncherInfo@StateRepository@Internal@Windows@winrt@@QEAA@XZ @ 0x1801DA1D8 (--1ProtocolLauncherInfo@StateRepository@Internal@Windows@winrt@@QEAA@XZ.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_72859ebc22ba6b41914b9cba0f951dda___ @ 0x180214B60 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_72859ebc22ba6b41914b9cba0f951dda.c)
 *     _lambda_72859ebc22ba6b41914b9cba0f951dda_::_lambda_72859ebc22ba6b41914b9cba0f951dda_ @ 0x1802151C0 (_lambda_72859ebc22ba6b41914b9cba0f951dda_--_lambda_72859ebc22ba6b41914b9cba0f951dda_.c)
 *     ??0UserProfilePersonalizationSettings@UserProfile@System@WindowsUdk@winrt@@QEAA@XZ @ 0x1802151FC (--0UserProfilePersonalizationSettings@UserProfile@System@WindowsUdk@winrt@@QEAA@XZ.c)
 *     _lambda_72859ebc22ba6b41914b9cba0f951dda_::__lambda_72859ebc22ba6b41914b9cba0f951dda_ @ 0x180215280 (_lambda_72859ebc22ba6b41914b9cba0f951dda_--__lambda_72859ebc22ba6b41914b9cba0f951dda_.c)
 *     ?DesktopSpotlightStatus@?$consume_WindowsUdk_System_UserProfile_IUserProfilePersonalizationSettings@UIUserProfilePersonalizationSettings@UserProfile@System@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1802155EC (-DesktopSpotlightStatus@-$consume_WindowsUdk_System_UserProfile_IUserProfilePersonalizationSetti.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSpotlightUdk@@@details@wil@@QEAA_NXZ @ 0x180215D40 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSpotlightUdk@@@details@wil.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1VirtualDesktopSetWallpaperActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ @ 0x18060054C (--1VirtualDesktopSetWallpaperActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ.c)
 *     ?AssignWallpaperToDesktop@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z @ 0x1806008C4 (-AssignWallpaperToDesktop@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z.c)
 *     ?GetCurrentRenderedWallpaperPath@CVirtualDesktopManager@@AEAAJPEAPEAUHSTRING__@@@Z @ 0x1806019C4 (-GetCurrentRenderedWallpaperPath@CVirtualDesktopManager@@AEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?IsSlideShowEnabled@CVirtualDesktopManager@@CA_NXZ @ 0x180601E08 (-IsSlideShowEnabled@CVirtualDesktopManager@@CA_NXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VwSotUpdates@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180603380 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VwSotUpdates@@@details@wil@@QEAAX_NW4Repo.c)
 *     ?StartActivity@VirtualDesktopSetWallpaperActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ @ 0x180603D98 (-StartActivity@VirtualDesktopSetWallpaperActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXX.c)
 *     ?Stop@VirtualDesktopSetWallpaperActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIVirtualDesktop@@_N@Z @ 0x180604914 (-Stop@VirtualDesktopSetWallpaperActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIVirtu.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CVirtualDesktopManager::SetDesktopWallpaperInternal(
        CVirtualDesktopManager *this,
        struct IVirtualDesktop *a2,
        HSTRING a3)
{
  struct IVirtualDesktop *v3; // r15
  unsigned int v5; // ebx
  int v7; // eax
  unsigned int v8; // edi
  HSTRING *v9; // rax
  LPVOID *v10; // rcx
  int CurrentDesktopInternal; // edi
  __int64 v12; // rdx
  bool v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  bool v18; // di
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD *v21; // rax
  bool v22; // [rsp+20h] [rbp-518h]
  struct IUnknown *v24; // [rsp+28h] [rbp-510h] BYREF
  INT32 result; // [rsp+30h] [rbp-508h] BYREF
  HSTRING string2; // [rsp+38h] [rbp-500h] BYREF
  HSTRING string1; // [rsp+40h] [rbp-4F8h] BYREF
  int pvParam; // [rsp+48h] [rbp-4F0h] BYREF
  __int64 v29; // [rsp+4Ch] [rbp-4ECh]
  int v30; // [rsp+54h] [rbp-4E4h]
  HSTRING *p_string2; // [rsp+58h] [rbp-4E0h] BYREF
  _QWORD v32[40]; // [rsp+60h] [rbp-4D8h] BYREF
  _QWORD v33[42]; // [rsp+1A0h] [rbp-398h] BYREF
  _WORD v34[264]; // [rsp+2F0h] [rbp-248h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+538h] [rbp+0h]

  v3 = a2;
  p_string2 = (HSTRING *)a2;
  string2 = a3;
  v5 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 13) + 32LL))(*((_QWORD *)this + 13)) )
    return 2147942487LL;
  v7 = CVirtualDesktopManager::AssignWallpaperToDesktop(this, v3, string2);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x446,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v7);
    return v8;
  }
  string1 = 0LL;
  v9 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>>::put(&string1);
  if ( (int)CVirtualDesktopManager::GetCurrentRenderedWallpaperPath(v10, v9) < 0
    || !string1
    || WindowsCompareStringOrdinal(string1, string2, &result) < 0
    || result )
  {
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v32,
      (__int64)"VirtualDesktopSetWallpaperActivity");
    v32[0] = &VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSetWallpaperActivity::`vftable';
    VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSetWallpaperActivity::StartActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSetWallpaperActivity *)v32);
    v24 = 0LL;
    CurrentDesktopInternal = CVirtualDesktopManager::GetCurrentDesktopInternal(
                               (CVirtualDesktopManager *)((char *)this + 8),
                               (struct IVirtualDesktop **)&v24);
    if ( CurrentDesktopInternal < 0 )
    {
      v12 = 1109LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
        (const char *)(unsigned int)CurrentDesktopInternal);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v24);
      VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSetWallpaperActivity::~VirtualDesktopSetWallpaperActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSetWallpaperActivity *)v32);
      v5 = CurrentDesktopInternal;
      goto LABEL_23;
    }
    if ( (unsigned int)SHIsSameObject(v24, (struct IUnknown *)v3) )
    {
      v13 = 1;
      pvParam = 16;
      v29 = 0LL;
      v30 = 0;
      if ( !SystemParametersInfoW(0x42u, 0x10u, &pvParam, 0) || (v29 & 1) == 0 )
      {
        v18 = !CVirtualDesktopManager::IsSlideShowEnabled(v15, v14, v16, v17);
        if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopSpotlightUdk>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_DesktopSpotlightUdk>::GetImpl'::`2'::impl) )
        {
          try
          {
            winrt::WindowsUdk::System::UserProfile::UserProfilePersonalizationSettings::UserProfilePersonalizationSettings((struct IUnknown *)&pvParam);
            v18 = (unsigned int)winrt::impl::consume_WindowsUdk_System_UserProfile_IUserProfilePersonalizationSettings<winrt::WindowsUdk::System::UserProfile::IUserProfilePersonalizationSettings>::DesktopSpotlightStatus((__int64 *)&pvParam) != 1;
            v22 = v18;
            winrt::Windows::Internal::StateRepository::ProtocolLauncherInfo::~ProtocolLauncherInfo((winrt::Windows::Foundation::IUnknown *)&pvParam);
          }
          catch ( ... )
          {
            v5 = 0;
            v13 = 1;
            v18 = v22;
            v3 = (struct IVirtualDesktop *)p_string2;
          }
        }
        memset_0(v34, 0, 0x208uLL);
        if ( (!SystemParametersInfoW(0x73u, 0x104u, v34, 0) || v34[0]) && v18 )
        {
          p_string2 = &string2;
          wil::details::FeatureImpl<__WilFeatureTraits_Feature_VwSotUpdates>::ReportUsage(
            `wil::Feature<__WilFeatureTraits_Feature_VwSotUpdates>::GetImpl'::`2'::impl,
            1u,
            v19,
            v20);
          v21 = lambda_72859ebc22ba6b41914b9cba0f951dda_::_lambda_72859ebc22ba6b41914b9cba0f951dda_(
                  v33,
                  (__int64)v32,
                  (__int64)&p_string2);
          CurrentDesktopInternal = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_72859ebc22ba6b41914b9cba0f951dda___((__int64)v21);
          lambda_72859ebc22ba6b41914b9cba0f951dda_::__lambda_72859ebc22ba6b41914b9cba0f951dda_((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSetWallpaperActivity *)v33);
          if ( CurrentDesktopInternal < 0 )
          {
            v12 = 1196LL;
            goto LABEL_11;
          }
        }
      }
    }
    else
    {
      v13 = 0;
    }
    VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSetWallpaperActivity::Stop(
      (VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSetWallpaperActivity *)v32,
      v3,
      v13);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v24);
    VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSetWallpaperActivity::~VirtualDesktopSetWallpaperActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSetWallpaperActivity *)v32);
  }
LABEL_23:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>>(&string1);
  return v5;
}
