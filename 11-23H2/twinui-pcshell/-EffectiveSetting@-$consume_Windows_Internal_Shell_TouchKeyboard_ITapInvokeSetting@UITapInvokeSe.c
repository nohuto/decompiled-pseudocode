/*
 * XREFs of ?EffectiveSetting@?$consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeSetting@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1801BC878
 * Callers:
 *     ?InitializeTabTipAdapter@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1800A5144 (-InitializeTabTipAdapter@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSetting_winrt::Windows::Foundation::IInspectable___lambda_2ff518be94006a07a4ff2e3891cd65cc___::Invoke @ 0x18020A860 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows-_ea_18020A860.c)
 *     ?UpdateInvocationMethodShellPreference@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x18051B9E8 (-UpdateInvocationMethodShellPreference@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::impl::consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeSetting<winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSetting>::EffectiveSetting(
        __int64 *a1)
{
  __int64 v1; // rcx
  int v2; // eax
  unsigned int v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  v4 = 0;
  v2 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v1 + 48LL))(v1, &v4);
  if ( v2 < 0 )
    winrt::throw_hresult((unsigned int)v2);
  return v4;
}
