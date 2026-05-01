/*
 * XREFs of ?UnregisterFromXusbConnectionEvents@GamingOverlayExperienceManager@@AEAAXUwrite_lock_required@wil@@@Z @ 0x180408E00
 * Callers:
 *     GamingOverlayExperienceManager::UnregisterFromXusbConnectionEventsOnBackground$_ResumeCoro$1 @ 0x1801DB7C0 (GamingOverlayExperienceManager--UnregisterFromXusbConnectionEventsOnBackground$_ResumeCoro$1.c)
 * Callees:
 *     <none>
 */

void __fastcall GamingOverlayExperienceManager::UnregisterFromXusbConnectionEvents(__int64 a1)
{
  wil::details::unique_storage<wil::details::resource_policy<HCMNOTIFICATION__ *,unsigned long (*)(HCMNOTIFICATION__ *),&unsigned long CM_Unregister_Notification(HCMNOTIFICATION__ *),wistd::integral_constant<unsigned __int64,0>,HCMNOTIFICATION__ *,HCMNOTIFICATION__ *,0,std::nullptr_t>>::reset(
    (__int64 *)(a1 + 232),
    0LL);
}
