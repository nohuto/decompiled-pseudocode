/*
 * XREFs of ?UpdateShellPreferencesBasedOnThemesDWORD@TouchKeyboardExperienceManager@@AEAAXPEBGKKPEA_NPEAK2@Z @ 0x180096E2C
 * Callers:
 *     ?OnTabtipRegistryChanged@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1800A7A68 (-OnTabtipRegistryChanged@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEBG$$QEAV10@@Z @ 0x180096F40 (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_tra_ea_180096F40.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180098C40 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18009ACBC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800A8AF0 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x1800C3738 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEAG$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEAG0AEBV?$allocator@G@1@@Z @ 0x18019AC30 (--$-0PEAG$0A@@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEAG0AEBV-$alloc.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=14
void __fastcall TouchKeyboardExperienceManager::UpdateShellPreferencesBasedOnThemesDWORD(
        TouchKeyboardExperienceManager *this,
        const unsigned __int16 *a2,
        __int64 a3,
        __int64 a4,
        bool *a5,
        unsigned int *a6,
        unsigned int *a7)
{
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rdx
  unsigned int v15; // r8d
  char v16; // cl
  char v17; // al
  _WORD *v18; // r9
  _WORD *v19; // r9
  unsigned int v20; // r8d
  KeyboardHosting::TabTipAdapter *v21; // rdi
  void *p_hstringHeader; // rax
  HSTRING v23; // rbx
  int *v24; // rax
  __int64 v25; // rax
  int v26; // eax
  KeyboardHosting::TabTipAdapter *v27; // rdi
  _QWORD *v28; // rax
  HSTRING v29; // rbx
  int *v30; // rax
  __int64 v31; // rax
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rdx
  KeyboardHosting::TabTipAdapter *v35; // rdi
  HSTRING v36; // rbx
  int *v37; // rax
  __int64 v38; // rax
  int v39; // eax
  KeyboardHosting::TabTipAdapter *v40; // rdi
  HSTRING v41; // rbx
  int *v42; // rax
  __int64 v43; // rax
  int v44; // eax
  KeyboardHosting::TabTipAdapter *v45; // rdi
  HSTRING v46; // rbx
  int *v47; // rax
  __int64 v48; // rax
  int v49; // eax
  KeyboardHosting::TabTipAdapter *v50; // rdi
  HSTRING v51; // rbx
  int *v52; // rax
  __int64 v53; // rax
  int v54; // eax
  int v55[2]; // [rsp+20h] [rbp-E0h] BYREF
  unsigned int v56; // [rsp+28h] [rbp-D8h] BYREF
  unsigned int v57; // [rsp+2Ch] [rbp-D4h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-D0h] BYREF
  HSTRING v59; // [rsp+48h] [rbp-B8h]
  int v60[2]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v61; // [rsp+68h] [rbp-98h]
  int v62[2]; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v63; // [rsp+88h] [rbp-78h]
  _QWORD v64[4]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v65[42]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v66[6]; // [rsp+DAh] [rbp-26h] BYREF
  _BYTE v67[42]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v68[6]; // [rsp+10Ah] [rbp+Ah] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+48h]

  v57 = 0;
  v56 = 0;
  v9 = std::wstring::wstring(&hstringHeader, a2);
  std::operator+<unsigned short>(v62, L"KeyboardTheme_Dark_", v9);
  std::wstring::_Tidy_deallocate(&hstringHeader, v10);
  v11 = std::wstring::wstring(v67, a2);
  std::operator+<unsigned short>(v60, L"KeyboardTheme_Light_", v11);
  std::wstring::_Tidy_deallocate(v67, v12);
  if ( (int)SHRegGetDWORD(HKEY_CURRENT_USER, L"SOFTWARE\\Microsoft\\TabletTip\\1.7\\SelectedThemeDark", a2, &v57) < 0
    || (int)SHRegGetDWORD(HKEY_CURRENT_USER, L"SOFTWARE\\Microsoft\\TabletTip\\1.7\\SelectedThemeLight", a2, &v56) < 0 )
  {
    if ( !*a5 )
      goto LABEL_3;
    v45 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
    v59 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, &LocaleName, 1u, 0);
    v46 = v59;
    v47 = v62;
    if ( v63 >= 8 )
      v47 = *(int **)v62;
    *(_QWORD *)v55 = v47;
    v48 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v65, v55);
    v49 = KeyboardHosting::TabTipAdapter::SetShellPreference(v45, *(HSTRING *)(v48 + 24), v46);
    if ( v49 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x11FE,
        (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v49,
        v55[0]);
    v50 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
    v59 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, &LocaleName, 1u, 0);
    v51 = v59;
    v52 = v60;
    if ( v61 >= 8 )
      v52 = *(int **)v60;
    *(_QWORD *)v55 = v52;
    v53 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v65, v55);
    v54 = KeyboardHosting::TabTipAdapter::SetShellPreference(v50, *(HSTRING *)(v53 + 24), v51);
    if ( v54 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x11FF,
        (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v54,
        v55[0]);
LABEL_50:
    *a6 = 0;
    *a7 = 0;
    *a5 = 0;
    goto LABEL_3;
  }
  v15 = v57;
  if ( !*a5 || v57 != *a6 || (v16 = 0, v56 != *a7) )
    v16 = 1;
  if ( v57 > 0x64 || (v17 = 1, v56 > 0x64) )
    v17 = 0;
  if ( !v16 )
  {
    if ( v17 )
      goto LABEL_3;
    goto LABEL_32;
  }
  if ( !v17 )
  {
LABEL_32:
    if ( !*a5 )
      goto LABEL_3;
    v35 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
    v59 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, &LocaleName, 1u, 0);
    v36 = v59;
    v37 = v62;
    if ( v63 >= 8 )
      v37 = *(int **)v62;
    *(_QWORD *)v55 = v37;
    v38 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v65, v55);
    v39 = KeyboardHosting::TabTipAdapter::SetShellPreference(v35, *(HSTRING *)(v38 + 24), v36);
    if ( v39 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x11F4,
        (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v39,
        v55[0]);
    v40 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
    v59 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, &LocaleName, 1u, 0);
    v41 = v59;
    v42 = v60;
    if ( v61 >= 8 )
      v42 = *(int **)v60;
    *(_QWORD *)v55 = v42;
    v43 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v65, v55);
    v44 = KeyboardHosting::TabTipAdapter::SetShellPreference(v40, *(HSTRING *)(v43 + 24), v41);
    if ( v44 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x11F5,
        (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v44,
        v55[0]);
    goto LABEL_50;
  }
  v18 = v66;
  do
  {
    *--v18 = v15 % 0xA + 48;
    v15 /= 0xAu;
  }
  while ( v15 );
  std::wstring::wstring(&hstringHeader, v18, v66);
  v19 = v68;
  v20 = v56;
  do
  {
    *--v19 = v20 % 0xA + 48;
    v20 /= 0xAu;
  }
  while ( v20 );
  std::wstring::wstring(v64, v19, v68);
  v21 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  p_hstringHeader = &hstringHeader;
  if ( (unsigned __int64)v59 >= 8 )
    p_hstringHeader = hstringHeader.Reserved.Reserved1;
  *(_QWORD *)v55 = p_hstringHeader;
  v23 = *(HSTRING *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(v67, v55) + 24);
  v24 = v62;
  if ( v63 >= 8 )
    v24 = *(int **)v62;
  *(_QWORD *)v55 = v24;
  v25 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v65, v55);
  v26 = KeyboardHosting::TabTipAdapter::SetShellPreference(v21, *(HSTRING *)(v25 + 24), v23);
  if ( v26 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x11EC,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v26,
      v55[0]);
  v27 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v28 = v64;
  if ( v64[3] >= 8uLL )
    v28 = (_QWORD *)v64[0];
  *(_QWORD *)v55 = v28;
  v29 = *(HSTRING *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(v65, v55) + 24);
  v30 = v60;
  if ( v61 >= 8 )
    v30 = *(int **)v60;
  *(_QWORD *)v55 = v30;
  v31 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v67, v55);
  v32 = KeyboardHosting::TabTipAdapter::SetShellPreference(v27, *(HSTRING *)(v31 + 24), v29);
  if ( v32 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x11ED,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v32,
      v55[0]);
  *a6 = v57;
  *a7 = v56;
  *a5 = 1;
  std::wstring::_Tidy_deallocate(v64, v33);
  std::wstring::_Tidy_deallocate(&hstringHeader, v34);
LABEL_3:
  std::wstring::_Tidy_deallocate(v60, v13);
  std::wstring::_Tidy_deallocate(v62, v14);
}
