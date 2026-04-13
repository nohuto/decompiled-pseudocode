/*
 * XREFs of wil::details::functor_wrapper_other__lambda_a111f9909dcb1fbe287f852ebd02ec50__&_std::shared_ptr_CreativeFramework::Actions::PinWebsiteToTaskbarService___::Run @ 0x1800C9410
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004094 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??1?$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ @ 0x180057E48 (--1-$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ.c)
 *     ??$GetRequiredParameter@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@3@PEB_W@Z @ 0x1800B90EC (--$GetRequiredParameter@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Action.c)
 *     ??$?0PEB_WPEB_WPEB_W@?$_Ref_count_obj@VPinWebsiteToTaskbarService@Actions@CreativeFramework@@@std@@QEAA@$$QEAPEB_W00@Z @ 0x1800C8780 (--$-0PEB_WPEB_WPEB_W@-$_Ref_count_obj@VPinWebsiteToTaskbarService@Actions@CreativeFramework@@@st.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall wil::details::functor_wrapper_other__lambda_a111f9909dcb1fbe287f852ebd02ec50____std::shared_ptr_CreativeFramework::Actions::PinWebsiteToTaskbarService___::Run(
        __int64 a1)
{
  _QWORD **v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  void *v6; // rax
  __int64 v7; // rbx
  _QWORD *v8; // rcx
  char *v10; // [rsp+28h] [rbp-61h] BYREF
  char *v11; // [rsp+30h] [rbp-59h] BYREF
  char *v12; // [rsp+38h] [rbp-51h] BYREF
  _QWORD v13[2]; // [rsp+40h] [rbp-49h] BYREF
  _QWORD v14[2]; // [rsp+50h] [rbp-39h] BYREF
  int v15[2]; // [rsp+60h] [rbp-29h] BYREF
  __int64 v16; // [rsp+70h] [rbp-19h]
  unsigned __int64 v17; // [rsp+78h] [rbp-11h]
  int v18[2]; // [rsp+80h] [rbp-9h] BYREF
  __int64 v19; // [rsp+90h] [rbp+7h]
  unsigned __int64 v20; // [rsp+98h] [rbp+Fh]
  int v21[2]; // [rsp+A0h] [rbp+17h] BYREF
  unsigned __int64 v22; // [rsp+B8h] [rbp+2Fh]

  v2 = *(_QWORD ***)(a1 + 8);
  v3 = CreativeFramework::Actions::GetRequiredParameter<std::wstring>((__int64)v21, *v2, (char *)L"icon");
  if ( *(_QWORD *)(v3 + 24) >= 8uLL )
    v3 = *(_QWORD *)v3;
  v10 = (char *)v3;
  v4 = CreativeFramework::Actions::GetRequiredParameter<std::wstring>((__int64)v18, *v2, (char *)L"uri");
  if ( *(_QWORD *)(v4 + 24) >= 8uLL )
    v4 = *(_QWORD *)v4;
  v11 = (char *)v4;
  v5 = CreativeFramework::Actions::GetRequiredParameter<std::wstring>((__int64)v15, *v2, (char *)L"title");
  if ( *(_QWORD *)(v5 + 24) >= 8uLL )
    v5 = *(_QWORD *)v5;
  v12 = (char *)v5;
  v6 = operator new(0x78uLL);
  v13[0] = v6;
  if ( v6 )
    v7 = std::_Ref_count_obj<CreativeFramework::Actions::PinWebsiteToTaskbarService>::_Ref_count_obj<CreativeFramework::Actions::PinWebsiteToTaskbarService>(
           (__int64)v6,
           &v12,
           &v11,
           &v10);
  else
    v7 = 0LL;
  if ( v17 >= 8 )
    operator delete(*(void **)v15);
  v17 = 7LL;
  v16 = 0LL;
  LOWORD(v15[0]) = 0;
  if ( v20 >= 8 )
    operator delete(*(void **)v18);
  v20 = 7LL;
  v19 = 0LL;
  LOWORD(v18[0]) = 0;
  if ( v22 >= 8 )
    operator delete(*(void **)v21);
  v8 = *(_QWORD **)(a1 + 16);
  v14[1] = 0LL;
  v14[0] = 0LL;
  v13[1] = v8[1];
  v8[1] = v7;
  v13[0] = *v8;
  *v8 = v7 + 16;
  std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)v13);
  std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)v14);
  return 0LL;
}
