/*
 * XREFs of ?remove_EffectiveSettingChanged@?$produce@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@@impl@winrt@@UEAAHUevent_token@3@@Z @ 0x18051D560
 * Callers:
 *     <none>
 * Callees:
 *     ?remove@?$event@U?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@USnapLayoutEventArgs@23456@@Foundation@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x18047EDF4 (-remove@-$event@U-$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@US.c)
 */

__int64 __fastcall winrt::impl::produce<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSetting>::remove_EffectiveSettingChanged(
        __int64 a1,
        void *a2)
{
  __int64 v3; // rcx

  v3 = a1 + 24;
  if ( !a1 )
    v3 = 40LL;
  winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::SnapLayoutEventArgs>>::remove(
    v3,
    a2);
  return 0LL;
}
