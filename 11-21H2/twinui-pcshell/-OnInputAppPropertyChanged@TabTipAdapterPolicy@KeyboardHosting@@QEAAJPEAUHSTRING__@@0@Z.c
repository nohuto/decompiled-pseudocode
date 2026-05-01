/*
 * XREFs of ?OnInputAppPropertyChanged@TabTipAdapterPolicy@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x1804826E8
 * Callers:
 *     ?OnInputAppPropertiesChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreTextPropertyBag@Core@Text@Internal@UI@Windows@@PEAUICoreTextPropertyBagPropertyValueChangedEventArgs@45678@@Z @ 0x1804731C0 (-OnInputAppPropertiesChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreTextPropertyBag@Core@T.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180089570 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18010AACC (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?substr@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV12@_K0@Z @ 0x180197640 (-substr@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA-AV12@_K0@Z.c)
 *     ?find@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_KQEBG_K@Z @ 0x1803901E8 (-find@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_KQEBG_K@Z.c)
 *     ?stoul@std@@YAKAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@PEA_KH@Z @ 0x18046AB88 (-stoul@std@@YAKAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@1@PEA_KH@Z.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x180480278 (--$_Try_emplace@AEBI$$V@-$map@IV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U-$.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::OnInputAppPropertyChanged(
        KeyboardHosting::TabTipAdapterPolicy *this,
        HSTRING a2,
        HSTRING a3)
{
  WCHAR *StringRawBuffer; // rax
  WCHAR *v6; // rax
  wchar_t *v7; // rax
  wchar_t *v8; // rdx
  __int64 v9; // r8
  unsigned int v10; // eax
  char *v11; // rcx
  _QWORD *v12; // rdx
  wchar_t *v13; // rax
  wchar_t *v14; // rdx
  __int64 v15; // r8
  unsigned int v16; // eax
  char *v17; // rcx
  _QWORD *v18; // rdx
  unsigned int v20; // [rsp+20h] [rbp-29h] BYREF
  _QWORD v21[2]; // [rsp+28h] [rbp-21h] BYREF
  unsigned __int64 v22; // [rsp+38h] [rbp-11h]
  unsigned __int64 v23; // [rsp+40h] [rbp-9h]
  _BYTE v24[32]; // [rsp+48h] [rbp-1h] BYREF
  _QWORD v25[4]; // [rsp+68h] [rbp+1Fh] BYREF

  StringRawBuffer = (WCHAR *)WindowsGetStringRawBuffer(a2, 0LL);
  std::wstring::wstring(v25, StringRawBuffer);
  v6 = (WCHAR *)WindowsGetStringRawBuffer(a3, 0LL);
  std::wstring::wstring(v21, v6);
  if ( std::wstring::find(v25, L"RegistryKeyNameForLastPositionX:", 0LL) != -1 )
  {
    v7 = (wchar_t *)std::wstring::substr(v25, (__int64)v24, 0x20uLL, 0xFFFFFFFFFFFFFFFFuLL);
    std::stoul(v7, v8, v9);
    v20 = v10;
    std::wstring::_Tidy_deallocate((__int64)v24);
    v11 = (char *)(*(_QWORD *)std::map<unsigned int,std::wstring>::_Try_emplace<unsigned int const &,>(
                                (__int64 *)this + 9,
                                (__int64)v24,
                                &v20)
                 + 40LL);
    if ( v11 != (char *)v21 )
    {
      v12 = v21;
      if ( v23 >= 8 )
        v12 = (_QWORD *)v21[0];
      std::wstring::assign(v11, v12, v22);
    }
  }
  if ( std::wstring::find(v25, L"RegistryKeyNameForLastPositionY:", 0LL) != -1 )
  {
    v13 = (wchar_t *)std::wstring::substr(v25, (__int64)v24, 0x20uLL, 0xFFFFFFFFFFFFFFFFuLL);
    std::stoul(v13, v14, v15);
    v20 = v16;
    std::wstring::_Tidy_deallocate((__int64)v24);
    v17 = (char *)(*(_QWORD *)std::map<unsigned int,std::wstring>::_Try_emplace<unsigned int const &,>(
                                (__int64 *)this + 11,
                                (__int64)v24,
                                &v20)
                 + 40LL);
    if ( v17 != (char *)v21 )
    {
      v18 = v21;
      if ( v23 >= 8 )
        v18 = (_QWORD *)v21[0];
      std::wstring::assign(v17, v18, v22);
    }
  }
  std::wstring::_Tidy_deallocate((__int64)v21);
  std::wstring::_Tidy_deallocate((__int64)v25);
  return 0LL;
}
