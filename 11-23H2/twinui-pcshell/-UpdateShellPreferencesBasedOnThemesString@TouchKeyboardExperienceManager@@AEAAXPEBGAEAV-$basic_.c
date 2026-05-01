/*
 * XREFs of ?UpdateShellPreferencesBasedOnThemesString@TouchKeyboardExperienceManager@@AEAAXPEBGAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@1@Z @ 0x1800C4254
 * Callers:
 *     ?OnTabtipRegistryChanged@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1800A7A68 (-OnTabtipRegistryChanged@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180098C40 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18009ACBC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800C29B0 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?insert@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KQEBG0@Z @ 0x1800C2B98 (-insert@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KQEBG0@Z.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x1800C3738 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x1802CED4A (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KG@Z.c)
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHAEBV12@@Z @ 0x1802D3736 (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHAEBV12@@Z.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall TouchKeyboardExperienceManager::UpdateShellPreferencesBasedOnThemesString(
        __int64 a1,
        WCHAR *a2,
        __int64 a3,
        __int64 a4)
{
  char *v8; // rax
  unsigned __int64 v9; // rdx
  char *v10; // rax
  __int64 v11; // rdx
  char *v12; // rax
  unsigned __int64 v13; // rdx
  char *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rdx
  unsigned __int64 v19; // rdx
  PVOID *v20; // rax
  PVOID *pvData; // rax
  unsigned __int64 v22; // rdx
  PVOID *v23; // rax
  unsigned __int64 v24; // rbx
  PVOID *v25; // rax
  PVOID *v26; // rax
  unsigned int v27; // r8d
  KeyboardHosting::TabTipAdapter *v28; // rdi
  PVOID *v29; // rax
  HSTRING Reserved1; // rbx
  unsigned int v31; // r8d
  const WCHAR *v32; // rax
  HSTRING_HEADER *v33; // rax
  int v34; // eax
  unsigned int v35; // r8d
  KeyboardHosting::TabTipAdapter *v36; // rdi
  PVOID *v37; // rax
  HSTRING v38; // rbx
  unsigned int v39; // r8d
  const WCHAR *v40; // rax
  HSTRING_HEADER *v41; // rax
  int v42; // eax
  PVOID *v43; // rdx
  PVOID *v44; // rdx
  unsigned __int64 v45; // r8
  char *v46; // rcx
  KeyboardHosting::TabTipAdapter *v47; // rdi
  unsigned int v48; // r8d
  HSTRING v49; // rbx
  const WCHAR *v50; // rax
  HSTRING_HEADER *v51; // rax
  int v52; // eax
  KeyboardHosting::TabTipAdapter *v53; // rdi
  unsigned int v54; // r8d
  HSTRING v55; // rbx
  const WCHAR *v56; // rax
  HSTRING_HEADER *v57; // rax
  int v58; // eax
  __int64 v59; // rdx
  KeyboardHosting::TabTipAdapter *v60; // rdi
  unsigned int v61; // r8d
  HSTRING v62; // rbx
  const WCHAR *v63; // rax
  HSTRING_HEADER *v64; // rax
  int v65; // eax
  KeyboardHosting::TabTipAdapter *v66; // rdi
  unsigned int v67; // r8d
  HSTRING v68; // rbx
  const WCHAR *v69; // rax
  HSTRING_HEADER *v70; // rax
  int v71; // eax
  int pdwType; // [rsp+20h] [rbp-E0h]
  int pdwTypea; // [rsp+20h] [rbp-E0h]
  DWORD v74; // [rsp+40h] [rbp-C0h] BYREF
  const WCHAR *v75; // [rsp+48h] [rbp-B8h] BYREF
  DWORD pcbData; // [rsp+50h] [rbp-B0h] BYREF
  PVOID v77[2]; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v78; // [rsp+68h] [rbp-98h]
  unsigned __int64 v79; // [rsp+70h] [rbp-90h]
  PVOID Src[2]; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v81; // [rsp+88h] [rbp-78h]
  unsigned __int64 v82; // [rsp+90h] [rbp-70h]
  HSTRING_HEADER hstringHeader; // [rsp+98h] [rbp-68h] BYREF
  HSTRING v84; // [rsp+B0h] [rbp-50h]
  __int128 v85; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v86; // [rsp+C8h] [rbp-38h]
  __int128 v87; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v88; // [rsp+E8h] [rbp-18h]
  HSTRING_HEADER v89; // [rsp+F8h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+68h]

  pcbData = 0;
  v74 = 0;
  v8 = (char *)std::wstring::wstring(&hstringHeader, a2);
  v10 = std::wstring::insert(v8, v9, (char *)L"KeyboardTheme_Dark_", 0x13uLL);
  *(_QWORD *)&v87 = 0LL;
  v88 = 0LL;
  v87 = *(_OWORD *)v10;
  v88 = *((_OWORD *)v10 + 1);
  *((_QWORD *)v10 + 2) = 0LL;
  *((_QWORD *)v10 + 3) = 7LL;
  *(_WORD *)v10 = 0;
  std::wstring::_Tidy_deallocate(&hstringHeader, v11);
  v12 = (char *)std::wstring::wstring(Src, a2);
  v14 = std::wstring::insert(v12, v13, (char *)L"KeyboardTheme_Light_", 0x14uLL);
  *(_QWORD *)&v85 = 0LL;
  v86 = 0LL;
  v85 = *(_OWORD *)v14;
  v86 = *((_OWORD *)v14 + 1);
  *((_QWORD *)v14 + 2) = 0LL;
  *((_QWORD *)v14 + 3) = 7LL;
  *(_WORD *)v14 = 0;
  std::wstring::_Tidy_deallocate(Src, v15);
  if ( !RegGetValueW(
          HKEY_CURRENT_USER,
          L"SOFTWARE\\Microsoft\\TabletTip\\1.7\\SelectedThemeLight",
          a2,
          2u,
          0LL,
          0LL,
          &pcbData)
    && pcbData
    && !RegGetValueW(
          HKEY_CURRENT_USER,
          L"SOFTWARE\\Microsoft\\TabletTip\\1.7\\SelectedThemeDark",
          a2,
          2u,
          0LL,
          0LL,
          &v74)
    && v74 )
  {
    Src[0] = 0LL;
    v81 = 0LL;
    v82 = 7LL;
    v77[0] = 0LL;
    v78 = 0LL;
    v79 = 7LL;
    if ( (unsigned __int64)pcbData >> 1 )
    {
      std::wstring::append(Src, (unsigned __int64)pcbData >> 1, 0LL);
    }
    else
    {
      v81 = 0LL;
      LOWORD(Src[0]) = 0;
    }
    v19 = (unsigned __int64)v74 >> 1;
    if ( v19 > v78 )
    {
      std::wstring::append(v77, v19 - v78, 0LL);
    }
    else
    {
      v20 = v77;
      if ( v79 >= 8 )
        v20 = (PVOID *)v77[0];
      v78 = (unsigned __int64)v74 >> 1;
      *((_WORD *)v20 + v19) = 0;
    }
    pvData = Src;
    if ( v82 >= 8 )
      pvData = (PVOID *)Src[0];
    if ( RegGetValueW(
           HKEY_CURRENT_USER,
           L"SOFTWARE\\Microsoft\\TabletTip\\1.7\\SelectedThemeLight",
           a2,
           2u,
           0LL,
           pvData,
           &pcbData) )
    {
      goto LABEL_63;
    }
    v23 = v77;
    if ( v79 >= 8 )
      v23 = (PVOID *)v77[0];
    if ( RegGetValueW(
           HKEY_CURRENT_USER,
           L"SOFTWARE\\Microsoft\\TabletTip\\1.7\\SelectedThemeDark",
           a2,
           2u,
           0LL,
           v23,
           &v74) )
    {
LABEL_63:
      if ( !*(_QWORD *)(a3 + 16) && !*(_QWORD *)(a4 + 16) )
        goto LABEL_74;
      v47 = *(KeyboardHosting::TabTipAdapter **)(a1 + 584);
      v84 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, &LocaleName, 1u, 0);
      v49 = v84;
      v50 = (const WCHAR *)&v87;
      if ( *((_QWORD *)&v88 + 1) >= 8uLL )
        v50 = (const WCHAR *)v87;
      v75 = v50;
      v51 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v89, &v75, v48);
      v52 = KeyboardHosting::TabTipAdapter::SetShellPreference(v47, (HSTRING)v51[1].Reserved.Reserved1, v49);
      if ( v52 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1225,
          (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v52,
          pdwTypea);
      v53 = *(KeyboardHosting::TabTipAdapter **)(a1 + 584);
      v84 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, &LocaleName, 1u, 0);
      v55 = v84;
      v56 = (const WCHAR *)&v85;
      if ( *((_QWORD *)&v86 + 1) >= 8uLL )
        v56 = (const WCHAR *)v85;
      v75 = v56;
      v57 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v89, &v75, v54);
      v58 = KeyboardHosting::TabTipAdapter::SetShellPreference(v53, (HSTRING)v57[1].Reserved.Reserved1, v55);
      if ( v58 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1226,
          (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v58,
          pdwTypea);
      std::wstring::assign((char *)a3, (void *)&LocaleName, 0LL);
      v45 = 0LL;
      v44 = (PVOID *)&LocaleName;
      v46 = (char *)a4;
    }
    else
    {
      if ( (pcbData & 0xFFFFFFFE) != 0 )
        v22 = ((unsigned __int64)pcbData >> 1) - 1;
      else
        v22 = 0LL;
      if ( (v74 & 0xFFFFFFFE) != 0 )
        v24 = ((unsigned __int64)v74 >> 1) - 1;
      else
        v24 = 0LL;
      if ( v22 > v81 )
      {
        std::wstring::append(Src, v22 - v81, 0LL);
      }
      else
      {
        v25 = Src;
        if ( v82 >= 8 )
          v25 = (PVOID *)Src[0];
        v81 = v22;
        *((_WORD *)v25 + v22) = 0;
      }
      if ( v24 > v78 )
      {
        std::wstring::append(v77, v24 - v78, 0LL);
      }
      else
      {
        v26 = v77;
        if ( v79 >= 8 )
          v26 = (PVOID *)v77[0];
        v78 = v24;
        *((_WORD *)v26 + v24) = 0;
      }
      if ( (!v78 || !(unsigned int)std::wstring::compare(v77, a3))
        && (!v81 || !(unsigned int)std::wstring::compare(Src, a4)) )
      {
        goto LABEL_74;
      }
      v28 = *(KeyboardHosting::TabTipAdapter **)(a1 + 584);
      v29 = Src;
      if ( v82 >= 8 )
        v29 = (PVOID *)Src[0];
      v75 = (const WCHAR *)v29;
      Reserved1 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &v75, v27)[1].Reserved.Reserved1;
      v32 = (const WCHAR *)&v85;
      if ( *((_QWORD *)&v86 + 1) >= 8uLL )
        v32 = (const WCHAR *)v85;
      v75 = v32;
      v33 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v89, &v75, v31);
      v34 = KeyboardHosting::TabTipAdapter::SetShellPreference(v28, (HSTRING)v33[1].Reserved.Reserved1, Reserved1);
      if ( v34 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x121D,
          (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v34,
          pdwTypea);
      v36 = *(KeyboardHosting::TabTipAdapter **)(a1 + 584);
      v37 = v77;
      if ( v79 >= 8 )
        v37 = (PVOID *)v77[0];
      v75 = (const WCHAR *)v37;
      v38 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v89, &v75, v35)[1].Reserved.Reserved1;
      v40 = (const WCHAR *)&v87;
      if ( *((_QWORD *)&v88 + 1) >= 8uLL )
        v40 = (const WCHAR *)v87;
      v75 = v40;
      v41 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &v75, v39);
      v42 = KeyboardHosting::TabTipAdapter::SetShellPreference(v36, (HSTRING)v41[1].Reserved.Reserved1, v38);
      if ( v42 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x121E,
          (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v42,
          pdwTypea);
      if ( (PVOID *)a4 != Src )
      {
        v43 = Src;
        if ( v82 >= 8 )
          v43 = (PVOID *)Src[0];
        std::wstring::assign((char *)a4, v43, v81);
      }
      if ( (PVOID *)a3 == v77 )
        goto LABEL_74;
      v44 = v77;
      if ( v79 >= 8 )
        v44 = (PVOID *)v77[0];
      v45 = v78;
      v46 = (char *)a3;
    }
    std::wstring::assign(v46, v44, v45);
LABEL_74:
    std::wstring::_Tidy_deallocate(v77, v22);
    std::wstring::_Tidy_deallocate(Src, v59);
    goto LABEL_4;
  }
  if ( *(_QWORD *)(a3 + 16) || *(_QWORD *)(a4 + 16) )
  {
    v60 = *(KeyboardHosting::TabTipAdapter **)(a1 + 584);
    v84 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, &LocaleName, 1u, 0);
    v62 = v84;
    v63 = (const WCHAR *)&v87;
    if ( *((_QWORD *)&v88 + 1) >= 8uLL )
      v63 = (const WCHAR *)v87;
    v75 = v63;
    v64 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v89, &v75, v61);
    v65 = KeyboardHosting::TabTipAdapter::SetShellPreference(v60, (HSTRING)v64[1].Reserved.Reserved1, v62);
    if ( v65 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x122E,
        (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v65,
        pdwType);
    v66 = *(KeyboardHosting::TabTipAdapter **)(a1 + 584);
    v84 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, &LocaleName, 1u, 0);
    v68 = v84;
    v69 = (const WCHAR *)&v85;
    if ( *((_QWORD *)&v86 + 1) >= 8uLL )
      v69 = (const WCHAR *)v85;
    v75 = v69;
    v70 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v89, &v75, v67);
    v71 = KeyboardHosting::TabTipAdapter::SetShellPreference(v66, (HSTRING)v70[1].Reserved.Reserved1, v68);
    if ( v71 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x122F,
        (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v71,
        pdwType);
    std::wstring::assign((char *)a3, (void *)&LocaleName, 0LL);
    std::wstring::assign((char *)a4, (void *)&LocaleName, 0LL);
  }
LABEL_4:
  std::wstring::_Tidy_deallocate(&v85, v16);
  return std::wstring::_Tidy_deallocate(&v87, v17);
}
