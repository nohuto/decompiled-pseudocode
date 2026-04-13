/*
 * XREFs of ?MakeLaunchAppByIdService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x1800C6630
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??1?$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ @ 0x180057E48 (--1-$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ.c)
 *     ??$GetRequiredParameter@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@3@PEB_W@Z @ 0x1800B90EC (--$GetRequiredParameter@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Action.c)
 *     ??$make_shared@VLaunchAppByIdService@Actions@CreativeFramework@@PEB_W@std@@YA?AV?$shared_ptr@VLaunchAppByIdService@Actions@CreativeFramework@@@0@$$QEAPEB_W@Z @ 0x1800C32D8 (--$make_shared@VLaunchAppByIdService@Actions@CreativeFramework@@PEB_W@std@@YA-AV-$shared_ptr@VLa.c)
 */

__int64 __fastcall CreativeFramework::Actions::MakeLaunchAppByIdService(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rax
  _QWORD *v5; // rax
  char *v7; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v8[2]; // [rsp+28h] [rbp-40h] BYREF
  int v9[2]; // [rsp+38h] [rbp-30h] BYREF
  unsigned __int64 v10; // [rsp+50h] [rbp-18h]

  v7 = (char *)a1;
  v4 = CreativeFramework::Actions::GetRequiredParameter<std::wstring>((__int64)v9, a3, (char *)L"packageFamilyName");
  if ( *(_QWORD *)(v4 + 24) >= 8uLL )
    v4 = *(_QWORD *)v4;
  v7 = (char *)v4;
  v5 = std::make_shared<CreativeFramework::Actions::LaunchAppByIdService,wchar_t const *>(v8, &v7);
  *(_QWORD *)a1 = *v5;
  *(_QWORD *)(a1 + 8) = v5[1];
  *v5 = 0LL;
  v5[1] = 0LL;
  std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)v8);
  if ( v10 >= 8 )
    operator delete(*(void **)v9);
  return a1;
}
