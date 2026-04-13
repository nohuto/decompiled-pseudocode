/*
 * XREFs of ?MakeAddTileToCollectionService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x1800AE8A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180060494 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x1800627B4 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@PEB_W@Z @ 0x18008F79C (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@PEB_W@Z.c)
 *     ??$GetOptionalParameter@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@3@PEB_W@Z @ 0x1800A9304 (--$GetOptionalParameter@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Action.c)
 *     ??$GetRequiredParameter@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@3@PEB_W@Z @ 0x1800A93F8 (--$GetRequiredParameter@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Action.c)
 *     ??$make_shared@VAddTileToCollectionService@Actions@CreativeFramework@@PEB_WAEAUPinToStartProperties@23@@std@@YA?AV?$shared_ptr@VAddTileToCollectionService@Actions@CreativeFramework@@@0@$$QEAPEB_WAEAUPinToStartProperties@Actions@CreativeFramework@@@Z @ 0x1800AC14C (--$make_shared@VAddTileToCollectionService@Actions@CreativeFramework@@PEB_WAEAUPinToStartPropert.c)
 *     ??1PinToStartProperties@Actions@CreativeFramework@@QEAA@XZ @ 0x1800AC964 (--1PinToStartProperties@Actions@CreativeFramework@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=16
__int64 __fastcall CreativeFramework::Actions::MakeAddTileToCollectionService(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rax
  BOOL v6; // r14d
  __int64 v7; // rax
  bool v8; // bl
  int v9; // r15d
  __int64 v10; // rax
  _QWORD *started; // rax
  const wchar_t *v13; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v14; // [rsp+40h] [rbp-C0h] BYREF
  std::_Ref_count_base *v15; // [rsp+48h] [rbp-B8h]
  _QWORD v16[4]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v17[32]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v18[32]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v19[32]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v20[32]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v21[32]; // [rsp+100h] [rbp+0h] BYREF
  int v22; // [rsp+120h] [rbp+20h]

  v13 = (const wchar_t *)a1;
  v5 = CreativeFramework::Actions::GetOptionalParameter<std::wstring>((__int64)&v14, a3);
  if ( *(_QWORD *)(v5 + 24) >= 8uLL )
    v5 = *(_QWORD *)v5;
  v6 = CompareStringOrdinal((LPCWCH)v5, -1, L"true", -1, 1) == 2;
  std::wstring::_Tidy(&v14, 1, 0LL);
  v7 = CreativeFramework::Actions::GetOptionalParameter<std::wstring>((__int64)&v14, a3);
  if ( *(_QWORD *)(v7 + 24) >= 8uLL )
    v7 = *(_QWORD *)v7;
  v8 = CompareStringOrdinal((LPCWCH)v7, -1, L"true", -1, 1) == 2;
  std::wstring::_Tidy(&v14, 1, 0LL);
  v9 = v6 | 2;
  if ( !v8 )
    v9 = v6;
  CreativeFramework::Actions::GetRequiredParameter<std::wstring>((__int64)&v14, a3);
  std::wstring::wstring((__int64)v17);
  std::wstring::_Tidy(&v14, 1, 0LL);
  CreativeFramework::Actions::GetRequiredParameter<std::wstring>((__int64)v16, a3);
  std::wstring::wstring((__int64)v18);
  std::wstring::_Tidy(v16, 1, 0LL);
  CreativeFramework::Actions::GetOptionalParameter<std::wstring>((__int64)&v14, a3);
  std::wstring::wstring((__int64)v19);
  std::wstring::_Tidy(&v14, 1, 0LL);
  CreativeFramework::Actions::GetRequiredParameter<std::wstring>((__int64)v16, a3);
  std::wstring::wstring((__int64)v20);
  std::wstring::_Tidy(v16, 1, 0LL);
  CreativeFramework::Actions::GetRequiredParameter<std::wstring>((__int64)&v14, a3);
  std::wstring::wstring((__int64)v21);
  std::wstring::_Tidy(&v14, 1, 0LL);
  v22 = v9;
  v10 = CreativeFramework::Actions::GetRequiredParameter<std::wstring>((__int64)v16, a3);
  if ( *(_QWORD *)(v10 + 24) >= 8uLL )
    v10 = *(_QWORD *)v10;
  v13 = (const wchar_t *)v10;
  started = std::make_shared<CreativeFramework::Actions::AddTileToCollectionService,wchar_t const *,CreativeFramework::Actions::PinToStartProperties &>(
              &v14,
              &v13,
              (const struct CreativeFramework::Actions::PinToStartProperties *)v17);
  *(_QWORD *)a1 = *started;
  *(_QWORD *)(a1 + 8) = started[1];
  *started = 0LL;
  started[1] = 0LL;
  if ( v15 )
    std::_Ref_count_base::_Decref(v15);
  std::wstring::_Tidy(v16, 1, 0LL);
  CreativeFramework::Actions::PinToStartProperties::~PinToStartProperties((CreativeFramework::Actions::PinToStartProperties *)v17);
  return a1;
}
