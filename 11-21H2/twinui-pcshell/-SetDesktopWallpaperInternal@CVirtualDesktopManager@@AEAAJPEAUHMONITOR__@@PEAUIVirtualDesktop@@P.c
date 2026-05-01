/*
 * XREFs of ?SetDesktopWallpaperInternal@CVirtualDesktopManager@@AEAAJPEAUHMONITOR__@@PEAUIVirtualDesktop@@PEAUHSTRING__@@@Z @ 0x180548360
 * Callers:
 *     ?SetDesktopWallpaper@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z @ 0x1805482D0 (-SetDesktopWallpaper@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z.c)
 *     ?SwitchDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUHMONITOR__@@PEAUIVirtualDesktop@@@Z @ 0x18054ACB0 (-SwitchDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUHMONITOR__@@PEAUIVirtualDesktop@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180075C24 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800ACAC8 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Par.c)
 *     ?GetCurrentDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUHMONITOR__@@PEAPEAUIVirtualDesktop@@@Z @ 0x18012FBF0 (-GetCurrentDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUHMONITOR__@@PEAPEAUIVirtualDesktop@@.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAUHSTRING__@@XZ @ 0x18017118C (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1-WindowsDe.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_955eb04c377e45185ef03ddb06152220___ @ 0x1801B4F64 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_955eb04c377e45185ef03ddb06152220.c)
 *     _lambda_955eb04c377e45185ef03ddb06152220_::_lambda_955eb04c377e45185ef03ddb06152220_ @ 0x1801B5420 (_lambda_955eb04c377e45185ef03ddb06152220_--_lambda_955eb04c377e45185ef03ddb06152220_.c)
 *     _lambda_955eb04c377e45185ef03ddb06152220_::__lambda_955eb04c377e45185ef03ddb06152220_ @ 0x1801B5514 (_lambda_955eb04c377e45185ef03ddb06152220_--__lambda_955eb04c377e45185ef03ddb06152220_.c)
 *     _lambda_f588d8340c5f679f6f991f3b23d84bfd_::operator() @ 0x1801B5848 (_lambda_f588d8340c5f679f6f991f3b23d84bfd_--operator().c)
 *     ?IsSlideShowEnabled@CVirtualDesktopManager@@CA_NXZ @ 0x1801B5B60 (-IsSlideShowEnabled@CVirtualDesktopManager@@CA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_VwSotUpdates@@@details@wil@@QEAA_NXZ @ 0x1801B5CF0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_VwSotUpdates@@@details@wil@@QEAA_.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18034CC64 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1-WindowsDele.c)
 *     ??1VirtualDesktopSetWallpaperActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ @ 0x180544A10 (--1VirtualDesktopSetWallpaperActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ.c)
 *     ?AssignWallpaperToDesktop@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z @ 0x180544C64 (-AssignWallpaperToDesktop@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z.c)
 *     ?GetCurrentRenderedWallpaperPath@CVirtualDesktopManager@@AEAAJPEAPEAUHSTRING__@@@Z @ 0x180545778 (-GetCurrentRenderedWallpaperPath@CVirtualDesktopManager@@AEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?IsSubscriptionEnabledNoThrow@ConfigurationHelper@TargetedContent@CreativeFramework@@YAJPEBGPEA_N@Z @ 0x1805460B4 (-IsSubscriptionEnabledNoThrow@ConfigurationHelper@TargetedContent@CreativeFramework@@YAJPEBGPEA_.c)
 *     ?StartActivity@VirtualDesktopSetWallpaperActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ @ 0x1805488C0 (-StartActivity@VirtualDesktopSetWallpaperActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXX.c)
 *     ?Stop@VirtualDesktopSetWallpaperActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIVirtualDesktop@@_N@Z @ 0x1805493EC (-Stop@VirtualDesktopSetWallpaperActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIVirtu.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSpotlight@@@details@wil@@QEAA_NXZ @ 0x18054CC94 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSpotlight@@@details@wil@@Q.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CVirtualDesktopManager::SetDesktopWallpaperInternal(
        CVirtualDesktopManager *this,
        HMONITOR a2,
        struct IVirtualDesktop *a3,
        HSTRING a4)
{
  unsigned int v7; // ebx
  int v9; // eax
  unsigned int v10; // edi
  HSTRING *v11; // rax
  CVirtualDesktopManager *v12; // rcx
  __int64 v13; // r9
  int CurrentDesktopInternal; // eax
  int v15; // edi
  __int64 v16; // rdx
  bool v17; // r14
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  bool v22; // si
  CreativeFramework::TargetedContent::ConfigurationHelper *v23; // rcx
  bool *v24; // r8
  _QWORD *v25; // rax
  unsigned __int64 v26; // r9
  unsigned __int16 v27[2]; // [rsp+20h] [rbp-E0h] BYREF
  INT32 result; // [rsp+24h] [rbp-DCh] BYREF
  HSTRING string2; // [rsp+28h] [rbp-D8h] BYREF
  struct IUnknown *v30; // [rsp+30h] [rbp-D0h] BYREF
  HSTRING string1; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE pvParam[12]; // [rsp+40h] [rbp-C0h] BYREF
  int v33; // [rsp+4Ch] [rbp-B4h]
  _QWORD v34[40]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v35[42]; // [rsp+190h] [rbp+90h] BYREF
  _WORD v36[264]; // [rsp+2E0h] [rbp+1E0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+538h] [rbp+438h]

  string2 = a4;
  v7 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, struct IVirtualDesktop *))(**((_QWORD **)this + 12) + 32LL))(
          *((_QWORD *)this + 12),
          a3) )
    return 2147942487LL;
  v9 = CVirtualDesktopManager::AssignWallpaperToDesktop(this, a3, string2);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3D0,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v9);
    return v10;
  }
  string1 = 0LL;
  v11 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>>::put(&string1);
  if ( (int)CVirtualDesktopManager::GetCurrentRenderedWallpaperPath(v12, v11) < 0
    || !string1
    || WindowsCompareStringOrdinal(string1, string2, &result) < 0
    || result )
  {
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v34,
      (__int64)"VirtualDesktopSetWallpaperActivity");
    v34[0] = &VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSetWallpaperActivity::`vftable';
    VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSetWallpaperActivity::StartActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSetWallpaperActivity *)v34);
    v30 = 0LL;
    CurrentDesktopInternal = CVirtualDesktopManager::GetCurrentDesktopInternal(
                               (CVirtualDesktopManager *)((char *)this + 8),
                               a2,
                               (struct IVirtualDesktop **)&v30,
                               v13);
    v15 = CurrentDesktopInternal;
    if ( CurrentDesktopInternal < 0 )
    {
      v16 = 991LL;
LABEL_27:
      v26 = (unsigned int)CurrentDesktopInternal;
      goto LABEL_28;
    }
    if ( (unsigned int)SHIsSameObject(v30, (struct IUnknown *)a3) )
    {
      v17 = 1;
      *(_DWORD *)pvParam = 16;
      *(_QWORD *)&pvParam[4] = 0LL;
      v33 = 0;
      if ( !SystemParametersInfoW(0x42u, 0x10u, pvParam, 0) || (pvParam[4] & 1) == 0 )
      {
        v22 = !CVirtualDesktopManager::IsSlideShowEnabled(v19, v18, v20, v21);
        if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopSpotlight>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DesktopSpotlight>::GetImpl'::`2'::impl) )
        {
          LOBYTE(v27[0]) = 0;
          CurrentDesktopInternal = CreativeFramework::TargetedContent::ConfigurationHelper::IsSubscriptionEnabledNoThrow(
                                     v23,
                                     v27,
                                     v24);
          v15 = CurrentDesktopInternal;
          if ( CurrentDesktopInternal < 0 )
          {
            v16 = 1013LL;
            goto LABEL_27;
          }
          if ( LOBYTE(v27[0]) )
            v22 = 0;
        }
        memset_0(v36, 0, 0x208uLL);
        if ( (!SystemParametersInfoW(0x73u, 0x104u, v36, 0) || v36[0]) && v22 )
        {
          *(_QWORD *)pvParam = &string2;
          if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_VwSotUpdates>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_VwSotUpdates>::GetImpl'::`2'::impl) )
          {
            v25 = lambda_955eb04c377e45185ef03ddb06152220_::_lambda_955eb04c377e45185ef03ddb06152220_(
                    v35,
                    (__int64)v34,
                    (__int64)pvParam);
            v15 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_955eb04c377e45185ef03ddb06152220___((__int64)v25);
            lambda_955eb04c377e45185ef03ddb06152220_::__lambda_955eb04c377e45185ef03ddb06152220_((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSetWallpaperActivity *)v35);
            if ( v15 < 0 )
            {
              v26 = (unsigned int)v15;
              v16 = 1074LL;
LABEL_28:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v16,
                (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
                (const char *)v26);
              v7 = v15;
LABEL_31:
              wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v30);
              VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSetWallpaperActivity::~VirtualDesktopSetWallpaperActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSetWallpaperActivity *)v34);
              goto LABEL_32;
            }
          }
          else
          {
            CurrentDesktopInternal = lambda_f588d8340c5f679f6f991f3b23d84bfd_::operator()((HSTRING **)pvParam);
            v15 = CurrentDesktopInternal;
            if ( CurrentDesktopInternal < 0 )
            {
              v16 = 1078LL;
              goto LABEL_27;
            }
          }
        }
      }
    }
    else
    {
      v17 = 0;
    }
    VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSetWallpaperActivity::Stop(
      (VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSetWallpaperActivity *)v34,
      a3,
      v17);
    goto LABEL_31;
  }
LABEL_32:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>>(&string1);
  return v7;
}
