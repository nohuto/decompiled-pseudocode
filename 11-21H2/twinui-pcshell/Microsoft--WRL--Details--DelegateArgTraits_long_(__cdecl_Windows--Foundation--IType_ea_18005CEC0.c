/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::Internal::Shell::Experience::ICortanaExperienceManager____IInspectable___::_)(Windows::Internal::Shell::Experience::ICortanaExperienceManager___IInspectable__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager___IInspectable_____lambda_2cda95cd37a00063b4d652d21d011a94___1_Windows::Internal::Shell::Experience::ICortanaExperienceManager___IInspectable___::Invoke @ 0x18005CEC0
 * Callers:
 *     <none>
 * Callees:
 *     ??$RelaunchExperienceWithDelay@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@@@YAXPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@P6AXXZ@Z @ 0x18005CF18 (--$RelaunchExperienceWithDelay@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@@@Y.c)
 *     ?AllowAutoAppRestartOnCrash@XamlLauncher@@AEBA_NXZ @ 0x18005CFC4 (-AllowAutoAppRestartOnCrash@XamlLauncher@@AEBA_NXZ.c)
 *     ?CortanaKeepsCrashing@StartWindowTelemetry@@SAXXZ @ 0x18044AC08 (-CortanaKeepsCrashing@StartWindowTelemetry@@SAXXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::Internal::Shell::Experience::ICortanaExperienceManager____IInspectable___::___Windows::Internal::Shell::Experience::ICortanaExperienceManager___IInspectable____::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager___IInspectable_____lambda_2cda95cd37a00063b4d652d21d011a94___1_Windows::Internal::Shell::Experience::ICortanaExperienceManager___IInspectable___::Invoke(
        XamlLauncher *a1)
{
  HWND WindowW; // rax

  if ( *(_DWORD *)(*((_QWORD *)a1 + 2) + 332LL) < *(_DWORD *)(*((_QWORD *)a1 + 2) + 336LL)
    && XamlLauncher::AllowAutoAppRestartOnCrash(a1) )
  {
    ++*(_DWORD *)(*((_QWORD *)a1 + 2) + 332LL);
    RelaunchExperienceWithDelay<Windows::Internal::Shell::Experience::ICortanaExperienceManager>(*(_QWORD *)(*((_QWORD *)a1 + 2) + 184LL));
  }
  else
  {
    WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
    if ( WindowW && !GetPropW(WindowW, L"IsExplorerShuttingDown") )
      StartWindowTelemetry::CortanaKeepsCrashing();
  }
  return 0LL;
}
