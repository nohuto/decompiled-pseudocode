/*
 * XREFs of ?SetCollectionProperties@AddTileToCollectionService@Actions@CreativeFramework@@AEAAXPEAUICuratedTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x1800C0FE4
 * Callers:
 *     ?Invoke@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800BFB10 (-Invoke@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180023E6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18003F5AC (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CommitCollectionChanges@AddTileToCollectionService@Actions@CreativeFramework@@AEAAXPEAUICuratedTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x1800BDF60 (-CommitCollectionChanges@AddTileToCollectionService@Actions@CreativeFramework@@AEAAXPEAUICurated.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CreativeFramework::Actions::AddTileToCollectionService::SetCollectionProperties(
        CreativeFramework::Actions::AddTileToCollectionService *this,
        struct WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollection *a2,
        unsigned int a3)
{
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, HSTRING *); // rbx
  int v6; // eax
  __int64 (__fastcall *v7)(struct WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollection *, HSTRING, HSTRING); // rdi
  HSTRING v8; // rbx
  HRESULT v9; // eax
  int v10; // eax
  wil::details::in1diag3 *v11; // rcx
  CreativeFramework::Actions::AddTileToCollectionService *v12; // rcx
  __int64 (__fastcall *v13)(struct WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollection *, HSTRING, PVOID); // rbx
  HSTRING v14; // rax
  PVOID Reserved1; // rdi
  HRESULT v16; // eax
  int v17; // eax
  HSTRING v18; // [rsp+20h] [rbp-50h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+28h] [rbp-48h] BYREF
  HSTRING string; // [rsp+40h] [rbp-30h] BYREF
  HSTRING_HEADER v21; // [rsp+48h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  if ( !*((_QWORD *)this + 12) )
  {
    v18 = 0LL;
    v4 = *((_QWORD *)this + 22);
    v5 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v4 + 56LL);
    WindowsDeleteString(0LL);
    v18 = 0LL;
    v6 = v5(v4, &v18);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        649LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)(unsigned int)v6,
        (int)v18);
    v7 = *(__int64 (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollection *, HSTRING, HSTRING))(*(_QWORD *)a2 + 288LL);
    v8 = v18;
    string = 0LL;
    v9 = WindowsCreateStringReference(L"Start.Suggestions.HiddenTileId", 0x1Eu, &hstringHeader, &string);
    if ( v9 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v9);
    }
    else
    {
      v10 = v7(a2, string, v8);
      v11 = retaddr;
      if ( v10 >= 0 )
      {
        WindowsDeleteString(v18);
        goto LABEL_10;
      }
    }
    wil::details::in1diag3::Throw_Hr(
      v11,
      650LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v10,
      (int)v18);
  }
  v13 = *(__int64 (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollection *, HSTRING, PVOID))(*(_QWORD *)a2 + 288LL);
  v14 = (HSTRING)((char *)this + 80);
  if ( *((_QWORD *)this + 13) >= 8uLL )
    v14 = *(HSTRING *)v14;
  v18 = v14;
  Reserved1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v21, (const WCHAR **)&v18, a3)[1].Reserved.Reserved1;
  string = 0LL;
  v16 = WindowsCreateStringReference(L"Start.Suggestions.Heading", 0x19u, &hstringHeader, &string);
  if ( v16 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v16);
    JUMPOUT(0x1800C11C7LL);
  }
  v17 = v13(a2, string, Reserved1);
  v12 = retaddr;
  if ( v17 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      655LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v17,
      (int)v18);
LABEL_10:
  CreativeFramework::Actions::AddTileToCollectionService::CommitCollectionChanges(v12, a2);
}
