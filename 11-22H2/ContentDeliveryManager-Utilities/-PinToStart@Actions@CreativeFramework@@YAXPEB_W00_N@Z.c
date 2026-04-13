/*
 * XREFs of ?PinToStart@Actions@CreativeFramework@@YAXPEB_W00_N@Z @ 0x1800AEF70
 * Callers:
 *     ?Invoke@PinToStartService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800AE740 (-Invoke@PinToStartService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002C074 (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x180030D64 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043350 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$wait_for_completion@UIAsyncAction@Foundation@Windows@@@wil@@YAXPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@@Z @ 0x1800A1810 (--$wait_for_completion@UIAsyncAction@Foundation@Windows@@@wil@@YAXPEAUIAsyncAction@Foundation@Wi.c)
 *     ??$ActivateInstance@UICuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@wil@@YA?AV?$com_ptr_t@UICuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x1800AB81C (--$ActivateInstance@UICuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@Wind.c)
 *     ??$query@UIStartTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@?$com_ptr_t@UICuratedTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIStartTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800AC460 (--$query@UIStartTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@-$com_.c)
 *     ?CreatePackagedUnifiedTileIdentifier@Actions@CreativeFramework@@YA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@PEB_W0@Z @ 0x1800AD130 (-CreatePackagedUnifiedTileIdentifier@Actions@CreativeFramework@@YA-AV-$com_ptr_t@UIUnifiedTileId.c)
 *     ?GetStartGridCollection@Actions@CreativeFramework@@YA?AV?$com_ptr_t@UICuratedTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1800AE0B0 (-GetStartGridCollection@Actions@CreativeFramework@@YA-AV-$com_ptr_t@UICuratedTileCollection@Cura.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall CreativeFramework::Actions::PinToStart(
        const WCHAR *this,
        const wchar_t *a2,
        const wchar_t *a3,
        const wchar_t *a4)
{
  char v4; // di
  wchar_t **i; // rbx
  unsigned int v7; // esi
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, __int64, __int64 *); // rdi
  int v10; // eax
  int v11; // eax
  int v12; // eax
  __int64 v13; // rax
  int v14; // eax
  DWORD v15; // edx
  int v16; // r8d
  BOOL bIgnoreCase; // [rsp+20h] [rbp-29h]
  _BYTE v18[8]; // [rsp+30h] [rbp-19h] BYREF
  __int64 v19; // [rsp+38h] [rbp-11h] BYREF
  __int64 (__fastcall ***v20)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp-9h] BYREF
  __int64 v21; // [rsp+48h] [rbp-1h] BYREF
  __int64 v22; // [rsp+50h] [rbp+7h] BYREF
  __int64 *v23; // [rsp+58h] [rbp+Fh] BYREF
  __int64 v24; // [rsp+60h] [rbp+17h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+68h] [rbp+1Fh] BYREF
  __int64 v26; // [rsp+80h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  v4 = (char)a4;
  CreativeFramework::Actions::CreatePackagedUnifiedTileIdentifier(&v21, this, a2);
  for ( i = &off_1800FE090; i != &off_1800FE0B0; i += 2 )
  {
    if ( CompareStringOrdinal(*i, -1, a3, -1, 1) == 2 )
    {
      v7 = *((_DWORD *)i + 2);
      goto LABEL_7;
    }
  }
  v7 = 0;
LABEL_7:
  if ( v4 )
  {
    wil::ActivateInstance<WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollectionManager>((__int64)&v22);
    v19 = 0LL;
    v8 = v22;
    v9 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v22 + 56LL);
    v26 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"AllTiles", 9u, 8u);
    v10 = v9(v8, v26, &v19);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x7C,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)(unsigned int)v10,
        bIgnoreCase);
    v18[0] = 0;
    v11 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _BYTE *))(*(_QWORD *)v19 + 112LL))(v19, v21, 0LL, v18);
    if ( v11 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x7E,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)(unsigned int)v11,
        bIgnoreCase);
    if ( !v18[0] )
    {
      wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v19);
      wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v22);
      goto LABEL_20;
    }
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v19);
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v22);
  }
  CreativeFramework::Actions::GetStartGridCollection(&v23);
  wil::com_ptr_t<WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollection,wil::err_exception_policy>::query<WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::IStartTileCollection>(
    (__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))&v23,
    &v24);
  v12 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v24 + 48LL))(v24, v21, v7);
  if ( v12 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x87,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v12,
      bIgnoreCase);
  v20 = 0LL;
  v13 = *v23;
  v20 = 0LL;
  v14 = (*(__int64 (__fastcall **)(__int64 *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(v13 + 224))(
          v23,
          &v20);
  if ( v14 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x8A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v14,
      bIgnoreCase);
  wil::wait_for_completion<Windows::Foundation::IAsyncAction>(v20, v15, v16);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v20);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v24);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v23);
LABEL_20:
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v21);
}
