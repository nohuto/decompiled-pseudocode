/*
 * XREFs of ?UpdateShellPreferenceBasedOnThemeString@TouchKeyboardExperienceManager@@AEAAXQEBGAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800A7220
 * Callers:
 *     ?OnTabtipRegistryChanged@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1800A7A68 (-OnTabtipRegistryChanged@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEBG$$QEAV10@@Z @ 0x180096F40 (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_tra_ea_180096F40.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180098C40 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18009ACBC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800C29B0 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x1800C3738 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x1802CED4A (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KG@Z.c)
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHAEBV12@@Z @ 0x1802D3736 (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHAEBV12@@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall TouchKeyboardExperienceManager::UpdateShellPreferenceBasedOnThemeString(
        __int64 a1,
        WCHAR *a2,
        PVOID *a3)
{
  unsigned __int64 v6; // rdx
  unsigned __int64 v8; // rdx
  PVOID *v9; // rax
  PVOID *pvData; // rax
  PVOID *v11; // rax
  PVOID *v12; // rdx
  _QWORD *v13; // rax
  __int64 v14; // rdx
  unsigned int v15; // r8d
  KeyboardHosting::TabTipAdapter *v16; // rdi
  HSTRING Reserved1; // rbx
  unsigned int v18; // r8d
  const WCHAR *v19; // rax
  HSTRING_HEADER *v20; // rax
  int v21; // eax
  __int64 v22; // rdx
  int pdwType; // [rsp+20h] [rbp-89h]
  DWORD pcbData; // [rsp+40h] [rbp-69h] BYREF
  const WCHAR *v25; // [rsp+48h] [rbp-61h] BYREF
  PVOID v26[2]; // [rsp+50h] [rbp-59h] BYREF
  unsigned __int64 v27; // [rsp+60h] [rbp-49h]
  unsigned __int64 v28; // [rsp+68h] [rbp-41h]
  _QWORD v29[4]; // [rsp+70h] [rbp-39h] BYREF
  HSTRING_HEADER v30; // [rsp+90h] [rbp-19h] BYREF
  HSTRING_HEADER v31; // [rsp+B0h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  pcbData = 0;
  v26[0] = 0LL;
  v27 = 0LL;
  v28 = 7LL;
  if ( RegGetValueW(HKEY_CURRENT_USER, L"SOFTWARE\\Microsoft\\TabletTip\\1.7", a2, 2u, 0LL, 0LL, &pcbData) || !pcbData )
    goto LABEL_35;
  v8 = (unsigned __int64)pcbData >> 1;
  if ( v8 > v27 )
  {
    std::wstring::append(v26, v8 - v27, 0LL);
  }
  else
  {
    v9 = v26;
    if ( v28 >= 8 )
      v9 = (PVOID *)v26[0];
    v27 = (unsigned __int64)pcbData >> 1;
    *((_WORD *)v9 + v8) = 0;
  }
  pvData = v26;
  if ( v28 >= 8 )
    pvData = (PVOID *)v26[0];
  if ( RegGetValueW(HKEY_CURRENT_USER, L"SOFTWARE\\Microsoft\\TabletTip\\1.7", a2, 2u, 0LL, pvData, &pcbData) )
  {
LABEL_35:
    if ( !a3[2] )
      return std::wstring::_Tidy_deallocate(v26, v6);
    v12 = (PVOID *)&LocaleName;
    goto LABEL_25;
  }
  v6 = (unsigned __int64)pcbData >> 1;
  if ( v6 > v27 )
  {
    std::wstring::append(v26, v6 - v27, 0LL);
  }
  else
  {
    v11 = v26;
    if ( v28 >= 8 )
      v11 = (PVOID *)v26[0];
    v27 = (unsigned __int64)pcbData >> 1;
    *((_WORD *)v11 + v6) = 0;
  }
  if ( v27 && (unsigned int)std::wstring::compare(v26, a3) )
  {
    if ( a3 == v26 )
    {
LABEL_26:
      v13 = std::wstring::wstring(&v30, a2);
      std::operator+<unsigned short>(v29, (__int64)L"KeyboardTheme_", v13);
      std::wstring::_Tidy_deallocate(&v30, v14);
      v16 = *(KeyboardHosting::TabTipAdapter **)(a1 + 584);
      if ( (unsigned __int64)a3[3] >= 8 )
        a3 = (PVOID *)*a3;
      v25 = (const WCHAR *)a3;
      Reserved1 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v30, &v25, v15)[1].Reserved.Reserved1;
      v19 = (const WCHAR *)v29;
      if ( v29[3] >= 8uLL )
        v19 = (const WCHAR *)v29[0];
      v25 = v19;
      v20 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v31, &v25, v18);
      v21 = KeyboardHosting::TabTipAdapter::SetShellPreference(v16, (HSTRING)v20[1].Reserved.Reserved1, Reserved1);
      if ( v21 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1256,
          (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v21,
          pdwType);
      std::wstring::_Tidy_deallocate(v29, v22);
      return std::wstring::_Tidy_deallocate(v26, v6);
    }
    v12 = v26;
    if ( v28 >= 8 )
      v12 = (PVOID *)v26[0];
LABEL_25:
    std::wstring::assign(a3, v12);
    goto LABEL_26;
  }
  return std::wstring::_Tidy_deallocate(v26, v6);
}
