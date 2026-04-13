/*
 * XREFs of ?UnregisterPhoneNamespace@PhoneShellNamespaceHelper@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x180041C00
 * Callers:
 *     <none>
 * Callees:
 *     ?DeleteSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0@Z @ 0x180030F50 (-DeleteSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0@Z.c)
 *     ?DeleteSettingKey@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG@Z @ 0x180030FF0 (-DeleteSettingKey@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG@Z.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x1800379DC (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 *     ?NotifyShell@PhoneShellNamespaceHelper@ContentManagement@@AEAAJJPEBG@Z @ 0x180039564 (-NotifyShell@PhoneShellNamespaceHelper@ContentManagement@@AEAAJJPEBG@Z.c)
 *     ?RemovePhoneLink@PhoneShellNamespaceHelper@ContentManagement@@AEAAJPEBG@Z @ 0x18003E040 (-RemovePhoneLink@PhoneShellNamespaceHelper@ContentManagement@@AEAAJPEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003F248 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x18003F270 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180042C64 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 */

__int64 __fastcall ContentManagement::PhoneShellNamespaceHelper::UnregisterPhoneNamespace(
        ContentManagement::PhoneShellNamespaceHelper *this,
        HSTRING a2)
{
  const unsigned __int16 *StringRawBuffer; // rax
  ContentManagement::PhoneShellNamespaceHelper *v4; // rcx
  const unsigned __int16 *v5; // rax
  const WCHAR *v6; // rcx
  PCWSTR v7; // rax
  int v8; // eax
  unsigned int v9; // ebx
  const char *v10; // rbx
  LSTATUS v11; // eax
  unsigned __int64 v12; // r9
  PCWSTR v13; // rax
  int v14; // eax
  const unsigned __int16 *v15; // rdx
  const WCHAR *v16; // rax
  const unsigned __int16 *v17; // r8
  LPCWSTR v19[3]; // [rsp+30h] [rbp-30h] BYREF
  LPCWSTR lpSubKey[3]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
  ContentManagement::PhoneShellNamespaceHelper::NotifyShell(v4, 16, StringRawBuffer);
  v5 = WindowsGetStringRawBuffer(a2, 0LL);
  ContentManagement::PhoneShellNamespaceHelper::RemovePhoneLink(v6, v5);
  memset(lpSubKey, 0, sizeof(lpSubKey));
  v7 = WindowsGetStringRawBuffer(a2, 0LL);
  v8 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
         (__int64)lpSubKey,
         L"%ws\\%ws",
         L"Software\\Classes\\CLSID",
         v7);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v10 = (const char *)lpSubKey[0];
    v11 = RegDeleteTreeW(HKEY_CURRENT_USER, lpSubKey[0]);
    v12 = (unsigned int)v11;
    if ( v11 > 0 )
      v12 = (unsigned __int16)v11 | 0x80070000;
    if ( (int)(v12 + 0x80000000) >= 0 && (_DWORD)v12 != -2147024894 )
      wil::details::in1diag3::Return_HrMsg(
        retaddr,
        (void *)0x124,
        (__int64)"onecoreuap\\internal\\shell\\inc\\ContentDeliveryManagerSettings.h",
        (const char *)v12,
        (unsigned __int64)"RegKey: %ws",
        v10);
    memset(v19, 0, sizeof(v19));
    v13 = WindowsGetStringRawBuffer(a2, 0LL);
    v14 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
            (__int64)v19,
            L"%ws\\%ws",
            L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Desktop\\NameSpace",
            v13);
    v9 = v14;
    if ( v14 >= 0 )
    {
      CreativeFramework::ContentDeliveryManagerSettings::DeleteSettingKey(v19[0], v15);
      v16 = WindowsGetStringRawBuffer(a2, 0LL);
      CreativeFramework::ContentDeliveryManagerSettings::DeleteSetting(
        L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\HideDesktopIcons\\NewStartPanel",
        v16,
        v17);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v19);
      v9 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3DD,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v14);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v19);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3D8,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v8);
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(lpSubKey);
  return v9;
}
