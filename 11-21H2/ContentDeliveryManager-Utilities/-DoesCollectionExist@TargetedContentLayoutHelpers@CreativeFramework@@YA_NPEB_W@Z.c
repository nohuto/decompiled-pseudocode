/*
 * XREFs of ?DoesCollectionExist@TargetedContentLayoutHelpers@CreativeFramework@@YA_NPEB_W@Z @ 0x1800DCD4C
 * Callers:
 *     ?ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUHSTRING__@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x1800E0F64 (-ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUH.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180023E6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ActivateInstance@UICuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@wil@@YA?AV?$com_ptr_t@UICuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x1800BBFF8 (--$ActivateInstance@UICuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@Wind.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
char __fastcall CreativeFramework::TargetedContentLayoutHelpers::DoesCollectionExist(
        CreativeFramework::TargetedContentLayoutHelpers *this,
        const wchar_t *a2,
        unsigned int a3)
{
  __int64 v3; // rbx
  __int64 (__fastcall *v4)(__int64, PVOID, int *); // rdi
  unsigned int v5; // r8d
  HSTRING_HEADER *v6; // rax
  int v7; // eax
  unsigned int v8; // r8d
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, PVOID, __int64 **); // rdi
  HSTRING_HEADER *v11; // rax
  int v12; // eax
  __int64 v13; // rax
  int v14; // eax
  int v15; // eax
  char v16; // bl
  int v18; // [rsp+20h] [rbp-60h] BYREF
  __int64 v19; // [rsp+28h] [rbp-58h] BYREF
  __int64 *v20; // [rsp+30h] [rbp-50h] BYREF
  int v21; // [rsp+38h] [rbp-48h] BYREF
  __int64 v22; // [rsp+40h] [rbp-40h] BYREF
  const WCHAR *v23; // [rsp+48h] [rbp-38h] BYREF
  HSTRING_HEADER v24; // [rsp+50h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v23 = L"Start.TileGrid";
  wil::ActivateInstance<WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollectionManager>(
    &v22,
    (__int64)a2,
    a3);
  v3 = v22;
  v4 = *(__int64 (__fastcall **)(__int64, PVOID, int *))(*(_QWORD *)v22 + 80LL);
  v6 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v24, &v23, v5);
  v7 = v4(v3, v6[1].Reserved.Reserved1, &v18);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      127LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v7,
      v18);
  if ( !(_BYTE)v18 )
    goto LABEL_12;
  v20 = 0LL;
  v9 = v22;
  v10 = *(__int64 (__fastcall **)(__int64, PVOID, __int64 **))(*(_QWORD *)v22 + 56LL);
  v20 = 0LL;
  v11 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v24, &v23, v8);
  v12 = v10(v9, v11[1].Reserved.Reserved1, &v20);
  if ( v12 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      133LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v12,
      v18);
  v19 = 0LL;
  v13 = *v20;
  v19 = 0LL;
  v14 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v13 + 104))(v20, &v19);
  if ( v14 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      136LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v14,
      v18);
  v15 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v19 + 56LL))(v19, &v21);
  if ( v15 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      138LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v15,
      v18);
  LOBYTE(v18) = v21 != 0;
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  if ( v20 )
    (*(void (__fastcall **)(__int64 *))(*v20 + 16))(v20);
  if ( (_BYTE)v18 )
    v16 = 1;
  else
LABEL_12:
    v16 = 0;
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  return v16;
}
