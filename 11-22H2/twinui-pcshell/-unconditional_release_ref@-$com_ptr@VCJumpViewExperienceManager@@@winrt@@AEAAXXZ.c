/*
 * XREFs of ?unconditional_release_ref@?$com_ptr@VCJumpViewExperienceManager@@@winrt@@AEAAXXZ @ 0x18044A634
 * Callers:
 *     ??1?$com_ptr@VCJumpViewExperienceManager@@@winrt@@QEAA@XZ @ 0x180447324 (--1-$com_ptr@VCJumpViewExperienceManager@@@winrt@@QEAA@XZ.c)
 *     ?copy_ref@?$com_ptr@VCJumpViewExperienceManager@@@winrt@@AEAAXPEAVCJumpViewExperienceManager@@@Z @ 0x18044A374 (-copy_ref@-$com_ptr@VCJumpViewExperienceManager@@@winrt@@AEAAXPEAVCJumpViewExperienceManager@@@Z.c)
 *     ?release_ref@?$com_ptr@VCJumpViewExperienceManager@@@winrt@@AEAAXXZ @ 0x18044A4C4 (-release_ref@-$com_ptr@VCJumpViewExperienceManager@@@winrt@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::com_ptr<CJumpViewExperienceManager>::unconditional_release_ref(__int64 *a1)
{
  __int64 v2; // rcx

  v2 = *a1;
  *a1 = 0LL;
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IJumpViewExperienceManager,IImmersiveMonitorNotification,Windows::Foundation::IClosable,IActiveZBandNotificationForMonitor,IImmersiveWindowMessageNotification>::Release(v2);
}
