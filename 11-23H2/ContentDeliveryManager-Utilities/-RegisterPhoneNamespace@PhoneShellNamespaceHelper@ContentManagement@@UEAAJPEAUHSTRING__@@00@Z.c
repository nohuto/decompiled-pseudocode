/*
 * XREFs of ?RegisterPhoneNamespace@PhoneShellNamespaceHelper@ContentManagement@@UEAAJPEAUHSTRING__@@00@Z @ 0x18003BFD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002C184 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?CreatePhoneLink@PhoneShellNamespaceHelper@ContentManagement@@AEAAJPEBG0PEAPEAG@Z @ 0x180030980 (-CreatePhoneLink@PhoneShellNamespaceHelper@ContentManagement@@AEAAJPEBG0PEAPEAG@Z.c)
 *     ?EnsureRegKeyExists@PhoneShellNamespaceHelper@ContentManagement@@AEAAJPEBG@Z @ 0x1800315E0 (-EnsureRegKeyExists@PhoneShellNamespaceHelper@ContentManagement@@AEAAJPEBG@Z.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x1800379DC (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 *     ?NotifyShell@PhoneShellNamespaceHelper@ContentManagement@@AEAAJJPEBG@Z @ 0x180039564 (-NotifyShell@PhoneShellNamespaceHelper@ContentManagement@@AEAAJJPEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003F248 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32Msg@in1diag3@details@wil@@YAJPEAXIPEBDK1ZZ @ 0x18003F2D0 (-Return_Win32Msg@in1diag3@details@wil@@YAJPEAXIPEBDK1ZZ.c)
 *     ?SetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG00I@Z @ 0x18004064C (-SetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG00I@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180042C64 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180045458 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContentManagement::PhoneShellNamespaceHelper::RegisterPhoneNamespace(
        ContentManagement::PhoneShellNamespaceHelper *this,
        HSTRING a2,
        HSTRING a3,
        HSTRING a4)
{
  const unsigned __int16 *StringRawBuffer; // rbx
  const unsigned __int16 *v9; // rax
  ContentManagement::PhoneShellNamespaceHelper *v10; // rcx
  int v11; // eax
  unsigned int v12; // ebx
  PCWSTR v13; // rax
  int v14; // eax
  ContentManagement::PhoneShellNamespaceHelper *v15; // rcx
  bool *v16; // r8
  CreativeFramework::ContentDeliveryManagerSettings *v17; // rbx
  int v18; // eax
  int v19; // r14d
  wchar_t *v20; // r13
  int v21; // eax
  unsigned int v22; // eax
  int v23; // eax
  unsigned int v24; // eax
  int v25; // eax
  PCWSTR v26; // rax
  __int64 v27; // r12
  __int64 v28; // r9
  int v29; // eax
  unsigned int v30; // eax
  int v31; // eax
  int v32; // eax
  ContentManagement::PhoneShellNamespaceHelper *v33; // rcx
  bool *v34; // r8
  int v35; // eax
  int v36; // eax
  int v37; // eax
  ContentManagement::PhoneShellNamespaceHelper *v38; // rcx
  bool *v39; // r8
  CreativeFramework::ContentDeliveryManagerSettings *v40; // r14
  int v41; // eax
  int v42; // r15d
  int v43; // eax
  int v44; // eax
  int v45; // eax
  ContentManagement::PhoneShellNamespaceHelper *v46; // rcx
  bool *v47; // r8
  CreativeFramework::ContentDeliveryManagerSettings *v48; // r14
  int v49; // eax
  int v50; // eax
  ContentManagement::PhoneShellNamespaceHelper *v51; // rcx
  bool *v52; // r8
  CreativeFramework::ContentDeliveryManagerSettings *v53; // r15
  int v54; // eax
  unsigned int v55; // eax
  int v56; // eax
  int v57; // eax
  ContentManagement::PhoneShellNamespaceHelper *v58; // rcx
  bool *v59; // r8
  const WCHAR *v60; // rbx
  int v61; // eax
  unsigned int v62; // eax
  int v63; // eax
  unsigned int v64; // eax
  int v65; // eax
  PCWSTR v66; // rax
  int v67; // eax
  ContentManagement::PhoneShellNamespaceHelper *v68; // rcx
  bool *v69; // r8
  int v70; // eax
  int v71; // eax
  ContentManagement::PhoneShellNamespaceHelper *v72; // rcx
  bool *v73; // r8
  int v74; // eax
  const WCHAR *v75; // rbx
  unsigned int v76; // eax
  int v77; // eax
  const unsigned __int16 *v78; // rax
  ContentManagement::PhoneShellNamespaceHelper *v79; // rcx
  int v80; // eax
  unsigned int lpData; // [rsp+28h] [rbp-99h]
  int lpDataa; // [rsp+28h] [rbp-99h]
  int lpDatab; // [rsp+28h] [rbp-99h]
  unsigned int lpDatac; // [rsp+28h] [rbp-99h]
  int lpDatad; // [rsp+28h] [rbp-99h]
  unsigned int lpDatae; // [rsp+28h] [rbp-99h]
  unsigned int lpDataf; // [rsp+28h] [rbp-99h]
  unsigned int lpDatag; // [rsp+28h] [rbp-99h]
  unsigned int lpDatah; // [rsp+28h] [rbp-99h]
  unsigned int lpDatai; // [rsp+28h] [rbp-99h]
  int lpDataj; // [rsp+28h] [rbp-99h]
  int lpDatak; // [rsp+28h] [rbp-99h]
  int lpDatal; // [rsp+28h] [rbp-99h]
  unsigned int lpDatam; // [rsp+28h] [rbp-99h]
  int lpDatan; // [rsp+28h] [rbp-99h]
  int lpDatao; // [rsp+28h] [rbp-99h]
  LPCWSTR lpPathName; // [rsp+48h] [rbp-79h] BYREF
  LPCWSTR lpSubKey[3]; // [rsp+50h] [rbp-71h] BYREF
  CreativeFramework::ContentDeliveryManagerSettings *v100[3]; // [rsp+68h] [rbp-59h] BYREF
  CreativeFramework::ContentDeliveryManagerSettings *v101[3]; // [rsp+80h] [rbp-41h] BYREF
  CreativeFramework::ContentDeliveryManagerSettings *v102[3]; // [rsp+98h] [rbp-29h] BYREF
  LPCWSTR v103[3]; // [rsp+B0h] [rbp-11h] BYREF
  LPCWSTR v104[3]; // [rsp+C8h] [rbp+7h] BYREF
  CreativeFramework::ContentDeliveryManagerSettings *v105[3]; // [rsp+E0h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+120h] [rbp+5Fh]
  int Data; // [rsp+128h] [rbp+67h] BYREF

  lpPathName = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    &lpPathName,
    0LL);
  StringRawBuffer = WindowsGetStringRawBuffer(a4, 0LL);
  v9 = WindowsGetStringRawBuffer(a3, 0LL);
  v11 = ContentManagement::PhoneShellNamespaceHelper::CreatePhoneLink(v10, v9, StringRawBuffer, &lpPathName);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x37A,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v11,
      lpData);
    goto LABEL_80;
  }
  memset(lpSubKey, 0, sizeof(lpSubKey));
  v13 = WindowsGetStringRawBuffer(a2, 0LL);
  v14 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
          (__int64)lpSubKey,
          L"%ws\\%ws",
          L"Software\\Classes\\CLSID",
          v13);
  v12 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x384,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v14,
      lpData);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(lpSubKey);
    RemoveDirectoryW(lpPathName);
    (*(void (__fastcall **)(ContentManagement::PhoneShellNamespaceHelper *, HSTRING))(*(_QWORD *)this + 56LL))(this, a2);
    goto LABEL_80;
  }
  v17 = (CreativeFramework::ContentDeliveryManagerSettings *)lpSubKey[0];
  v18 = ContentManagement::PhoneShellNamespaceHelper::EnsureRegKeyExists(v15, lpSubKey[0], v16);
  v19 = v18;
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x385,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v18,
      lpData);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(lpSubKey);
    RemoveDirectoryW(lpPathName);
    (*(void (__fastcall **)(ContentManagement::PhoneShellNamespaceHelper *, HSTRING))(*(_QWORD *)this + 56LL))(this, a2);
LABEL_7:
    v12 = v19;
    goto LABEL_80;
  }
  v20 = word_180106C64;
  v21 = CreativeFramework::ContentDeliveryManagerSettings::SetStringSetting(
          v17,
          word_180106C64,
          L"Your Phone",
          (const unsigned __int16 *)0xA,
          lpData);
  v19 = v21;
  if ( v21 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x38D,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v21,
      lpDataa);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(lpSubKey);
    RemoveDirectoryW(lpPathName);
    (*(void (__fastcall **)(ContentManagement::PhoneShellNamespaceHelper *, HSTRING))(*(_QWORD *)this + 56LL))(this, a2);
    goto LABEL_7;
  }
  Data = 1;
  v22 = RegSetKeyValueW(HKEY_CURRENT_USER, (LPCWSTR)v17, L"System.IsPinnedToNameSpaceTree", 4u, &Data, 4u);
  if ( v22 )
  {
    v23 = wil::details::in1diag3::Return_Win32Msg(
            retaddr,
            (void *)0x64,
            (unsigned int)"onecoreuap\\internal\\shell\\inc\\ContentDeliveryManagerSettings.h",
            (const char *)v22,
            (unsigned int)"RegKey: %ws %ws",
            (const char *)v17);
    v19 = v23;
    if ( v23 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x38E,
        (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v23,
        lpDatab);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(lpSubKey);
      RemoveDirectoryW(lpPathName);
      (*(void (__fastcall **)(ContentManagement::PhoneShellNamespaceHelper *, HSTRING))(*(_QWORD *)this + 56LL))(
        this,
        a2);
      goto LABEL_7;
    }
  }
  Data = 3;
  v24 = RegSetKeyValueW(HKEY_CURRENT_USER, (LPCWSTR)v17, L"DescriptionID", 4u, &Data, 4u);
  if ( v24 )
  {
    v25 = wil::details::in1diag3::Return_Win32Msg(
            retaddr,
            (void *)0x64,
            (unsigned int)"onecoreuap\\internal\\shell\\inc\\ContentDeliveryManagerSettings.h",
            (const char *)v24,
            (unsigned int)"RegKey: %ws %ws",
            (const char *)v17);
    v19 = v25;
    if ( v25 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x38F,
        (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v25,
        lpDatac);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(lpSubKey);
      RemoveDirectoryW(lpPathName);
      (*(void (__fastcall **)(ContentManagement::PhoneShellNamespaceHelper *, HSTRING))(*(_QWORD *)this + 56LL))(
        this,
        a2);
      goto LABEL_7;
    }
  }
  v26 = WindowsGetStringRawBuffer(a3, 0LL);
  v27 = -1LL;
  v28 = -1LL;
  do
    ++v28;
  while ( v26[v28] );
  v29 = CreativeFramework::ContentDeliveryManagerSettings::SetStringSetting(
          v17,
          L"LocalizedString",
          v26,
          (const unsigned __int16 *)v28,
          lpDatac);
  v19 = v29;
  if ( v29 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x390,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v29,
      lpDatad);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(lpSubKey);
    RemoveDirectoryW(lpPathName);
    (*(void (__fastcall **)(ContentManagement::PhoneShellNamespaceHelper *, HSTRING))(*(_QWORD *)this + 56LL))(this, a2);
    goto LABEL_7;
  }
  Data = 64;
  v30 = RegSetKeyValueW(HKEY_CURRENT_USER, (LPCWSTR)v17, L"SortOrderIndex", 4u, &Data, 4u);
  if ( v30 )
  {
    v31 = wil::details::in1diag3::Return_Win32Msg(
            retaddr,
            (void *)0x64,
            (unsigned int)"onecoreuap\\internal\\shell\\inc\\ContentDeliveryManagerSettings.h",
            (const char *)v30,
            (unsigned int)"RegKey: %ws %ws",
            (const char *)v17);
    v19 = v31;
    if ( v31 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x391,
        (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v31,
        lpDatae);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(lpSubKey);
      RemoveDirectoryW(lpPathName);
      (*(void (__fastcall **)(ContentManagement::PhoneShellNamespaceHelper *, HSTRING))(*(_QWORD *)this + 56LL))(
        this,
        a2);
      goto LABEL_7;
    }
  }
  memset(v100, 0, sizeof(v100));
  v32 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
          (__int64)v100,
          L"%ws\\%ws",
          v17,
          L"DefaultIcon");
  v19 = v32;
  if ( v32 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x396,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v32,
      lpDatae);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v100);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(lpSubKey);
    RemoveDirectoryW(lpPathName);
    (*(void (__fastcall **)(ContentManagement::PhoneShellNamespaceHelper *, HSTRING))(*(_QWORD *)this + 56LL))(this, a2);
    goto LABEL_7;
  }
  v35 = ContentManagement::PhoneShellNamespaceHelper::EnsureRegKeyExists(v33, (const unsigned __int16 *)v100[0], v34);
  v19 = v35;
  if ( v35 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x397,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v35,
      lpDatae);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v100);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(lpSubKey);
    RemoveDirectoryW(lpPathName);
    (*(void (__fastcall **)(ContentManagement::PhoneShellNamespaceHelper *, HSTRING))(*(_QWORD *)this + 56LL))(this, a2);
    goto LABEL_7;
  }
  v36 = CreativeFramework::ContentDeliveryManagerSettings::SetStringSetting(
          v100[0],
          word_180106C64,
          L"%SystemRoot%\\system32\\ContentDeliveryManager.Utilities.dll,-10",
          (const unsigned __int16 *)0x3E,
          lpDatae);
  v19 = v36;
  if ( v36 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x398,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v36,
      lpDataf);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v100);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(lpSubKey);
    RemoveDirectoryW(lpPathName);
    (*(void (__fastcall **)(ContentManagement::PhoneShellNamespaceHelper *, HSTRING))(*(_QWORD *)this + 56LL))(this, a2);
    goto LABEL_7;
  }
  memset(v101, 0, sizeof(v101));
  v37 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
          (__int64)v101,
          L"%ws\\%ws",
          v17,
          L"InProcServer32");
  v19 = v37;
  if ( v37 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x39E,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v37,
      lpDataf);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v101);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v100);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(lpSubKey);
    RemoveDirectoryW(lpPathName);
    (*(void (__fastcall **)(ContentManagement::PhoneShellNamespaceHelper *, HSTRING))(*(_QWORD *)this + 56LL))(this, a2);
    goto LABEL_7;
  }
  v40 = v101[0];
  v41 = ContentManagement::PhoneShellNamespaceHelper::EnsureRegKeyExists(v38, (const unsigned __int16 *)v101[0], v39);
  v42 = v41;
  if ( v41 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x39F,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v41,
      lpDataf);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v101);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v100);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(lpSubKey);
    RemoveDirectoryW(lpPathName);
    (*(void (__fastcall **)(ContentManagement::PhoneShellNamespaceHelper *, HSTRING))(*(_QWORD *)this + 56LL))(this, a2);
LABEL_33:
    v12 = v42;
    goto LABEL_80;
  }
  v43 = CreativeFramework::ContentDeliveryManagerSettings::SetStringSetting(
          v40,
          word_180106C64,
          L"%SystemRoot%\\system32\\shell32.dll",
          (const unsigned __int16 *)0x21,
          lpDataf);
  v42 = v43;
  if ( v43 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A0,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v43,
      lpDatag);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v101);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v100);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(lpSubKey);
    RemoveDirectoryW(lpPathName);
    (*(void (__fastcall **)(ContentManagement::PhoneShellNamespaceHelper *, HSTRING))(*(_QWORD *)this + 56LL))(this, a2);
    goto LABEL_33;
  }
  v44 = CreativeFramework::ContentDeliveryManagerSettings::SetStringSetting(
          v40,
          L"ThreadingModel",
          L"Both",
          (const unsigned __int16 *)4,
          lpDatag);
  v19 = v44;
  if ( v44 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A1,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v44,
      lpDatah);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v101);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v100);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(lpSubKey);
    RemoveDirectoryW(lpPathName);
    (*(void (__fastcall **)(ContentManagement::PhoneShellNamespaceHelper *, HSTRING))(*(_QWORD *)this + 56LL))(this, a2);
    goto LABEL_7;
  }
  memset(v102, 0, sizeof(v102));
  v45 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
          (__int64)v102,
          L"%ws\\%ws",
          v17,
          L"Instance");
  v19 = v45;
  if ( v45 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A6,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v45,
      lpDatah);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v102);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v101);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v100);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(lpSubKey);
    RemoveDirectoryW(lpPathName);
    (*(void (__fastcall **)(ContentManagement::PhoneShellNamespaceHelper *, HSTRING))(*(_QWORD *)this + 56LL))(this, a2);
    goto LABEL_7;
  }
  v48 = v102[0];
  v49 = ContentManagement::PhoneShellNamespaceHelper::EnsureRegKeyExists(v46, (const unsigned __int16 *)v102[0], v47);
  v42 = v49;
  if ( v49 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A7,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v49,
      lpDatah);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v102);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v101);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v100);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(lpSubKey);
    RemoveDirectoryW(lpPathName);
    (*(void (__fastcall **)(ContentManagement::PhoneShellNamespaceHelper *, HSTRING))(*(_QWORD *)this + 56LL))(this, a2);
    goto LABEL_33;
  }
  v42 = CreativeFramework::ContentDeliveryManagerSettings::SetStringSetting(
          v48,
          L"CLSID",
          L"{0E5AAE11-A475-4c5b-AB00-C66DE400274E}",
          (const unsigned __int16 *)0x26,
          lpDatah);
  if ( v42 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A8,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v42,
      lpDatai);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v102);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v101);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v100);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(lpSubKey);
    RemoveDirectoryW(lpPathName);
    (*(void (__fastcall **)(ContentManagement::PhoneShellNamespaceHelper *, HSTRING))(*(_QWORD *)this + 56LL))(this, a2);
    goto LABEL_33;
  }
  memset(v103, 0, sizeof(v103));
  v50 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
          (__int64)v103,
          L"%ws\\%ws",
          v48,
          L"InitPropertyBag");
  v19 = v50;
  if ( v50 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3AE,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v50,
      lpDatai);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v103);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v102);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v101);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v100);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(lpSubKey);
    RemoveDirectoryW(lpPathName);
    (*(void (__fastcall **)(ContentManagement::PhoneShellNamespaceHelper *, HSTRING))(*(_QWORD *)this + 56LL))(this, a2);
    goto LABEL_7;
  }
  v53 = (CreativeFramework::ContentDeliveryManagerSettings *)v103[0];
  v19 = ContentManagement::PhoneShellNamespaceHelper::EnsureRegKeyExists(v51, v103[0], v52);
  if ( v19 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3AF,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v19,
      lpDatai);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v103);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v102);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v101);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v100);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(lpSubKey);
    RemoveDirectoryW(lpPathName);
    (*(void (__fastcall **)(ContentManagement::PhoneShellNamespaceHelper *, HSTRING))(*(_QWORD *)this + 56LL))(this, a2);
    goto LABEL_7;
  }
  do
    ++v27;
  while ( lpPathName[v27] );
  v54 = CreativeFramework::ContentDeliveryManagerSettings::SetStringSetting(
          v53,
          L"TargetFolderPath",
          lpPathName,
          (const unsigned __int16 *)v27,
          lpDatai);
  v19 = v54;
  if ( v54 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3B0,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v54,
      lpDataj);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v103);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v102);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v101);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v100);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(lpSubKey);
    RemoveDirectoryW(lpPathName);
    (*(void (__fastcall **)(ContentManagement::PhoneShellNamespaceHelper *, HSTRING))(*(_QWORD *)this + 56LL))(this, a2);
    goto LABEL_7;
  }
  Data = 17;
  v55 = RegSetKeyValueW(HKEY_CURRENT_USER, (LPCWSTR)v53, L"Attributes", 4u, &Data, 4u);
  if ( v55 )
  {
    v56 = wil::details::in1diag3::Return_Win32Msg(
            retaddr,
            (void *)0x64,
            (unsigned int)"onecoreuap\\internal\\shell\\inc\\ContentDeliveryManagerSettings.h",
            (const char *)v55,
            (unsigned int)"RegKey: %ws %ws",
            (const char *)v53);
    v19 = v56;
    if ( v56 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3B1,
        (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v56,
        lpDatak);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v103);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v102);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v101);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v100);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(lpSubKey);
      RemoveDirectoryW(lpPathName);
      (*(void (__fastcall **)(ContentManagement::PhoneShellNamespaceHelper *, HSTRING))(*(_QWORD *)this + 56LL))(
        this,
        a2);
      goto LABEL_7;
    }
  }
  memset(v104, 0, sizeof(v104));
  v57 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
          (__int64)v104,
          L"%ws\\%ws",
          v17,
          L"ShellFolder");
  v12 = v57;
  if ( v57 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3B7,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v57,
      lpDatak);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v104);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v103);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v102);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v101);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v100);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(lpSubKey);
    RemoveDirectoryW(lpPathName);
    (*(void (__fastcall **)(ContentManagement::PhoneShellNamespaceHelper *, HSTRING))(*(_QWORD *)this + 56LL))(this, a2);
    goto LABEL_80;
  }
  v60 = v104[0];
  v61 = ContentManagement::PhoneShellNamespaceHelper::EnsureRegKeyExists(v58, v104[0], v59);
  v19 = v61;
  if ( v61 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3B8,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v61,
      lpDatak);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v104);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v103);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v102);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v101);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v100);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(lpSubKey);
    RemoveDirectoryW(lpPathName);
    (*(void (__fastcall **)(ContentManagement::PhoneShellNamespaceHelper *, HSTRING))(*(_QWORD *)this + 56LL))(this, a2);
    goto LABEL_7;
  }
  Data = 805568517;
  v62 = RegSetKeyValueW(HKEY_CURRENT_USER, v60, L"Attributes", 4u, &Data, 4u);
  if ( v62 )
  {
    v63 = wil::details::in1diag3::Return_Win32Msg(
            retaddr,
            (void *)0x64,
            (unsigned int)"onecoreuap\\internal\\shell\\inc\\ContentDeliveryManagerSettings.h",
            (const char *)v62,
            (unsigned int)"RegKey: %ws %ws",
            (const char *)v60);
    v19 = v63;
    if ( v63 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3B9,
        (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v63,
        lpDatal);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v104);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v103);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v102);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v101);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v100);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(lpSubKey);
      RemoveDirectoryW(lpPathName);
      (*(void (__fastcall **)(ContentManagement::PhoneShellNamespaceHelper *, HSTRING))(*(_QWORD *)this + 56LL))(
        this,
        a2);
      goto LABEL_7;
    }
  }
  Data = 1064;
  v64 = RegSetKeyValueW(HKEY_CURRENT_USER, v60, L"FolderValueFlags", 4u, &Data, 4u);
  if ( v64
    && (v65 = wil::details::in1diag3::Return_Win32Msg(
                retaddr,
                (void *)0x64,
                (unsigned int)"onecoreuap\\internal\\shell\\inc\\ContentDeliveryManagerSettings.h",
                (const char *)v64,
                (unsigned int)"RegKey: %ws %ws",
                (const char *)v60),
        v12 = v65,
        v65 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3BA,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v65,
      lpDatam);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v104);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v103);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v102);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v101);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v100);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(lpSubKey);
    RemoveDirectoryW(lpPathName);
    (*(void (__fastcall **)(ContentManagement::PhoneShellNamespaceHelper *, HSTRING))(*(_QWORD *)this + 56LL))(this, a2);
  }
  else
  {
    memset(v105, 0, sizeof(v105));
    v66 = WindowsGetStringRawBuffer(a2, 0LL);
    v67 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
            (__int64)v105,
            L"%ws\\%ws",
            L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Desktop\\NameSpace",
            v66);
    v12 = v67;
    if ( v67 >= 0 )
    {
      v70 = ContentManagement::PhoneShellNamespaceHelper::EnsureRegKeyExists(
              v68,
              (const unsigned __int16 *)v105[0],
              v69);
      v12 = v70;
      if ( v70 >= 0 )
      {
        v71 = CreativeFramework::ContentDeliveryManagerSettings::SetStringSetting(
                v105[0],
                word_180106C64,
                L"Your Phone",
                (const unsigned __int16 *)0xA,
                lpDatam);
        v12 = v71;
        if ( v71 >= 0 )
        {
          v74 = ContentManagement::PhoneShellNamespaceHelper::EnsureRegKeyExists(
                  v72,
                  L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\HideDesktopIcons\\NewStartPanel",
                  v73);
          v12 = v74;
          if ( v74 >= 0 )
          {
            v75 = WindowsGetStringRawBuffer(a2, 0LL);
            Data = 1;
            v76 = RegSetKeyValueW(
                    HKEY_CURRENT_USER,
                    L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\HideDesktopIcons\\NewStartPanel",
                    v75,
                    4u,
                    &Data,
                    4u);
            if ( !v76 )
              goto LABEL_77;
            if ( v75 )
              v20 = (wchar_t *)v75;
            v77 = wil::details::in1diag3::Return_Win32Msg(
                    retaddr,
                    (void *)0x64,
                    (unsigned int)"onecoreuap\\internal\\shell\\inc\\ContentDeliveryManagerSettings.h",
                    (const char *)v76,
                    (unsigned int)"RegKey: %ws %ws",
                    (const char *)L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\HideDesktopIcons\\NewStartPanel",
                    v20);
            v12 = v77;
            if ( v77 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x3C4,
                (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
                (const char *)(unsigned int)v77,
                lpDatao);
              Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v105);
              Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v104);
              Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v103);
              Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v102);
              Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v101);
              Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v100);
              Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(lpSubKey);
              RemoveDirectoryW(lpPathName);
              (*(void (__fastcall **)(ContentManagement::PhoneShellNamespaceHelper *, HSTRING))(*(_QWORD *)this + 56LL))(
                this,
                a2);
            }
            else
            {
LABEL_77:
              v78 = WindowsGetStringRawBuffer(a2, 0LL);
              v80 = ContentManagement::PhoneShellNamespaceHelper::NotifyShell(v79, 8, v78);
              v12 = v80;
              if ( v80 >= 0 )
              {
                Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v105);
                Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v104);
                Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v103);
                Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v102);
                Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v101);
                Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v100);
                Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(lpSubKey);
                v12 = 0;
              }
              else
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x3CA,
                  (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
                  (const char *)(unsigned int)v80,
                  lpDatao);
                Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v105);
                Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v104);
                Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v103);
                Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v102);
                Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v101);
                Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v100);
                Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(lpSubKey);
              }
            }
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x3C3,
              (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
              (const char *)(unsigned int)v74,
              lpDatan);
            Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v105);
            Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v104);
            Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v103);
            Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v102);
            Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v101);
            Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v100);
            Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(lpSubKey);
            RemoveDirectoryW(lpPathName);
            (*(void (__fastcall **)(ContentManagement::PhoneShellNamespaceHelper *, HSTRING))(*(_QWORD *)this + 56LL))(
              this,
              a2);
          }
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x3C0,
            (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
            (const char *)(unsigned int)v71,
            lpDatan);
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v105);
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v104);
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v103);
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v102);
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v101);
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v100);
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(lpSubKey);
          RemoveDirectoryW(lpPathName);
          (*(void (__fastcall **)(ContentManagement::PhoneShellNamespaceHelper *, HSTRING))(*(_QWORD *)this + 56LL))(
            this,
            a2);
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3BF,
          (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
          (const char *)(unsigned int)v70,
          lpDatam);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v105);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v104);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v103);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v102);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v101);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v100);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(lpSubKey);
        RemoveDirectoryW(lpPathName);
        (*(void (__fastcall **)(ContentManagement::PhoneShellNamespaceHelper *, HSTRING))(*(_QWORD *)this + 56LL))(
          this,
          a2);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3BE,
        (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v67,
        lpDatam);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v105);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v104);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v103);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v102);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v101);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v100);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(lpSubKey);
      RemoveDirectoryW(lpPathName);
      (*(void (__fastcall **)(ContentManagement::PhoneShellNamespaceHelper *, HSTRING))(*(_QWORD *)this + 56LL))(
        this,
        a2);
    }
  }
LABEL_80:
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)&lpPathName);
  return v12;
}
