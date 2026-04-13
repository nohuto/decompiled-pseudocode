/*
 * XREFs of ?SetCollectionProperties@AddTileToCollectionService@Actions@CreativeFramework@@AEAAXPEAUICuratedTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x1800AF3E0
 * Callers:
 *     ?Invoke@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800AE600 (-Invoke@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180024270 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x180030D64 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043300 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CommitCollectionChanges@AddTileToCollectionService@Actions@CreativeFramework@@AEAAXPEAUICuratedTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x1800AD070 (-CommitCollectionChanges@AddTileToCollectionService@Actions@CreativeFramework@@AEAAXPEAUICurated.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
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
  __int64 (__fastcall *v7)(struct WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollection *, __int64, HSTRING); // rdi
  HSTRING v8; // rbx
  int v9; // eax
  CreativeFramework::Actions::AddTileToCollectionService *v10; // rcx
  __int64 (__fastcall *v11)(struct WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollection *, __int64, PVOID); // rdi
  HSTRING v12; // rax
  PVOID Reserved1; // rbx
  int v14; // eax
  HSTRING string; // [rsp+20h] [rbp-50h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+28h] [rbp-48h] BYREF
  __int64 v17; // [rsp+40h] [rbp-30h]
  HSTRING_HEADER v18; // [rsp+48h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  if ( *((_QWORD *)this + 12) )
  {
    v11 = *(__int64 (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollection *, __int64, PVOID))(*(_QWORD *)a2 + 288LL);
    v12 = (HSTRING)((char *)this + 80);
    if ( *((_QWORD *)this + 13) >= 8uLL )
      v12 = *(HSTRING *)v12;
    string = v12;
    Reserved1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v18, (const WCHAR **)&string, a3)[1].Reserved.Reserved1;
    v17 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Start.Suggestions.Heading",
      0x1Au,
      0x19u);
    v14 = v11(a2, v17, Reserved1);
    v10 = retaddr;
    if ( v14 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x284,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)(unsigned int)v14,
        (int)string);
  }
  else
  {
    string = 0LL;
    v4 = *((_QWORD *)this + 22);
    v5 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v4 + 56LL);
    WindowsDeleteString(0LL);
    string = 0LL;
    v6 = v5(v4, &string);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x27E,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)(unsigned int)v6,
        (int)string);
    v7 = *(__int64 (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollection *, __int64, HSTRING))(*(_QWORD *)a2 + 288LL);
    v8 = string;
    v17 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Start.Suggestions.HiddenTileId",
      0x1Fu,
      0x1Eu);
    v9 = v7(a2, v17, v8);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x27F,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)(unsigned int)v9,
        (int)string);
    WindowsDeleteString(string);
  }
  CreativeFramework::Actions::AddTileToCollectionService::CommitCollectionChanges(v10, a2);
}
