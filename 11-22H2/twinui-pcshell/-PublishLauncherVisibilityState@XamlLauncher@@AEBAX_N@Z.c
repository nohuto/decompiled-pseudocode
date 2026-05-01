/*
 * XREFs of ?PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z @ 0x180106170
 * Callers:
 *     ?OnLauncherShow@XamlLauncher@@UEAAXXZ @ 0x18006B0E0 (-OnLauncherShow@XamlLauncher@@UEAAXXZ.c)
 *     ?OnLauncherHide@XamlLauncher@@UEAAXXZ @ 0x180080340 (-OnLauncherHide@XamlLauncher@@UEAAXXZ.c)
 *     ?OnHotkeyInvoke@XamlLauncher@@AEAAJW4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x1800F403C (-OnHotkeyInvoke@XamlLauncher@@AEAAJW4IMMERSIVELAUNCHERSHOWFLAGS@@@Z.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::StartExperienceManager___Windows::Internal::Shell::Experience::IStartExperienceManager____IInspectable___::_)(Windows::Internal::Shell::Experience::IStartExperienceManager___IInspectable__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::StartExperienceManager___IInspectable_____lambda_1706adbb0a4fde50e42de4cc9cbee443___1_Windows::Internal::Shell::Experience::IStartExperienceManager___IInspectable___::Invoke @ 0x1800F59A0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_1800F59A0.c)
 *     XamlLauncher::LauncherShowRequested$_ResumeCoro$1 @ 0x1802000A0 (XamlLauncher--LauncherShowRequested$_ResumeCoro$1.c)
 *     ?RepairWNFStalenessIfNecessary@XamlLauncher@@AEAAXXZ @ 0x1802D9D32 (-RepairWNFStalenessIfNecessary@XamlLauncher@@AEAAXXZ.c)
 *     ?ConnectToMonitor@XamlLauncher@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x1805004E0 (-ConnectToMonitor@XamlLauncher@@UEAAJPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ??0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z @ 0x180106290 (--0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x180106324 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TD@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180106354 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TD@@@details@wil@@QEAAX_NW4ReportingKind@.c)
 *     ?PublishVisibilityToMonitorManager@ImmersiveMonitorHelper@@QEAAX_N@Z @ 0x1801063DC (-PublishVisibilityToMonitorManager@ImmersiveMonitorHelper@@QEAAX_N@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall XamlLauncher::PublishLauncherVisibilityState(ImmersiveMonitorHelper **this, bool a2)
{
  int v3; // eax
  __int64 v4; // rdx
  struct wil::details::IFunctorHost *v5; // r8
  _QWORD v6[2]; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v7[2]; // [rsp+40h] [rbp-68h] BYREF
  struct DiagnosticsInfo v8; // [rsp+50h] [rbp-58h] BYREF
  const char *v9; // [rsp+58h] [rbp-50h]
  __int64 v10; // [rsp+60h] [rbp-48h]
  __int16 v11; // [rsp+68h] [rbp-40h]
  _BYTE v12[8]; // [rsp+70h] [rbp-38h] BYREF
  __int64 v13; // [rsp+78h] [rbp-30h]
  int v14; // [rsp+84h] [rbp-24h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  BOOL v16; // [rsp+B0h] [rbp+8h] BYREF
  bool v17; // [rsp+B8h] [rbp+10h] BYREF

  v17 = a2;
  v16 = a2;
  v3 = RtlPublishWnfStateData(WNF_IMSN_LAUNCHERVISIBILITY, 0LL, &v16, 4LL) | 0x10000000;
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x68F,
      (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v3,
      0);
  v6[0] = this;
  v6[1] = &v17;
  v8 = (struct DiagnosticsInfo)retaddr;
  v9 = "pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp";
  v10 = 0LL;
  v11 = 1680;
  LOBYTE(v4) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TD>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_TD>::GetImpl'::`2'::impl,
    v4);
  v7[0] = off_1807CD980;
  v7[1] = v6;
  wil::details::FeatureFunctorHost::FeatureFunctorHost((wil::details::FeatureFunctorHost *)v12, 0x1B71C3Eu, &v8);
  wil::details::RunFunctor((wil::details *)v7, (struct wil::details::IFunctor *)v12, v5);
  if ( v13 )
    *(_DWORD *)(v13 + 16) = v14;
  ImmersiveMonitorHelper::PublishVisibilityToMonitorManager(this[27], v17);
}
