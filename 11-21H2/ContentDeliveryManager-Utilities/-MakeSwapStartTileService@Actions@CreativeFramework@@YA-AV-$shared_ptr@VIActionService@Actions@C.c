/*
 * XREFs of ?MakeSwapStartTileService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x1800C0570
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??1?$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ @ 0x180057E48 (--1-$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ.c)
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x180066A7C (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     ??$GetOptionalParameter@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@3@PEB_W@Z @ 0x1800B8F84 (--$GetOptionalParameter@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Action.c)
 *     ??$make_shared@VSwapStartTileService@Actions@CreativeFramework@@PEB_WPEB_WAEAUSwapStartTileProperties@23@@std@@YA?AV?$shared_ptr@VSwapStartTileService@Actions@CreativeFramework@@@0@$$QEAPEB_W0AEAUSwapStartTileProperties@Actions@CreativeFramework@@@Z @ 0x1800BCC34 (--$make_shared@VSwapStartTileService@Actions@CreativeFramework@@PEB_WPEB_WAEAUSwapStartTilePrope.c)
 *     ??1SwapStartTileProperties@Actions@CreativeFramework@@QEAA@XZ @ 0x1800BD554 (--1SwapStartTileProperties@Actions@CreativeFramework@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CreativeFramework::Actions::MakeSwapStartTileService(__int64 a1, __int64 a2, void ***a3)
{
  void **v5; // rdi
  void **v6; // rdi
  void **v7; // rdi
  void **v8; // rdi
  void **v9; // rdi
  void **v10; // rdi
  void **v11; // rax
  void **v12; // rax
  _QWORD *started; // rax
  const wchar_t *v15; // [rsp+20h] [rbp-E0h] BYREF
  const wchar_t *v16; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v17[2]; // [rsp+30h] [rbp-D0h] BYREF
  void *v18[3]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v19; // [rsp+58h] [rbp-A8h]
  void *v20[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v21; // [rsp+70h] [rbp-90h]
  unsigned __int64 v22; // [rsp+78h] [rbp-88h]
  void *v23[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v24; // [rsp+90h] [rbp-70h]
  unsigned __int64 v25; // [rsp+98h] [rbp-68h]
  void *v26[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v27; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v28; // [rsp+B8h] [rbp-48h]
  void *v29[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v30; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v31; // [rsp+D8h] [rbp-28h]
  void *v32[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v33; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v34; // [rsp+F8h] [rbp-8h]
  void *v35[2]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v36; // [rsp+110h] [rbp+10h]
  unsigned __int64 v37; // [rsp+118h] [rbp+18h]
  void *v38[3]; // [rsp+120h] [rbp+20h] BYREF
  unsigned __int64 v39; // [rsp+138h] [rbp+38h]

  v15 = (const wchar_t *)a1;
  v22 = 7LL;
  v21 = 0LL;
  LOWORD(v20[0]) = 0;
  v25 = 7LL;
  v24 = 0LL;
  LOWORD(v23[0]) = 0;
  v28 = 7LL;
  v27 = 0LL;
  LOWORD(v26[0]) = 0;
  v31 = 7LL;
  v30 = 0LL;
  LOWORD(v29[0]) = 0;
  v34 = 7LL;
  v33 = 0LL;
  LOWORD(v32[0]) = 0;
  v37 = 7LL;
  v36 = 0LL;
  LOWORD(v35[0]) = 0;
  v5 = CreativeFramework::Actions::GetOptionalParameter<std::wstring>(v18, a3, (char *)L"ctx.containerPath");
  if ( v26 != v5 )
  {
    if ( v28 >= 8 )
      operator delete(v26[0]);
    v28 = 7LL;
    v27 = 0LL;
    LOWORD(v26[0]) = 0;
    std::wstring::_Assign_rv(v26, v5);
  }
  if ( v19 >= 8 )
    operator delete(v18[0]);
  v6 = CreativeFramework::Actions::GetOptionalParameter<std::wstring>(v18, a3, (char *)L"ctx.contentId");
  if ( v23 != v6 )
  {
    if ( v25 >= 8 )
      operator delete(v23[0]);
    v25 = 7LL;
    v24 = 0LL;
    LOWORD(v23[0]) = 0;
    std::wstring::_Assign_rv(v23, v6);
  }
  if ( v19 >= 8 )
    operator delete(v18[0]);
  v7 = CreativeFramework::Actions::GetOptionalParameter<std::wstring>(v18, a3, (char *)L"ctx.placementId");
  if ( v20 != v7 )
  {
    if ( v22 >= 8 )
      operator delete(v20[0]);
    v22 = 7LL;
    v21 = 0LL;
    LOWORD(v20[0]) = 0;
    std::wstring::_Assign_rv(v20, v7);
  }
  if ( v19 >= 8 )
    operator delete(v18[0]);
  v8 = CreativeFramework::Actions::GetOptionalParameter<std::wstring>(v18, a3, (char *)L"applicationId");
  if ( v35 != v8 )
  {
    if ( v37 >= 8 )
      operator delete(v35[0]);
    v37 = 7LL;
    v36 = 0LL;
    LOWORD(v35[0]) = 0;
    std::wstring::_Assign_rv(v35, v8);
  }
  if ( v19 >= 8 )
    operator delete(v18[0]);
  v9 = CreativeFramework::Actions::GetOptionalParameter<std::wstring>(v18, a3, (char *)L"packageFamilyName");
  if ( v29 != v9 )
  {
    if ( v31 >= 8 )
      operator delete(v29[0]);
    v31 = 7LL;
    v30 = 0LL;
    LOWORD(v29[0]) = 0;
    std::wstring::_Assign_rv(v29, v9);
  }
  if ( v19 >= 8 )
    operator delete(v18[0]);
  v10 = CreativeFramework::Actions::GetOptionalParameter<std::wstring>(v18, a3, (char *)L"packageRelativeAppId");
  if ( v32 != v10 )
  {
    if ( v34 >= 8 )
      operator delete(v32[0]);
    v34 = 7LL;
    v33 = 0LL;
    LOWORD(v32[0]) = 0;
    std::wstring::_Assign_rv(v32, v10);
  }
  if ( v19 >= 8 )
    operator delete(v18[0]);
  v11 = CreativeFramework::Actions::GetOptionalParameter<std::wstring>(v18, a3, (char *)L"newTileId");
  if ( (unsigned __int64)v11[3] >= 8 )
    v11 = (void **)*v11;
  v16 = (const wchar_t *)v11;
  v12 = CreativeFramework::Actions::GetOptionalParameter<std::wstring>(v38, a3, (char *)L"oldTileId");
  if ( (unsigned __int64)v12[3] >= 8 )
    v12 = (void **)*v12;
  v15 = (const wchar_t *)v12;
  started = std::make_shared<CreativeFramework::Actions::SwapStartTileService,wchar_t const *,wchar_t const *,CreativeFramework::Actions::SwapStartTileProperties &>(
              v17,
              &v15,
              &v16,
              (const struct CreativeFramework::Actions::SwapStartTileProperties *)v20);
  *(_QWORD *)a1 = *started;
  *(_QWORD *)(a1 + 8) = started[1];
  *started = 0LL;
  started[1] = 0LL;
  std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)v17);
  if ( v39 >= 8 )
    operator delete(v38[0]);
  v39 = 7LL;
  v38[2] = 0LL;
  LOWORD(v38[0]) = 0;
  if ( v19 >= 8 )
    operator delete(v18[0]);
  v19 = 7LL;
  v18[2] = 0LL;
  LOWORD(v18[0]) = 0;
  CreativeFramework::Actions::SwapStartTileProperties::~SwapStartTileProperties(v20);
  return a1;
}
