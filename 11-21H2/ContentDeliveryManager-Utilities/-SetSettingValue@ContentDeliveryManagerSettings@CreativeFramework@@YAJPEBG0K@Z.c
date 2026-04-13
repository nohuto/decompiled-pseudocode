/*
 * XREFs of ?SetSettingValue@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0K@Z @ 0x18004586C
 * Callers:
 *     ?RegisterPhoneNamespace@PhoneShellNamespaceHelper@ContentManagement@@UEAAJPEAUHSTRING__@@00@Z @ 0x180040AE0 (-RegisterPhoneNamespace@PhoneShellNamespaceHelper@ContentManagement@@UEAAJPEAUHSTRING__@@00@Z.c)
 *     ?AddCreativeEventToEventStore@CreativeEventStore@CreativeFramework@@YAJPEBG0I0@Z @ 0x180059D74 (-AddCreativeEventToEventStore@CreativeEventStore@CreativeFramework@@YAJPEBG0I0@Z.c)
 * Callees:
 *     ?Return_Win32Msg@in1diag3@details@wil@@YAJPEAXIPEBDK1ZZ @ 0x1800445F0 (-Return_Win32Msg@in1diag3@details@wil@@YAJPEAXIPEBDK1ZZ.c)
 */

__int64 __fastcall CreativeFramework::ContentDeliveryManagerSettings::SetSettingValue(
        const WCHAR *this,
        LPCWSTR lpValueName,
        const unsigned __int16 *a3)
{
  const WCHAR *v3; // rbx
  const char *v5; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v8; // [rsp+60h] [rbp+18h] BYREF

  v8 = (int)a3;
  v3 = lpValueName;
  v5 = (const char *)(unsigned int)RegSetKeyValueW(HKEY_CURRENT_USER, this, lpValueName, 4u, &v8, 4u);
  result = 0LL;
  if ( (_DWORD)v5 )
  {
    if ( !v3 )
      v3 = &Src;
    return wil::details::in1diag3::Return_Win32Msg(
             retaddr,
             (void *)0x62,
             (int)"onecoreuap\\internal\\shell\\inc\\ContentDeliveryManagerSettings.h",
             v5,
             (unsigned int)"RegKey: %ws %ws",
             (const char *)this,
             v3);
  }
  return result;
}
