/*
 * XREFs of ?OnVisibilityChanged@CActionCenterExperienceManager@@AEAAXXZ @ 0x18004DD9C
 * Callers:
 *     ?OnViewHidden@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180040A70 (-OnViewHidden@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewShown@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180040B20 (-OnViewShown@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewDestroyed@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18034F440 (-OnViewDestroyed@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?SetWindowRegion@CActionCenterExperienceManager@@AEAAJXZ @ 0x18003DBE8 (-SetWindowRegion@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?RaisePropertyChangedEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x18004945C (-RaisePropertyChangedEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z.c)
 *     ??1?$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004E05C (--1-$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@.c)
 *     ??$com_weak_query@PEAVCActionCenterExperienceManager@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@0@$$QEAPEAVCActionCenterExperienceManager@@@Z @ 0x18004E090 (--$com_weak_query@PEAVCActionCenterExperienceManager@@@wil@@YA-AV-$com_ptr_t@UIWeakReference@@Ue.c)
 *     ??$call@P6A?AUViewCoordinator@Shell@UI@WindowsUdk@winrt@@AEBUIViewCoordinatorStatics@2345@@Z@?$factory_cache_entry@UViewCoordinator@Shell@UI@WindowsUdk@winrt@@UIViewCoordinatorStatics@2345@@impl@winrt@@QEAA?AUViewCoordinator@Shell@UI@WindowsUdk@2@$$QEAP6A?AU34562@AEBUIViewCoordinatorStatics@4562@@Z@Z @ 0x18005508C (--$call@P6A-AUViewCoordinator@Shell@UI@WindowsUdk@winrt@@AEBUIViewCoordinatorStatics@2345@@Z@-$f.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800F9C28 (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z @ 0x180117B98 (--0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x180117CC0 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ??0?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1801492F0 (--0-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TestNM@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180149610 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TestNM@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_STUC@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18014FD14 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_STUC@@@details@wil@@QEAAX_NW4ReportingKin.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_82ad92f4bbaa298f2056d3bffcd54c39___ @ 0x1801918B8 (Windows--Internal--ComTaskPool--QueueTask__lambda_82ad92f4bbaa298f2056d3bffcd54c39___.c)
 *     _lambda_47c0868eeef6d2db2a8f89db045b20e4_::__lambda_47c0868eeef6d2db2a8f89db045b20e4_ @ 0x180191D70 (_lambda_47c0868eeef6d2db2a8f89db045b20e4_--__lambda_47c0868eeef6d2db2a8f89db045b20e4_.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CActionCenterExperienceManager::OnVisibilityChanged(CActionCenterExperienceManager *this, __int64 a2)
{
  __int64 v3; // rdx
  int v4; // eax
  int v5; // eax
  __int64 *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // esi
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdx
  struct wil::details::IFunctorHost *v14; // r8
  const char *v15; // r9
  __int64 (__fastcall *v16)(__int64, __int64); // [rsp+20h] [rbp-98h] BYREF
  __int64 (__fastcall **v17)(); // [rsp+28h] [rbp-90h] BYREF
  _QWORD *v18; // [rsp+30h] [rbp-88h] BYREF
  bool v19; // [rsp+38h] [rbp-80h]
  _QWORD v20[2]; // [rsp+40h] [rbp-78h] BYREF
  struct DiagnosticsInfo v21; // [rsp+50h] [rbp-68h] BYREF
  const char *v22; // [rsp+58h] [rbp-60h]
  __int64 v23; // [rsp+60h] [rbp-58h]
  __int16 v24; // [rsp+68h] [rbp-50h]
  __int64 *v25; // [rsp+70h] [rbp-48h]
  _BYTE v26[8]; // [rsp+78h] [rbp-40h] BYREF
  __int64 v27; // [rsp+80h] [rbp-38h]
  int v28; // [rsp+8Ch] [rbp-2Ch]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]
  bool v30; // [rsp+C0h] [rbp+8h] BYREF
  __int64 v31; // [rsp+C8h] [rbp+10h] BYREF
  __int64 v32; // [rsp+D0h] [rbp+18h] BYREF
  __int64 v33; // [rsp+D8h] [rbp+20h] BYREF

  v30 = *((_DWORD *)this + 42) == 2;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TestNM>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_TestNM>::GetImpl'::`2'::impl,
    a2);
  if ( v30 )
  {
    v4 = CActionCenterExperienceManager::SetWindowRegion(this, v3);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x486,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v4,
        (int)v16);
  }
  v5 = CActionCenterExperienceManager::RaisePropertyChangedEvent(this, L"Ready", v30);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x48C,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v5,
      (int)v16);
  v32 = 0LL;
  v20[0] = this;
  v6 = (__int64 *)wil::com_weak_query<CActionCenterExperienceManager *>(&v16, v20);
  v7 = *v6;
  *v6 = 0LL;
  v32 = v7;
  wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>(&v16);
  v17 = (__int64 (__fastcall **)())this;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>(&v18, &v32);
  v19 = v30;
  v10 = Windows::Internal::ComTaskPool::QueueTask__lambda_82ad92f4bbaa298f2056d3bffcd54c39___(
          v9,
          v8,
          *((unsigned int *)this + 180),
          &v17);
  lambda_47c0868eeef6d2db2a8f89db045b20e4_::__lambda_47c0868eeef6d2db2a8f89db045b20e4_(&v17);
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x4A8,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v10,
      (int)v16);
  try
  {
    v25 = &qword_1807B3EF8;
    _InterlockedIncrement64(&qword_1807B3EF8);
    if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::ViewCoordinator,winrt::WindowsUdk::UI::Shell::IViewCoordinatorStatics> )
    {
      v33 = 0LL;
      v11 = (*(unsigned int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::ViewCoordinator,winrt::WindowsUdk::UI::Shell::IViewCoordinatorStatics>
                                                               + 48LL))(
              winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::ViewCoordinator,winrt::WindowsUdk::UI::Shell::IViewCoordinatorStatics>,
              &v33);
      winrt::check_hresult(v11);
      v31 = v33;
      _InterlockedDecrement64(&qword_1807B3EF8);
    }
    else
    {
      _InterlockedDecrement64(&qword_1807B3EF8);
      v16 = _lambda_80fc32ba40679525b9bdda7c054c7fb2_::_lambda_invoker_cdecl_;
      winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::Shell::ViewCoordinator,winrt::WindowsUdk::UI::Shell::IViewCoordinatorStatics>::call<winrt::WindowsUdk::UI::Shell::ViewCoordinator (*)(winrt::WindowsUdk::UI::Shell::IViewCoordinatorStatics const &)>(
        0LL,
        &v31,
        &v16);
    }
    v12 = (*(unsigned int (__fastcall **)(__int64, _QWORD, bool))(*(_QWORD *)v31 + 72LL))(v31, 0LL, !v30);
    winrt::check_hresult(v12);
    v20[0] = this;
    v20[1] = &v30;
    v21 = (struct DiagnosticsInfo)retaddr;
    v22 = "pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp";
    v23 = 0LL;
    v24 = 1200;
    LOBYTE(v13) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_STUC>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_STUC>::GetImpl'::`2'::impl,
      v13);
    v17 = &off_18064BB90;
    v18 = v20;
    wil::details::FeatureFunctorHost::FeatureFunctorHost((wil::details::FeatureFunctorHost *)v26, 0x1C537D7u, &v21);
    wil::details::RunFunctor((wil::details *)&v17, (struct wil::details::IFunctor *)v26, v14);
    if ( v27 )
      *(_DWORD *)(v27 + 16) = v28;
    if ( v31 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v31);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x4B5,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      v15);
  }
  wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>(&v32);
}
