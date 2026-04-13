/*
 * XREFs of ?MakePublishWindowsTipService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x1800CE000
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??1?$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ @ 0x180057E48 (--1-$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ.c)
 *     ??$GetRequiredParameter@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@3@PEB_W@Z @ 0x1800B90EC (--$GetRequiredParameter@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Action.c)
 *     ??$make_shared@VPublishWindowsTipService@Actions@CreativeFramework@@PEB_WPEB_W@std@@YA?AV?$shared_ptr@VPublishWindowsTipService@Actions@CreativeFramework@@@0@$$QEAPEB_W0@Z @ 0x1800CDECC (--$make_shared@VPublishWindowsTipService@Actions@CreativeFramework@@PEB_WPEB_W@std@@YA-AV-$share.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CreativeFramework::Actions::MakePublishWindowsTipService(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rax
  __int64 v6; // rax
  _QWORD *v7; // rax
  char *v9; // [rsp+20h] [rbp-19h] BYREF
  char *v10; // [rsp+28h] [rbp-11h] BYREF
  _QWORD v11[2]; // [rsp+30h] [rbp-9h] BYREF
  int v12[2]; // [rsp+40h] [rbp+7h] BYREF
  __int64 v13; // [rsp+50h] [rbp+17h]
  unsigned __int64 v14; // [rsp+58h] [rbp+1Fh]
  int v15[2]; // [rsp+60h] [rbp+27h] BYREF
  unsigned __int64 v16; // [rsp+78h] [rbp+3Fh]

  v9 = (char *)a1;
  v5 = CreativeFramework::Actions::GetRequiredParameter<std::wstring>((__int64)v15, a3, (char *)L"ctx.containerPath");
  if ( *(_QWORD *)(v5 + 24) >= 8uLL )
    v5 = *(_QWORD *)v5;
  v10 = (char *)v5;
  v6 = CreativeFramework::Actions::GetRequiredParameter<std::wstring>((__int64)v12, a3, (char *)L"ctx.contentId");
  if ( *(_QWORD *)(v6 + 24) >= 8uLL )
    v6 = *(_QWORD *)v6;
  v9 = (char *)v6;
  v7 = std::make_shared<CreativeFramework::Actions::PublishWindowsTipService,wchar_t const *,wchar_t const *>(
         v11,
         &v9,
         &v10);
  *(_QWORD *)a1 = *v7;
  *(_QWORD *)(a1 + 8) = v7[1];
  *v7 = 0LL;
  v7[1] = 0LL;
  std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)v11);
  if ( v14 >= 8 )
    operator delete(*(void **)v12);
  v14 = 7LL;
  v13 = 0LL;
  LOWORD(v12[0]) = 0;
  if ( v16 >= 8 )
    operator delete(*(void **)v15);
  return a1;
}
