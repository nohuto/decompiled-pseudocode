/*
 * XREFs of ?UpdateShellPreferencesBasedOnThemesString@TouchKeyboardExperienceManager@@AEAAXPEBGAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@1@Z @ 0x18008A918
 * Callers:
 *     ?OnTabtipRegistryChanged@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1800E6800 (-OnTabtipRegistryChanged@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Calculate_growth@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@CA_K_K00@Z @ 0x18008AC40 (-_Calculate_growth@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@CA_K_K00@Z.c)
 *     ?insert@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KQEBG0@Z @ 0x18008AC74 (-insert@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KQEBG0@Z.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x18008E250 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180095DF0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18010AACC (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHAEBV12@@Z @ 0x180126B5C (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHAEBV12@@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     memcpy_0 @ 0x1801EACEF (memcpy_0.c)
 *     memmove_0 @ 0x1801EACFB (memmove_0.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1802E911C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1802EBA80 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x1802EBAEC (-_Xlen_string@std@@YAXXZ.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x18033CC7C (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KG@Z.c)
 */

// Hidden C++ exception states: #wind=15
void __fastcall TouchKeyboardExperienceManager::UpdateShellPreferencesBasedOnThemesString(
        void *a1,
        _WORD *a2,
        PVOID *a3,
        PVOID *a4)
{
  void *v7; // r13
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rbx
  __int64 v10; // r13
  unsigned __int64 v11; // r10
  char *v12; // rdi
  size_t v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rbx
  void *v16; // rdi
  __int64 v17; // rax
  void *v18; // rdx
  void *v19; // rcx
  void *v20; // rdx
  void *v21; // rcx
  size_t v22; // rbx
  unsigned __int64 v23; // rdx
  PVOID *v24; // rax
  PVOID *pvData; // rax
  PVOID *v26; // rax
  KeyboardHosting::TabTipAdapter *v27; // rdi
  PVOID *v28; // rax
  HSTRING v29; // rbx
  void **v30; // rax
  __int64 v31; // rax
  int v32; // eax
  KeyboardHosting::TabTipAdapter *v33; // rdi
  PVOID *v34; // rax
  HSTRING v35; // rbx
  void **v36; // rax
  __int64 v37; // rax
  int v38; // eax
  PVOID *v39; // rcx
  KeyboardHosting::TabTipAdapter *v40; // rdi
  HSTRING v41; // rbx
  void **v42; // rax
  __int64 v43; // rax
  int v44; // eax
  KeyboardHosting::TabTipAdapter *v45; // rdi
  HSTRING v46; // rbx
  void **v47; // rax
  __int64 v48; // rax
  int v49; // eax
  KeyboardHosting::TabTipAdapter *v50; // rdi
  HSTRING v51; // rbx
  void **v52; // rax
  __int64 v53; // rax
  int v54; // eax
  KeyboardHosting::TabTipAdapter *v55; // rdi
  HSTRING v56; // rbx
  void **v57; // rax
  __int64 v58; // rax
  int v59; // eax
  int pdwType; // [rsp+20h] [rbp-E0h]
  int pdwTypea; // [rsp+20h] [rbp-E0h]
  void *v62; // [rsp+40h] [rbp-C0h] BYREF
  DWORD pcbData; // [rsp+48h] [rbp-B8h] BYREF
  DWORD v64; // [rsp+4Ch] [rbp-B4h] BYREF
  void *v65; // [rsp+50h] [rbp-B0h] BYREF
  PVOID v66[2]; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v67; // [rsp+68h] [rbp-98h]
  unsigned __int64 v68; // [rsp+70h] [rbp-90h]
  PVOID Src[2]; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v70; // [rsp+88h] [rbp-78h]
  unsigned __int64 v71; // [rsp+90h] [rbp-70h]
  void *v72[2]; // [rsp+98h] [rbp-68h] BYREF
  __int128 v73; // [rsp+A8h] [rbp-58h]
  void *v74[2]; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v75; // [rsp+C8h] [rbp-38h]
  HSTRING_HEADER hstringHeader; // [rsp+D8h] [rbp-28h] BYREF
  HSTRING v77; // [rsp+F0h] [rbp-10h]
  _BYTE v78[32]; // [rsp+F8h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+68h]

  v7 = a1;
  v62 = a1;
  pcbData = 0;
  v64 = 0;
  v70 = 0LL;
  v71 = 7LL;
  LOWORD(Src[0]) = 0;
  v8 = -1LL;
  v9 = -1LL;
  do
    ++v9;
  while ( a2[v9] );
  if ( v9 <= 7 )
  {
    v70 = v9;
    v22 = 2 * v9;
    memmove_0(Src, a2, v22);
    *(_WORD *)((char *)Src + v22) = 0;
  }
  else
  {
    if ( v9 > 0x7FFFFFFFFFFFFFFELL )
      std::_Xlen_string();
    v10 = std::wstring::_Calculate_growth(v9, 7LL, 0x7FFFFFFFFFFFFFFELL);
    if ( v10 + 1 > v11 )
      std::_Throw_bad_array_new_length();
    v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(2 * (v10 + 1));
    v70 = v9;
    v71 = v10;
    v13 = 2 * v9;
    memcpy_0(v12, a2, v13);
    *(_WORD *)&v12[v13] = 0;
    Src[0] = v12;
    v7 = v62;
  }
  v14 = std::wstring::insert(Src);
  v75 = 0uLL;
  *(_OWORD *)v74 = *(_OWORD *)v14;
  v75 = *(_OWORD *)(v14 + 16);
  *(_QWORD *)(v14 + 16) = 0LL;
  *(_QWORD *)(v14 + 24) = 7LL;
  *(_WORD *)v14 = 0;
  if ( v71 >= 8 )
    std::_Deallocate<16,0>(Src[0], 2 * v71 + 2);
  v70 = 0LL;
  v71 = 7LL;
  LOWORD(Src[0]) = 0;
  v67 = 0LL;
  v68 = 7LL;
  LOWORD(v66[0]) = 0;
  do
    ++v8;
  while ( a2[v8] );
  if ( v8 <= 7 )
  {
    v67 = v8;
    memmove_0(v66, a2, 2 * v8);
    *((_WORD *)v66 + v8) = 0;
  }
  else
  {
    if ( v8 > 0x7FFFFFFFFFFFFFFELL )
      std::_Xlen_string();
    v15 = std::wstring::_Calculate_growth(v8, 7LL, 0x7FFFFFFFFFFFFFFELL);
    if ( (unsigned __int64)(v15 + 1) > 0x7FFFFFFFFFFFFFFFLL )
      std::_Throw_bad_array_new_length();
    v16 = std::_Allocate<16,std::_Default_allocate_traits,0>(2 * (v15 + 1));
    v67 = v8;
    v68 = v15;
    memcpy_0(v16, a2, 2 * v8);
    *((_WORD *)v16 + v8) = 0;
    v66[0] = v16;
  }
  v17 = std::wstring::insert(v66);
  v73 = 0uLL;
  *(_OWORD *)v72 = *(_OWORD *)v17;
  v73 = *(_OWORD *)(v17 + 16);
  *(_QWORD *)(v17 + 16) = 0LL;
  *(_QWORD *)(v17 + 24) = 7LL;
  *(_WORD *)v17 = 0;
  if ( v68 >= 8 )
    std::_Deallocate<16,0>(v66[0], 2 * v68 + 2);
  v67 = 0LL;
  v68 = 7LL;
  LOWORD(v66[0]) = 0;
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
          &v64)
    && v64 )
  {
    v70 = 0LL;
    v71 = 7LL;
    LOWORD(Src[0]) = 0;
    v67 = 0LL;
    v68 = 7LL;
    LOWORD(v66[0]) = 0;
    if ( (unsigned __int64)pcbData >> 1 )
    {
      std::wstring::append(Src, (unsigned __int64)pcbData >> 1, 0LL);
    }
    else
    {
      v70 = 0LL;
      LOWORD(Src[0]) = 0;
    }
    v23 = (unsigned __int64)v64 >> 1;
    if ( v23 > v67 )
    {
      std::wstring::append(v66, v23 - v67, 0LL);
    }
    else
    {
      v24 = v66;
      if ( v68 >= 8 )
        v24 = (PVOID *)v66[0];
      v67 = (unsigned __int64)v64 >> 1;
      *((_WORD *)v24 + v23) = 0;
    }
    pvData = Src;
    if ( v71 >= 8 )
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
      goto LABEL_73;
    }
    v26 = v66;
    if ( v68 >= 8 )
      v26 = (PVOID *)v66[0];
    if ( RegGetValueW(
           HKEY_CURRENT_USER,
           L"SOFTWARE\\Microsoft\\TabletTip\\1.7\\SelectedThemeDark",
           a2,
           2u,
           0LL,
           v26,
           &v64) )
    {
LABEL_73:
      if ( !a3[2] && !a4[2] )
        goto LABEL_84;
      v40 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)v7 + 92);
      v77 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, &LocaleName, 1u, 0);
      v41 = v77;
      v42 = v74;
      if ( *((_QWORD *)&v75 + 1) >= 8uLL )
        v42 = (void **)v74[0];
      v62 = v42;
      v43 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v78, &v62);
      v44 = KeyboardHosting::TabTipAdapter::SetShellPreference(v40, *(HSTRING *)(v43 + 24), v41);
      if ( v44 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x136F,
          (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v44,
          pdwTypea);
      v45 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)v7 + 92);
      v77 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, &LocaleName, 1u, 0);
      v46 = v77;
      v47 = v72;
      if ( *((_QWORD *)&v73 + 1) >= 8uLL )
        v47 = (void **)v72[0];
      v62 = v47;
      v48 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v78, &v62);
      v49 = KeyboardHosting::TabTipAdapter::SetShellPreference(v45, *(HSTRING *)(v48 + 24), v46);
      if ( v49 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1370,
          (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v49,
          pdwTypea);
      std::wstring::assign(a3);
      v39 = a4;
    }
    else
    {
      if ( (!v67 || !(unsigned int)std::wstring::compare(v66, a3))
        && (!v70 || !(unsigned int)std::wstring::compare(Src, a4)) )
      {
        goto LABEL_84;
      }
      v27 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)v7 + 92);
      v28 = Src;
      if ( v71 >= 8 )
        v28 = (PVOID *)Src[0];
      v62 = v28;
      v29 = *(HSTRING *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &v62) + 24);
      v30 = v72;
      if ( *((_QWORD *)&v73 + 1) >= 8uLL )
        v30 = (void **)v72[0];
      v62 = v30;
      v31 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v78, &v62);
      v32 = KeyboardHosting::TabTipAdapter::SetShellPreference(v27, *(HSTRING *)(v31 + 24), v29);
      if ( v32 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1367,
          (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v32,
          pdwTypea);
      v33 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)v7 + 92);
      v34 = v66;
      if ( v68 >= 8 )
        v34 = (PVOID *)v66[0];
      v62 = v34;
      v35 = *(HSTRING *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(v78, &v62) + 24);
      v36 = v74;
      if ( *((_QWORD *)&v75 + 1) >= 8uLL )
        v36 = (void **)v74[0];
      v62 = v36;
      v37 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &v62);
      v38 = KeyboardHosting::TabTipAdapter::SetShellPreference(v33, *(HSTRING *)(v37 + 24), v35);
      if ( v38 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1368,
          (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v38,
          pdwTypea);
      if ( a4 != Src )
        std::wstring::assign(a4);
      if ( a3 == v66 )
        goto LABEL_84;
      v39 = a3;
    }
    std::wstring::assign(v39);
LABEL_84:
    std::wstring::_Tidy_deallocate(v66);
    std::wstring::_Tidy_deallocate(Src);
    goto LABEL_20;
  }
  if ( a3[2] || a4[2] )
  {
    v50 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)v7 + 92);
    v77 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, &LocaleName, 1u, 0);
    v51 = v77;
    v52 = v74;
    if ( *((_QWORD *)&v75 + 1) >= 8uLL )
      v52 = (void **)v74[0];
    v62 = v52;
    v53 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v78, &v62);
    v54 = KeyboardHosting::TabTipAdapter::SetShellPreference(v50, *(HSTRING *)(v53 + 24), v51);
    if ( v54 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1378,
        (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v54,
        pdwType);
    v55 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)v7 + 92);
    v77 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, &LocaleName, 1u, 0);
    v56 = v77;
    v57 = v72;
    if ( *((_QWORD *)&v73 + 1) >= 8uLL )
      v57 = (void **)v72[0];
    v62 = v57;
    v58 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v78, &v62);
    v59 = KeyboardHosting::TabTipAdapter::SetShellPreference(v55, *(HSTRING *)(v58 + 24), v56);
    if ( v59 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1379,
        (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v59,
        pdwType);
    std::wstring::assign(a3);
    std::wstring::assign(a4);
  }
LABEL_20:
  if ( *((_QWORD *)&v73 + 1) >= 8uLL )
  {
    v18 = (void *)(2LL * *((_QWORD *)&v73 + 1) + 2);
    v65 = v18;
    v19 = v72[0];
    v62 = v72[0];
    if ( (unsigned __int64)v18 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v62, (unsigned __int64 *)&v65);
      v18 = v65;
      v19 = v62;
    }
    operator delete(v19, (unsigned __int64)v18);
  }
  *(_QWORD *)&v73 = 0LL;
  *((_QWORD *)&v73 + 1) = 7LL;
  LOWORD(v72[0]) = 0;
  if ( *((_QWORD *)&v75 + 1) >= 8uLL )
  {
    v20 = (void *)(2LL * *((_QWORD *)&v75 + 1) + 2);
    v62 = v20;
    v21 = v74[0];
    v65 = v74[0];
    if ( (unsigned __int64)v20 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v65, (unsigned __int64 *)&v62);
      v20 = v62;
      v21 = v65;
    }
    operator delete(v21, (unsigned __int64)v20);
  }
}
