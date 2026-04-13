/*
 * XREFs of ?GetFriendlySubscriptionNameFromPlacementId@SubscribedContentUtils@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W@Z @ 0x1800BEAE4
 * Callers:
 *     ??0AddTileToCollectionService@Actions@CreativeFramework@@QEAA@PEB_WAEBUPinToStartProperties@12@@Z @ 0x1800BCCC8 (--0AddTileToCollectionService@Actions@CreativeFramework@@QEAA@PEB_WAEBUPinToStartProperties@12@@.c)
 *     ?CreateTargetedContentTileIdentifier@SwapStartTileService@Actions@CreativeFramework@@AEAA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@PEB_W0@Z @ 0x1800BE2A0 (-CreateTargetedContentTileIdentifier@SwapStartTileService@Actions@CreativeFramework@@AEAA-AV-$co.c)
 *     ?GetSourceTileIdentifier@SwapStartTileService@Actions@CreativeFramework@@AEAA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1800BF174 (-GetSourceTileIdentifier@SwapStartTileService@Actions@CreativeFramework@@AEAA-AV-$com_ptr_t@UIUn.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x180066A7C (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x1800A41C4 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x1800A42B8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?find@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBA_KPEB_W_K1@Z @ 0x1800C28DC (-find@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBA_KPEB_W_K1@Z.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall CreativeFramework::SubscribedContentUtils::GetFriendlySubscriptionNameFromPlacementId(
        _QWORD *a1,
        char *a2)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // r8
  __int64 v5; // rax
  WCHAR *v6; // rdi
  const wchar_t near *const *v7; // rsi
  void **v8; // rdx
  char v9; // bl
  char v10; // bl
  int cchValue; // [rsp+20h] [rbp-79h]
  void *v13[2]; // [rsp+40h] [rbp-59h] BYREF
  __int64 v14; // [rsp+50h] [rbp-49h]
  unsigned __int64 v15; // [rsp+58h] [rbp-41h]
  void *v16[2]; // [rsp+60h] [rbp-39h] BYREF
  __int64 v17; // [rsp+70h] [rbp-29h]
  unsigned __int64 v18; // [rsp+78h] [rbp-21h]
  LPCWSTR lpStringSource[3]; // [rsp+80h] [rbp-19h] BYREF
  unsigned __int64 v20; // [rsp+98h] [rbp-1h]
  void *v21[3]; // [rsp+A0h] [rbp+7h] BYREF
  unsigned __int64 v22; // [rsp+B8h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v15 = 7LL;
  v14 = 0LL;
  LOWORD(v13[0]) = 0;
  v3 = -1LL;
  if ( *(_WORD *)a2 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( *(_WORD *)&a2[2 * v4] );
  }
  else
  {
    v4 = 0LL;
  }
  std::wstring::assign((unsigned __int64 *)v13, a2, v4);
  v5 = std::wstring::find(v13, L"-", 0LL, 1LL);
  if ( v5 == -1 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      14LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\SubscribedContentUtils.h",
      (const char *)0x80070057LL,
      cchValue);
  v20 = 7LL;
  lpStringSource[2] = 0LL;
  LOWORD(lpStringSource[0]) = 0;
  std::wstring::assign((void **)lpStringSource, v13, v5 + 1, 0xFFFFFFFFFFFFFFFFuLL);
  if ( v15 >= 8 )
    operator delete(v13[0]);
  v15 = 7LL;
  v14 = 0LL;
  LOWORD(v13[0]) = 0;
  v6 = (WCHAR *)lpStringSource;
  if ( v20 >= 8 )
    v6 = (WCHAR *)lpStringSource[0];
  v7 = &off_180119E10;
  while ( FindStringOrdinal(0x200000u, v6, -1, v7[2], -1, 1) < 0
       && FindStringOrdinal(0x200000u, v6, -1, v7[1], -1, 1) < 0 )
  {
    v7 += 3;
    if ( v7 == (const wchar_t near *const *)&off_18011A050 )
      goto LABEL_16;
  }
  v6 = (WCHAR *)*v7;
LABEL_16:
  if ( v6 )
  {
    v18 = 7LL;
    v17 = 0LL;
    LOWORD(v16[0]) = 0;
    if ( *v6 )
    {
      do
        ++v3;
      while ( v6[v3] );
    }
    else
    {
      v3 = 0LL;
    }
    std::wstring::assign((unsigned __int64 *)v16, (char *)v6, v3);
    v8 = v16;
    v9 = 26;
  }
  else
  {
    v22 = 7LL;
    v21[2] = 0LL;
    LOWORD(v21[0]) = 0;
    std::wstring::assign(v21, (void **)lpStringSource, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
    v8 = v21;
    v9 = 25;
  }
  a1[3] = 7LL;
  a1[2] = 0LL;
  *(_WORD *)a1 = 0;
  std::wstring::_Assign_rv(a1, v8);
  v10 = v9 | 4;
  if ( (v10 & 2) != 0 )
  {
    v10 &= ~2u;
    if ( v18 >= 8 )
      operator delete(v16[0]);
    v18 = 7LL;
    v17 = 0LL;
    LOWORD(v16[0]) = 0;
  }
  if ( (v10 & 1) != 0 && v22 >= 8 )
    operator delete(v21[0]);
  if ( v20 >= 8 )
    operator delete((void *)lpStringSource[0]);
  return a1;
}
