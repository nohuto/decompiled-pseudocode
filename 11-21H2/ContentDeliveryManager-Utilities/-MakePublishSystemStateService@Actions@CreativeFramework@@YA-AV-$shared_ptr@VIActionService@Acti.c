/*
 * XREFs of ?MakePublishSystemStateService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x1800CE6C0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??1?$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ @ 0x180057E48 (--1-$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ.c)
 *     ??$GetOptionalParameter@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@3@PEB_W@Z @ 0x1800B8F84 (--$GetOptionalParameter@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Action.c)
 *     ??$GetRequiredParameter@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@3@PEB_W@Z @ 0x1800B90EC (--$GetRequiredParameter@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Action.c)
 *     ??$make_shared@VPublishSystemStateService@Actions@CreativeFramework@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V45@@std@@YA?AV?$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@0@$$QEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@0@0@Z @ 0x1800CE4DC (--$make_shared@VPublishSystemStateService@Actions@CreativeFramework@@V-$basic_string@_WU-$char_t.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall CreativeFramework::Actions::MakePublishSystemStateService(_QWORD *a1, __int64 a2, void ***a3)
{
  void **v5; // rbx
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  _QWORD v9[2]; // [rsp+20h] [rbp-68h] BYREF
  int v10[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v11; // [rsp+40h] [rbp-48h]
  unsigned __int64 v12; // [rsp+48h] [rbp-40h]
  void *v13[4]; // [rsp+50h] [rbp-38h] BYREF

  v9[0] = a1;
  v5 = CreativeFramework::Actions::GetOptionalParameter<std::wstring>(v13, a3, (char *)L"systemStateData");
  v6 = (_QWORD *)CreativeFramework::Actions::GetRequiredParameter<std::wstring>(
                   (__int64)v10,
                   a3,
                   (char *)L"systemState");
  v7 = std::make_shared<CreativeFramework::Actions::PublishSystemStateService,std::wstring,std::wstring>(v9, v6, v5);
  *a1 = *v7;
  a1[1] = v7[1];
  *v7 = 0LL;
  v7[1] = 0LL;
  std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)v9);
  if ( v12 >= 8 )
    operator delete(*(void **)v10);
  v12 = 7LL;
  v11 = 0LL;
  LOWORD(v10[0]) = 0;
  if ( v13[3] >= (void *)8 )
    operator delete(v13[0]);
  return a1;
}
