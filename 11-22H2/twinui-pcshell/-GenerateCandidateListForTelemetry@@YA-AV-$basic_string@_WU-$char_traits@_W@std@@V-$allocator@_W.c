/*
 * XREFs of ?GenerateCandidateListForTelemetry@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBU?$IVectorView@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@Z @ 0x18076C6EC
 * Callers:
 *     ?Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18076D9B0 (-Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z.c)
 * Callees:
 *     ?Size@?$consume_Windows_Foundation_Collections_IVectorView@U?$IVectorView@UWindowTabView@Shell@UI@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UWindowTabView@Shell@UI@Internal@45@@impl@winrt@@QEBA@XZ @ 0x180035110 (-Size@-$consume_Windows_Foundation_Collections_IVectorView@U-$IVectorView@UWindowTabView@Shell@U.c)
 *     ?GetAt@?$consume_Windows_Foundation_Collections_IVectorView@U?$IVectorView@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UISwitchItem@Multitasking@ComposableShell@Internal@45@@impl@winrt@@QEBA@I@Z @ 0x180079B08 (-GetAt@-$consume_Windows_Foundation_Collections_IVectorView@U-$IVectorView@UISwitchItem@Multitas.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z @ 0x1802DF052 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??Bhstring@winrt@@QEBA?AV?$basic_string_view@_WU?$char_traits@_W@std@@@std@@XZ @ 0x180762E34 (--Bhstring@winrt@@QEBA-AV-$basic_string_view@_WU-$char_traits@_W@std@@@std@@XZ.c)
 *     ??$?6_WU?$char_traits@_W@std@@@std@@YAAEAV?$basic_ostream@_WU?$char_traits@_W@std@@@0@AEAV10@PEB_W@Z @ 0x180768BD0 (--$-6_WU-$char_traits@_W@std@@@std@@YAAEAV-$basic_ostream@_WU-$char_traits@_W@std@@@0@AEAV10@PEB.c)
 *     ??0?$basic_stringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@XZ @ 0x180769B34 (--0-$basic_stringstream@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@XZ.c)
 *     ??1?$basic_stringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UEAA@XZ @ 0x18076A4B0 (--1-$basic_stringstream@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@UEAA@XZ.c)
 *     ?ApplicationId@?$consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItem@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18076AE64 (-ApplicationId@-$consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItem@UISwitchItem@.c)
 *     ?_Get_buffer_view@?$basic_stringbuf@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBA?AU_Buffer_view@12@XZ @ 0x18076EE70 (-_Get_buffer_view@-$basic_stringbuf@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBA-AU_Buf.c)
 */

// Hidden C++ exception states: #wind=5
char *__fastcall GenerateCandidateListForTelemetry(_QWORD *a1, __int64 *a2)
{
  int v4; // esi
  const char *v5; // r9
  char *result; // rax
  signed int v7; // eax
  __int64 v8; // r13
  const WCHAR *FileNameW; // r15
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned int v13; // r14d
  int v14; // eax
  char *v15; // rbx
  __int64 v16; // [rsp+20h] [rbp-168h] BYREF
  int v17; // [rsp+28h] [rbp-160h]
  int v18; // [rsp+2Ch] [rbp-15Ch]
  __int64 v19; // [rsp+30h] [rbp-158h] BYREF
  volatile signed __int32 *v20; // [rsp+38h] [rbp-150h] BYREF
  void *v21; // [rsp+40h] [rbp-148h]
  LPCWSTR pszPath[3]; // [rsp+48h] [rbp-140h] BYREF
  char v23[16]; // [rsp+60h] [rbp-128h] BYREF
  char v24[8]; // [rsp+70h] [rbp-118h] BYREF
  char v25[128]; // [rsp+78h] [rbp-110h] BYREF
  _BYTE v26[104]; // [rsp+F8h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  v21 = a1;
  v4 = 0;
  v17 = 0;
  try
  {
    std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>((__int64)v23);
    v13 = 0;
    v14 = winrt::impl::consume_Windows_Foundation_Collections_IVectorView<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Internal::UI::Shell::WindowTabView>,winrt::Windows::Internal::UI::Shell::WindowTabView>::Size(a2);
    v18 = v14;
    while ( v13 != v14 )
    {
      winrt::impl::consume_Windows_Foundation_Collections_IVectorView<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem>,winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem>::GetAt(
        a2,
        &v16,
        v13);
      v4 |= 2u;
      winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItem<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem>::ApplicationId(
        &v16,
        &v20);
      v19 = 0LL;
      v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v16 + 72LL))(v16, &v19);
      if ( v7 < 0 )
        winrt::throw_hresult(v7);
      v8 = v19;
      winrt::hstring::operator std::wstring_view((__int64 *)&v20, pszPath);
      FileNameW = pszPath[0];
      if ( !PathIsFileSpecW(pszPath[0]) )
        FileNameW = PathFindFileNameW(FileNameW);
      v10 = std::operator<<<wchar_t,std::char_traits<wchar_t>>((__int64)v24, (__int64)FileNameW);
      v11 = std::operator<<<wchar_t,std::char_traits<wchar_t>>(v10, (__int64)L":");
      v12 = std::wostream::operator<<(v11, v8);
      std::operator<<<wchar_t,std::char_traits<wchar_t>>(v12, (__int64)L";");
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v20);
      if ( v16 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v16);
      ++v13;
      v14 = v18;
    }
    *a1 = 0LL;
    a1[2] = 0LL;
    a1[3] = 7LL;
    *(_WORD *)a1 = 0;
    v17 = v4 | 0x20;
    std::wstringbuf::_Get_buffer_view(v25, pszPath);
    if ( pszPath[0] )
      std::wstring::assign((char *)a1, pszPath[0], (unsigned __int64)pszPath[1]);
    std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>::~basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>((__int64)v26);
    std::wios::~wios<wchar_t,std::char_traits<wchar_t>>(v26);
    result = (char *)a1;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xF8,
      (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewhost.cpp",
      v5);
    v15 = (char *)v21;
    *(_QWORD *)v21 = 0LL;
    *((_QWORD *)v15 + 2) = 0LL;
    *((_QWORD *)v15 + 3) = 7LL;
    *(_WORD *)v15 = 0;
    std::wstring::assign(v15, &LocaleName, 0LL);
    return v15;
  }
  return result;
}
