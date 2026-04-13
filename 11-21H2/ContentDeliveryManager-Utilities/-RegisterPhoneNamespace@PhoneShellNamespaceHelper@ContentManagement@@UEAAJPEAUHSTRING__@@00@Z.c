/*
 * XREFs of ?RegisterPhoneNamespace@PhoneShellNamespaceHelper@ContentManagement@@UEAAJPEAUHSTRING__@@00@Z @ 0x180040AE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$lambda_call@V_lambda_12abaff33ac527a70ddc02944390cf89_@@@details@wil@@QEAA@XZ @ 0x180028ECC (--1-$lambda_call@V_lambda_12abaff33ac527a70ddc02944390cf89_@@@details@wil@@QEAA@XZ.c)
 *     ?CreateKey@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG@Z @ 0x180030F6C (-CreateKey@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG@Z.c)
 *     ?CreatePhoneLink@PhoneShellNamespaceHelper@ContentManagement@@AEAAJPEBG0PEAPEAG@Z @ 0x180031028 (-CreatePhoneLink@PhoneShellNamespaceHelper@ContentManagement@@AEAAJPEBG0PEAPEAG@Z.c)
 *     ?DoesKeyExist@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBGPEA_N@Z @ 0x180031DE4 (-DoesKeyExist@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBGPEA_N@Z.c)
 *     ?EnsureRegKeyExists@PhoneShellNamespaceHelper@ContentManagement@@AEAAJPEBG@Z @ 0x1800321B4 (-EnsureRegKeyExists@PhoneShellNamespaceHelper@ContentManagement@@AEAAJPEBG@Z.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEB_WZZ @ 0x180039F6C (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAA.c)
 *     ?NotifyShell@PhoneShellNamespaceHelper@ContentManagement@@AEAAJJPEBG@Z @ 0x18003B514 (-NotifyShell@PhoneShellNamespaceHelper@ContentManagement@@AEAAJJPEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetSettingValue@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0K@Z @ 0x18004586C (-SetSettingValue@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0K@Z.c)
 *     ?SetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG00I@Z @ 0x180045904 (-SetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG00I@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ContentManagement::PhoneShellNamespaceHelper::RegisterPhoneNamespace(
        ContentManagement::PhoneShellNamespaceHelper *this,
        HSTRING a2,
        HSTRING a3,
        HSTRING a4)
{
  const unsigned __int16 *StringRawBuffer; // rbx
  const unsigned __int16 *v7; // rax
  ContentManagement::PhoneShellNamespaceHelper *v8; // rcx
  int PhoneLink; // eax
  unsigned int v10; // ebx
  void *v11; // rcx
  char *v13; // r13
  PCWSTR v14; // rax
  int v15; // eax
  bool *v16; // r8
  CreativeFramework::ContentDeliveryManagerSettings *v17; // rbx
  int DoesKeyExist; // eax
  const unsigned __int16 *v19; // rdx
  unsigned int v20; // edi
  __int64 v21; // rdx
  void *v22; // rcx
  int v23; // eax
  unsigned int v24; // r9d
  int v25; // eax
  unsigned int v26; // r9d
  int v27; // eax
  PCWSTR v28; // rax
  __int64 v29; // r9
  int v30; // eax
  unsigned int v31; // r9d
  int v32; // eax
  int v33; // eax
  bool *v34; // r8
  CreativeFramework::ContentDeliveryManagerSettings *v35; // rdi
  int Key; // eax
  const unsigned __int16 *v37; // rdx
  unsigned int v38; // esi
  __int64 v39; // rdx
  void *v40; // rcx
  int v41; // eax
  int v42; // eax
  bool *v43; // r8
  CreativeFramework::ContentDeliveryManagerSettings *v44; // rsi
  int v45; // eax
  const unsigned __int16 *v46; // rdx
  unsigned int v47; // r14d
  __int64 v48; // rdx
  void *v49; // rcx
  int v50; // eax
  int v51; // eax
  int v52; // eax
  bool *v53; // r8
  CreativeFramework::ContentDeliveryManagerSettings *v54; // r14
  int v55; // eax
  const unsigned __int16 *v56; // rdx
  unsigned int v57; // r15d
  __int64 v58; // rdx
  void *v59; // rcx
  int v60; // eax
  int v61; // eax
  bool *v62; // r8
  CreativeFramework::ContentDeliveryManagerSettings *v63; // r15
  int v64; // eax
  const unsigned __int16 *v65; // rdx
  unsigned int v66; // r12d
  __int64 v67; // rdx
  void *v68; // rcx
  __int64 v69; // rax
  int v70; // eax
  unsigned int v71; // r9d
  int v72; // eax
  bool *v73; // r8
  CreativeFramework::ContentDeliveryManagerSettings *v74; // r12
  const unsigned __int16 *v75; // rdx
  unsigned int v76; // r9d
  unsigned int v77; // r13d
  __int64 v78; // rdx
  void *v79; // rcx
  int v80; // eax
  unsigned int v81; // r9d
  PCWSTR v82; // rax
  int v83; // eax
  bool *v84; // r8
  CreativeFramework::ContentDeliveryManagerSettings *v85; // r13
  int v86; // eax
  const unsigned __int16 *v87; // rdx
  __int64 v88; // rdx
  int v89; // eax
  ContentManagement::PhoneShellNamespaceHelper *v90; // rcx
  bool *v91; // r8
  void *v92; // rcx
  int v93; // eax
  const WCHAR *v94; // rax
  unsigned int v95; // r9d
  int v96; // eax
  const unsigned __int16 *v97; // rax
  ContentManagement::PhoneShellNamespaceHelper *v98; // rcx
  int v99; // eax
  unsigned int v100; // [rsp+20h] [rbp-50h] BYREF
  _DWORD lpData[3]; // [rsp+24h] [rbp-4Ch] BYREF
  CreativeFramework::ContentDeliveryManagerSettings *v102; // [rsp+30h] [rbp-40h] BYREF
  __int64 v103; // [rsp+38h] [rbp-38h]
  __int64 v104; // [rsp+40h] [rbp-30h]
  _QWORD v105[3]; // [rsp+48h] [rbp-28h] BYREF
  char v106; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  unsigned int v109; // [rsp+B0h] [rbp+40h]
  HSTRING string; // [rsp+B8h] [rbp+48h] BYREF

  string = a2;
  *(_QWORD *)&lpData[1] = 0LL;
  StringRawBuffer = WindowsGetStringRawBuffer(a4, 0LL);
  v7 = WindowsGetStringRawBuffer(a3, 0LL);
  PhoneLink = ContentManagement::PhoneShellNamespaceHelper::CreatePhoneLink(
                v8,
                v7,
                StringRawBuffer,
                (unsigned __int16 **)&lpData[1]);
  v10 = PhoneLink;
  if ( PhoneLink < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2F5,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)PhoneLink,
      v100);
    v11 = *(void **)&lpData[1];
    if ( !*(_QWORD *)&lpData[1] )
      return v10;
LABEL_3:
    CoTaskMemFree(v11);
    return v10;
  }
  v105[0] = &lpData[1];
  v13 = (char *)this - 48;
  v105[1] = (char *)this - 48;
  v105[2] = &string;
  v106 = 1;
  v102 = 0LL;
  v103 = 0LL;
  v104 = 0LL;
  v14 = WindowsGetStringRawBuffer(string, 0LL);
  v15 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
          (__int64)&v102,
          L"%ws\\%ws",
          L"Software\\Classes\\CLSID",
          v14);
  v10 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2FF,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v15,
      v100);
    if ( v102 )
      CoTaskMemFree(v102);
    RemoveDirectoryW(*(LPCWSTR *)&lpData[1]);
    (*(void (__fastcall **)(ContentManagement::PhoneShellNamespaceHelper *, HSTRING))(*(_QWORD *)this + 56LL))(
      this,
      string);
    v11 = *(void **)&lpData[1];
    if ( !*(_QWORD *)&lpData[1] )
      return v10;
    goto LABEL_3;
  }
  v17 = v102;
  DoesKeyExist = CreativeFramework::ContentDeliveryManagerSettings::DoesKeyExist(
                   (const WCHAR *)v102,
                   (unsigned __int16 *)&v100,
                   v16);
  v20 = DoesKeyExist;
  if ( DoesKeyExist < 0 )
  {
    v21 = 869LL;
    goto LABEL_15;
  }
  if ( !(_BYTE)v100 )
  {
    DoesKeyExist = CreativeFramework::ContentDeliveryManagerSettings::CreateKey((const WCHAR *)v17, v19);
    v20 = DoesKeyExist;
    if ( DoesKeyExist < 0 )
    {
      v21 = 872LL;
LABEL_15:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v21,
        (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)DoesKeyExist,
        v100);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x300,
        (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)v20,
        v100);
      if ( v17 )
        CoTaskMemFree(v17);
      RemoveDirectoryW(*(LPCWSTR *)&lpData[1]);
      (*(void (__fastcall **)(char *, HSTRING))(*((_QWORD *)v13 + 6) + 56LL))(v13 + 48, string);
      v22 = *(void **)&lpData[1];
      if ( !*(_QWORD *)&lpData[1] )
        return v20;
      goto LABEL_18;
    }
  }
  v23 = CreativeFramework::ContentDeliveryManagerSettings::SetStringSetting(
          v17,
          &Src,
          L"Your Phone",
          (const unsigned __int16 *)0xA,
          v100);
  v20 = v23;
  if ( v23 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x308,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v23,
      v100);
    if ( v17 )
      CoTaskMemFree(v17);
    RemoveDirectoryW(*(LPCWSTR *)&lpData[1]);
    (*(void (__fastcall **)(char *, HSTRING))(*((_QWORD *)v13 + 6) + 56LL))(v13 + 48, string);
    v22 = *(void **)&lpData[1];
    if ( !*(_QWORD *)&lpData[1] )
      return v20;
    goto LABEL_18;
  }
  v25 = CreativeFramework::ContentDeliveryManagerSettings::SetSettingValue(
          v17,
          L"System.IsPinnedToNameSpaceTree",
          (const unsigned __int16 *)1,
          v24);
  v20 = v25;
  if ( v25 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x309,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v25,
      v100);
    if ( v17 )
      CoTaskMemFree(v17);
    RemoveDirectoryW(*(LPCWSTR *)&lpData[1]);
    (*(void (__fastcall **)(char *, HSTRING))(*((_QWORD *)v13 + 6) + 56LL))(v13 + 48, string);
    v22 = *(void **)&lpData[1];
    if ( !*(_QWORD *)&lpData[1] )
      return v20;
    goto LABEL_18;
  }
  v27 = CreativeFramework::ContentDeliveryManagerSettings::SetSettingValue(
          v17,
          L"DescriptionID",
          (const unsigned __int16 *)3,
          v26);
  v20 = v27;
  if ( v27 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x30A,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v27,
      v100);
    if ( v17 )
      CoTaskMemFree(v17);
    RemoveDirectoryW(*(LPCWSTR *)&lpData[1]);
    (*(void (__fastcall **)(char *, HSTRING))(*((_QWORD *)v13 + 6) + 56LL))(v13 + 48, string);
    v22 = *(void **)&lpData[1];
    if ( !*(_QWORD *)&lpData[1] )
      return v20;
    goto LABEL_18;
  }
  v28 = WindowsGetStringRawBuffer(a3, 0LL);
  v29 = -1LL;
  do
    ++v29;
  while ( v28[v29] );
  v30 = CreativeFramework::ContentDeliveryManagerSettings::SetStringSetting(
          v17,
          L"LocalizedString",
          v28,
          (const unsigned __int16 *)v29,
          v100);
  v20 = v30;
  if ( v30 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x30B,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v30,
      v100);
    if ( v17 )
      CoTaskMemFree(v17);
    RemoveDirectoryW(*(LPCWSTR *)&lpData[1]);
    (*(void (__fastcall **)(char *, HSTRING))(*((_QWORD *)v13 + 6) + 56LL))(v13 + 48, string);
    v22 = *(void **)&lpData[1];
    if ( !*(_QWORD *)&lpData[1] )
      return v20;
    goto LABEL_18;
  }
  v32 = CreativeFramework::ContentDeliveryManagerSettings::SetSettingValue(
          v17,
          L"SortOrderIndex",
          (const unsigned __int16 *)0x40,
          v31);
  v20 = v32;
  if ( v32 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x30C,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v32,
      v100);
    if ( v17 )
      CoTaskMemFree(v17);
    RemoveDirectoryW(*(LPCWSTR *)&lpData[1]);
    (*(void (__fastcall **)(char *, HSTRING))(*((_QWORD *)v13 + 6) + 56LL))(v13 + 48, string);
    v22 = *(void **)&lpData[1];
    if ( !*(_QWORD *)&lpData[1] )
      return v20;
    goto LABEL_18;
  }
  v102 = 0LL;
  v103 = 0LL;
  v104 = 0LL;
  v33 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
          (__int64)&v102,
          L"%ws\\%ws",
          v17,
          L"DefaultIcon");
  v20 = v33;
  if ( v33 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x311,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v33,
      v100);
    if ( v102 )
      CoTaskMemFree(v102);
    if ( v17 )
      CoTaskMemFree(v17);
    RemoveDirectoryW(*(LPCWSTR *)&lpData[1]);
    (*(void (__fastcall **)(char *, HSTRING))(*((_QWORD *)v13 + 6) + 56LL))(v13 + 48, string);
    v22 = *(void **)&lpData[1];
    if ( !*(_QWORD *)&lpData[1] )
      return v20;
LABEL_18:
    CoTaskMemFree(v22);
    return v20;
  }
  v35 = v102;
  Key = CreativeFramework::ContentDeliveryManagerSettings::DoesKeyExist(
          (const WCHAR *)v102,
          (unsigned __int16 *)&v100,
          v34);
  v38 = Key;
  if ( Key < 0 )
  {
    v39 = 869LL;
    goto LABEL_59;
  }
  if ( !(_BYTE)v100 )
  {
    Key = CreativeFramework::ContentDeliveryManagerSettings::CreateKey((const WCHAR *)v35, v37);
    v38 = Key;
    if ( Key < 0 )
    {
      v39 = 872LL;
LABEL_59:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v39,
        (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)Key,
        v100);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x312,
        (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)v38,
        v100);
      if ( v35 )
        CoTaskMemFree(v35);
      if ( v17 )
        CoTaskMemFree(v17);
      RemoveDirectoryW(*(LPCWSTR *)&lpData[1]);
      (*(void (__fastcall **)(char *, HSTRING))(*((_QWORD *)v13 + 6) + 56LL))(v13 + 48, string);
      v40 = *(void **)&lpData[1];
      if ( !*(_QWORD *)&lpData[1] )
        return v38;
      goto LABEL_64;
    }
  }
  v41 = CreativeFramework::ContentDeliveryManagerSettings::SetStringSetting(
          v35,
          &Src,
          L"%SystemRoot%\\system32\\ContentDeliveryManager.Utilities.dll,-10",
          (const unsigned __int16 *)0x3E,
          v100);
  v38 = v41;
  if ( v41 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x313,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v41,
      v100);
    if ( v35 )
      CoTaskMemFree(v35);
    if ( v17 )
      CoTaskMemFree(v17);
    RemoveDirectoryW(*(LPCWSTR *)&lpData[1]);
    (*(void (__fastcall **)(char *, HSTRING))(*((_QWORD *)v13 + 6) + 56LL))(v13 + 48, string);
    v40 = *(void **)&lpData[1];
    if ( !*(_QWORD *)&lpData[1] )
      return v38;
    goto LABEL_64;
  }
  v102 = 0LL;
  v103 = 0LL;
  v104 = 0LL;
  v42 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
          (__int64)&v102,
          L"%ws\\%ws",
          v17,
          L"InProcServer32");
  v38 = v42;
  if ( v42 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x319,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v42,
      v100);
    if ( v102 )
      CoTaskMemFree(v102);
    if ( v35 )
      CoTaskMemFree(v35);
    if ( v17 )
      CoTaskMemFree(v17);
    RemoveDirectoryW(*(LPCWSTR *)&lpData[1]);
    (*(void (__fastcall **)(char *, HSTRING))(*((_QWORD *)v13 + 6) + 56LL))(v13 + 48, string);
    v40 = *(void **)&lpData[1];
    if ( !*(_QWORD *)&lpData[1] )
      return v38;
LABEL_64:
    CoTaskMemFree(v40);
    return v38;
  }
  v44 = v102;
  v45 = CreativeFramework::ContentDeliveryManagerSettings::DoesKeyExist(
          (const WCHAR *)v102,
          (unsigned __int16 *)&v100,
          v43);
  v47 = v45;
  if ( v45 < 0 )
  {
    v48 = 869LL;
    goto LABEL_87;
  }
  if ( !(_BYTE)v100 )
  {
    v45 = CreativeFramework::ContentDeliveryManagerSettings::CreateKey((const WCHAR *)v44, v46);
    v47 = v45;
    if ( v45 < 0 )
    {
      v48 = 872LL;
LABEL_87:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v48,
        (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v45,
        v100);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x31A,
        (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)v47,
        v100);
      if ( v44 )
        CoTaskMemFree(v44);
      if ( v35 )
        CoTaskMemFree(v35);
      if ( v17 )
        CoTaskMemFree(v17);
      RemoveDirectoryW(*(LPCWSTR *)&lpData[1]);
      (*(void (__fastcall **)(char *, HSTRING))(*((_QWORD *)v13 + 6) + 56LL))(v13 + 48, string);
      v49 = *(void **)&lpData[1];
      if ( !*(_QWORD *)&lpData[1] )
        return v47;
      goto LABEL_94;
    }
  }
  v50 = CreativeFramework::ContentDeliveryManagerSettings::SetStringSetting(
          v44,
          &Src,
          L"%SystemRoot%\\system32\\shell32.dll",
          (const unsigned __int16 *)0x21,
          v100);
  v47 = v50;
  if ( v50 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x31B,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v50,
      v100);
    if ( v44 )
      CoTaskMemFree(v44);
    if ( v35 )
      CoTaskMemFree(v35);
    if ( v17 )
      CoTaskMemFree(v17);
    RemoveDirectoryW(*(LPCWSTR *)&lpData[1]);
    (*(void (__fastcall **)(char *, HSTRING))(*((_QWORD *)v13 + 6) + 56LL))(v13 + 48, string);
    v49 = *(void **)&lpData[1];
    if ( !*(_QWORD *)&lpData[1] )
      return v47;
    goto LABEL_94;
  }
  v51 = CreativeFramework::ContentDeliveryManagerSettings::SetStringSetting(
          v44,
          L"ThreadingModel",
          L"Both",
          (const unsigned __int16 *)4,
          v100);
  v47 = v51;
  if ( v51 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x31C,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v51,
      v100);
    if ( v44 )
      CoTaskMemFree(v44);
    if ( v35 )
      CoTaskMemFree(v35);
    if ( v17 )
      CoTaskMemFree(v17);
    RemoveDirectoryW(*(LPCWSTR *)&lpData[1]);
    (*(void (__fastcall **)(char *, HSTRING))(*((_QWORD *)v13 + 6) + 56LL))(v13 + 48, string);
    v49 = *(void **)&lpData[1];
    if ( !*(_QWORD *)&lpData[1] )
      return v47;
    goto LABEL_94;
  }
  v102 = 0LL;
  v103 = 0LL;
  v104 = 0LL;
  v52 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
          (__int64)&v102,
          L"%ws\\%ws",
          v17,
          L"Instance");
  v47 = v52;
  if ( v52 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x321,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v52,
      v100);
    if ( v102 )
      CoTaskMemFree(v102);
    if ( v44 )
      CoTaskMemFree(v44);
    if ( v35 )
      CoTaskMemFree(v35);
    if ( v17 )
      CoTaskMemFree(v17);
    RemoveDirectoryW(*(LPCWSTR *)&lpData[1]);
    (*(void (__fastcall **)(char *, HSTRING))(*((_QWORD *)v13 + 6) + 56LL))(v13 + 48, string);
    v49 = *(void **)&lpData[1];
    if ( !*(_QWORD *)&lpData[1] )
      return v47;
LABEL_94:
    CoTaskMemFree(v49);
    return v47;
  }
  v54 = v102;
  v55 = CreativeFramework::ContentDeliveryManagerSettings::DoesKeyExist(
          (const WCHAR *)v102,
          (unsigned __int16 *)&v100,
          v53);
  v57 = v55;
  if ( v55 < 0 )
  {
    v58 = 869LL;
    goto LABEL_130;
  }
  if ( !(_BYTE)v100 )
  {
    v55 = CreativeFramework::ContentDeliveryManagerSettings::CreateKey((const WCHAR *)v54, v56);
    v57 = v55;
    if ( v55 < 0 )
    {
      v58 = 872LL;
LABEL_130:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v58,
        (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v55,
        v100);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x322,
        (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)v57,
        v100);
      if ( v54 )
        CoTaskMemFree(v54);
      if ( v44 )
        CoTaskMemFree(v44);
      if ( v35 )
        CoTaskMemFree(v35);
      if ( v17 )
        CoTaskMemFree(v17);
      RemoveDirectoryW(*(LPCWSTR *)&lpData[1]);
      (*(void (__fastcall **)(char *, HSTRING))(*((_QWORD *)v13 + 6) + 56LL))(v13 + 48, string);
      v59 = *(void **)&lpData[1];
      if ( !*(_QWORD *)&lpData[1] )
        return v57;
      goto LABEL_139;
    }
  }
  v60 = CreativeFramework::ContentDeliveryManagerSettings::SetStringSetting(
          v54,
          L"CLSID",
          L"{0E5AAE11-A475-4c5b-AB00-C66DE400274E}",
          (const unsigned __int16 *)0x26,
          v100);
  v57 = v60;
  if ( v60 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x323,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v60,
      v100);
    if ( v54 )
      CoTaskMemFree(v54);
    if ( v44 )
      CoTaskMemFree(v44);
    if ( v35 )
      CoTaskMemFree(v35);
    if ( v17 )
      CoTaskMemFree(v17);
    RemoveDirectoryW(*(LPCWSTR *)&lpData[1]);
    (*(void (__fastcall **)(char *, HSTRING))(*((_QWORD *)v13 + 6) + 56LL))(v13 + 48, string);
    v59 = *(void **)&lpData[1];
    if ( !*(_QWORD *)&lpData[1] )
      return v57;
    goto LABEL_139;
  }
  v102 = 0LL;
  v103 = 0LL;
  v104 = 0LL;
  v61 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
          (__int64)&v102,
          L"%ws\\%ws",
          v54,
          L"InitPropertyBag");
  v57 = v61;
  if ( v61 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x329,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v61,
      v100);
    if ( v102 )
      CoTaskMemFree(v102);
    if ( v54 )
      CoTaskMemFree(v54);
    if ( v44 )
      CoTaskMemFree(v44);
    if ( v35 )
      CoTaskMemFree(v35);
    if ( v17 )
      CoTaskMemFree(v17);
    RemoveDirectoryW(*(LPCWSTR *)&lpData[1]);
    (*(void (__fastcall **)(char *, HSTRING))(*((_QWORD *)v13 + 6) + 56LL))(v13 + 48, string);
    v59 = *(void **)&lpData[1];
    if ( !*(_QWORD *)&lpData[1] )
      return v57;
LABEL_139:
    CoTaskMemFree(v59);
    return v57;
  }
  v63 = v102;
  v64 = CreativeFramework::ContentDeliveryManagerSettings::DoesKeyExist(
          (const WCHAR *)v102,
          (unsigned __int16 *)&v100,
          v62);
  v66 = v64;
  if ( v64 < 0 )
  {
    v67 = 869LL;
    goto LABEL_170;
  }
  if ( !(_BYTE)v100 )
  {
    v64 = CreativeFramework::ContentDeliveryManagerSettings::CreateKey((const WCHAR *)v63, v65);
    v66 = v64;
    if ( v64 < 0 )
    {
      v67 = 872LL;
LABEL_170:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v67,
        (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v64,
        v100);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x32A,
        (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)v66,
        v100);
      if ( v63 )
        CoTaskMemFree(v63);
      if ( v54 )
        CoTaskMemFree(v54);
      if ( v44 )
        CoTaskMemFree(v44);
      if ( v35 )
        CoTaskMemFree(v35);
      if ( v17 )
        CoTaskMemFree(v17);
      RemoveDirectoryW(*(LPCWSTR *)&lpData[1]);
      (*(void (__fastcall **)(char *, HSTRING))(*((_QWORD *)v13 + 6) + 56LL))(v13 + 48, string);
      v68 = *(void **)&lpData[1];
      if ( !*(_QWORD *)&lpData[1] )
        return v66;
      goto LABEL_181;
    }
  }
  v69 = -1LL;
  do
    ++v69;
  while ( *(_WORD *)(*(_QWORD *)&lpData[1] + 2 * v69) );
  v70 = CreativeFramework::ContentDeliveryManagerSettings::SetStringSetting(
          v63,
          L"TargetFolderPath",
          *(LPCVOID *)&lpData[1],
          (const unsigned __int16 *)v69,
          v100);
  v66 = v70;
  if ( v70 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x32B,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v70,
      v100);
    if ( v63 )
      CoTaskMemFree(v63);
    if ( v54 )
      CoTaskMemFree(v54);
    if ( v44 )
      CoTaskMemFree(v44);
    if ( v35 )
      CoTaskMemFree(v35);
    if ( v17 )
      CoTaskMemFree(v17);
    RemoveDirectoryW(*(LPCWSTR *)&lpData[1]);
    (*(void (__fastcall **)(char *, HSTRING))(*((_QWORD *)v13 + 6) + 56LL))(v13 + 48, string);
    v68 = *(void **)&lpData[1];
    if ( !*(_QWORD *)&lpData[1] )
      return v66;
    goto LABEL_181;
  }
  v66 = CreativeFramework::ContentDeliveryManagerSettings::SetSettingValue(
          v63,
          L"Attributes",
          (const unsigned __int16 *)0x11,
          v71);
  if ( (v66 & 0x80000000) != 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x32C,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)v66,
      v100);
    if ( v63 )
      CoTaskMemFree(v63);
    if ( v54 )
      CoTaskMemFree(v54);
    if ( v44 )
      CoTaskMemFree(v44);
    if ( v35 )
      CoTaskMemFree(v35);
    if ( v17 )
      CoTaskMemFree(v17);
    RemoveDirectoryW(*(LPCWSTR *)&lpData[1]);
    (*(void (__fastcall **)(char *, HSTRING))(*((_QWORD *)v13 + 6) + 56LL))(v13 + 48, string);
    v68 = *(void **)&lpData[1];
    if ( !*(_QWORD *)&lpData[1] )
      return v66;
    goto LABEL_181;
  }
  v102 = 0LL;
  v103 = 0LL;
  v104 = 0LL;
  v72 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
          (__int64)&v102,
          L"%ws\\%ws",
          v17,
          L"ShellFolder");
  v66 = v72;
  if ( v72 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x332,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v72,
      v100);
    if ( v102 )
      CoTaskMemFree(v102);
    if ( v63 )
      CoTaskMemFree(v63);
    if ( v54 )
      CoTaskMemFree(v54);
    if ( v44 )
      CoTaskMemFree(v44);
    if ( v35 )
      CoTaskMemFree(v35);
    if ( v17 )
      CoTaskMemFree(v17);
    RemoveDirectoryW(*(LPCWSTR *)&lpData[1]);
    (*(void (__fastcall **)(char *, HSTRING))(*((_QWORD *)v13 + 6) + 56LL))(v13 + 48, string);
    v68 = *(void **)&lpData[1];
    if ( !*(_QWORD *)&lpData[1] )
      return v66;
LABEL_181:
    CoTaskMemFree(v68);
    return v66;
  }
  v74 = v102;
  v77 = CreativeFramework::ContentDeliveryManagerSettings::DoesKeyExist(
          (const WCHAR *)v102,
          (unsigned __int16 *)&v100,
          v73);
  if ( (v77 & 0x80000000) != 0 )
  {
    v78 = 869LL;
    goto LABEL_231;
  }
  if ( !(_BYTE)v100 )
  {
    v77 = CreativeFramework::ContentDeliveryManagerSettings::CreateKey((const WCHAR *)v74, v75);
    if ( (v77 & 0x80000000) != 0 )
    {
      v78 = 872LL;
LABEL_231:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v78,
        (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)v77,
        v100);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x333,
        (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)v77,
        v100);
      if ( v74 )
        CoTaskMemFree(v74);
      if ( v63 )
        CoTaskMemFree(v63);
      if ( v54 )
        CoTaskMemFree(v54);
      if ( v44 )
        CoTaskMemFree(v44);
      if ( v35 )
        CoTaskMemFree(v35);
      if ( v17 )
        CoTaskMemFree(v17);
      RemoveDirectoryW(*(LPCWSTR *)&lpData[1]);
      (*(void (__fastcall **)(ContentManagement::PhoneShellNamespaceHelper *, HSTRING))(*(_QWORD *)this + 56LL))(
        this,
        string);
      v79 = *(void **)&lpData[1];
      if ( !*(_QWORD *)&lpData[1] )
        return v77;
      goto LABEL_244;
    }
  }
  v80 = CreativeFramework::ContentDeliveryManagerSettings::SetSettingValue(
          v74,
          L"Attributes",
          (const unsigned __int16 *)0x30040005,
          v76);
  v77 = v80;
  if ( v80 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x334,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v80,
      v100);
    if ( v74 )
      CoTaskMemFree(v74);
    if ( v63 )
      CoTaskMemFree(v63);
    if ( v54 )
      CoTaskMemFree(v54);
    if ( v44 )
      CoTaskMemFree(v44);
    if ( v35 )
      CoTaskMemFree(v35);
    if ( v17 )
      CoTaskMemFree(v17);
    RemoveDirectoryW(*(LPCWSTR *)&lpData[1]);
    (*(void (__fastcall **)(ContentManagement::PhoneShellNamespaceHelper *, HSTRING))(*(_QWORD *)this + 56LL))(
      this,
      string);
    v79 = *(void **)&lpData[1];
    if ( !*(_QWORD *)&lpData[1] )
      return v77;
    goto LABEL_244;
  }
  v77 = CreativeFramework::ContentDeliveryManagerSettings::SetSettingValue(
          v74,
          L"FolderValueFlags",
          (const unsigned __int16 *)0x428,
          v81);
  if ( (v77 & 0x80000000) != 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x335,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)v77,
      v100);
    if ( v74 )
      CoTaskMemFree(v74);
    if ( v63 )
      CoTaskMemFree(v63);
    if ( v54 )
      CoTaskMemFree(v54);
    if ( v44 )
      CoTaskMemFree(v44);
    if ( v35 )
      CoTaskMemFree(v35);
    if ( v17 )
      CoTaskMemFree(v17);
    RemoveDirectoryW(*(LPCWSTR *)&lpData[1]);
    (*(void (__fastcall **)(ContentManagement::PhoneShellNamespaceHelper *, HSTRING))(*(_QWORD *)this + 56LL))(
      this,
      string);
    v79 = *(void **)&lpData[1];
    if ( !*(_QWORD *)&lpData[1] )
      return v77;
    goto LABEL_244;
  }
  v102 = 0LL;
  v103 = 0LL;
  v104 = 0LL;
  v82 = WindowsGetStringRawBuffer(string, 0LL);
  v83 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
          (__int64)&v102,
          L"%ws\\%ws",
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Desktop\\NameSpace",
          v82);
  v77 = v83;
  if ( v83 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x339,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v83,
      v100);
    if ( v102 )
      CoTaskMemFree(v102);
    if ( v74 )
      CoTaskMemFree(v74);
    if ( v63 )
      CoTaskMemFree(v63);
    if ( v54 )
      CoTaskMemFree(v54);
    if ( v44 )
      CoTaskMemFree(v44);
    if ( v35 )
      CoTaskMemFree(v35);
    if ( v17 )
      CoTaskMemFree(v17);
    RemoveDirectoryW(*(LPCWSTR *)&lpData[1]);
    (*(void (__fastcall **)(ContentManagement::PhoneShellNamespaceHelper *, HSTRING))(*(_QWORD *)this + 56LL))(
      this,
      string);
    v79 = *(void **)&lpData[1];
    if ( !*(_QWORD *)&lpData[1] )
      return v77;
LABEL_244:
    CoTaskMemFree(v79);
    return v77;
  }
  v85 = v102;
  v86 = CreativeFramework::ContentDeliveryManagerSettings::DoesKeyExist(
          (const WCHAR *)v102,
          (unsigned __int16 *)&v100,
          v84);
  lpData[0] = v86;
  if ( v86 < 0 )
  {
    v88 = 869LL;
LABEL_298:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v88,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v86,
      v100);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x33A,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)lpData[0],
      v100);
    if ( v85 )
      CoTaskMemFree(v85);
    if ( v74 )
      CoTaskMemFree(v74);
    if ( v63 )
      CoTaskMemFree(v63);
    if ( v54 )
      CoTaskMemFree(v54);
    if ( v44 )
      CoTaskMemFree(v44);
    if ( v35 )
      CoTaskMemFree(v35);
    if ( v17 )
      CoTaskMemFree(v17);
    RemoveDirectoryW(*(LPCWSTR *)&lpData[1]);
    (*(void (__fastcall **)(ContentManagement::PhoneShellNamespaceHelper *, HSTRING))(*(_QWORD *)this + 56LL))(
      this,
      string);
    if ( *(_QWORD *)&lpData[1] )
      CoTaskMemFree(*(LPVOID *)&lpData[1]);
    return lpData[0];
  }
  if ( !(_BYTE)v100 )
  {
    v86 = CreativeFramework::ContentDeliveryManagerSettings::CreateKey((const WCHAR *)v85, v87);
    lpData[0] = v86;
    if ( v86 < 0 )
    {
      v88 = 872LL;
      goto LABEL_298;
    }
  }
  v89 = CreativeFramework::ContentDeliveryManagerSettings::SetStringSetting(
          v85,
          &Src,
          L"Your Phone",
          (const unsigned __int16 *)0xA,
          v100);
  v109 = v89;
  if ( v89 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x33B,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v89,
      v100);
    if ( v85 )
      CoTaskMemFree(v85);
    if ( v74 )
      CoTaskMemFree(v74);
    if ( v63 )
      CoTaskMemFree(v63);
    if ( v54 )
      CoTaskMemFree(v54);
    if ( v44 )
      CoTaskMemFree(v44);
    if ( v35 )
      CoTaskMemFree(v35);
    if ( v17 )
      CoTaskMemFree(v17);
    wil::details::lambda_call<_lambda_12abaff33ac527a70ddc02944390cf89_>::~lambda_call<_lambda_12abaff33ac527a70ddc02944390cf89_>((__int64)v105);
    v92 = *(void **)&lpData[1];
    if ( !*(_QWORD *)&lpData[1] )
      return v109;
    goto LABEL_331;
  }
  v93 = ContentManagement::PhoneShellNamespaceHelper::EnsureRegKeyExists(
          v90,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\HideDesktopIcons\\NewStartPanel",
          v91);
  v109 = v93;
  if ( v93 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x33E,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v93,
      v100);
    if ( v85 )
      CoTaskMemFree(v85);
    if ( v74 )
      CoTaskMemFree(v74);
    if ( v63 )
      CoTaskMemFree(v63);
    if ( v54 )
      CoTaskMemFree(v54);
    if ( v44 )
      CoTaskMemFree(v44);
    if ( v35 )
      CoTaskMemFree(v35);
    if ( v17 )
      CoTaskMemFree(v17);
    wil::details::lambda_call<_lambda_12abaff33ac527a70ddc02944390cf89_>::~lambda_call<_lambda_12abaff33ac527a70ddc02944390cf89_>((__int64)v105);
    v92 = *(void **)&lpData[1];
    if ( !*(_QWORD *)&lpData[1] )
      return v109;
    goto LABEL_331;
  }
  v94 = WindowsGetStringRawBuffer(string, 0LL);
  v96 = CreativeFramework::ContentDeliveryManagerSettings::SetSettingValue(
          (CreativeFramework::ContentDeliveryManagerSettings *)L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\H"
                                                                "ideDesktopIcons\\NewStartPanel",
          v94,
          (const unsigned __int16 *)1,
          v95);
  v109 = v96;
  if ( v96 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x33F,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v96,
      v100);
    if ( v85 )
      CoTaskMemFree(v85);
    if ( v74 )
      CoTaskMemFree(v74);
    if ( v63 )
      CoTaskMemFree(v63);
    if ( v54 )
      CoTaskMemFree(v54);
    if ( v44 )
      CoTaskMemFree(v44);
    if ( v35 )
      CoTaskMemFree(v35);
    if ( v17 )
      CoTaskMemFree(v17);
    wil::details::lambda_call<_lambda_12abaff33ac527a70ddc02944390cf89_>::~lambda_call<_lambda_12abaff33ac527a70ddc02944390cf89_>((__int64)v105);
    v92 = *(void **)&lpData[1];
    if ( !*(_QWORD *)&lpData[1] )
      return v109;
    goto LABEL_331;
  }
  v106 = 0;
  v97 = WindowsGetStringRawBuffer(string, 0LL);
  v99 = ContentManagement::PhoneShellNamespaceHelper::NotifyShell(v98, 8, v97);
  v109 = v99;
  if ( v99 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x345,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v99,
      v100);
    if ( v85 )
      CoTaskMemFree(v85);
    if ( v74 )
      CoTaskMemFree(v74);
    if ( v63 )
      CoTaskMemFree(v63);
    if ( v54 )
      CoTaskMemFree(v54);
    if ( v44 )
      CoTaskMemFree(v44);
    if ( v35 )
      CoTaskMemFree(v35);
    if ( v17 )
      CoTaskMemFree(v17);
    wil::details::lambda_call<_lambda_12abaff33ac527a70ddc02944390cf89_>::~lambda_call<_lambda_12abaff33ac527a70ddc02944390cf89_>((__int64)v105);
    v92 = *(void **)&lpData[1];
    if ( !*(_QWORD *)&lpData[1] )
      return v109;
LABEL_331:
    CoTaskMemFree(v92);
    return v109;
  }
  if ( v85 )
    CoTaskMemFree(v85);
  if ( v74 )
    CoTaskMemFree(v74);
  if ( v63 )
    CoTaskMemFree(v63);
  if ( v54 )
    CoTaskMemFree(v54);
  if ( v44 )
    CoTaskMemFree(v44);
  if ( v35 )
    CoTaskMemFree(v35);
  if ( v17 )
    CoTaskMemFree(v17);
  wil::details::lambda_call<_lambda_12abaff33ac527a70ddc02944390cf89_>::~lambda_call<_lambda_12abaff33ac527a70ddc02944390cf89_>((__int64)v105);
  if ( *(_QWORD *)&lpData[1] )
    CoTaskMemFree(*(LPVOID *)&lpData[1]);
  return 0LL;
}
