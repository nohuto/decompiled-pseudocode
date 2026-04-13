/*
 * XREFs of ?DoesKeyExist@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBGPEA_N@Z @ 0x180031DE4
 * Callers:
 *     ?EnsureRegKeyExists@PhoneShellNamespaceHelper@ContentManagement@@AEAAJPEBG@Z @ 0x1800321B4 (-EnsureRegKeyExists@PhoneShellNamespaceHelper@ContentManagement@@AEAAJPEBG@Z.c)
 *     ?RegisterPhoneNamespace@PhoneShellNamespaceHelper@ContentManagement@@UEAAJPEAUHSTRING__@@00@Z @ 0x180040AE0 (-RegisterPhoneNamespace@PhoneShellNamespaceHelper@ContentManagement@@UEAAJPEAUHSTRING__@@00@Z.c)
 *     ?AddCreativeEventToEventStore@CreativeEventStore@CreativeFramework@@YAJPEBG0I0@Z @ 0x180059D74 (-AddCreativeEventToEventStore@CreativeEventStore@CreativeFramework@@YAJPEBG0I0@Z.c)
 * Callees:
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x180044594 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CreativeFramework::ContentDeliveryManagerSettings::DoesKeyExist(
        const WCHAR *this,
        unsigned __int16 *a2,
        bool *a3)
{
  LSTATUS v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  HKEY hKey; // [rsp+48h] [rbp+10h] BYREF

  *(_BYTE *)a2 = 0;
  hKey = 0LL;
  v5 = RegOpenKeyExW(HKEY_CURRENT_USER, this, 0, 0x20019u, &hKey);
  v6 = v5;
  if ( v5 > 0 )
    v6 = (unsigned __int16)v5 | 0x80070000;
  if ( (int)(v6 + 0x80000000) < 0 || v6 == -2147024894 )
  {
    *(_BYTE *)a2 = (v6 & 0x80000000) == 0;
    if ( hKey )
      RegCloseKey(hKey);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0xD8,
      (unsigned int)"onecoreuap\\internal\\shell\\inc\\ContentDeliveryManagerSettings.h",
      (const char *)v6,
      (int)"RegKey: %ws",
      (const char *)this);
    if ( hKey )
      RegCloseKey(hKey);
    return v6;
  }
}
