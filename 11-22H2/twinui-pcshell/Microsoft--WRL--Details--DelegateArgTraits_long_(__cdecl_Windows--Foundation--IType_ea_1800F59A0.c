/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::StartExperienceManager___Windows::Internal::Shell::Experience::IStartExperienceManager____IInspectable___::_)(Windows::Internal::Shell::Experience::IStartExperienceManager___IInspectable__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::StartExperienceManager___IInspectable_____lambda_1706adbb0a4fde50e42de4cc9cbee443___1_Windows::Internal::Shell::Experience::IStartExperienceManager___IInspectable___::Invoke @ 0x1800F59A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$RelaunchExperienceWithDelay@UIStartExperienceManager@Experience@Shell@Internal@Windows@@@@YAXPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@P6AXXZ@Z @ 0x1800F4F10 (--$RelaunchExperienceWithDelay@UIStartExperienceManager@Experience@Shell@Internal@Windows@@@@YAX.c)
 *     ?AllowAutoAppRestartOnCrash@XamlLauncher@@AEBA_NXZ @ 0x1800F5A00 (-AllowAutoAppRestartOnCrash@XamlLauncher@@AEBA_NXZ.c)
 *     ?PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z @ 0x180106170 (-PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z.c)
 *     ?StartKeepsCrashing@StartWindowTelemetry@@SAXXZ @ 0x1805021E4 (-StartKeepsCrashing@StartWindowTelemetry@@SAXXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::StartExperienceManager___Windows::Internal::Shell::Experience::IStartExperienceManager____IInspectable___::___Windows::Internal::Shell::Experience::IStartExperienceManager___IInspectable____::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::StartExperienceManager___IInspectable_____lambda_1706adbb0a4fde50e42de4cc9cbee443___1_Windows::Internal::Shell::Experience::IStartExperienceManager___IInspectable___::Invoke(
        __int64 a1)
{
  XamlLauncher *v2; // rcx
  __int64 v3; // rdx
  HWND WindowW; // rax

  XamlLauncher::PublishLauncherVisibilityState(*(XamlLauncher **)(a1 + 16), 0);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 376LL) < *(_DWORD *)(*(_QWORD *)(a1 + 16) + 384LL)
    && XamlLauncher::AllowAutoAppRestartOnCrash(v2) )
  {
    ++*(_DWORD *)(*(_QWORD *)(a1 + 16) + 376LL);
    RelaunchExperienceWithDelay<Windows::Internal::Shell::Experience::IStartExperienceManager>(
      *(IUnknown **)(*(_QWORD *)(a1 + 16) + 184LL),
      v3);
  }
  else
  {
    WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
    if ( WindowW && !GetPropW(WindowW, L"IsExplorerShuttingDown") )
      StartWindowTelemetry::StartKeepsCrashing();
  }
  return 0LL;
}
