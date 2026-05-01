/*
 * XREFs of ?RegisterForXusbConnectionEvents@GamingOverlayExperienceManager@@AEAAJUwrite_lock_required@wil@@@Z @ 0x1800A8FE8
 * Callers:
 *     ?StartXusbDeviceMonitoring@GamingOverlayExperienceManager@@AEAAJXZ @ 0x1800A8F58 (-StartXusbDeviceMonitoring@GamingOverlayExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHCMNOTIFICATION__@@P6AKPEAU1@@Z$1?CM_Unregister_Notification@@YAK0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHCMNOTIFICATION__@@@Z @ 0x1801AC524 (-reset@-$unique_storage@U-$resource_policy@PEAUHCMNOTIFICATION__@@P6AKPEAU1@@Z$1-CM_Unregister_N.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 */

signed int __fastcall GamingOverlayExperienceManager::RegisterForXusbConnectionEvents(__int64 a1)
{
  __int64 v1; // rbx
  CONFIGRET v3; // eax
  signed int result; // eax
  _DWORD v5[4]; // [rsp+20h] [rbp-1B8h] BYREF
  GUID v6; // [rsp+30h] [rbp-1A8h]
  _BYTE v7[384]; // [rsp+40h] [rbp-198h] BYREF

  v1 = a1 + 232;
  if ( *(_QWORD *)(a1 + 232) )
    return 0;
  memset_0(v7, 0, sizeof(v7));
  v5[1] = 0;
  v5[2] = 0;
  v5[3] = 0;
  v6 = InterfaceClassGuid;
  v5[0] = 416;
  wil::details::unique_storage<wil::details::resource_policy<HCMNOTIFICATION__ *,unsigned long (*)(HCMNOTIFICATION__ *),&unsigned long CM_Unregister_Notification(HCMNOTIFICATION__ *),wistd::integral_constant<unsigned __int64,0>,HCMNOTIFICATION__ *,HCMNOTIFICATION__ *,0,std::nullptr_t>>::reset(
    v1,
    0LL);
  v3 = ((__int64 (__fastcall *)(_DWORD *, __int64, void *, __int64))CM_Register_Notification)(
         v5,
         a1,
         &GamingOverlayExperienceManager::CMEventCallback,
         v1);
  if ( !v3 )
    return 0;
  result = CM_MapCrToWin32Err(v3, 0x54Fu);
  if ( result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
