/*
 * XREFs of ?UnregisterPhoneNamespace@PhoneShellNamespaceHelper@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x180046B10
 * Callers:
 *     <none>
 * Callees:
 *     ?DeleteSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0@Z @ 0x1800319B8 (-DeleteSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0@Z.c)
 *     ?GetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0_NPEAPEAG@Z @ 0x180038D20 (-GetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0_NPEAPEAG@Z.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEB_WZZ @ 0x180039F6C (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAA.c)
 *     ?NotifyShell@PhoneShellNamespaceHelper@ContentManagement@@AEAAJJPEBG@Z @ 0x18003B514 (-NotifyShell@PhoneShellNamespaceHelper@ContentManagement@@AEAAJJPEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x180044594 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ContentManagement::PhoneShellNamespaceHelper::UnregisterPhoneNamespace(
        ContentManagement::PhoneShellNamespaceHelper *this,
        HSTRING a2)
{
  const unsigned __int16 *StringRawBuffer; // rax
  ContentManagement::PhoneShellNamespaceHelper *v4; // rcx
  PCWSTR v5; // rax
  int v6; // eax
  WCHAR *v7; // rcx
  LPCWSTR v8; // rdi
  void *v9; // rbx
  PCWSTR v10; // rax
  int v11; // eax
  unsigned int v12; // ebx
  char *v14; // rbx
  LSTATUS v15; // eax
  unsigned __int64 v16; // r9
  PCWSTR v17; // rax
  int v18; // eax
  unsigned int v19; // edi
  char *v20; // rdi
  LSTATUS v21; // eax
  unsigned __int64 v22; // r9
  const WCHAR *v23; // rax
  const unsigned __int16 *v24; // r8
  LPCWSTR lpSubKey; // [rsp+30h] [rbp-20h] BYREF
  __int64 v26; // [rsp+38h] [rbp-18h]
  __int64 v27; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  LPVOID pv; // [rsp+70h] [rbp+20h] BYREF

  pv = this;
  StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
  ContentManagement::PhoneShellNamespaceHelper::NotifyShell(v4, 16, StringRawBuffer);
  v5 = WindowsGetStringRawBuffer(a2, 0LL);
  lpSubKey = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v6 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
         (__int64)&lpSubKey,
         L"%ws\\%ws\\%ws\\%ws",
         L"Software\\Classes\\CLSID",
         v5,
         L"Instance",
         L"InitPropertyBag");
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3D3,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v6);
    v7 = (WCHAR *)lpSubKey;
    if ( !lpSubKey )
      goto LABEL_12;
    goto LABEL_11;
  }
  pv = 0LL;
  v8 = lpSubKey;
  if ( (int)CreativeFramework::ContentDeliveryManagerSettings::GetStringSetting(lpSubKey, L"TargetFolderPath", 0LL, &pv) >= 0 )
  {
    v9 = pv;
    RemoveDirectoryW((LPCWSTR)pv);
    if ( v9 )
      CoTaskMemFree(v9);
  }
  else if ( pv )
  {
    CoTaskMemFree(pv);
  }
  if ( v8 )
  {
    v7 = (WCHAR *)v8;
LABEL_11:
    CoTaskMemFree(v7);
  }
LABEL_12:
  lpSubKey = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v10 = WindowsGetStringRawBuffer(a2, 0LL);
  v11 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
          (__int64)&lpSubKey,
          L"%ws\\%ws",
          L"Software\\Classes\\CLSID",
          v10);
  v12 = v11;
  if ( v11 >= 0 )
  {
    v14 = (char *)lpSubKey;
    v15 = RegDeleteTreeW(HKEY_CURRENT_USER, lpSubKey);
    v16 = (unsigned int)v15;
    if ( v15 > 0 )
      v16 = (unsigned __int16)v15 | 0x80070000;
    if ( (int)(v16 + 0x80000000) >= 0 && (_DWORD)v16 != -2147024894 )
      wil::details::in1diag3::Return_HrMsg(
        retaddr,
        (void *)0x122,
        (int)"onecoreuap\\internal\\shell\\inc\\ContentDeliveryManagerSettings.h",
        (const char *)v16,
        (int)"RegKey: %ws",
        v14);
    lpSubKey = 0LL;
    v26 = 0LL;
    v27 = 0LL;
    v17 = WindowsGetStringRawBuffer(a2, 0LL);
    v18 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
            (__int64)&lpSubKey,
            L"%ws\\%ws",
            L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Desktop\\NameSpace",
            v17);
    v19 = v18;
    if ( v18 >= 0 )
    {
      v20 = (char *)lpSubKey;
      v21 = RegDeleteKeyW(HKEY_CURRENT_USER, lpSubKey);
      v22 = (unsigned int)v21;
      if ( v21 > 0 )
        v22 = (unsigned __int16)v21 | 0x80070000;
      if ( (((_DWORD)v22 + 0x80000000) & 0x80000000) == 0 && (_DWORD)v22 != -2147024894 )
        wil::details::in1diag3::Return_HrMsg(
          retaddr,
          (void *)0x11B,
          (int)"onecoreuap\\internal\\shell\\inc\\ContentDeliveryManagerSettings.h",
          (const char *)v22,
          (int)"RegKey: %ws",
          v20);
      v23 = WindowsGetStringRawBuffer(a2, 0LL);
      CreativeFramework::ContentDeliveryManagerSettings::DeleteSetting(
        L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\HideDesktopIcons\\NewStartPanel",
        v23,
        v24);
      if ( v20 )
        CoTaskMemFree(v20);
      if ( v14 )
        CoTaskMemFree(v14);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x358,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v18);
      if ( lpSubKey )
        CoTaskMemFree((LPVOID)lpSubKey);
      if ( v14 )
        CoTaskMemFree(v14);
      return v19;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x353,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v11);
    if ( lpSubKey )
      CoTaskMemFree((LPVOID)lpSubKey);
    return v12;
  }
}
