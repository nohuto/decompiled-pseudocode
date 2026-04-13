/*
 * XREFs of ?MakePinToStartService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x1800C03A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??1?$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ @ 0x180057E48 (--1-$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ.c)
 *     ??$GetOptionalParameter@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@3@PEB_W@Z @ 0x1800B8F84 (--$GetOptionalParameter@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Action.c)
 *     ??$GetRequiredParameter@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@3@PEB_W@Z @ 0x1800B90EC (--$GetRequiredParameter@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Action.c)
 *     ??$make_shared@VPinToStartService@Actions@CreativeFramework@@PEB_WPEB_WPEB_W_N@std@@YA?AV?$shared_ptr@VPinToStartService@Actions@CreativeFramework@@@0@$$QEAPEB_W00$$QEA_N@Z @ 0x1800BCBAC (--$make_shared@VPinToStartService@Actions@CreativeFramework@@PEB_WPEB_WPEB_W_N@std@@YA-AV-$share.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CreativeFramework::Actions::MakePinToStartService(__int64 a1, __int64 a2, void ***a3)
{
  void **v5; // rax
  void **v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  _QWORD *started; // rax
  char v11[8]; // [rsp+30h] [rbp-79h] BYREF
  char *v12; // [rsp+38h] [rbp-71h] BYREF
  void **v13; // [rsp+40h] [rbp-69h] BYREF
  char *v14; // [rsp+48h] [rbp-61h] BYREF
  _QWORD v15[2]; // [rsp+50h] [rbp-59h] BYREF
  int v16[2]; // [rsp+60h] [rbp-49h] BYREF
  __int64 v17; // [rsp+70h] [rbp-39h]
  unsigned __int64 v18; // [rsp+78h] [rbp-31h]
  int v19[2]; // [rsp+80h] [rbp-29h] BYREF
  __int64 v20; // [rsp+90h] [rbp-19h]
  unsigned __int64 v21; // [rsp+98h] [rbp-11h]
  void *v22[3]; // [rsp+A0h] [rbp-9h] BYREF
  unsigned __int64 v23; // [rsp+B8h] [rbp+Fh]
  void *v24[4]; // [rsp+C0h] [rbp+17h] BYREF

  v12 = (char *)a1;
  v5 = CreativeFramework::Actions::GetOptionalParameter<std::wstring>(v24, a3, (char *)L"useExistingTile");
  if ( (unsigned __int64)v5[3] >= 8 )
    v5 = (void **)*v5;
  v11[0] = CompareStringOrdinal((LPCWCH)v5, -1, L"true", -1, 1) == 2;
  v6 = CreativeFramework::Actions::GetOptionalParameter<std::wstring>(v22, a3, (char *)L"pinnedTileSize");
  if ( (unsigned __int64)v6[3] >= 8 )
    v6 = (void **)*v6;
  v13 = v6;
  v7 = CreativeFramework::Actions::GetRequiredParameter<std::wstring>((__int64)v19, a3, (char *)L"packageRelativeAppId");
  if ( *(_QWORD *)(v7 + 24) >= 8uLL )
    v7 = *(_QWORD *)v7;
  v14 = (char *)v7;
  v8 = CreativeFramework::Actions::GetRequiredParameter<std::wstring>((__int64)v16, a3, (char *)L"packageFamilyName");
  if ( *(_QWORD *)(v8 + 24) >= 8uLL )
    v8 = *(_QWORD *)v8;
  v12 = (char *)v8;
  started = std::make_shared<CreativeFramework::Actions::PinToStartService,wchar_t const *,wchar_t const *,wchar_t const *,bool>(
              v15,
              &v12,
              &v14,
              (char **)&v13,
              v11);
  *(_QWORD *)a1 = *started;
  *(_QWORD *)(a1 + 8) = started[1];
  *started = 0LL;
  started[1] = 0LL;
  std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)v15);
  if ( v18 >= 8 )
    operator delete(*(void **)v16);
  v18 = 7LL;
  v17 = 0LL;
  LOWORD(v16[0]) = 0;
  if ( v21 >= 8 )
    operator delete(*(void **)v19);
  v21 = 7LL;
  v20 = 0LL;
  LOWORD(v19[0]) = 0;
  if ( v23 >= 8 )
    operator delete(v22[0]);
  v23 = 7LL;
  v22[2] = 0LL;
  LOWORD(v22[0]) = 0;
  if ( v24[3] >= (void *)8 )
    operator delete(v24[0]);
  return a1;
}
