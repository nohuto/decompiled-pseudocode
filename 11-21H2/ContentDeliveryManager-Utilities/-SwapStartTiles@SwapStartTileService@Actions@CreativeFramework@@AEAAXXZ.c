/*
 * XREFs of ?SwapStartTiles@SwapStartTileService@Actions@CreativeFramework@@AEAAXXZ @ 0x1800C1250
 * Callers:
 *     ?Invoke@SwapStartTileService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800BFC60 (-Invoke@SwapStartTileService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180043DD8 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_STest03@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18005C544 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_STest03@@@details@wil@@A.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006940C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x180075B18 (--$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foun.c)
 *     ?CreatePackagedUnifiedTileIdentifier@Actions@CreativeFramework@@YA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@PEB_W0@Z @ 0x1800BE008 (-CreatePackagedUnifiedTileIdentifier@Actions@CreativeFramework@@YA-AV-$com_ptr_t@UIUnifiedTileId.c)
 *     ?CreatePackagedUnifiedTileIdentifier@Actions@CreativeFramework@@YA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@PEB_W@Z @ 0x1800BE1B4 (-CreatePackagedUnifiedTileIdentifier@Actions@CreativeFramework@@YA-AV-$com_ptr_t@UI_ea_1800BE1B4.c)
 *     ?DeserializeUnifiedTileIdentifier@Actions@CreativeFramework@@YA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@AEBQEB_W@Z @ 0x1800BE3CC (-DeserializeUnifiedTileIdentifier@Actions@CreativeFramework@@YA-AV-$com_ptr_t@UIUnifiedTileIdent.c)
 *     ?GetSourceTileIdentifier@SwapStartTileService@Actions@CreativeFramework@@AEAA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1800BF174 (-GetSourceTileIdentifier@SwapStartTileService@Actions@CreativeFramework@@AEAA-AV-$com_ptr_t@UIUn.c)
 *     ?GetStartGridCollection@Actions@CreativeFramework@@YA?AV?$com_ptr_t@UICuratedTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1800BF484 (-GetStartGridCollection@Actions@CreativeFramework@@YA-AV-$com_ptr_t@UICuratedTileCollection@Cura.c)
 *     ?IsPinnedToStart@StartDocked@@YAJV?$com_ptr_t@UIStartScreenManagerExtensionStatics@StartScreen@UI@WindowsUdk@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@3@PEAE@Z @ 0x1800BFC6C (-IsPinnedToStart@StartDocked@@YAJV-$com_ptr_t@UIStartScreenManagerExtensionStatics@StartScreen@U.c)
 *     ?SwapTilesInStart@StartDocked@@YAJV?$com_ptr_t@UIStartScreenManagerExtensionStatics@StartScreen@UI@WindowsUdk@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@3@1PEAE@Z @ 0x1800C1740 (-SwapTilesInStart@StartDocked@@YAJV-$com_ptr_t@UIStartScreenManagerExtensionStatics@StartScreen@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=14
void __fastcall CreativeFramework::Actions::SwapStartTileService::SwapStartTiles(
        CreativeFramework::Actions::SwapStartTileService *this)
{
  unsigned int v2; // r8d
  char v3; // r14
  __int64 v4; // rdx
  unsigned int v5; // r8d
  unsigned int v6; // r8d
  const WCHAR *v7; // rax
  const WCHAR *v8; // rdx
  const WCHAR *v9; // r8
  const WCHAR *v10; // rdx
  __int64 *v11; // rcx
  int IsPinnedToStart; // eax
  __int64 v13; // rcx
  int v14; // eax
  int v15; // eax
  unsigned int v16; // r8d
  __int64 *v17; // rbx
  __int64 (__fastcall *v18)(__int64 *, _QWORD, __int64); // r15
  const WCHAR *v19; // rax
  unsigned int v20; // r8d
  const WCHAR *v21; // rdx
  const WCHAR *v22; // r8
  const WCHAR *v23; // rdx
  __int64 v24; // rdi
  _QWORD *SourceTileIdentifier; // rax
  unsigned int v26; // ebx
  __int64 (__fastcall **v27)(_QWORD, _QWORD, _QWORD); // rax
  int v28; // eax
  DWORD v29; // edx
  int v30; // r8d
  int v31; // eax
  int v32; // [rsp+20h] [rbp-60h]
  __int64 *v33; // [rsp+40h] [rbp-40h] BYREF
  __int64 (__fastcall ***v34)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp-38h] BYREF
  __int64 v35; // [rsp+50h] [rbp-30h] BYREF
  __int64 v36; // [rsp+58h] [rbp-28h] BYREF
  __int64 v37; // [rsp+60h] [rbp-20h] BYREF
  const WCHAR *v38; // [rsp+68h] [rbp-18h] BYREF
  signed __int32 v39[4]; // [rsp+70h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]
  const WCHAR *v41; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v42; // [rsp+D0h] [rbp+50h] BYREF
  __int64 (__fastcall ***v43)(_QWORD, GUID *, __int64 *); // [rsp+D8h] [rbp+58h] BYREF

  v2 = `wil::Feature<__WilFeatureTraits_Feature_STest03>::GetImpl'::`2'::impl;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_STest03>::GetImpl'::`2'::impl & 2) == 0 )
  {
    v38 = *(const WCHAR **)wil::details::FeatureImpl<__WilFeatureTraits_Feature_STest03>::GetCachedFeatureEnabledState(
                             &`wil::Feature<__WilFeatureTraits_Feature_STest03>::GetImpl'::`2'::impl,
                             v39);
    v2 = (unsigned int)v38;
  }
  LODWORD(v41) = 0;
  BYTE4(v41) = 3;
  v3 = 1;
  wil::details::ReportUsageToService(
    (__int64)&unk_1801AF1B8,
    0x1C563ECu,
    (v2 >> 8) & 1,
    (v2 >> 9) & 1,
    (const struct FEATURE_LOGGED_TRAITS *)&v41,
    1,
    0);
  if ( *((_QWORD *)this + 33) )
  {
    LOBYTE(v42) = 0;
    LOBYTE(v41) = 0;
    CreativeFramework::Actions::SwapStartTileService::GetSourceTileIdentifier(this, &v37, v5);
    if ( *((_QWORD *)this + 7) )
    {
      v7 = (const WCHAR *)((char *)this + 40);
      if ( *((_QWORD *)this + 8) >= 8uLL )
        v7 = *(const WCHAR **)v7;
      v38 = v7;
      CreativeFramework::Actions::DeserializeUnifiedTileIdentifier(&v43, &v38, v6);
    }
    else if ( *((_QWORD *)this + 11) )
    {
      v8 = (const WCHAR *)((char *)this + 72);
      if ( *((_QWORD *)this + 12) >= 8uLL )
        v8 = *(const WCHAR **)v8;
      CreativeFramework::Actions::CreatePackagedUnifiedTileIdentifier((const WCHAR *)&v43, v8, v6);
    }
    else
    {
      v9 = (const WCHAR *)((char *)this + 136);
      if ( *((_QWORD *)this + 20) >= 8uLL )
        v9 = *(const WCHAR **)v9;
      v10 = (const WCHAR *)((char *)this + 104);
      if ( *((_QWORD *)this + 16) >= 8uLL )
        v10 = *(const WCHAR **)v10;
      CreativeFramework::Actions::CreatePackagedUnifiedTileIdentifier(&v43, v10, v9);
    }
    v34 = v43;
    if ( v43 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v43)[1])(v43);
    v11 = (__int64 *)*((_QWORD *)this + 33);
    v33 = v11;
    if ( v11 )
      (*(void (__fastcall **)(__int64 *))(*v11 + 8))(v11);
    IsPinnedToStart = StartDocked::IsPinnedToStart(&v33, &v34, (__int64)&v41);
    if ( IsPinnedToStart < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        273LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)(unsigned int)IsPinnedToStart,
        v32);
    if ( !(_BYTE)v41 )
    {
      v34 = v43;
      if ( v43 )
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v43)[1])(v43);
      v35 = v37;
      if ( v37 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 8LL))(v37);
      v13 = *((_QWORD *)this + 33);
      v36 = v13;
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
      v14 = StartDocked::SwapTilesInStart(&v36, &v35, &v34, &v42);
      if ( v14 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          276LL,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
          (const char *)(unsigned int)v14,
          v32);
    }
    if ( v43 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v43)[2])(v43);
    if ( v37 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  }
  else
  {
    CreativeFramework::Actions::GetStartGridCollection(&v34, v4, v5);
    v33 = 0LL;
    v15 = (**v34)(v34, &GUID_adbf8965_6056_4126_ab26_6660af4661ce, (__int64 *)&v33);
    if ( v15 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        6136LL,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
        (const char *)(unsigned int)v15,
        v32);
    v17 = v33;
    v18 = *(__int64 (__fastcall **)(__int64 *, _QWORD, __int64))(*v33 + 72);
    if ( *((_QWORD *)this + 7) )
    {
      v19 = (const WCHAR *)((char *)this + 40);
      if ( *((_QWORD *)this + 8) >= 8uLL )
        v19 = *(const WCHAR **)v19;
      v41 = v19;
      CreativeFramework::Actions::DeserializeUnifiedTileIdentifier(&v42, &v41, v16);
    }
    else if ( *((_QWORD *)this + 11) )
    {
      v21 = (const WCHAR *)((char *)this + 72);
      if ( *((_QWORD *)this + 12) >= 8uLL )
        v21 = *(const WCHAR **)v21;
      CreativeFramework::Actions::CreatePackagedUnifiedTileIdentifier((const WCHAR *)&v42, v21, v16);
    }
    else
    {
      v22 = (const WCHAR *)((char *)this + 136);
      if ( *((_QWORD *)this + 20) >= 8uLL )
        v22 = *(const WCHAR **)v22;
      v23 = (const WCHAR *)((char *)this + 104);
      if ( *((_QWORD *)this + 16) >= 8uLL )
        v23 = *(const WCHAR **)v23;
      CreativeFramework::Actions::CreatePackagedUnifiedTileIdentifier(&v42, v23, v22);
    }
    v24 = v42;
    SourceTileIdentifier = CreativeFramework::Actions::SwapStartTileService::GetSourceTileIdentifier(this, &v37, v20);
    v26 = v18(v17, *SourceTileIdentifier, v24);
    if ( v37 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
    if ( v42 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
    if ( (int)(v26 + 0x80000000) < 0 || v26 == -2147024811 )
      v3 = 0;
    if ( v3 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x11C,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)v26);
    v43 = 0LL;
    v27 = (__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))*v34;
    v43 = 0LL;
    v28 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))v27[28])(
            v34,
            &v43);
    if ( v28 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        287LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)(unsigned int)v28,
        v32);
    v31 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncAction *>(v43, v29, v30);
    if ( v31 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1639LL,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\winrt.h",
        (const char *)(unsigned int)v31,
        v32);
    if ( v43 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v43)[2])(v43);
    if ( v33 )
      (*(void (__fastcall **)(__int64 *))(*v33 + 16))(v33);
    if ( v34 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v34)[2])(v34);
  }
}
