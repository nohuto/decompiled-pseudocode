/*
 * XREFs of ?HandleXusbDeviceConnectionEvent@GamingOverlayExperienceManager@@AEAAXW4_CM_NOTIFY_ACTION@@@Z @ 0x180332E00
 * Callers:
 *     ?CMEventCallback@GamingOverlayExperienceManager@@CAKPEAUHCMNOTIFICATION__@@PEAXW4_CM_NOTIFY_ACTION@@PEAU_CM_NOTIFY_EVENT_DATA@@K@Z @ 0x18032D5B0 (-CMEventCallback@GamingOverlayExperienceManager@@CAKPEAUHCMNOTIFICATION__@@PEAXW4_CM_NOTIFY_ACTI.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180121F64 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?UnregisterFromXusbConnectionEventsOnBackground@GamingOverlayExperienceManager@@AEAA?AUfire_and_forget@winrt@@XZ @ 0x1801913D8 (-UnregisterFromXusbConnectionEventsOnBackground@GamingOverlayExperienceManager@@AEAA-AUfire_and_.c)
 *     ?StartGipControllerWatcher@GamingOverlayExperienceManager@@AEAAJUwrite_lock_required@wil@@@Z @ 0x180339B20 (-StartGipControllerWatcher@GamingOverlayExperienceManager@@AEAAJUwrite_lock_required@wil@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall GamingOverlayExperienceManager::HandleXusbDeviceConnectionEvent(RTL_SRWLOCK *a1, int a2)
{
  RTL_SRWLOCK *v4; // [rsp+30h] [rbp+8h] BYREF
  char v5; // [rsp+38h] [rbp+10h] BYREF

  wil::AcquireSRWLockExclusive(&v4, a1 + 26);
  if ( !a2 )
  {
    GamingOverlayExperienceManager::UnregisterFromXusbConnectionEventsOnBackground((__int64)a1, &v5);
    GamingOverlayExperienceManager::StartGipControllerWatcher(a1);
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v4);
}
