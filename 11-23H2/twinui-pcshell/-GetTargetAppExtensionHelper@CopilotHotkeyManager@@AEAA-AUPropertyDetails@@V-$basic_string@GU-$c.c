/*
 * XREFs of ?GetTargetAppExtensionHelper@CopilotHotkeyManager@@AEAA?AUPropertyDetails@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UPropertySet@Collections@Foundation@Windows@winrt@@@Z @ 0x18026428C
 * Callers:
 *     ?GetTargetAppExtensionDetails@CopilotHotkeyManager@@AEAA?AUTargetAppExtensionDetails@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1802638C0 (-GetTargetAppExtensionDetails@CopilotHotkeyManager@@AEAA-AUTargetAppExtensionDetails@@V-$basic_s.c)
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180098C40 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800B25FC (--0hstring@param@winrt@@QEAA@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@Z.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1800B3E54 (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800B498C (--1hstring@winrt@@QEAA@XZ.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800B6CE4 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800C29B0 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$unbox_value_or@Uhstring@winrt@@$0A@@winrt@@YA?AUhstring@0@AEBUIInspectable@Foundation@Windows@0@AEBU1param@0@@Z @ 0x180260800 (--$unbox_value_or@Uhstring@winrt@@$0A@@winrt@@YA-AUhstring@0@AEBUIInspectable@Foundation@Windows.c)
 *     ?HasKey@?$consume_Windows_Foundation_Collections_IMap@UIPropertySet@Collections@Foundation@Windows@winrt@@Uhstring@5@UIInspectable@345@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1802645F8 (-HasKey@-$consume_Windows_Foundation_Collections_IMap@UIPropertySet@Collections@Foundation@Windo.c)
 *     ?Lookup@?$consume_Windows_Foundation_Collections_IMap@UIPropertySet@Collections@Foundation@Windows@winrt@@Uhstring@5@UIInspectable@345@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x180271C00 (-Lookup@-$consume_Windows_Foundation_Collections_IMap@UIPropertySet@Collections@Foundation@Windo.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?stoi@std@@YAHAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@PEA_KH@Z @ 0x18051D74C (-stoi@std@@YAHAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@1@PEA_KH@Z.c)
 */

// Hidden C++ exception states: #wind=9
_OWORD *__fastcall CopilotHotkeyManager::GetTargetAppExtensionHelper(
        __int64 a1,
        _OWORD *a2,
        const unsigned __int16 *a3,
        winrt::impl *a4)
{
  __m128i si128; // xmm6
  void (__fastcall ***v8)(_QWORD, void *, __int64 *); // rcx
  __int64 v9; // rdi
  void (__fastcall ****v10)(_QWORD, void *, __int64 *); // rax
  winrt::hstring *v11; // rax
  unsigned __int16 *v12; // rax
  void (__fastcall ****v13)(_QWORD, void *, __int64 *); // rax
  winrt::hstring *v14; // rax
  unsigned __int16 *v15; // rax
  unsigned __int64 v16; // r8
  __int64 v18; // [rsp+28h] [rbp-E0h] BYREF
  void *v19; // [rsp+30h] [rbp-D8h] BYREF
  void *v20; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v21; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v22[8]; // [rsp+50h] [rbp-B8h] BYREF
  winrt::impl *v23[5]; // [rsp+58h] [rbp-B0h] BYREF
  winrt::impl *v24[4]; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v25[32]; // [rsp+A0h] [rbp-68h] BYREF
  const unsigned __int16 *v26; // [rsp+C0h] [rbp-48h]
  __int128 v27; // [rsp+C8h] [rbp-40h] BYREF
  __m128i v28; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v29; // [rsp+E8h] [rbp-20h]
  wchar_t String[16]; // [rsp+F0h] [rbp-18h] BYREF

  v19 = a2;
  v26 = a3;
  v23[4] = a4;
  *(_QWORD *)&v27 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v28 = si128;
  v29 = 0LL;
  winrt::param::hstring::hstring((winrt::param::hstring *)String, a3);
  if ( (unsigned __int8)winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IPropertySet,winrt::hstring,winrt::Windows::Foundation::IInspectable>::HasKey(
                          a4,
                          String) )
  {
    winrt::param::hstring::hstring((winrt::param::hstring *)v25, a3);
    v8 = *(void (__fastcall ****)(_QWORD, void *, __int64 *))winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IPropertySet,winrt::hstring,winrt::Windows::Foundation::IInspectable>::Lookup(
                                                               a4,
                                                               v22,
                                                               v25);
    if ( v8 )
    {
      v21 = 0LL;
      (**v8)(v8, &winrt::impl::guid_v<winrt::Windows::Foundation::Collections::IPropertySet>, &v21);
      v9 = v21;
      v18 = v21;
    }
    else
    {
      v18 = 0LL;
      v9 = 0LL;
    }
    winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)v22);
    if ( v9 )
    {
      winrt::param::hstring::hstring((winrt::param::hstring *)String, L"@MessageWParam");
      if ( (unsigned __int8)winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IPropertySet,winrt::hstring,winrt::Windows::Foundation::IInspectable>::HasKey(
                              &v18,
                              String) )
      {
        LOBYTE(v29) = 1;
        winrt::param::hstring::hstring((winrt::param::hstring *)v23, L"0");
        winrt::param::hstring::hstring((winrt::param::hstring *)v24, L"@MessageWParam");
        v10 = (void (__fastcall ****)(_QWORD, void *, __int64 *))winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IPropertySet,winrt::hstring,winrt::Windows::Foundation::IInspectable>::Lookup(
                                                                   &v18,
                                                                   &v19,
                                                                   v24);
        v11 = winrt::unbox_value_or<winrt::hstring,0>((winrt::hstring *)&v20, v10, v23);
        v12 = (unsigned __int16 *)winrt::hstring::c_str(v11);
        std::wstring::wstring(String, v12);
        HIDWORD(v29) = std::stoi(String);
        std::wstring::_Tidy_deallocate((__int64)String);
        winrt::hstring::~hstring(&v20);
        winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v19);
      }
      winrt::param::hstring::hstring((winrt::param::hstring *)v23, L"#text");
      if ( (unsigned __int8)winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IPropertySet,winrt::hstring,winrt::Windows::Foundation::IInspectable>::HasKey(
                              &v18,
                              v23) )
      {
        winrt::param::hstring::hstring((winrt::param::hstring *)v24, &LocaleName);
        winrt::param::hstring::hstring((winrt::param::hstring *)v23, L"#text");
        v13 = (void (__fastcall ****)(_QWORD, void *, __int64 *))winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IPropertySet,winrt::hstring,winrt::Windows::Foundation::IInspectable>::Lookup(
                                                                   &v18,
                                                                   &v20,
                                                                   v23);
        v14 = winrt::unbox_value_or<winrt::hstring,0>((winrt::hstring *)&v19, v13, v24);
        v15 = (unsigned __int16 *)winrt::hstring::c_str(v14);
        v16 = -1LL;
        do
          ++v16;
        while ( v15[v16] );
        std::wstring::assign((char *)&v27, v15, v16);
        winrt::hstring::~hstring(&v19);
        winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v20);
        si128 = _mm_loadu_si128(&v28);
      }
    }
    winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v18);
  }
  *a2 = v27;
  a2[1] = si128;
  v28 = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(v27) = 0;
  *((_BYTE *)a2 + 32) = v29;
  *((_DWORD *)a2 + 9) = HIDWORD(v29);
  std::wstring::_Tidy_deallocate((__int64)&v27);
  std::wstring::_Tidy_deallocate((__int64)a3);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>(a4);
  return a2;
}
