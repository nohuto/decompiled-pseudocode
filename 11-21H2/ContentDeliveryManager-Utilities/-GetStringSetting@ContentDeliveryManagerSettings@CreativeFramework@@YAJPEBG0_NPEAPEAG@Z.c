/*
 * XREFs of ?GetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0_NPEAPEAG@Z @ 0x180038D20
 * Callers:
 *     ?UnregisterPhoneNamespace@PhoneShellNamespaceHelper@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x180046B10 (-UnregisterPhoneNamespace@PhoneShellNamespaceHelper@ContentManagement@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?GetExistingStringSettingRemoveOnFailure@ContentManagement@@YAJPEBG0PEAPEAG@Z @ 0x18005DAEC (-GetExistingStringSettingRemoveOnFailure@ContentManagement@@YAJPEBG0PEAPEAG@Z.c)
 *     ?GetSubscriptionContext@SubscribedContentStore@CreativeFramework@@YA?AV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@PEBG_N@Z @ 0x180070030 (-GetSubscriptionContext@SubscribedContentStore@CreativeFramework@@YA-AV-$map@V-$basic_string@GU-.c)
 * Callees:
 *     ?Return_Win32Msg@in1diag3@details@wil@@YAJPEAXIPEBDK1ZZ @ 0x1800445F0 (-Return_Win32Msg@in1diag3@details@wil@@YAJPEAXIPEBDK1ZZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CreativeFramework::ContentDeliveryManagerSettings::GetStringSetting(
        const WCHAR *this,
        LPCWSTR lpValue,
        const unsigned __int16 *a3,
        _QWORD *a4)
{
  char v5; // di
  const WCHAR *v6; // rsi
  LSTATUS ValueW; // eax
  signed int v9; // ebx
  void *pvData; // rdi
  unsigned int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  SIZE_T cb; // [rsp+78h] [rbp+20h] BYREF

  v5 = (char)a3;
  v6 = lpValue;
  *a4 = 0LL;
  LODWORD(cb) = 0;
  ValueW = RegGetValueW(HKEY_CURRENT_USER, this, lpValue, 2u, 0LL, 0LL, (LPDWORD)&cb);
  v9 = ValueW;
  if ( ValueW > 0 )
    v9 = (unsigned __int16)ValueW | 0x80070000;
  if ( v9 < 0 )
  {
    if ( v5 && v9 == -2147024894 )
      return 0;
  }
  else
  {
    pvData = CoTaskMemAlloc((unsigned int)cb);
    v11 = RegGetValueW(HKEY_CURRENT_USER, this, v6, 2u, 0LL, pvData, (LPDWORD)&cb);
    if ( v11 )
    {
      if ( !v6 )
        v6 = &Src;
      v9 = wil::details::in1diag3::Return_Win32Msg(
             retaddr,
             (void *)0xB8,
             (unsigned int)"onecoreuap\\internal\\shell\\inc\\ContentDeliveryManagerSettings.h",
             (const char *)v11,
             (unsigned int)"RegKey: %ws %ws",
             (const char *)this,
             v6);
      if ( pvData )
        CoTaskMemFree(pvData);
    }
    else
    {
      *a4 = pvData;
    }
  }
  return (unsigned int)v9;
}
