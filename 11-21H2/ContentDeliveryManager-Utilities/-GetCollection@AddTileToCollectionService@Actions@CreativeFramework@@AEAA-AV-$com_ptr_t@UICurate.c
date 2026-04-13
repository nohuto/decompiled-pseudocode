/*
 * XREFs of ?GetCollection@AddTileToCollectionService@Actions@CreativeFramework@@AEAA?AV?$com_ptr_t@UICuratedTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@PEB_W_N@Z @ 0x1800BE960
 * Callers:
 *     ?Invoke@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800BFB10 (-Invoke@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ.c)
 *     ?Revert@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800C0E90 (-Revert@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180023E6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ActivateInstance@UICuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@wil@@YA?AV?$com_ptr_t@UICuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x1800BBFF8 (--$ActivateInstance@UICuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@Wind.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
_QWORD *__fastcall CreativeFramework::Actions::AddTileToCollectionService::GetCollection(
        __int64 a1,
        _QWORD *a2,
        const WCHAR *a3,
        char a4)
{
  unsigned int v7; // r8d
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, PVOID, int *); // rdi
  HSTRING_HEADER *v10; // rax
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, PVOID, __int64 *); // rdi
  const WCHAR *v15; // rax
  HSTRING_HEADER *v16; // rax
  int v17; // eax
  __int64 v18; // rax
  int v20; // [rsp+20h] [rbp-50h] BYREF
  __int64 v21; // [rsp+28h] [rbp-48h] BYREF
  __int64 v22; // [rsp+30h] [rbp-40h] BYREF
  const WCHAR *v23; // [rsp+38h] [rbp-38h] BYREF
  HSTRING_HEADER v24; // [rsp+40h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v23 = a3;
  wil::ActivateInstance<WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollectionManager>(
    &v22,
    (__int64)a2,
    (unsigned int)a3);
  if ( a4 )
    goto LABEL_6;
  v8 = v22;
  v9 = *(__int64 (__fastcall **)(__int64, PVOID, int *))(*(_QWORD *)v22 + 80LL);
  v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v24, &v23, v7);
  v11 = v9(v8, v10[1].Reserved.Reserved1, &v20);
  if ( v11 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      557LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v11,
      v20);
  if ( (_BYTE)v20 )
  {
LABEL_6:
    v21 = 0LL;
    v13 = v22;
    v14 = *(__int64 (__fastcall **)(__int64, PVOID, __int64 *))(*(_QWORD *)v22 + 56LL);
    v21 = 0LL;
    v15 = (const WCHAR *)(a1 + 16);
    if ( *(_QWORD *)(a1 + 40) >= 8uLL )
      v15 = *(const WCHAR **)v15;
    v23 = v15;
    v16 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v24, &v23, v7);
    v17 = v14(v13, v16[1].Reserved.Reserved1, &v21);
    if ( v17 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        565LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)(unsigned int)v17,
        v20);
    v18 = v21;
    v21 = 0LL;
    *a2 = v18;
    v12 = v22;
    if ( v22 )
      goto LABEL_10;
  }
  else
  {
    *a2 = 0LL;
    v12 = v22;
    if ( v22 )
LABEL_10:
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v12);
  }
  return a2;
}
