/*
 * XREFs of _lambda_a111f9909dcb1fbe287f852ebd02ec50_::operator() @ 0x1800B5E3C
 * Callers:
 *     wil::details::functor_wrapper_other__lambda_a111f9909dcb1fbe287f852ebd02ec50__&_std::shared_ptr_CreativeFramework::Actions::PinWebsiteToTaskbarService___::Run @ 0x1800B6700 (wil--details--functor_wrapper_other__lambda_a111f9909dcb1fbe287f852ebd02ec50__-_std--shared_ptr_.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x180062764 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     ??$GetRequiredParameter@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@3@PEB_W@Z @ 0x1800A93A8 (--$GetRequiredParameter@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Action.c)
 *     ??$make_shared@VPinWebsiteToTaskbarService@Actions@CreativeFramework@@PEB_WPEB_WPEB_W@std@@YA?AV?$shared_ptr@VPinWebsiteToTaskbarService@Actions@CreativeFramework@@@0@$$QEAPEB_W00@Z @ 0x1800B5BA4 (--$make_shared@VPinWebsiteToTaskbarService@Actions@CreativeFramework@@PEB_WPEB_WPEB_W@std@@YA-AV.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall lambda_a111f9909dcb1fbe287f852ebd02ec50_::operator()(_QWORD **a1, _QWORD *a2)
{
  _QWORD *v3; // rbx
  _QWORD v5[4]; // [rsp+40h] [rbp-19h] BYREF
  _QWORD v6[4]; // [rsp+60h] [rbp+7h] BYREF
  _QWORD v7[4]; // [rsp+80h] [rbp+27h] BYREF

  v3 = *a1;
  CreativeFramework::Actions::GetRequiredParameter<std::wstring>((__int64)v7, *a1);
  CreativeFramework::Actions::GetRequiredParameter<std::wstring>((__int64)v6, v3);
  CreativeFramework::Actions::GetRequiredParameter<std::wstring>((__int64)v5, v3);
  std::make_shared<CreativeFramework::Actions::PinWebsiteToTaskbarService,wchar_t const *,wchar_t const *,wchar_t const *>(a2);
  std::wstring::_Tidy(v5, 1, 0LL);
  std::wstring::_Tidy(v6, 1, 0LL);
  std::wstring::_Tidy(v7, 1, 0LL);
  return a2;
}
