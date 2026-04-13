/*
 * XREFs of ?SetFileTimeSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0U_FILETIME@@@Z @ 0x1800649DC
 * Callers:
 *     ?SetEventReported@CreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEventType@2@0@Z @ 0x180064580 (-SetEventReported@CreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEv.c)
 *     ?ActivateSubscriptionIfInactive@SubscribedContentStore@CreativeFramework@@YAXPEBGAEBV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@PEAW4SubscriptionActivationFlags@12@@Z @ 0x18006EE8C (-ActivateSubscriptionIfInactive@SubscribedContentStore@CreativeFramework@@YAXPEBGAEBV-$map@V-$ba.c)
 *     ?RefreshSubscriptionLastAccessed@SubscribedContentStore@CreativeFramework@@YAXPEBG@Z @ 0x180071670 (-RefreshSubscriptionLastAccessed@SubscribedContentStore@CreativeFramework@@YAXPEBG@Z.c)
 * Callees:
 *     ?Return_Win32Msg@in1diag3@details@wil@@YAJPEAXIPEBDK1ZZ @ 0x1800445F0 (-Return_Win32Msg@in1diag3@details@wil@@YAJPEAXIPEBDK1ZZ.c)
 */

__int64 __fastcall CreativeFramework::ContentDeliveryManagerSettings::SetFileTimeSetting(
        const WCHAR *this,
        LPCWSTR lpValueName,
        const unsigned __int16 *a3,
        struct _FILETIME a4)
{
  const WCHAR *v4; // rbx
  const char *v6; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  const unsigned __int16 *v9; // [rsp+60h] [rbp+18h] BYREF

  v4 = lpValueName;
  v9 = a3;
  v6 = (const char *)(unsigned int)RegSetKeyValueW(HKEY_CURRENT_USER, this, lpValueName, 0xBu, &v9, 8u);
  result = 0LL;
  if ( (_DWORD)v6 )
  {
    if ( !v4 )
      v4 = &Src;
    return wil::details::in1diag3::Return_Win32Msg(
             retaddr,
             (void *)0x62,
             (int)"onecoreuap\\internal\\shell\\inc\\ContentDeliveryManagerSettings.h",
             v6,
             (unsigned int)"RegKey: %ws %ws",
             (const char *)this,
             v4);
  }
  return result;
}
