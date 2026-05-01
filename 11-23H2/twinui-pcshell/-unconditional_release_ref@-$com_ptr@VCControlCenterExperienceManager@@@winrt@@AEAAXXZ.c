/*
 * XREFs of ?unconditional_release_ref@?$com_ptr@VCControlCenterExperienceManager@@@winrt@@AEAAXXZ @ 0x1804275F8
 * Callers:
 *     ??1?$com_ptr@VCControlCenterExperienceManager@@@winrt@@QEAA@XZ @ 0x18041DB6C (--1-$com_ptr@VCControlCenterExperienceManager@@@winrt@@QEAA@XZ.c)
 *     ?copy_ref@?$com_ptr@VCControlCenterExperienceManager@@@winrt@@AEAAXPEAVCControlCenterExperienceManager@@@Z @ 0x18042695C (-copy_ref@-$com_ptr@VCControlCenterExperienceManager@@@winrt@@AEAAXPEAVCControlCenterExperienceM.c)
 *     ?release_ref@?$com_ptr@VCControlCenterExperienceManager@@@winrt@@AEAAXXZ @ 0x18042733C (-release_ref@-$com_ptr@VCControlCenterExperienceManager@@@winrt@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::com_ptr<CControlCenterExperienceManager>::unconditional_release_ref(__int64 *a1)
{
  __int64 v2; // rcx

  v2 = *a1;
  *a1 = 0LL;
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ILightDismissNotification,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IControlCenterExperienceManager,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable,IInputSwitchHost,IInputHostLayoutChanges>::Release(v2);
}
