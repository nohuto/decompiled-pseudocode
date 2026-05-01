/*
 * XREFs of ?PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z @ 0x180117A74
 * Callers:
 *     ?OnLauncherShow@XamlLauncher@@UEAAXXZ @ 0x18003C5A0 (-OnLauncherShow@XamlLauncher@@UEAAXXZ.c)
 *     ?OnLauncherHide@XamlLauncher@@UEAAXXZ @ 0x1800535D0 (-OnLauncherHide@XamlLauncher@@UEAAXXZ.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::StartExperienceManager___Windows::Internal::Shell::Experience::IStartExperienceManager____IInspectable___::_)(Windows::Internal::Shell::Experience::IStartExperienceManager___IInspectable__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::StartExperienceManager___IInspectable_____lambda_1706adbb0a4fde50e42de4cc9cbee443___1_Windows::Internal::Shell::Experience::IStartExperienceManager___IInspectable___::Invoke @ 0x18005CDB0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_18005CDB0.c)
 *     ?OnShellHookMessage@XamlLauncher@@UEAAJ_K_J@Z @ 0x180069490 (-OnShellHookMessage@XamlLauncher@@UEAAJ_K_J@Z.c)
 *     XamlLauncher::LauncherShowRequested$_ResumeCoro$1 @ 0x1801AB3D0 (XamlLauncher--LauncherShowRequested$_ResumeCoro$1.c)
 *     ?ConnectToMonitor@XamlLauncher@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x18044AA80 (-ConnectToMonitor@XamlLauncher@@UEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?RepairWNFStalenessIfNecessary@XamlLauncher@@AEAAXXZ @ 0x18044BB68 (-RepairWNFStalenessIfNecessary@XamlLauncher@@AEAAXXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z @ 0x180117B98 (--0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TD@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180117C2C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TD@@@details@wil@@QEAAX_NW4ReportingKind@.c)
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x180117CC0 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ?PublishVisibilityToMonitorManager@ImmersiveMonitorHelper@@QEAAX_N@Z @ 0x180117CF0 (-PublishVisibilityToMonitorManager@ImmersiveMonitorHelper@@QEAAX_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall XamlLauncher::PublishLauncherVisibilityState(ImmersiveMonitorHelper **this, bool a2)
{
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // r8
  struct wil::details::IFunctorHost *v6; // r8
  _QWORD v7[2]; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v8[2]; // [rsp+40h] [rbp-68h] BYREF
  struct DiagnosticsInfo v9; // [rsp+50h] [rbp-58h] BYREF
  const char *v10; // [rsp+58h] [rbp-50h]
  __int64 v11; // [rsp+60h] [rbp-48h]
  __int16 v12; // [rsp+68h] [rbp-40h]
  _BYTE v13[8]; // [rsp+70h] [rbp-38h] BYREF
  __int64 v14; // [rsp+78h] [rbp-30h]
  int v15; // [rsp+84h] [rbp-24h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  BOOL v17; // [rsp+B0h] [rbp+8h] BYREF
  bool v18; // [rsp+B8h] [rbp+10h] BYREF

  v18 = a2;
  v17 = a2;
  v3 = RtlPublishWnfStateData(WNF_IMSN_LAUNCHERVISIBILITY, 0LL, &v17, 4LL) | 0x10000000;
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x57B,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v3);
  v7[0] = this;
  v7[1] = &v18;
  v9 = (struct DiagnosticsInfo)retaddr;
  v10 = "pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp";
  v11 = 0LL;
  v12 = 1404;
  LOBYTE(v5) = 3;
  LOBYTE(v4) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TD>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_TD>::GetImpl'::`2'::impl,
    v4,
    v5);
  v8[0] = off_1806479D0;
  v8[1] = v7;
  wil::details::FeatureFunctorHost::FeatureFunctorHost((wil::details::FeatureFunctorHost *)v13, 0x1B71C3Eu, &v9);
  wil::details::RunFunctor((wil::details *)v8, (struct wil::details::IFunctor *)v13, v6);
  if ( v14 )
    *(_DWORD *)(v14 + 16) = v15;
  ImmersiveMonitorHelper::PublishVisibilityToMonitorManager(this[26], v18);
}
