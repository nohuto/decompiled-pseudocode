/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIControlCenterExperienceManager@Experience@Shell@Internal@Windows@@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIClosable@Foundation@8@UIInputSwitchHost@@UIInputHostLayoutChanges@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1801949B4
 * Callers:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UILightDismissNotification@@UIWeakReferenceSource@@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@UIControlCenterExperienceManager@789Windows@@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIClosable@Foundation@Windows@@UIInputSwitchHost@@UIInputHostLayoutChanges@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180194A9C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UILightDismissNotificat.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIImmersiveMonitorNotification@@UIClosable@Foundation@Windows@@UIInputSwitchHost@@UIInputHostLayoutChanges@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180194A28 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIImmersiveMonitorNotif.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::Experience::IControlCenterExperienceManager,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable,IInputSwitchHost,IInputHostLayoutChanges>::CanCastTo(
        __int64 a1,
        _DWORD *a2)
{
  _DWORD *v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r11
  _DWORD *v6; // rcx
  _QWORD *v7; // r8
  unsigned int v8; // r9d
  __int64 v9; // r11
  __int64 v10; // r10

  if ( InlineIsEqualGUID(a2, &GUID_d669a58e_6b18_4d1d_9004_a8862adb0a20) )
  {
    *v3 = v4;
    return 0LL;
  }
  else
  {
    if ( InlineIsEqualGUID(v2, &GUID_985c98a3_21f6_4585_9e13_f708cb0de4f2)
      || InlineIsEqualGUID(v6, &GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0) )
    {
      *v7 = v9;
    }
    else
    {
      return (unsigned int)Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IImmersiveMonitorNotification,Windows::Foundation::IClosable,IInputSwitchHost,IInputHostLayoutChanges>::CanCastTo(
                             v9 + 8,
                             v10);
    }
    return v8;
  }
}
