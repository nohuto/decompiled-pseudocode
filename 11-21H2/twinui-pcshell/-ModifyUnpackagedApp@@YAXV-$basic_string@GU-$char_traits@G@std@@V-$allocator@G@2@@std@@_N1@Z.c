/*
 * XREFs of ?ModifyUnpackagedApp@@YAXV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_N1@Z @ 0x180576314
 * Callers:
 *     ?ModifyUnpackagedAppInContainer@ApplicationContainerActivation@@UEAAJU_GUID@@PEAUHSTRING__@@W4UnpackageAppModifyAction@ContainerActivation@Activation@ApplicationModel@Internal@Windows@@E@Z @ 0x1805730D0 (-ModifyUnpackagedAppInContainer@ApplicationContainerActivation@@UEAAJU_GUID@@PEAUHSTRING__@@W4Un.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18008EA60 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1803B14F0 (-_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?GetPropertyValueFromRegistryKey@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAUHKEY__@@PEBG_N@Z @ 0x180575E0C (-GetPropertyValueFromRegistryKey@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@s.c)
 *     ?IsMsi@@YA_NPEAUHKEY__@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180575F68 (-IsMsi@@YA_NPEAUHKEY__@@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@Z.c)
 *     ?ModifyUnpackagedMsiApp@@YAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_N1@Z @ 0x1805769B0 (-ModifyUnpackagedMsiApp@@YAXAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@_N1.c)
 *     ?ModifyUnpackagedNonMsiApp@@YAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_N11@Z @ 0x180576ACC (-ModifyUnpackagedNonMsiApp@@YAXAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@.c)
 *     ?replace@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_K_KQEBG0@Z @ 0x180576E48 (-replace@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_K_KQEBG0@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ModifyUnpackagedApp(_QWORD *a1, char a2, char a3)
{
  unsigned __int64 v6; // r11
  char *v7; // r8
  char *i; // rax
  __int64 v9; // rcx
  char *v10; // rdx
  char *v11; // rax
  __int64 v12; // r10
  const wchar_t *v13; // rdx
  bool v14; // cc
  wchar_t v15; // cx
  char v16; // r15
  unsigned int v17; // eax
  char *v18; // r8
  char *j; // rax
  __int64 v20; // rcx
  char *v21; // rdx
  char *v22; // rax
  __int64 v23; // r10
  const wchar_t *v24; // rdx
  bool v25; // cc
  wchar_t v26; // cx
  unsigned int v27; // eax
  unsigned __int64 v28; // r10
  char *v29; // r11
  char *v30; // rax
  __int64 v31; // rcx
  char *v32; // rdx
  char *v33; // rax
  __int64 v34; // r9
  const wchar_t *v35; // rdx
  bool v36; // cc
  wchar_t v37; // cx
  const WCHAR *v38; // rdx
  unsigned int v39; // eax
  char *v40; // r8
  char *v41; // rbx
  char *k; // rax
  __int64 v43; // rcx
  char *v44; // rdx
  char *v45; // rax
  __int64 v46; // r10
  const wchar_t *v47; // rdx
  bool v48; // cc
  wchar_t v49; // cx
  const WCHAR *v50; // rdx
  unsigned int v51; // eax
  __int64 v52; // rdx
  __int64 v53; // r8
  const WCHAR *v54; // r8
  __int64 v55; // r9
  __int64 v56; // r8
  __int64 v57; // rdx
  int phkResult; // [rsp+20h] [rbp-60h]
  unsigned int phkResulta; // [rsp+20h] [rbp-60h]
  unsigned int phkResultb; // [rsp+20h] [rbp-60h]
  unsigned int phkResultc; // [rsp+20h] [rbp-60h]
  HKEY v63; // [rsp+30h] [rbp-50h] BYREF
  HKEY hKey; // [rsp+38h] [rbp-48h] BYREF
  const wchar_t *v65; // [rsp+40h] [rbp-40h]
  _QWORD *v66; // [rsp+48h] [rbp-38h]
  _OWORD v67[2]; // [rsp+50h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  v66 = a1;
  hKey = 0LL;
  v63 = 0LL;
  v6 = a1[2];
  v7 = (char *)a1;
  if ( a1[3] >= 8uLL )
    v7 = (char *)*a1;
  if ( v6 >= 0x13 )
  {
    for ( i = v7; ; i = v11 + 2 )
    {
      v9 = (&v7[2 * v6 - 36] - i) >> 1;
      v10 = 0LL;
      if ( v9 )
      {
        while ( *(_WORD *)i != 72 )
        {
          if ( v9 == 1 )
            goto LABEL_11;
          --v9;
          i += 2;
        }
        v10 = i;
      }
LABEL_11:
      v11 = v10;
      if ( !v10 )
        break;
      v12 = 19LL;
      v13 = L"HKEY_LOCAL_MACHINE\\";
      if ( *(_WORD *)v11 >= 0x48u )
      {
        v14 = *(_WORD *)v11 <= 0x48u;
        while ( v14 )
        {
          if ( v12 == 1 )
          {
            if ( (v11 - v7) >> 1 )
              goto LABEL_21;
            v16 = 0;
            std::wstring::replace(a1, 0LL);
            hKey = 0LL;
            v17 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, &LocaleName, 0, 0x20019u, &hKey);
            if ( v17 )
              wil::details::in1diag3::_Throw_Win32(
                retaddr,
                145LL,
                (__int64)"pcshell\\twinui\\vailactivation\\lib\\modifyhelper.cpp",
                (const char *)v17,
                phkResulta);
            goto LABEL_41;
          }
          --v12;
          v15 = *(const wchar_t *)((char *)++v13 + v11 - (char *)L"HKEY_LOCAL_MACHINE\\");
          v14 = v15 <= *v13;
          if ( v15 < *v13 )
            break;
        }
      }
    }
  }
LABEL_21:
  v18 = (char *)a1;
  if ( a1[3] >= 8uLL )
    v18 = (char *)*a1;
  if ( v6 < 0x12 )
    goto LABEL_94;
  for ( j = v18; ; j = v22 + 2 )
  {
    v20 = (&v18[2 * v6 - 34] - j) >> 1;
    v21 = 0LL;
    if ( v20 )
    {
      while ( *(_WORD *)j != 72 )
      {
        if ( v20 == 1 )
          goto LABEL_31;
        --v20;
        j += 2;
      }
      v21 = j;
    }
LABEL_31:
    v22 = v21;
    if ( !v21 )
      goto LABEL_94;
    v23 = 18LL;
    v24 = L"HKEY_CURRENT_USER\\";
    if ( *(_WORD *)v22 >= 0x48u )
      break;
LABEL_37:
    ;
  }
  v25 = *(_WORD *)v22 <= 0x48u;
  while ( 1 )
  {
    if ( !v25 )
      goto LABEL_37;
    if ( v23 == 1 )
      break;
    --v23;
    v26 = *(const wchar_t *)((char *)++v24 + v22 - (char *)L"HKEY_CURRENT_USER\\");
    v25 = v26 <= *v24;
    if ( v26 < *v24 )
      goto LABEL_37;
  }
  if ( (v22 - v18) >> 1 )
LABEL_94:
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x9B,
      (int)"pcshell\\twinui\\vailactivation\\lib\\modifyhelper.cpp",
      (const char *)0x80070057LL,
      phkResult);
  v16 = 1;
  std::wstring::replace(a1, 0LL);
  hKey = 0LL;
  v27 = RegOpenKeyExW(HKEY_CURRENT_USER, &LocaleName, 0, 0x20019u, &hKey);
  if ( v27 )
    wil::details::in1diag3::_Throw_Win32(
      retaddr,
      151LL,
      (__int64)"pcshell\\twinui\\vailactivation\\lib\\modifyhelper.cpp",
      (const char *)v27,
      phkResulta);
LABEL_41:
  v28 = a1[2];
  v29 = (char *)a1;
  if ( a1[3] >= 8uLL )
    v29 = (char *)*a1;
  if ( v28 >= 0x34 )
  {
    v30 = v29;
    v65 = L"Software\\Microsoft\\Windows\\CurrentVersion\\Uninstall\\";
    while ( 1 )
    {
      v31 = (&v29[2 * v28 - 102] - v30) >> 1;
      v32 = 0LL;
      if ( v31 )
      {
        while ( *(_WORD *)v30 != 83 )
        {
          if ( v31 == 1 )
            goto LABEL_51;
          --v31;
          v30 += 2;
        }
        v32 = v30;
      }
LABEL_51:
      v33 = v32;
      if ( !v32 )
        break;
      v34 = 52LL;
      v35 = L"Software\\Microsoft\\Windows\\CurrentVersion\\Uninstall\\";
      if ( *(_WORD *)v33 >= 0x53u )
      {
        v36 = *(_WORD *)v33 <= 0x53u;
        while ( v36 )
        {
          if ( v34 == 1 )
          {
            if ( (v33 - v29) >> 1 )
              goto LABEL_64;
            v63 = 0LL;
            v38 = (const WCHAR *)a1;
            if ( a1[3] >= 8uLL )
              v38 = (const WCHAR *)*a1;
            v39 = RegOpenKeyExW(hKey, v38, 0, 0x20019u, &v63);
            if ( v39 )
              wil::details::in1diag3::_Throw_Win32(
                retaddr,
                160LL,
                (__int64)"pcshell\\twinui\\vailactivation\\lib\\modifyhelper.cpp",
                (const char *)v39,
                phkResultb);
            goto LABEL_86;
          }
          --v34;
          v37 = *(const wchar_t *)((char *)++v35 + v33 - (char *)v65);
          v36 = v37 <= *v35;
          if ( v37 < *v35 )
            break;
        }
      }
      v30 = v33 + 2;
    }
  }
LABEL_64:
  v40 = (char *)a1;
  if ( a1[3] >= 8uLL )
    v40 = (char *)*a1;
  if ( v28 < 0x40 )
    goto LABEL_93;
  v41 = &v40[2 * v28 - 126];
  for ( k = v40; ; k = v45 + 2 )
  {
    v43 = (v41 - k) >> 1;
    v44 = 0LL;
    if ( v43 )
    {
      while ( *(_WORD *)k != 83 )
      {
        if ( v43 == 1 )
          goto LABEL_74;
        --v43;
        k += 2;
      }
      v44 = k;
    }
LABEL_74:
    v45 = v44;
    if ( !v44 )
      goto LABEL_93;
    v46 = 64LL;
    v47 = L"Software\\Wow6432Node\\Microsoft\\Windows\\CurrentVersion\\Uninstall\\";
    if ( *(_WORD *)v45 >= 0x53u )
      break;
LABEL_80:
    ;
  }
  v48 = *(_WORD *)v45 <= 0x53u;
  while ( 1 )
  {
    if ( !v48 )
      goto LABEL_80;
    if ( v46 == 1 )
      break;
    --v46;
    v49 = *(const wchar_t *)((char *)++v47
                           + v45
                           - (char *)L"Software\\Wow6432Node\\Microsoft\\Windows\\CurrentVersion\\Uninstall\\");
    v48 = v49 <= *v47;
    if ( v49 < *v47 )
      goto LABEL_80;
  }
  if ( (v45 - v40) >> 1 )
LABEL_93:
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xAA,
      (int)"pcshell\\twinui\\vailactivation\\lib\\modifyhelper.cpp",
      (const char *)0x80070057LL,
      phkResulta);
  v63 = 0LL;
  v50 = (const WCHAR *)a1;
  if ( a1[3] >= 8uLL )
    v50 = (const WCHAR *)*a1;
  v51 = RegOpenKeyExW(hKey, v50, 0, 0x20019u, &v63);
  if ( v51 )
    wil::details::in1diag3::_Throw_Win32(
      retaddr,
      165LL,
      (__int64)"pcshell\\twinui\\vailactivation\\lib\\modifyhelper.cpp",
      (const char *)v51,
      phkResultc);
LABEL_86:
  std::wstring::replace(a1, 0LL);
  if ( v16 || !IsMsi(v63, (const WCHAR *)a1) )
  {
    v54 = L"UninstallString";
    if ( !a2 )
      v54 = L"ModifyPath";
    GetPropertyValueFromRegistryKey(v67, v63, v54);
    LOBYTE(v55) = a3;
    LOBYTE(v56) = v16;
    LOBYTE(v57) = a2;
    ModifyUnpackagedNonMsiApp(v67, v57, v56, v55);
    std::wstring::_Tidy_deallocate((__int64)v67);
  }
  else
  {
    LOBYTE(v53) = a3;
    LOBYTE(v52) = a2;
    ModifyUnpackagedMsiApp(a1, v52, v53);
  }
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&v63);
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hKey);
  return std::wstring::_Tidy_deallocate((__int64)a1);
}
