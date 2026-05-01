/*
 * XREFs of ?OnVisibilityChanged@CActionCenterExperienceManager@@AEAAXXZ @ 0x180017C14
 * Callers:
 *     ?OnViewShown@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180018690 (-OnViewShown@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewHidden@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180018770 (-OnViewHidden@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewDestroyed@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180419880 (-OnViewDestroyed@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?RaisePropertyChangedEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x1800166B0 (-RaisePropertyChangedEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z.c)
 *     ??$call@P6A?AUViewCoordinator@Shell@UI@WindowsUdk@winrt@@AEBUIViewCoordinatorStatics@2345@@Z@?$factory_cache_entry@UViewCoordinator@Shell@UI@WindowsUdk@winrt@@UIViewCoordinatorStatics@2345@@impl@winrt@@QEAA?A_P$$QEAP6A?AUViewCoordinator@Shell@UI@WindowsUdk@2@AEBUIViewCoordinatorStatics@4562@@Z@Z @ 0x180017E84 (--$call@P6A-AUViewCoordinator@Shell@UI@WindowsUdk@winrt@@AEBUIViewCoordinatorStatics@2345@@Z@-$f.c)
 *     ?Current@?$consume_WindowsUdk_UI_Shell_IViewCoordinatorStatics@UIViewCoordinatorStatics@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180018018 (-Current@-$consume_WindowsUdk_UI_Shell_IViewCoordinatorStatics@UIViewCoordinatorStatics@Shell@UI.c)
 *     ??$com_weak_query@PEAVCActionCenterExperienceManager@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@0@$$QEAPEAVCActionCenterExperienceManager@@@Z @ 0x18001806C (--$com_weak_query@PEAVCActionCenterExperienceManager@@@wil@@YA-AV-$com_ptr_t@UIWeakReference@@Ue.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4c9b4ecc162b37675afada1bdb63893a_____lambda_4c9b4ecc162b37675afada1bdb63893a___ @ 0x180018104 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_4c9b4ecc162b3.c)
 *     ?SetWindowRegion@CActionCenterExperienceManager@@AEAAJXZ @ 0x180019FD4 (-SetWindowRegion@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z @ 0x180106290 (--0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x180106324 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801484D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TestNM@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18014F194 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TestNM@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_STUC@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18018F8E4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_STUC@@@details@wil@@QEAAX_NW4ReportingKin.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CActionCenterExperienceManager::OnVisibilityChanged(
        CActionCenterExperienceManager *this,
        __int64 a2,
        __int64 a3)
{
  int v4; // eax
  int v5; // eax
  const char **v6; // rax
  const char *v7; // rbx
  unsigned int v8; // r14d
  __int64 *v9; // rax
  __int64 v10; // rbx
  int v11; // r14d
  wil::details::in1diag3 *v12; // rcx
  int v13; // eax
  __int64 v14; // rdx
  struct wil::details::IFunctorHost *v15; // r8
  int v16; // [rsp+20h] [rbp-A8h]
  _QWORD v17[2]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v18[2]; // [rsp+40h] [rbp-88h] BYREF
  struct DiagnosticsInfo v19; // [rsp+50h] [rbp-78h] BYREF
  const char *v20; // [rsp+58h] [rbp-70h] BYREF
  __int64 v21; // [rsp+60h] [rbp-68h]
  __int16 v22; // [rsp+68h] [rbp-60h]
  __int64 *v23; // [rsp+70h] [rbp-58h]
  _BYTE v24[8]; // [rsp+78h] [rbp-50h] BYREF
  __int64 v25; // [rsp+80h] [rbp-48h]
  int v26; // [rsp+8Ch] [rbp-3Ch]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]
  bool v28; // [rsp+D0h] [rbp+8h] BYREF
  __int64 v29; // [rsp+D8h] [rbp+10h] BYREF
  __int64 (__fastcall *v30)(const struct winrt::WindowsUdk::UI::Shell::IViewCoordinatorStatics *); // [rsp+E0h] [rbp+18h] BYREF
  const char *v31; // [rsp+E8h] [rbp+20h] BYREF

  v28 = *((_DWORD *)this + 42) == 2;
  LOBYTE(a3) = 3;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TestNM>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_TestNM>::GetImpl'::`2'::impl,
    a2,
    a3);
  if ( v28 )
  {
    v4 = CActionCenterExperienceManager::SetWindowRegion(this);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x508,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v4,
        v16);
  }
  v5 = CActionCenterExperienceManager::RaisePropertyChangedEvent(this, L"Ready", v28);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x50D,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v5,
      v16);
  v31 = 0LL;
  v17[0] = this;
  v6 = (const char **)wil::com_weak_query<CActionCenterExperienceManager *>(v18, v17);
  v7 = *v6;
  *v6 = 0LL;
  v31 = v7;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v18);
  v19 = (struct DiagnosticsInfo)this;
  v20 = v7;
  if ( v7 )
    (*(void (__fastcall **)(const char *))(*(_QWORD *)v7 + 8LL))(v7);
  LOBYTE(v21) = v28;
  v8 = *((_DWORD *)this + 182);
  v9 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4c9b4ecc162b37675afada1bdb63893a_____lambda_4c9b4ecc162b37675afada1bdb63893a___(
                    &v30,
                    &v19);
  v10 = *v9;
  *v9 = 0LL;
  if ( v30 )
  {
    v30 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release();
  }
  v11 = SHTaskPoolQueueTask(3LL, 2LL, v8);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v20);
  v12 = retaddr;
  if ( v11 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x529,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v11,
      v10);
  v23 = &qword_18098E048;
  _InterlockedIncrement64(&qword_18098E048);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::ViewCoordinator,winrt::WindowsUdk::UI::Shell::IViewCoordinatorStatics> )
  {
    winrt::impl::consume_WindowsUdk_UI_Shell_IViewCoordinatorStatics<winrt::WindowsUdk::UI::Shell::IViewCoordinatorStatics>::Current(
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::ViewCoordinator,winrt::WindowsUdk::UI::Shell::IViewCoordinatorStatics>,
      &v29);
    _InterlockedDecrement64(&qword_18098E048);
  }
  else
  {
    _InterlockedDecrement64(&qword_18098E048);
    v30 = _lambda_80fc32ba40679525b9bdda7c054c7fb2_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::Shell::ViewCoordinator,winrt::WindowsUdk::UI::Shell::IViewCoordinatorStatics>::call<winrt::WindowsUdk::UI::Shell::ViewCoordinator (*)(winrt::WindowsUdk::UI::Shell::IViewCoordinatorStatics const &)>(
      v12,
      &v29,
      &v30);
  }
  v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, bool))(*(_QWORD *)v29 + 72LL))(v29, 0LL, !v28);
  if ( v13 < 0 )
    winrt::throw_hresult((unsigned int)v13);
  v18[0] = (__int64)this;
  v18[1] = (__int64)&v28;
  v19 = (struct DiagnosticsInfo)retaddr;
  v20 = "pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp";
  v21 = 0LL;
  v22 = 1329;
  LOBYTE(v14) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_STUC>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_STUC>::GetImpl'::`2'::impl,
    v14);
  v17[0] = &off_1807CD708;
  v17[1] = v18;
  wil::details::FeatureFunctorHost::FeatureFunctorHost((wil::details::FeatureFunctorHost *)v24, 0x1C537D7u, &v19);
  wil::details::RunFunctor((wil::details *)v17, (struct wil::details::IFunctor *)v24, v15);
  if ( v25 )
    *(_DWORD *)(v25 + 16) = v26;
  if ( v29 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v29);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v31);
}
