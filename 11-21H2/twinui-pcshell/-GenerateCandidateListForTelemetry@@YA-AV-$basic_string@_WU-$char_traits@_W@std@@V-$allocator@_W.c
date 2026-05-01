/*
 * XREFs of ?GenerateCandidateListForTelemetry@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBU?$IVectorView@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@Z @ 0x180602444
 * Callers:
 *     ?Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x1806031D0 (-Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z.c)
 * Callees:
 *     ??$end@U?$IVectorView@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@$0A@@impl@winrt@@YA?AU?$fast_iterator@U?$IVectorView@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@01@AEBU?$IVectorView@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@Collections@Foundation@Windows@1@@Z @ 0x18001D058 (--$end@U-$IVectorView@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@Collect.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800F2B84 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z @ 0x180421750 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z.c)
 *     ??Bhstring@winrt@@QEBA?AV?$basic_string_view@_WU?$char_traits@_W@std@@@std@@XZ @ 0x180421B9C (--Bhstring@winrt@@QEBA-AV-$basic_string_view@_WU-$char_traits@_W@std@@@std@@XZ.c)
 *     ?GetAt@?$consume_Windows_Foundation_Collections_IVectorView@U?$IVectorView@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UISwitchItem@Multitasking@ComposableShell@Internal@45@@impl@winrt@@QEBA?AUISwitchItem@Multitasking@ComposableShell@Internal@Windows@3@I@Z @ 0x180454180 (-GetAt@-$consume_Windows_Foundation_Collections_IVectorView@U-$IVectorView@UISwitchItem@Multitas.c)
 *     ??$?6_WU?$char_traits@_W@std@@@std@@YAAEAV?$basic_ostream@_WU?$char_traits@_W@std@@@0@AEAV10@PEB_W@Z @ 0x1805FF188 (--$-6_WU-$char_traits@_W@std@@@std@@YAAEAV-$basic_ostream@_WU-$char_traits@_W@std@@@0@AEAV10@PEB.c)
 *     ??0?$basic_stringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@XZ @ 0x180600154 (--0-$basic_stringstream@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@XZ.c)
 *     ??1?$basic_stringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UEAA@XZ @ 0x180600A48 (--1-$basic_stringstream@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@UEAA@XZ.c)
 *     ?ApplicationId@?$consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItem@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUhstring@3@XZ @ 0x18060147C (-ApplicationId@-$consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItem@UISwitchItem@.c)
 *     ?str@?$basic_stringbuf@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@XZ @ 0x18060518C (-str@-$basic_stringbuf@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBA-AV-$basic_string@_W.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall GenerateCandidateListForTelemetry(__int64 a1, __int64 *a2)
{
  int v4; // r12d
  const char *v5; // r9
  __int64 result; // rax
  signed int v7; // eax
  __int64 v8; // rbx
  const WCHAR *FileNameW; // r15
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // esi
  volatile signed __int32 *v17; // [rsp+20h] [rbp-168h] BYREF
  int v18; // [rsp+28h] [rbp-160h]
  _BYTE v19[8]; // [rsp+30h] [rbp-158h] BYREF
  int v20; // [rsp+38h] [rbp-150h]
  LPCWSTR pszPath[2]; // [rsp+40h] [rbp-148h] BYREF
  _BYTE v22[16]; // [rsp+50h] [rbp-138h] BYREF
  _BYTE v23[8]; // [rsp+60h] [rbp-128h] BYREF
  _BYTE v24[128]; // [rsp+68h] [rbp-120h] BYREF
  _BYTE v25[160]; // [rsp+E8h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]
  __int64 v28; // [rsp+1A0h] [rbp+18h] BYREF
  __int64 v29; // [rsp+1A8h] [rbp+20h] BYREF

  v4 = 0;
  v18 = 0;
  try
  {
    std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>((__int64)v22);
    v16 = 0;
    winrt::impl::end<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem>,0>(
      (__int64)v19,
      a2);
    while ( v16 != v20 )
    {
      winrt::impl::consume_Windows_Foundation_Collections_IVectorView<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem>,winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem>::GetAt(
        a2,
        &v28,
        v16);
      v4 |= 2u;
      winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItem<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem>::ApplicationId(
        &v28,
        &v17);
      v29 = 0LL;
      v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v28 + 72LL))(v28, &v29);
      if ( v7 < 0 )
        winrt::throw_hresult(v7);
      v8 = v29;
      winrt::hstring::operator std::wstring_view((__int64 *)&v17, pszPath);
      FileNameW = pszPath[0];
      if ( !PathIsFileSpecW(pszPath[0]) )
        FileNameW = PathFindFileNameW(FileNameW);
      v10 = std::operator<<<wchar_t,std::char_traits<wchar_t>>((__int64)v23, (__int64)FileNameW);
      v11 = std::operator<<<wchar_t,std::char_traits<wchar_t>>(v10, (__int64)L":");
      v12 = std::wostream::operator<<(v11, v8);
      std::operator<<<wchar_t,std::char_traits<wchar_t>>(v12, (__int64)L";");
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v17, v13, v14, v15);
      if ( v28 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v28);
      ++v16;
    }
    std::wstringbuf::str(v24, a1);
    std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>::~basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>((__int64)v25);
    std::wios::~wios<wchar_t,std::char_traits<wchar_t>>(v25);
    result = a1;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xD2,
      (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewhost.cpp",
      v5);
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 7LL;
    *(_WORD *)a1 = 0;
    std::wstring::assign((char *)a1, &LocaleName, 0LL);
    return a1;
  }
  return result;
}
