/*
 * XREFs of ?Revert@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800C0E90
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     CreativeFramework::Actions::EnumerateCollectionItems__lambda_e186064656f7d8cd47b6dee26a4bab29___ @ 0x1800BC0F4 (CreativeFramework--Actions--EnumerateCollectionItems__lambda_e186064656f7d8cd47b6dee26a4bab29___.c)
 *     ?CommitCollectionChanges@AddTileToCollectionService@Actions@CreativeFramework@@AEAAXPEAUICuratedTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x1800BDF60 (-CommitCollectionChanges@AddTileToCollectionService@Actions@CreativeFramework@@AEAAXPEAUICurated.c)
 *     ?GetCollection@AddTileToCollectionService@Actions@CreativeFramework@@AEAA?AV?$com_ptr_t@UICuratedTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@PEB_W_N@Z @ 0x1800BE960 (-GetCollection@AddTileToCollectionService@Actions@CreativeFramework@@AEAA-AV-$com_ptr_t@UICurate.c)
 *     ?RemoveCollectionProperties@AddTileToCollectionService@Actions@CreativeFramework@@AEAAXPEAUICuratedTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x1800C0D54 (-RemoveCollectionProperties@AddTileToCollectionService@Actions@CreativeFramework@@AEAAXPEAUICura.c)
 *     ?UpdateTileAliasSystem@AddTileToCollectionService@Actions@CreativeFramework@@AEAAXPEAUIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@_N@Z @ 0x1800C1C8C (-UpdateTileAliasSystem@AddTileToCollectionService@Actions@CreativeFramework@@AEAAXPEAUIUnifiedTi.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CreativeFramework::Actions::AddTileToCollectionService::Revert(
        CreativeFramework::Actions::AddTileToCollectionService *this)
{
  const WCHAR *v2; // r8
  CreativeFramework::Actions::AddTileToCollectionService *v3; // rcx
  struct WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollection *v4; // rbx
  __int64 v5; // rsi
  __int64 (__fastcall *v6)(__int64, HSTRING *); // rdi
  int v7; // eax
  CreativeFramework::Actions::AddTileToCollectionService *v8; // rcx
  _QWORD v9[4]; // [rsp+20h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  char v11; // [rsp+70h] [rbp+30h] BYREF
  HSTRING string; // [rsp+78h] [rbp+38h] BYREF
  struct WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollection *v13; // [rsp+80h] [rbp+40h] BYREF
  struct WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollection *v14; // [rsp+88h] [rbp+48h] BYREF

  v2 = (const WCHAR *)((char *)this + 16);
  if ( *((_QWORD *)this + 5) >= 8uLL )
    v2 = *(const WCHAR **)v2;
  CreativeFramework::Actions::AddTileToCollectionService::GetCollection(
    (__int64)this,
    &v14,
    v2,
    *((_BYTE *)this + 184) & 1);
  v4 = v14;
  if ( v14 )
  {
    if ( *((_BYTE *)this + 8) )
    {
      CreativeFramework::Actions::AddTileToCollectionService::RemoveCollectionProperties(v3, v14);
    }
    else if ( (*((_BYTE *)this + 184) & 2) == 0 )
    {
      v13 = v14;
      string = 0LL;
      v5 = *((_QWORD *)this + 22);
      v6 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v5 + 56LL);
      WindowsDeleteString(0LL);
      string = 0LL;
      v7 = v6(v5, &string);
      if ( v7 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          580LL,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
          (const char *)(unsigned int)v7,
          v9[0]);
      v11 = 0;
      v9[0] = &string;
      v9[1] = &v13;
      v9[2] = &v11;
      CreativeFramework::Actions::EnumerateCollectionItems__lambda_e186064656f7d8cd47b6dee26a4bab29___(
        (__int64 *)v13,
        (__int64)v9);
      if ( v11 )
        CreativeFramework::Actions::AddTileToCollectionService::CommitCollectionChanges(v8, v13);
      WindowsDeleteString(string);
    }
    CreativeFramework::Actions::AddTileToCollectionService::UpdateTileAliasSystem(
      this,
      *((struct WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier **)this + 22),
      0);
    (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollection *))(*(_QWORD *)v4 + 16LL))(v4);
  }
}
