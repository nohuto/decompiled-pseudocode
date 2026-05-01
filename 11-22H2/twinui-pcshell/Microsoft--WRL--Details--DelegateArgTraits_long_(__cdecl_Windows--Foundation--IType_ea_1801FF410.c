/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::Internal::Shell::Experience::ICortanaExperienceManager____Windows::UI::WindowId_::_)(Windows::Internal::Shell::Experience::ICortanaExperienceManager___Windows::UI::WindowId)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::UI::WindowId___lambda_d8817a5bf489acbf44c898e094114795___1_Windows::Internal::Shell::Experience::ICortanaExperienceManager___Windows::UI::WindowId_::Invoke @ 0x1801FF410
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateAutoForegroundWindowForHotkeys@XamlLauncher@@AEAAXPEAUWindowId@UI@Windows@@@Z @ 0x18019BF1C (-UpdateAutoForegroundWindowForHotkeys@XamlLauncher@@AEAAXPEAUWindowId@UI@Windows@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::Internal::Shell::Experience::ICortanaExperienceManager____Windows::UI::WindowId_::___Windows::Internal::Shell::Experience::ICortanaExperienceManager___Windows::UI::WindowId__::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::UI::WindowId___lambda_d8817a5bf489acbf44c898e094114795___1_Windows::Internal::Shell::Experience::ICortanaExperienceManager___Windows::UI::WindowId_::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  XamlLauncher *v3; // rcx
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  v3 = *(XamlLauncher **)(a1 + 16);
  v5 = a3;
  XamlLauncher::UpdateAutoForegroundWindowForHotkeys(v3, (struct Windows::UI::WindowId *)&v5);
  return 0LL;
}
