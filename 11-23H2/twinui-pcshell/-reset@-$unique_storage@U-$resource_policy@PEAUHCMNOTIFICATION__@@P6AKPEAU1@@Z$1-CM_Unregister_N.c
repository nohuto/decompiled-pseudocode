/*
 * XREFs of ?reset@?$unique_storage@U?$resource_policy@PEAUHCMNOTIFICATION__@@P6AKPEAU1@@Z$1?CM_Unregister_Notification@@YAK0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHCMNOTIFICATION__@@@Z @ 0x1801AC524
 * Callers:
 *     ?StartXusbDeviceMonitoring@GamingOverlayExperienceManager@@AEAAJXZ @ 0x1800A8F58 (-StartXusbDeviceMonitoring@GamingOverlayExperienceManager@@AEAAJXZ.c)
 *     ?RegisterForXusbConnectionEvents@GamingOverlayExperienceManager@@AEAAJUwrite_lock_required@wil@@@Z @ 0x1800A8FE8 (-RegisterForXusbConnectionEvents@GamingOverlayExperienceManager@@AEAAJUwrite_lock_required@wil@@.c)
 *     ?StopXusbDeviceMonitoring@GamingOverlayExperienceManager@@AEAAXXZ @ 0x1801AC434 (-StopXusbDeviceMonitoring@GamingOverlayExperienceManager@@AEAAXXZ.c)
 *     ?UnregisterFromXusbConnectionEvents@GamingOverlayExperienceManager@@AEAAXUwrite_lock_required@wil@@@Z @ 0x180408E00 (-UnregisterFromXusbConnectionEvents@GamingOverlayExperienceManager@@AEAAXUwrite_lock_required@wi.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::unique_storage<wil::details::resource_policy<HCMNOTIFICATION__ *,unsigned long (*)(HCMNOTIFICATION__ *),&unsigned long CM_Unregister_Notification(HCMNOTIFICATION__ *),wistd::integral_constant<unsigned __int64,0>,HCMNOTIFICATION__ *,HCMNOTIFICATION__ *,0,std::nullptr_t>>::reset(
        __int64 *a1,
        __int64 a2)
{
  __int64 v2; // rsi
  DWORD LastError; // ebx

  v2 = *a1;
  if ( *a1 )
  {
    LastError = GetLastError();
    CM_Unregister_Notification(v2);
    SetLastError(LastError);
  }
  *a1 = a2;
}
