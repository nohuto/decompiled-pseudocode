/*
 * XREFs of ?copy_ref@?$com_ptr@VCActionCenterExperienceManager@@@winrt@@AEAAXPEAVCActionCenterExperienceManager@@@Z @ 0x180351038
 * Callers:
 *     CActionCenterExperienceManager::DismissRequested$_ResumeCoro$1 @ 0x180192800 (CActionCenterExperienceManager--DismissRequested$_ResumeCoro$1.c)
 *     CActionCenterExperienceManager::ShowRequested$_ResumeCoro$1 @ 0x1801935D0 (CActionCenterExperienceManager--ShowRequested$_ResumeCoro$1.c)
 * Callees:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILightDismissNotification@@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@UIActionCenterExperienceManager@6789@UIEdgeUiInvocation@@UIEdgeUiTouchInvocation@@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIClosable@Foundation@9@UIInputHostLayoutChanges@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180192560 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILightDismissNotif.c)
 *     ?unconditional_release_ref@?$com_ptr@VCActionCenterExperienceManager@@@winrt@@AEAAXXZ @ 0x1803520A4 (-unconditional_release_ref@-$com_ptr@VCActionCenterExperienceManager@@@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall winrt::com_ptr<CActionCenterExperienceManager>::copy_ref(__int64 *a1, __int64 a2)
{
  __int64 result; // rax

  if ( *a1 != a2 )
  {
    if ( *a1 )
      result = winrt::com_ptr<CActionCenterExperienceManager>::unconditional_release_ref();
    *a1 = a2;
    if ( a2 )
      return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ILightDismissNotification,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IActionCenterExperienceManager,IEdgeUiInvocation,IEdgeUiTouchInvocation,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable,IInputHostLayoutChanges>::AddRef(a2);
  }
  return result;
}
