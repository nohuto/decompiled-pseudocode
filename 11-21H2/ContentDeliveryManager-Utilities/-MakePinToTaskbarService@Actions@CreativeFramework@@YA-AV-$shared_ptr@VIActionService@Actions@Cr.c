/*
 * XREFs of ?MakePinToTaskbarService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x1800C8CB0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??1?$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ @ 0x180057E48 (--1-$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ.c)
 *     ??$GetOptionalParameter@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@3@PEB_W@Z @ 0x1800B8F84 (--$GetOptionalParameter@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Action.c)
 *     ??$GetRequiredParameter@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@3@PEB_W@Z @ 0x1800B90EC (--$GetRequiredParameter@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Action.c)
 *     ??$make_shared@VTaskbarPinService@Actions@CreativeFramework@@PEB_WPEB_W_N@std@@YA?AV?$shared_ptr@VTaskbarPinService@Actions@CreativeFramework@@@0@$$QEAPEB_W0$$QEA_N@Z @ 0x1800C891C (--$make_shared@VTaskbarPinService@Actions@CreativeFramework@@PEB_WPEB_W_N@std@@YA-AV-$shared_ptr.c)
 *     ??$make_shared@VTaskbarPinService@Actions@CreativeFramework@@PEB_W_N@std@@YA?AV?$shared_ptr@VTaskbarPinService@Actions@CreativeFramework@@@0@$$QEAPEB_W$$QEA_N@Z @ 0x1800C8A64 (--$make_shared@VTaskbarPinService@Actions@CreativeFramework@@PEB_W_N@std@@YA-AV-$shared_ptr@VTas.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CreativeFramework::Actions::MakePinToTaskbarService(__int64 a1, __int64 a2, void ***a3)
{
  char *v5; // rax
  _QWORD *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  _QWORD *v9; // rax
  char v11[8]; // [rsp+20h] [rbp-59h] BYREF
  char *v12; // [rsp+28h] [rbp-51h] BYREF
  char *v13[2]; // [rsp+30h] [rbp-49h] BYREF
  _QWORD v14[2]; // [rsp+40h] [rbp-39h] BYREF
  void *v15[3]; // [rsp+50h] [rbp-29h] BYREF
  unsigned __int64 v16; // [rsp+68h] [rbp-11h]
  int v17[2]; // [rsp+70h] [rbp-9h] BYREF
  __int64 v18; // [rsp+80h] [rbp+7h]
  unsigned __int64 v19; // [rsp+88h] [rbp+Fh]
  int v20[2]; // [rsp+90h] [rbp+17h] BYREF
  __int64 v21; // [rsp+A0h] [rbp+27h]
  unsigned __int64 v22; // [rsp+A8h] [rbp+2Fh]

  v13[0] = (char *)a1;
  CreativeFramework::Actions::GetOptionalParameter<std::wstring>(v15, a3, (char *)L"applicationId");
  v11[0] = 1;
  if ( v15[2] )
  {
    v5 = (char *)v15;
    if ( v16 >= 8 )
      v5 = (char *)v15[0];
    v12 = v5;
    v6 = std::make_shared<CreativeFramework::Actions::TaskbarPinService,wchar_t const *,bool>(v13, &v12, v11);
    *(_QWORD *)a1 = *v6;
    *(_QWORD *)(a1 + 8) = v6[1];
    *v6 = 0LL;
    v6[1] = 0LL;
    std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)v13);
  }
  else
  {
    v7 = CreativeFramework::Actions::GetRequiredParameter<std::wstring>(
           (__int64)v20,
           a3,
           (char *)L"packageRelativeAppId");
    if ( *(_QWORD *)(v7 + 24) >= 8uLL )
      v7 = *(_QWORD *)v7;
    v12 = (char *)v7;
    v8 = CreativeFramework::Actions::GetRequiredParameter<std::wstring>((__int64)v17, a3, (char *)L"packageFamilyName");
    if ( *(_QWORD *)(v8 + 24) >= 8uLL )
      v8 = *(_QWORD *)v8;
    v13[0] = (char *)v8;
    v9 = std::make_shared<CreativeFramework::Actions::TaskbarPinService,wchar_t const *,wchar_t const *,bool>(
           v14,
           v13,
           &v12,
           v11);
    *(_QWORD *)a1 = *v9;
    *(_QWORD *)(a1 + 8) = v9[1];
    *v9 = 0LL;
    v9[1] = 0LL;
    std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)v14);
    if ( v19 >= 8 )
      operator delete(*(void **)v17);
    v19 = 7LL;
    v18 = 0LL;
    LOWORD(v17[0]) = 0;
    if ( v22 >= 8 )
      operator delete(*(void **)v20);
    v22 = 7LL;
    v21 = 0LL;
    LOWORD(v20[0]) = 0;
  }
  if ( v16 >= 8 )
    operator delete(v15[0]);
  return a1;
}
