/*
 * XREFs of ?DeleteSettingKey@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG@Z @ 0x180030FF0
 * Callers:
 *     ?UnregisterPhoneNamespace@PhoneShellNamespaceHelper@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x180041C00 (-UnregisterPhoneNamespace@PhoneShellNamespaceHelper@ContentManagement@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?SetEventReported@CreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEventType@2@0@Z @ 0x18005E120 (-SetEventReported@CreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEv.c)
 * Callees:
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x18003F270 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall CreativeFramework::ContentDeliveryManagerSettings::DeleteSettingKey(
        LPCWSTR lpSubKey,
        const unsigned __int16 *a2)
{
  LSTATUS v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = RegDeleteKeyW(HKEY_CURRENT_USER, lpSubKey);
  v4 = v3;
  if ( v3 > 0 )
    v4 = (unsigned __int16)v3 | 0x80070000;
  if ( (int)(v4 + 0x80000000) < 0 || v4 == -2147024894 )
    return 0LL;
  wil::details::in1diag3::Return_HrMsg(
    retaddr,
    (void *)0x11D,
    (unsigned int)"onecoreuap\\internal\\shell\\inc\\ContentDeliveryManagerSettings.h",
    (const char *)v4,
    (int)"RegKey: %ws",
    (const char *)lpSubKey);
  return v4;
}
