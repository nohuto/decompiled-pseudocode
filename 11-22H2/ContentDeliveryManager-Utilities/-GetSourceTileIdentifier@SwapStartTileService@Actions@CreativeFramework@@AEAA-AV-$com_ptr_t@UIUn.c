/*
 * XREFs of ?GetSourceTileIdentifier@SwapStartTileService@Actions@CreativeFramework@@AEAA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1800ADE84
 * Callers:
 *     ?SwapStartTiles@SwapStartTileService@Actions@CreativeFramework@@AEAAXXZ @ 0x1800AF5E8 (-SwapStartTiles@SwapStartTileService@Actions@CreativeFramework@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180024270 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002C074 (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043350 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$function@$$A6AXPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z@std@@QEAA@XZ @ 0x180053324 (--1-$function@$$A6AXPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Window.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x1800627B4 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     ??$?0V_lambda_6bc2a757313ab37e766f9d0f904bfdba_@@@?$function@$$A6A_NPEB_WPEAUITargetedContentIdAliasValue@Internal@TargetedContent@Services@Windows@@@Z@std@@QEAA@$$QEAV_lambda_6bc2a757313ab37e766f9d0f904bfdba_@@@Z @ 0x1800AB7C0 (--$-0V_lambda_6bc2a757313ab37e766f9d0f904bfdba_@@@-$function@$$A6A_NPEB_WPEAUITargetedContentIdA.c)
 *     ??$GetActivationFactory@UITargetedContentIdAliasStoreStatics@Internal@TargetedContent@Services@Windows@@@wil@@YA?AV?$com_ptr_t@UITargetedContentIdAliasStoreStatics@Internal@TargetedContent@Services@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x1800ABD14 (--$GetActivationFactory@UITargetedContentIdAliasStoreStatics@Internal@TargetedContent@Services@W.c)
 *     ??0_lambda_6bc2a757313ab37e766f9d0f904bfdba_@@QEAA@QEAVSwapStartTileService@Actions@CreativeFramework@@AEAV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800AC4D8 (--0_lambda_6bc2a757313ab37e766f9d0f904bfdba_@@QEAA@QEAVSwapStartTileService@Actions@CreativeFram.c)
 *     ?DeserializeUnifiedTileIdentifier@Actions@CreativeFramework@@YA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@AEBQEB_W@Z @ 0x1800AD568 (-DeserializeUnifiedTileIdentifier@Actions@CreativeFramework@@YA-AV-$com_ptr_t@UIUnifiedTileIdent.c)
 *     ?EnumerateAliasMap@SwapStartTileService@Actions@CreativeFramework@@AEAAXPEAUITargetedContentIdAliasStore@Internal@TargetedContent@Services@Windows@@AEBV?$function@$$A6A_NPEB_WPEAUITargetedContentIdAliasValue@Internal@TargetedContent@Services@Windows@@@Z@std@@@Z @ 0x1800AD638 (-EnumerateAliasMap@SwapStartTileService@Actions@CreativeFramework@@AEAAXPEAUITargetedContentIdAl.c)
 *     ?GetFriendlySubscriptionNameFromPlacementId@SubscribedContentUtils@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W@Z @ 0x1800ADA88 (-GetFriendlySubscriptionNameFromPlacementId@SubscribedContentUtils@CreativeFramework@@YA-AV-$bas.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
WCHAR *__fastcall CreativeFramework::Actions::SwapStartTileService::GetSourceTileIdentifier(
        __int64 a1,
        WCHAR *a2,
        unsigned int a3)
{
  unsigned int v5; // r8d
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, PVOID, _BYTE *); // rdi
  const WCHAR *v8; // rcx
  HSTRING_HEADER *v9; // rax
  int v10; // eax
  unsigned int v11; // r8d
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, PVOID, _QWORD, WCHAR **); // rdi
  const WCHAR *v14; // rax
  HSTRING_HEADER *v15; // rax
  int v16; // eax
  _QWORD *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  const WCHAR *v20; // rax
  int v22; // [rsp+20h] [rbp-49h]
  _BYTE v23[8]; // [rsp+30h] [rbp-39h] BYREF
  WCHAR *v24; // [rsp+38h] [rbp-31h] BYREF
  __int64 v25; // [rsp+40h] [rbp-29h] BYREF
  __int64 v26; // [rsp+48h] [rbp-21h] BYREF
  const WCHAR *v27[3]; // [rsp+50h] [rbp-19h] BYREF
  _QWORD v28[3]; // [rsp+68h] [rbp-1h] BYREF
  unsigned __int64 v29; // [rsp+80h] [rbp+17h]
  HSTRING_HEADER v30; // [rsp+88h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v27[0] = a2;
  if ( *(_QWORD *)(a1 + 24) )
  {
    v20 = (const WCHAR *)(a1 + 8);
    if ( *(_QWORD *)(a1 + 32) >= 8uLL )
      v20 = *(const WCHAR **)v20;
    v27[0] = v20;
    CreativeFramework::Actions::DeserializeUnifiedTileIdentifier(a2, v27, a3);
  }
  else
  {
    v25 = 0LL;
    wil::GetActivationFactory<Windows::Services::TargetedContent::Internal::ITargetedContentIdAliasStoreStatics>(
      (const WCHAR *)&v26,
      (__int64)a2,
      a3);
    CreativeFramework::SubscribedContentUtils::GetFriendlySubscriptionNameFromPlacementId((__int64)v28);
    v6 = v26;
    v7 = *(__int64 (__fastcall **)(__int64, PVOID, _BYTE *))(*(_QWORD *)v26 + 56LL);
    v8 = (const WCHAR *)v28;
    if ( v29 >= 8 )
      v8 = (const WCHAR *)v28[0];
    v24 = (WCHAR *)v8;
    v9 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v30, (const WCHAR **)&v24, v5);
    v10 = v7(v6, v9[1].Reserved.Reserved1, v23);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x14E,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)(unsigned int)v10,
        v22);
    if ( v23[0] )
    {
      v24 = 0LL;
      v12 = v26;
      v13 = *(__int64 (__fastcall **)(__int64, PVOID, _QWORD, WCHAR **))(*(_QWORD *)v26 + 64LL);
      v24 = 0LL;
      v14 = (const WCHAR *)v28;
      if ( v29 >= 8 )
        v14 = (const WCHAR *)v28[0];
      v27[0] = v14;
      v15 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v30, v27, v11);
      v16 = v13(v12, v15[1].Reserved.Reserved1, 0LL, &v24);
      if ( v16 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x152,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
          (const char *)(unsigned int)v16,
          v22);
      v17 = _lambda_6bc2a757313ab37e766f9d0f904bfdba_::_lambda_6bc2a757313ab37e766f9d0f904bfdba_(v27, a1, (__int64)&v25);
      std::function<bool (wchar_t const *,Windows::Services::TargetedContent::Internal::ITargetedContentIdAliasValue *)>::function<bool (wchar_t const *,Windows::Services::TargetedContent::Internal::ITargetedContentIdAliasValue *)>(
        (__int64)&v30,
        v17);
      CreativeFramework::Actions::SwapStartTileService::EnumerateAliasMap(v18, (__int64 *)v24, (__int64)&v30);
      std::function<void (Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>)>::~function<void (Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>)>((__int64)&v30);
      wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v24);
    }
    v19 = v25;
    if ( !v25 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x164,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)0x80070490LL,
        v22);
    v25 = 0LL;
    *(_QWORD *)a2 = v19;
    std::wstring::_Tidy(v28, 1, 0LL);
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v26);
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v25);
  }
  return a2;
}
