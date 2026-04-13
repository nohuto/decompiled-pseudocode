/*
 * XREFs of ?GetSourceTileIdentifier@SwapStartTileService@Actions@CreativeFramework@@AEAA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1800BF174
 * Callers:
 *     ?SwapStartTiles@SwapStartTileService@Actions@CreativeFramework@@AEAAXXZ @ 0x1800C1250 (-SwapStartTiles@SwapStartTileService@Actions@CreativeFramework@@AEAAXXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004094 (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x1800042A8 (-_Xbad_alloc@std@@YAXXZ.c)
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180023E6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$GetActivationFactory@UITargetedContentIdAliasStoreStatics@Internal@TargetedContent@Services@Windows@@@wil@@YA?AV?$com_ptr_t@UITargetedContentIdAliasStoreStatics@Internal@TargetedContent@Services@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x1800BC620 (--$GetActivationFactory@UITargetedContentIdAliasStoreStatics@Internal@TargetedContent@Services@W.c)
 *     ?DeserializeUnifiedTileIdentifier@Actions@CreativeFramework@@YA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@AEBQEB_W@Z @ 0x1800BE3CC (-DeserializeUnifiedTileIdentifier@Actions@CreativeFramework@@YA-AV-$com_ptr_t@UIUnifiedTileIdent.c)
 *     ?EnumerateAliasMap@SwapStartTileService@Actions@CreativeFramework@@AEAAXPEAUITargetedContentIdAliasStore@Internal@TargetedContent@Services@Windows@@AEBV?$function@$$A6A_NPEB_WPEAUITargetedContentIdAliasValue@Internal@TargetedContent@Services@Windows@@@Z@std@@@Z @ 0x1800BE4B4 (-EnumerateAliasMap@SwapStartTileService@Actions@CreativeFramework@@AEAAXPEAUITargetedContentIdAl.c)
 *     ?GetFriendlySubscriptionNameFromPlacementId@SubscribedContentUtils@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W@Z @ 0x1800BEAE4 (-GetFriendlySubscriptionNameFromPlacementId@SubscribedContentUtils@CreativeFramework@@YA-AV-$bas.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=13
_QWORD *__fastcall CreativeFramework::Actions::SwapStartTileService::GetSourceTileIdentifier(
        _QWORD *a1,
        _QWORD *a2,
        unsigned int a3)
{
  char *v5; // rdx
  unsigned int v6; // r8d
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, PVOID, _BYTE *); // rdi
  const WCHAR *v9; // rcx
  HSTRING_HEADER *v10; // rax
  int v11; // eax
  unsigned int v12; // r8d
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, PVOID, _QWORD, WCHAR **); // rdi
  void **v15; // rax
  HSTRING_HEADER *v16; // rax
  int v17; // eax
  char *v18; // rax
  HSTRING_HEADER *v19; // rcx
  HSTRING_HEADER *v20; // rdx
  HSTRING_HEADER *v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  _QWORD *v24; // rax
  int v26; // [rsp+20h] [rbp-59h]
  _BYTE v27[8]; // [rsp+30h] [rbp-49h] BYREF
  WCHAR *v28; // [rsp+38h] [rbp-41h] BYREF
  __int64 v29; // [rsp+40h] [rbp-39h] BYREF
  __int64 v30; // [rsp+48h] [rbp-31h] BYREF
  __int128 v31; // [rsp+50h] [rbp-29h] BYREF
  void *v32[3]; // [rsp+60h] [rbp-19h] BYREF
  unsigned __int64 v33; // [rsp+78h] [rbp-1h]
  HSTRING_HEADER v34; // [rsp+80h] [rbp+7h] BYREF
  HSTRING_HEADER *v35; // [rsp+98h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  *(_QWORD *)&v31 = a2;
  if ( a1[3] )
  {
    v24 = a1 + 1;
    if ( a1[4] >= 8uLL )
      v24 = (_QWORD *)*v24;
    *(_QWORD *)&v31 = v24;
    CreativeFramework::Actions::DeserializeUnifiedTileIdentifier(a2, (const WCHAR **)&v31, a3);
  }
  else
  {
    v29 = 0LL;
    wil::GetActivationFactory<Windows::Services::TargetedContent::Internal::ITargetedContentIdAliasStoreStatics>(
      (const WCHAR *)&v30,
      (__int64)a2,
      a3);
    v5 = (char *)(a1 + 21);
    if ( a1[24] >= 8uLL )
      v5 = *(char **)v5;
    CreativeFramework::SubscribedContentUtils::GetFriendlySubscriptionNameFromPlacementId(v32, v5);
    v7 = v30;
    v8 = *(__int64 (__fastcall **)(__int64, PVOID, _BYTE *))(*(_QWORD *)v30 + 56LL);
    v9 = (const WCHAR *)v32;
    if ( v33 >= 8 )
      v9 = (const WCHAR *)v32[0];
    v28 = (WCHAR *)v9;
    v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v34, (const WCHAR **)&v28, v6);
    v11 = v8(v7, v10[1].Reserved.Reserved1, v27);
    if ( v11 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        345LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)(unsigned int)v11,
        v26);
    if ( v27[0] )
    {
      v28 = 0LL;
      v13 = v30;
      v14 = *(__int64 (__fastcall **)(__int64, PVOID, _QWORD, WCHAR **))(*(_QWORD *)v30 + 64LL);
      v28 = 0LL;
      v15 = v32;
      if ( v33 >= 8 )
        v15 = (void **)v32[0];
      *(_QWORD *)&v31 = v15;
      v16 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v34, (const WCHAR **)&v31, v12);
      v17 = v14(v13, v16[1].Reserved.Reserved1, 0LL, &v28);
      if ( v17 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          349LL,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
          (const char *)(unsigned int)v17,
          v26);
      *(_QWORD *)&v31 = a1;
      *((_QWORD *)&v31 + 1) = &v29;
      v35 = 0LL;
      v18 = (char *)operator new(0x20uLL);
      if ( !v18 )
        std::_Xbad_alloc();
      *(_QWORD *)v18 = &std::_Func_impl<std::_Callable_obj<_lambda_5e4b16c36dead49fea411161d0ed4586_,0>,std::allocator<std::_Func_class<bool,wchar_t const *,Windows::Services::TargetedContent::Internal::ITargetedContentIdAliasValue *,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>>,bool,wchar_t const *,Windows::Services::TargetedContent::Internal::ITargetedContentIdAliasValue *,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::`vftable';
      *(_OWORD *)(v18 + 8) = v31;
      v35 = (HSTRING_HEADER *)v18;
      CreativeFramework::Actions::SwapStartTileService::EnumerateAliasMap(
        (__int64)&std::_Func_impl<std::_Callable_obj<_lambda_5e4b16c36dead49fea411161d0ed4586_,0>,std::allocator<std::_Func_class<bool,wchar_t const *,Windows::Services::TargetedContent::Internal::ITargetedContentIdAliasValue *,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>>,bool,wchar_t const *,Windows::Services::TargetedContent::Internal::ITargetedContentIdAliasValue *,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::`vftable',
        (__int64 *)v28,
        (__int64)&v34);
      v19 = v35;
      if ( v35 )
      {
        v20 = &v34;
        LOBYTE(v20) = v35 != &v34;
        (*((void (__fastcall **)(HSTRING_HEADER *, HSTRING_HEADER *))v35->Reserved.Reserved1 + 4))(v35, v20);
        v19 = 0LL;
        v35 = 0LL;
      }
      if ( v19 )
      {
        v21 = &v34;
        LOBYTE(v21) = v19 != &v34;
        (*((void (__fastcall **)(HSTRING_HEADER *, HSTRING_HEADER *))v19->Reserved.Reserved1 + 4))(v19, v21);
      }
      if ( v28 )
        (*(void (__fastcall **)(WCHAR *))(*(_QWORD *)v28 + 16LL))(v28);
    }
    v22 = v29;
    if ( !v29 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        367LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)0x80070490LL,
        v26);
    v23 = 0LL;
    v29 = 0LL;
    *a2 = v22;
    if ( v33 >= 8 )
    {
      operator delete(v32[0]);
      v23 = v29;
    }
    v33 = 7LL;
    v32[2] = 0LL;
    LOWORD(v32[0]) = 0;
    if ( v30 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
      v23 = v29;
    }
    if ( v23 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
  return a2;
}
