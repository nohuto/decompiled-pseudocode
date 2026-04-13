/*
 * XREFs of ?DoesCollectionExist@TargetedContentLayoutHelpers@CreativeFramework@@YA_NPEB_W@Z @ 0x1800C7CF0
 * Callers:
 *     ?ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUHSTRING__@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x1800CABE8 (-ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUH.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180024270 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002C074 (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043350 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ActivateInstance@UICuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@wil@@YA?AV?$com_ptr_t@UICuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x1800AB81C (--$ActivateInstance@UICuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@Wind.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
bool __fastcall CreativeFramework::TargetedContentLayoutHelpers::DoesCollectionExist(
        CreativeFramework::TargetedContentLayoutHelpers *this,
        const wchar_t *a2)
{
  __int64 v2; // rbx
  __int64 (__fastcall *v3)(__int64, PVOID, int *); // rdi
  unsigned int v4; // r8d
  HSTRING_HEADER *v5; // rax
  int v6; // eax
  unsigned int v7; // r8d
  bool v8; // si
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, PVOID, __int64 **); // rdi
  HSTRING_HEADER *v11; // rax
  int v12; // eax
  __int64 v13; // rax
  int v14; // eax
  int v15; // eax
  int v17; // [rsp+20h] [rbp-60h] BYREF
  __int64 v18; // [rsp+28h] [rbp-58h] BYREF
  __int64 *v19; // [rsp+30h] [rbp-50h] BYREF
  int v20; // [rsp+38h] [rbp-48h] BYREF
  __int64 v21; // [rsp+40h] [rbp-40h] BYREF
  const WCHAR *v22; // [rsp+48h] [rbp-38h] BYREF
  HSTRING_HEADER v23; // [rsp+50h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v22 = L"Start.TileGrid";
  wil::ActivateInstance<WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollectionManager>((__int64)&v21);
  v2 = v21;
  v3 = *(__int64 (__fastcall **)(__int64, PVOID, int *))(*(_QWORD *)v21 + 80LL);
  v5 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v23, &v22, v4);
  v6 = v3(v2, v5[1].Reserved.Reserved1, &v17);
  v8 = 0;
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x85,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v6,
      v17);
  if ( (_BYTE)v17 )
  {
    v19 = 0LL;
    v9 = v21;
    v10 = *(__int64 (__fastcall **)(__int64, PVOID, __int64 **))(*(_QWORD *)v21 + 56LL);
    v19 = 0LL;
    v11 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v23, &v22, v7);
    v12 = v10(v9, v11[1].Reserved.Reserved1, &v19);
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x8B,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
        (const char *)(unsigned int)v12,
        v17);
    v18 = 0LL;
    v13 = *v19;
    v18 = 0LL;
    v14 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v13 + 104))(v19, &v18);
    if ( v14 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x8E,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
        (const char *)(unsigned int)v14,
        v17);
    v15 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v18 + 56LL))(v18, &v20);
    if ( v15 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x90,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
        (const char *)(unsigned int)v15,
        v17);
    LOBYTE(v17) = v20 != 0;
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v18);
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v19);
    v8 = (_BYTE)v17 != 0;
  }
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v21);
  return v8;
}
