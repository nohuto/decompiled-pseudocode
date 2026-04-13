/*
 * XREFs of ?RemoveCollectionProperties@AddTileToCollectionService@Actions@CreativeFramework@@AEAAXPEAUICuratedTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x1800C0D54
 * Callers:
 *     ?Revert@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800C0E90 (-Revert@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18003F5AC (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CommitCollectionChanges@AddTileToCollectionService@Actions@CreativeFramework@@AEAAXPEAUICuratedTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x1800BDF60 (-CommitCollectionChanges@AddTileToCollectionService@Actions@CreativeFramework@@AEAAXPEAUICurated.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CreativeFramework::Actions::AddTileToCollectionService::RemoveCollectionProperties(
        CreativeFramework::Actions::AddTileToCollectionService *this,
        struct WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollection *a2)
{
  __int64 (__fastcall *v3)(struct WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollection *, HSTRING); // rdi
  HRESULT v4; // eax
  int v5; // eax
  wil::details::in1diag3 *v6; // rcx
  __int64 (__fastcall *v7)(struct WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollection *, HSTRING); // rdi
  HRESULT v8; // eax
  int v9; // eax
  HSTRING_HEADER hstringHeader; // [rsp+20h] [rbp-38h] BYREF
  HSTRING string; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v3 = *(__int64 (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollection *, HSTRING))(*(_QWORD *)a2 + 280LL);
  string = 0LL;
  v4 = WindowsCreateStringReference(L"Start.Suggestions.HiddenTileId", 0x1Eu, &hstringHeader, &string);
  if ( v4 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v4);
LABEL_8:
    wil::details::in1diag3::Throw_Hr(
      v6,
      662LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v5,
      (int)hstringHeader.Reserved.Reserved1);
  }
  v5 = v3(a2, string);
  v6 = retaddr;
  if ( v5 < 0 )
    goto LABEL_8;
  v7 = *(__int64 (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollection *, HSTRING))(*(_QWORD *)a2 + 280LL);
  string = 0LL;
  v8 = WindowsCreateStringReference(L"Start.Suggestions.Heading", 0x19u, &hstringHeader, &string);
  if ( v8 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v8);
    JUMPOUT(0x1800C0E85LL);
  }
  v9 = v7(a2, string);
  if ( v9 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      663LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v9,
      (int)hstringHeader.Reserved.Reserved1);
  CreativeFramework::Actions::AddTileToCollectionService::CommitCollectionChanges(retaddr, a2);
}
