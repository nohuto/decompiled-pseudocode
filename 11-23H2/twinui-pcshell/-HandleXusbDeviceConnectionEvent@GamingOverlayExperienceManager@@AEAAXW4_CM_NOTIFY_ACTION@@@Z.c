/*
 * XREFs of ?HandleXusbDeviceConnectionEvent@GamingOverlayExperienceManager@@AEAAXW4_CM_NOTIFY_ACTION@@@Z @ 0x1804003E8
 * Callers:
 *     ?CMEventCallback@GamingOverlayExperienceManager@@CAKPEAUHCMNOTIFICATION__@@PEAXW4_CM_NOTIFY_ACTION@@PEAU_CM_NOTIFY_EVENT_DATA@@K@Z @ 0x1803FA960 (-CMEventCallback@GamingOverlayExperienceManager@@CAKPEAUHCMNOTIFICATION__@@PEAXW4_CM_NOTIFY_ACTI.c)
 * Callees:
 *     ?StartGameInputWatcher@GamingOverlayExperienceManager@@AEAAJUwrite_lock_required@wil@@@Z @ 0x1801DB514 (-StartGameInputWatcher@GamingOverlayExperienceManager@@AEAAJUwrite_lock_required@wil@@@Z.c)
 *     ?UnregisterFromXusbConnectionEventsOnBackground@GamingOverlayExperienceManager@@AEAA?AUfire_and_forget@winrt@@XZ @ 0x1801DB984 (-UnregisterFromXusbConnectionEventsOnBackground@GamingOverlayExperienceManager@@AEAA-AUfire_and_.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_GameBarEmDmaCompliance@@@details@wil@@QEAA_NXZ @ 0x1801DBAC4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_GameBarEmDmaCompliance@.c)
 *     ?StartGipControllerWatcher@GamingOverlayExperienceManager@@AEAAJUwrite_lock_required@wil@@@Z @ 0x180407A1C (-StartGipControllerWatcher@GamingOverlayExperienceManager@@AEAAJUwrite_lock_required@wil@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall GamingOverlayExperienceManager::HandleXusbDeviceConnectionEvent(__int64 a1, int a2)
{
  RTL_SRWLOCK *v4; // rdi
  char v5; // [rsp+38h] [rbp+10h] BYREF

  v4 = (RTL_SRWLOCK *)(a1 + 216);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 216));
  if ( !a2 )
  {
    GamingOverlayExperienceManager::UnregisterFromXusbConnectionEventsOnBackground(a1, &v5);
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_GameBarEmDmaCompliance>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_Servicing_GameBarEmDmaCompliance>::GetImpl'::`2'::impl) )
      GamingOverlayExperienceManager::StartGameInputWatcher((__int64 *)a1);
    else
      GamingOverlayExperienceManager::StartGipControllerWatcher(a1);
  }
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
}
