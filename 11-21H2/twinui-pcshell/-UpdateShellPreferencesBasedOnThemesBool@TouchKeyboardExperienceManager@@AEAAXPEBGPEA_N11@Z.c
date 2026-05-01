/*
 * XREFs of ?UpdateShellPreferencesBasedOnThemesBool@TouchKeyboardExperienceManager@@AEAAXPEBGPEA_N11@Z @ 0x1800E6160
 * Callers:
 *     ?OnTabtipRegistryChanged@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1800E6800 (-OnTabtipRegistryChanged@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180089570 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x18008E250 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180095DF0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEBG$$QEAV10@@Z @ 0x1800E6510 (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
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
  signed int v13; // ecx
  signed int v14; // ebx
  bool v15; // zf
  LSTATUS v16; // eax
  unsigned int v17; // r8d
  bool v18; // zf
  KeyboardHosting::TabTipAdapter *v19; // rdi
  const WCHAR *v20; // r12
  const WCHAR *v21; // rax
  HSTRING v22; // rbx
  unsigned int v23; // r8d
  _QWORD *v24; // rax
  __int64 v25; // rax
  int v26; // eax
  unsigned int v27; // r8d
  KeyboardHosting::TabTipAdapter *v28; // rdi
  HSTRING v29; // rbx
  unsigned int v30; // r8d
  const WCHAR *v31; // rax
  __int64 v32; // rax
  int v33; // eax
  KeyboardHosting::TabTipAdapter *v34; // rdi
  unsigned int v35; // r8d
  HSTRING v36; // rbx
  const WCHAR *v37; // rax
  __int64 v38; // rax
  int v39; // eax
  KeyboardHosting::TabTipAdapter *v40; // rdi
  unsigned int v41; // r8d
  HSTRING v42; // rbx
  const WCHAR *v43; // rax
  __int64 v44; // rax
  int v45; // eax
  unsigned int pvData; // [rsp+40h] [rbp-91h] BYREF
  DWORD pdwType; // [rsp+44h] [rbp-8Dh] BYREF
  DWORD pcbData[2]; // [rsp+48h] [rbp-89h] BYREF
  const WCHAR *v49; // [rsp+50h] [rbp-81h] BYREF
  WCHAR *v50; // [rsp+58h] [rbp-79h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+60h] [rbp-71h] BYREF
  HSTRING v52; // [rsp+78h] [rbp-59h]
  _QWORD v53[3]; // [rsp+80h] [rbp-51h] BYREF
  unsigned __int64 v54; // [rsp+98h] [rbp-39h]
  _QWORD v55[3]; // [rsp+A0h] [rbp-31h] BYREF
  unsigned __int64 v56; // [rsp+B8h] [rbp-19h]
  _QWORD v57[4]; // [rsp+C0h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+57h]

  v49 = this;
  v50 = (WCHAR *)a5;
  v8 = 0;
  v9 = 0;
  v10 = std::wstring::wstring(&hstringHeader, L"HasBorder");
  std::operator+<unsigned short>(v55, L"KeyboardTheme_Dark_", v10);
  std::wstring::_Tidy_deallocate(&hstringHeader);
  v11 = std::wstring::wstring(v57, L"HasBorder");
  std::operator+<unsigned short>(v53, L"KeyboardTheme_Light_", v11);
  std::wstring::_Tidy_deallocate(v57);
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
  LOWORD(v14) = 13;
  if ( ValueW )
  {
    if ( ValueW == 234 )
    {
      LOWORD(v13) = 13;
    }
    else if ( ValueW <= 0 )
    {
      goto LABEL_5;
    }
    goto LABEL_4;
  }
  LOWORD(v13) = 13;
  if ( pdwType != 4 )
  {
    if ( pcbData[0] == 4 && (unsigned __int16)(pvData - 48) <= 1u )
    {
      v13 = 0;
      v15 = (_WORD)pvData == 49;
      goto LABEL_11;
    }
LABEL_4:
    v13 = (unsigned __int16)v13 | 0x80070000;
    goto LABEL_5;
  }
  if ( pvData > 1 )
    goto LABEL_4;
  v13 = 0;
  v15 = pvData == 1;
LABEL_11:
  v8 = v15;
LABEL_5:
  if ( v13 < 0 )
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
  if ( !v16 )
  {
    if ( pcbData[0] == 4 )
    {
      if ( pvData <= 1 )
      {
        v14 = 0;
        v18 = pvData == 1;
LABEL_20:
        v9 = v18;
        goto LABEL_27;
      }
    }
    else if ( pdwType == 4 && (unsigned __int16)(pvData - 48) <= 1u )
    {
      v14 = 0;
      v18 = (_WORD)pvData == 49;
      goto LABEL_20;
    }
    goto LABEL_26;
  }
  if ( v16 == 234 || (v14 = v16, v16 > 0) )
LABEL_26:
    v14 = (unsigned __int16)v14 | 0x80070000;
LABEL_27:
  if ( v14 < 0 )
  {
LABEL_6:
    if ( *a3 )
    {
      v34 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
      v52 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, &LocaleName, 1u, 0);
      v36 = v52;
      v37 = (const WCHAR *)v55;
      if ( v56 >= 8 )
        v37 = (const WCHAR *)v55[0];
      v50 = (WCHAR *)v37;
      v38 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v57, (const WCHAR **)&v50, v35);
      v39 = KeyboardHosting::TabTipAdapter::SetShellPreference(v34, *(HSTRING *)(v38 + 24), v36);
      if ( v39 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1397,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v39);
      v40 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
      v52 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, &LocaleName, 1u, 0);
      v42 = v52;
      v43 = (const WCHAR *)v53;
      if ( v54 >= 8 )
        v43 = (const WCHAR *)v53[0];
      v50 = (WCHAR *)v43;
      v44 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v57, (const WCHAR **)&v50, v41);
      v45 = KeyboardHosting::TabTipAdapter::SetShellPreference(v40, *(HSTRING *)(v44 + 24), v42);
      if ( v45 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1398,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v45);
      *a3 = 0;
    }
    goto LABEL_7;
  }
  if ( !*a3 || v8 != *a4 || v9 != *a5 )
  {
    v19 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
    v20 = L"1";
    v21 = L"1";
    if ( !v8 )
      v21 = L"0";
    *(_QWORD *)pcbData = v21;
    v22 = *(HSTRING *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                         (__int64)v57,
                         (const WCHAR **)pcbData,
                         v17)
                     + 24);
    v24 = v55;
    if ( v56 >= 8 )
      v24 = (_QWORD *)v55[0];
    *(_QWORD *)pcbData = v24;
    v25 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            (__int64)&hstringHeader,
            (const WCHAR **)pcbData,
            v23);
    v26 = KeyboardHosting::TabTipAdapter::SetShellPreference(v19, *(HSTRING *)(v25 + 24), v22);
    if ( v26 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x138D,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v26);
    v28 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)v49 + 92);
    if ( !v9 )
      v20 = L"0";
    v49 = v20;
    v29 = *(HSTRING *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v57, &v49, v27) + 24);
    v31 = (const WCHAR *)v53;
    if ( v54 >= 8 )
      v31 = (const WCHAR *)v53[0];
    v49 = v31;
    v32 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)&hstringHeader, &v49, v30);
    v33 = KeyboardHosting::TabTipAdapter::SetShellPreference(v28, *(HSTRING *)(v32 + 24), v29);
    if ( v33 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x138E,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v33);
    *a4 = v8;
    *(_BYTE *)v50 = v9;
    *a3 = 1;
  }
LABEL_7:
  std::wstring::_Tidy_deallocate(v53);
  std::wstring::_Tidy_deallocate(v55);
}
