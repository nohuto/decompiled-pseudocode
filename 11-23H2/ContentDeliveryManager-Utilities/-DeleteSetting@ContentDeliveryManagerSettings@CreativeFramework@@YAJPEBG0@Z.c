/*
 * XREFs of ?DeleteSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0@Z @ 0x180030F50
 * Callers:
 *     ?UnregisterPhoneNamespace@PhoneShellNamespaceHelper@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x180041C00 (-UnregisterPhoneNamespace@PhoneShellNamespaceHelper@ContentManagement@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?GetExistingStringSettingRemoveOnFailure@ContentManagement@@YAJPEBG0PEAPEAG@Z @ 0x180058510 (-GetExistingStringSettingRemoveOnFailure@ContentManagement@@YAJPEBG0PEAPEAG@Z.c)
 *     ?ActivateSubscriptionIfInactive@SubscribedContentStore@CreativeFramework@@YAXPEBGAEBV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@PEAW4SubscriptionActivationFlags@12@@Z @ 0x180067C2C (-ActivateSubscriptionIfInactive@SubscribedContentStore@CreativeFramework@@YAXPEBGAEBV-$map@V-$ba.c)
 * Callees:
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x18003F270 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall CreativeFramework::ContentDeliveryManagerSettings::DeleteSetting(
        LPCWSTR lpSubKey,
        LPCWSTR lpValueName,
        const unsigned __int16 *a3)
{
  LSTATUS v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v5 = RegDeleteKeyValueW(HKEY_CURRENT_USER, lpSubKey, lpValueName);
  v6 = v5;
  if ( v5 > 0 )
    v6 = (unsigned __int16)v5 | 0x80070000;
  if ( (int)(v6 + 0x80000000) < 0 || v6 == -2147024894 )
    return 0LL;
  wil::details::in1diag3::Return_HrMsg(
    retaddr,
    (void *)0x116,
    (unsigned int)"onecoreuap\\internal\\shell\\inc\\ContentDeliveryManagerSettings.h",
    (const char *)v6,
    (int)"RegKey: %ws %ws",
    (const char *)lpSubKey,
    lpValueName);
  return v6;
}
