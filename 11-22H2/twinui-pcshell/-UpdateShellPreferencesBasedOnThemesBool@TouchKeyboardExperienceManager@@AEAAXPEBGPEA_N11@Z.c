/*
 * XREFs of ?UpdateShellPreferencesBasedOnThemesBool@TouchKeyboardExperienceManager@@AEAAXPEBGPEA_N11@Z @ 0x18019DBC4
 * Callers:
 *     ?OnTabtipRegistryChanged@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1800A7A68 (-OnTabtipRegistryChanged@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEBG$$QEAV10@@Z @ 0x180096F40 (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_tra_ea_180096F40.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180098C40 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18009ACBC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x1800C3738 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall TouchKeyboardExperienceManager::UpdateShellPreferencesBasedOnThemesBool(
        const WCHAR *this,
        const unsigned __int16 *a2,
        bool *a3,
        bool *a4,
        bool *a5)
{
  bool v8; // r14
  bool v9; // si
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  LSTATUS ValueW; // eax
  int v13; // ecx
  bool v14; // sf
  bool v15; // zf
  LSTATUS v16; // eax
  unsigned int v17; // r8d
  int v18; // ecx
  bool v19; // zf
  bool v20; // sf
  KeyboardHosting::TabTipAdapter *v21; // rdi
  const WCHAR *v22; // r12
  const unsigned __int16 *v23; // rax
  HSTRING Reserved1; // rbx
  unsigned int v25; // r8d
  _QWORD *v26; // rax
  HSTRING_HEADER *v27; // rax
  int v28; // eax
  unsigned int v29; // r8d
  KeyboardHosting::TabTipAdapter *v30; // rdi
  HSTRING v31; // rbx
  unsigned int v32; // r8d
  const WCHAR *v33; // rax
  HSTRING_HEADER *v34; // rax
  int v35; // eax
  KeyboardHosting::TabTipAdapter *v36; // rdi
  unsigned int v37; // r8d
  HSTRING v38; // rbx
  const WCHAR *v39; // rax
  HSTRING_HEADER *v40; // rax
  int v41; // eax
  KeyboardHosting::TabTipAdapter *v42; // rdi
  unsigned int v43; // r8d
  HSTRING v44; // rbx
  const WCHAR *v45; // rax
  HSTRING_HEADER *v46; // rax
  int v47; // eax
  unsigned int pvData; // [rsp+40h] [rbp-91h] BYREF
  DWORD pdwType; // [rsp+44h] [rbp-8Dh] BYREF
  DWORD pcbData[2]; // [rsp+48h] [rbp-89h] BYREF
  const WCHAR *v51; // [rsp+50h] [rbp-81h] BYREF
  WCHAR *v52; // [rsp+58h] [rbp-79h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+60h] [rbp-71h] BYREF
  HSTRING v54; // [rsp+78h] [rbp-59h]
  _QWORD v55[3]; // [rsp+80h] [rbp-51h] BYREF
  unsigned __int64 v56; // [rsp+98h] [rbp-39h]
  _QWORD v57[3]; // [rsp+A0h] [rbp-31h] BYREF
  unsigned __int64 v58; // [rsp+B8h] [rbp-19h]
  HSTRING_HEADER v59; // [rsp+C0h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+57h]

  v51 = this;
  v52 = (WCHAR *)a5;
  v8 = 0;
  v9 = 0;
  v10 = std::wstring::wstring(&hstringHeader, L"HasBorder");
  std::operator+<unsigned short>(v57, (__int64)L"KeyboardTheme_Dark_", v10);
  std::wstring::_Tidy_deallocate((__int64)&hstringHeader);
  v11 = std::wstring::wstring(&v59, L"HasBorder");
  std::operator+<unsigned short>(v55, (__int64)L"KeyboardTheme_Light_", v11);
  std::wstring::_Tidy_deallocate((__int64)&v59);
  pdwType = 0;
  pcbData[0] = 4;
  ValueW = RegGetValueW(
             HKEY_CURRENT_USER,
             L"SOFTWARE\\Microsoft\\TabletTip\\1.7\\SelectedThemeDark",
             L"HasBorder",
             0x10000012u,
             &pdwType,
             &pvData,
             pcbData);
  v13 = ValueW;
  if ( !ValueW )
  {
    if ( pdwType == 4 )
    {
      if ( pvData > 1 )
        goto LABEL_4;
      v13 = 0;
      v15 = pvData == 1;
    }
    else
    {
      if ( pcbData[0] != 4 || (unsigned __int16)(pvData - 48) > 1u )
        goto LABEL_4;
      v13 = 0;
      v15 = (_WORD)pvData == 49;
    }
    v8 = v15;
LABEL_3:
    v14 = v13 < 0;
    if ( v13 <= 0 )
      goto LABEL_5;
    goto LABEL_4;
  }
  if ( ValueW != 234 )
    goto LABEL_3;
LABEL_4:
  v14 = 1;
LABEL_5:
  if ( v14 )
    goto LABEL_6;
  pcbData[0] = 0;
  pdwType = 4;
  v16 = RegGetValueW(
          HKEY_CURRENT_USER,
          L"SOFTWARE\\Microsoft\\TabletTip\\1.7\\SelectedThemeLight",
          L"HasBorder",
          0x10000012u,
          pcbData,
          &pvData,
          &pdwType);
  v18 = v16;
  if ( v16 )
  {
    if ( v16 != 234 )
    {
LABEL_24:
      v20 = v18 < 0;
      if ( v18 <= 0 )
        goto LABEL_26;
    }
  }
  else if ( pcbData[0] == 4 )
  {
    if ( pvData <= 1 )
    {
      v18 = 0;
      v19 = pvData == 1;
LABEL_23:
      v9 = v19;
      goto LABEL_24;
    }
  }
  else if ( pdwType == 4 && (unsigned __int16)(pvData - 48) <= 1u )
  {
    v18 = 0;
    v19 = (_WORD)pvData == 49;
    goto LABEL_23;
  }
  v20 = 1;
LABEL_26:
  if ( v20 )
  {
LABEL_6:
    if ( *a3 )
    {
      v36 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
      v54 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, &LocaleName, 1u, 0);
      v38 = v54;
      v39 = (const WCHAR *)v57;
      if ( v58 >= 8 )
        v39 = (const WCHAR *)v57[0];
      v52 = (WCHAR *)v39;
      v40 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v59, (const WCHAR **)&v52, v37);
      v41 = KeyboardHosting::TabTipAdapter::SetShellPreference(v36, (HSTRING)v40[1].Reserved.Reserved1, v38);
      if ( v41 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1272,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v41);
      v42 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
      v54 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, &LocaleName, 1u, 0);
      v44 = v54;
      v45 = (const WCHAR *)v55;
      if ( v56 >= 8 )
        v45 = (const WCHAR *)v55[0];
      v52 = (WCHAR *)v45;
      v46 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v59, (const WCHAR **)&v52, v43);
      v47 = KeyboardHosting::TabTipAdapter::SetShellPreference(v42, (HSTRING)v46[1].Reserved.Reserved1, v44);
      if ( v47 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1273,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v47);
      *a3 = 0;
    }
    goto LABEL_7;
  }
  if ( !*a3 || v8 != *a4 || v9 != *a5 )
  {
    v21 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
    v22 = L"1";
    v23 = L"1";
    if ( !v8 )
      v23 = L"0";
    *(_QWORD *)pcbData = v23;
    Reserved1 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                           &v59,
                           (const WCHAR **)pcbData,
                           v17)[1].Reserved.Reserved1;
    v26 = v57;
    if ( v58 >= 8 )
      v26 = (_QWORD *)v57[0];
    *(_QWORD *)pcbData = v26;
    v27 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, (const WCHAR **)pcbData, v25);
    v28 = KeyboardHosting::TabTipAdapter::SetShellPreference(v21, (HSTRING)v27[1].Reserved.Reserved1, Reserved1);
    if ( v28 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1268,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v28);
    v30 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)v51 + 73);
    if ( !v9 )
      v22 = L"0";
    v51 = v22;
    v31 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v59, &v51, v29)[1].Reserved.Reserved1;
    v33 = (const WCHAR *)v55;
    if ( v56 >= 8 )
      v33 = (const WCHAR *)v55[0];
    v51 = v33;
    v34 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &v51, v32);
    v35 = KeyboardHosting::TabTipAdapter::SetShellPreference(v30, (HSTRING)v34[1].Reserved.Reserved1, v31);
    if ( v35 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1269,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v35);
    *a4 = v8;
    *(_BYTE *)v52 = v9;
    *a3 = 1;
  }
LABEL_7:
  std::wstring::_Tidy_deallocate((__int64)v55);
  std::wstring::_Tidy_deallocate((__int64)v57);
}
