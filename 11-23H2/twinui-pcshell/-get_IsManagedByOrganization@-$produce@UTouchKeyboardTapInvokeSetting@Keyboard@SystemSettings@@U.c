/*
 * XREFs of ?get_IsManagedByOrganization@?$produce@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@@impl@winrt@@UEAAHPEA_N@Z @ 0x18051D220
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSetting>::get_IsManagedByOrganization(
        __int64 a1,
        bool *a2)
{
  __int64 v2; // rax

  v2 = a1 + 56;
  if ( !a1 )
    v2 = 72LL;
  *a2 = *(_DWORD *)v2 != -1;
  return 0LL;
}
