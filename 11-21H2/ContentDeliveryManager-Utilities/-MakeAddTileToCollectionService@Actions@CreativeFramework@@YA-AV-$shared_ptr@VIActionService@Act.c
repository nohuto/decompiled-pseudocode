/*
 * XREFs of ?MakeAddTileToCollectionService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x1800BFF80
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??1?$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ @ 0x180057E48 (--1-$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x1800A42B8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ??$GetOptionalParameter@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@3@PEB_W@Z @ 0x1800B8F84 (--$GetOptionalParameter@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Action.c)
 *     ??$GetRequiredParameter@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@3@PEB_W@Z @ 0x1800B90EC (--$GetRequiredParameter@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Action.c)
 *     ??$make_shared@VAddTileToCollectionService@Actions@CreativeFramework@@PEB_WAEAUPinToStartProperties@23@@std@@YA?AV?$shared_ptr@VAddTileToCollectionService@Actions@CreativeFramework@@@0@$$QEAPEB_WAEAUPinToStartProperties@Actions@CreativeFramework@@@Z @ 0x1800BCB28 (--$make_shared@VAddTileToCollectionService@Actions@CreativeFramework@@PEB_WAEAUPinToStartPropert.c)
 *     ??1PinToStartProperties@Actions@CreativeFramework@@QEAA@XZ @ 0x1800BD3C4 (--1PinToStartProperties@Actions@CreativeFramework@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=15
__int64 __fastcall CreativeFramework::Actions::MakeAddTileToCollectionService(__int64 a1, __int64 a2, void ***a3)
{
  void **v5; // rax
  unsigned __int64 v6; // rbx
  BOOL v7; // edi
  void **v8; // rax
  bool v9; // si
  int v10; // r12d
  __int64 v11; // rax
  unsigned __int64 v12; // r8
  __int64 v13; // rax
  unsigned __int64 v14; // r8
  void **v15; // rax
  unsigned __int64 v16; // r8
  __int64 v17; // rax
  unsigned __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rax
  _QWORD *started; // rax
  const wchar_t *v23; // [rsp+30h] [rbp-D0h] BYREF
  int v24[2]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v25; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v26; // [rsp+50h] [rbp-B0h]
  int v27[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+68h] [rbp-98h]
  unsigned __int64 v29; // [rsp+70h] [rbp-90h]
  void *v30[4]; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v31[4]; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v32[4]; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int64 v33[4]; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int64 v34[4]; // [rsp+100h] [rbp+0h] BYREF
  int v35; // [rsp+120h] [rbp+20h]

  v23 = (const wchar_t *)a1;
  v5 = CreativeFramework::Actions::GetOptionalParameter<std::wstring>((void **)v24, a3, (char *)L"createIfNeeded");
  if ( (unsigned __int64)v5[3] >= 8 )
    v5 = (void **)*v5;
  v6 = -1LL;
  v7 = CompareStringOrdinal((LPCWCH)v5, -1, L"true", -1, 1) == 2;
  if ( v26 >= 8 )
    operator delete(*(void **)v24);
  v8 = CreativeFramework::Actions::GetOptionalParameter<std::wstring>((void **)v24, a3, (char *)L"keepOnRevert");
  if ( (unsigned __int64)v8[3] >= 8 )
    v8 = (void **)*v8;
  v9 = CompareStringOrdinal((LPCWCH)v8, -1, L"true", -1, 1) == 2;
  if ( v26 >= 8 )
    operator delete(*(void **)v24);
  v10 = v7 | 2;
  if ( !v9 )
    v10 = v7;
  v11 = CreativeFramework::Actions::GetRequiredParameter<std::wstring>((__int64)v27, a3, (char *)L"collectionId");
  if ( *(_QWORD *)(v11 + 24) >= 8uLL )
    v11 = *(_QWORD *)v11;
  v30[3] = (void *)7;
  v30[2] = 0LL;
  LOWORD(v30[0]) = 0;
  if ( *(_WORD *)v11 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( *(_WORD *)(v11 + 2 * v12) );
  }
  else
  {
    v12 = 0LL;
  }
  std::wstring::assign((unsigned __int64 *)v30, (char *)v11, v12);
  if ( v29 >= 8 )
    operator delete(*(void **)v27);
  v29 = 7LL;
  v28 = 0LL;
  LOWORD(v27[0]) = 0;
  v13 = CreativeFramework::Actions::GetRequiredParameter<std::wstring>((__int64)v24, a3, (char *)L"templateType");
  if ( *(_QWORD *)(v13 + 24) >= 8uLL )
    v13 = *(_QWORD *)v13;
  v31[3] = 7LL;
  v31[2] = 0LL;
  LOWORD(v31[0]) = 0;
  if ( *(_WORD *)v13 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( *(_WORD *)(v13 + 2 * v14) );
  }
  else
  {
    v14 = 0LL;
  }
  std::wstring::assign(v31, (char *)v13, v14);
  if ( v26 >= 8 )
    operator delete(*(void **)v24);
  v26 = 7LL;
  v25 = 0LL;
  LOWORD(v24[0]) = 0;
  v15 = CreativeFramework::Actions::GetOptionalParameter<std::wstring>((void **)v27, a3, (char *)L"displayName");
  if ( (unsigned __int64)v15[3] >= 8 )
    v15 = (void **)*v15;
  v32[3] = 7LL;
  v32[2] = 0LL;
  LOWORD(v32[0]) = 0;
  if ( *(_WORD *)v15 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( *((_WORD *)v15 + v16) );
  }
  else
  {
    v16 = 0LL;
  }
  std::wstring::assign(v32, (char *)v15, v16);
  if ( v29 >= 8 )
    operator delete(*(void **)v27);
  v29 = 7LL;
  v28 = 0LL;
  LOWORD(v27[0]) = 0;
  v17 = CreativeFramework::Actions::GetRequiredParameter<std::wstring>((__int64)v24, a3, (char *)L"ctx.contentId");
  if ( *(_QWORD *)(v17 + 24) >= 8uLL )
    v17 = *(_QWORD *)v17;
  v33[3] = 7LL;
  v33[2] = 0LL;
  LOWORD(v33[0]) = 0;
  if ( *(_WORD *)v17 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( *(_WORD *)(v17 + 2 * v18) );
  }
  else
  {
    v18 = 0LL;
  }
  std::wstring::assign(v33, (char *)v17, v18);
  if ( v26 >= 8 )
    operator delete(*(void **)v24);
  v26 = 7LL;
  v25 = 0LL;
  LOWORD(v24[0]) = 0;
  v19 = CreativeFramework::Actions::GetRequiredParameter<std::wstring>((__int64)v27, a3, (char *)L"ctx.containerPath");
  if ( *(_QWORD *)(v19 + 24) >= 8uLL )
    v19 = *(_QWORD *)v19;
  v34[3] = 7LL;
  v34[2] = 0LL;
  LOWORD(v34[0]) = 0;
  if ( *(_WORD *)v19 )
  {
    do
      ++v6;
    while ( *(_WORD *)(v19 + 2 * v6) );
  }
  else
  {
    v6 = 0LL;
  }
  std::wstring::assign(v34, (char *)v19, v6);
  if ( v29 >= 8 )
    operator delete(*(void **)v27);
  v35 = v10;
  v20 = CreativeFramework::Actions::GetRequiredParameter<std::wstring>((__int64)v24, a3, (char *)L"ctx.placementId");
  if ( *(_QWORD *)(v20 + 24) >= 8uLL )
    v20 = *(_QWORD *)v20;
  v23 = (const wchar_t *)v20;
  started = std::make_shared<CreativeFramework::Actions::AddTileToCollectionService,wchar_t const *,CreativeFramework::Actions::PinToStartProperties &>(
              v27,
              &v23,
              (const struct CreativeFramework::Actions::PinToStartProperties *)v30);
  *(_QWORD *)a1 = *started;
  *(_QWORD *)(a1 + 8) = started[1];
  *started = 0LL;
  started[1] = 0LL;
  std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)v27);
  if ( v26 >= 8 )
    operator delete(*(void **)v24);
  v26 = 7LL;
  v25 = 0LL;
  LOWORD(v24[0]) = 0;
  CreativeFramework::Actions::PinToStartProperties::~PinToStartProperties(v30);
  return a1;
}
