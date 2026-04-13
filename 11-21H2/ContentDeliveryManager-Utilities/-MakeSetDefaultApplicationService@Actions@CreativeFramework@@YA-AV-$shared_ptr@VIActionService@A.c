/*
 * XREFs of ?MakeSetDefaultApplicationService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x1800C2C00
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??1?$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ @ 0x180057E48 (--1-$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ.c)
 *     ??$GetRequiredParameter@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@3@PEB_W@Z @ 0x1800B90EC (--$GetRequiredParameter@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Action.c)
 *     ??$make_shared@VSetDefaultApplicationService@Actions@CreativeFramework@@PEB_WPEB_WPEB_W@std@@YA?AV?$shared_ptr@VSetDefaultApplicationService@Actions@CreativeFramework@@@0@$$QEAPEB_W00@Z @ 0x1800C2B48 (--$make_shared@VSetDefaultApplicationService@Actions@CreativeFramework@@PEB_WPEB_WPEB_W@std@@YA-.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CreativeFramework::Actions::MakeSetDefaultApplicationService(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  _QWORD *v8; // rax
  char *v10; // [rsp+20h] [rbp-39h] BYREF
  char *v11; // [rsp+28h] [rbp-31h] BYREF
  char *v12; // [rsp+30h] [rbp-29h] BYREF
  _QWORD v13[2]; // [rsp+38h] [rbp-21h] BYREF
  int v14[2]; // [rsp+48h] [rbp-11h] BYREF
  __int64 v15; // [rsp+58h] [rbp-1h]
  unsigned __int64 v16; // [rsp+60h] [rbp+7h]
  int v17[2]; // [rsp+68h] [rbp+Fh] BYREF
  __int64 v18; // [rsp+78h] [rbp+1Fh]
  unsigned __int64 v19; // [rsp+80h] [rbp+27h]
  int v20[2]; // [rsp+88h] [rbp+2Fh] BYREF
  unsigned __int64 v21; // [rsp+A0h] [rbp+47h]

  v10 = (char *)a1;
  v5 = CreativeFramework::Actions::GetRequiredParameter<std::wstring>((__int64)v20, a3, (char *)L"category");
  if ( *(_QWORD *)(v5 + 24) >= 8uLL )
    v5 = *(_QWORD *)v5;
  v11 = (char *)v5;
  v6 = CreativeFramework::Actions::GetRequiredParameter<std::wstring>((__int64)v17, a3, (char *)L"packageRelativeAppId");
  if ( *(_QWORD *)(v6 + 24) >= 8uLL )
    v6 = *(_QWORD *)v6;
  v12 = (char *)v6;
  v7 = CreativeFramework::Actions::GetRequiredParameter<std::wstring>((__int64)v14, a3, (char *)L"packageFamilyName");
  if ( *(_QWORD *)(v7 + 24) >= 8uLL )
    v7 = *(_QWORD *)v7;
  v10 = (char *)v7;
  v8 = std::make_shared<CreativeFramework::Actions::SetDefaultApplicationService,wchar_t const *,wchar_t const *,wchar_t const *>(
         v13,
         &v10,
         &v12,
         &v11);
  *(_QWORD *)a1 = *v8;
  *(_QWORD *)(a1 + 8) = v8[1];
  *v8 = 0LL;
  v8[1] = 0LL;
  std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)v13);
  if ( v16 >= 8 )
    operator delete(*(void **)v14);
  v16 = 7LL;
  v15 = 0LL;
  LOWORD(v14[0]) = 0;
  if ( v19 >= 8 )
    operator delete(*(void **)v17);
  v19 = 7LL;
  v18 = 0LL;
  LOWORD(v17[0]) = 0;
  if ( v21 >= 8 )
    operator delete(*(void **)v20);
  return a1;
}
