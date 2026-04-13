/*
 * XREFs of ??0AddTileToCollectionService@Actions@CreativeFramework@@QEAA@PEB_WAEBUPinToStartProperties@12@@Z @ 0x1800BCCC8
 * Callers:
 *     ??$make_shared@VAddTileToCollectionService@Actions@CreativeFramework@@PEB_WAEAUPinToStartProperties@23@@std@@YA?AV?$shared_ptr@VAddTileToCollectionService@Actions@CreativeFramework@@@0@$$QEAPEB_WAEAUPinToStartProperties@Actions@CreativeFramework@@@Z @ 0x1800BCB28 (--$make_shared@VAddTileToCollectionService@Actions@CreativeFramework@@PEB_WAEAUPinToStartPropert.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180023E6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x1800A41C4 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ??$GetActivationFactory@UITargetedContentUnifiedTileIdentifierFactory@UnifiedTile@Shell@WindowsInternal@@@wil@@YA?AV?$com_ptr_t@UITargetedContentUnifiedTileIdentifierFactory@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x1800BC6C0 (--$GetActivationFactory@UITargetedContentUnifiedTileIdentifierFactory@UnifiedTile@Shell@WindowsI.c)
 *     ?GetFriendlySubscriptionNameFromPlacementId@SubscribedContentUtils@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W@Z @ 0x1800BEAE4 (-GetFriendlySubscriptionNameFromPlacementId@SubscribedContentUtils@CreativeFramework@@YA-AV-$bas.c)
 *     ?GetHashedTileAlias@AddTileToCollectionService@Actions@CreativeFramework@@AEAA?AVHString@Wrappers@WRL@Microsoft@@PEB_W0@Z @ 0x1800BED70 (-GetHashedTileAlias@AddTileToCollectionService@Actions@CreativeFramework@@AEAA-AVHString@Wrapper.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=16
CreativeFramework::Actions::AddTileToCollectionService *__fastcall CreativeFramework::Actions::AddTileToCollectionService::AddTileToCollectionService(
        CreativeFramework::Actions::AddTileToCollectionService *this,
        const wchar_t *a2,
        void **a3)
{
  char *v6; // rcx
  int v7; // edi
  _QWORD *v8; // rsi
  _QWORD *v9; // r15
  const wchar_t *v10; // rcx
  _QWORD *v11; // rbx
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // r10
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  unsigned int v16; // r8d
  unsigned int v17; // r8d
  __int64 v18; // rbx
  __int64 (__fastcall *v19)(__int64, PVOID, HSTRING, __int64 *); // rsi
  HSTRING v20; // rdi
  const WCHAR *v21; // rax
  HSTRING_HEADER *v22; // rax
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rdx
  int v28; // [rsp+20h] [rbp-69h]
  __int64 v29; // [rsp+30h] [rbp-59h] BYREF
  int v30; // [rsp+38h] [rbp-51h]
  __int64 v31; // [rsp+40h] [rbp-49h] BYREF
  HSTRING string; // [rsp+48h] [rbp-41h] BYREF
  const WCHAR *v33[2]; // [rsp+50h] [rbp-39h] BYREF
  void *v34[3]; // [rsp+60h] [rbp-29h] BYREF
  unsigned __int64 v35; // [rsp+78h] [rbp-11h]
  HSTRING_HEADER v36; // [rsp+80h] [rbp-9h] BYREF
  __int64 v37; // [rsp+98h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v33[1] = (const WCHAR *)this;
  v30 = 0;
  *(_QWORD *)this = &CreativeFramework::Actions::AddTileToCollectionService::`vftable';
  v6 = (char *)this + 16;
  *((_QWORD *)v6 + 3) = 7LL;
  *((_QWORD *)v6 + 2) = 0LL;
  *(_WORD *)v6 = 0;
  v7 = -1;
  std::wstring::assign((void **)v6, a3, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  *((_QWORD *)this + 9) = 7LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_WORD *)this + 24) = 0;
  *((_QWORD *)this + 13) = 7LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_WORD *)this + 40) = 0;
  std::wstring::assign((void **)this + 10, a3 + 8, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  v8 = (_QWORD *)((char *)this + 112);
  *((_QWORD *)this + 17) = 7LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_WORD *)this + 56) = 0;
  std::wstring::assign((void **)this + 14, a3 + 12, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  v9 = (_QWORD *)((char *)this + 144);
  *((_QWORD *)this + 21) = 7LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_WORD *)this + 72) = 0;
  std::wstring::assign((void **)this + 18, a3 + 16, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  *((_QWORD *)this + 22) = 0LL;
  *((_DWORD *)this + 46) = *((_DWORD *)a3 + 40);
  v11 = a3 + 4;
  v12 = aHidden[0] != 0 ? 6 : 0;
  v13 = v11[2];
  v14 = v13;
  if ( v13 >= v12 )
    v14 = aHidden[0] != 0 ? 6 : 0;
  if ( v11[3] >= 8uLL )
    v11 = (_QWORD *)*v11;
  if ( v14 )
  {
    v10 = L"hidden";
    while ( *(_WORD *)v11 == *v10 )
    {
      v11 = (_QWORD *)((char *)v11 + 2);
      ++v10;
      if ( !--v14 )
        goto LABEL_9;
    }
    v7 = *(_WORD *)v11 < *v10 ? -1 : 1;
  }
  else
  {
LABEL_9:
    if ( v13 >= v12 )
      v7 = v13 != v12;
  }
  *((_BYTE *)this + 8) = v7 == 0;
  if ( *((_QWORD *)this + 21) >= 8uLL )
    v9 = (_QWORD *)*v9;
  if ( *((_QWORD *)this + 17) >= 8uLL )
    v8 = (_QWORD *)*v8;
  CreativeFramework::Actions::AddTileToCollectionService::GetHashedTileAlias(v10, &string, v8, v9);
  CreativeFramework::SubscribedContentUtils::GetFriendlySubscriptionNameFromPlacementId(v34, a2);
  wil::GetActivationFactory<WindowsInternal::Shell::UnifiedTile::ITargetedContentUnifiedTileIdentifierFactory>(
    (const WCHAR *)&v31,
    v15,
    v16);
  v29 = 0LL;
  v30 = 1;
  v18 = v31;
  v19 = *(__int64 (__fastcall **)(__int64, PVOID, HSTRING, __int64 *))(*(_QWORD *)v31 + 48LL);
  v29 = 0LL;
  v20 = string;
  v21 = (const WCHAR *)v34;
  if ( v35 >= 8 )
    v21 = (const WCHAR *)v34[0];
  v33[0] = v21;
  v22 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v36, v33, v17);
  v23 = v19(v18, v22[1].Reserved.Reserved1, v20, &v29);
  if ( v23 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      545LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v23,
      v28);
  v37 = 0LL;
  if ( v31 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  if ( v35 >= 8 )
    operator delete(v34[0]);
  v35 = 7LL;
  v34[2] = 0LL;
  LOWORD(v34[0]) = 0;
  WindowsDeleteString(string);
  v24 = v29;
  v25 = 0LL;
  v29 = 0LL;
  v26 = *((_QWORD *)this + 22);
  *((_QWORD *)this + 22) = v24;
  if ( v26 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    v25 = v29;
  }
  if ( v25 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  return this;
}
