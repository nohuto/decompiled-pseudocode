/*
 * XREFs of CreativeFramework::EnumerateTargetedContentTiles @ 0x1800DCF78
 * Callers:
 *     ?ExtractTargetedContentTilesInCollection@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEB_W@Z @ 0x1800DD570 (-ExtractTargetedContentTilesInCollection@LayoutResolver@TargetedContentLayoutHelpers@CreativeFra.c)
 * Callees:
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x1800042D0 (-_Xbad_function_call@std@@YAXXZ.c)
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180023E6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ActivateInstance@UICuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@wil@@YA?AV?$com_ptr_t@UICuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x1800BBFF8 (--$ActivateInstance@UICuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@Wind.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=23 #try_helpers=1
char __fastcall CreativeFramework::EnumerateTargetedContentTiles(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rbx
  __int64 (__fastcall *v5)(__int64, PVOID, __int64 **); // rdi
  unsigned int v6; // r8d
  HSTRING_HEADER *v7; // rax
  int v8; // eax
  __int64 v9; // rax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // ecx
  __int64 v16; // rdi
  __int64 (__fastcall *v17)(__int64, _QWORD **); // r14
  _QWORD *v18; // rcx
  int v19; // eax
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rax
  int v23; // eax
  const WCHAR *v24; // rcx
  __int64 v25; // rcx
  _QWORD *v26; // rcx
  __int64 v27; // rcx
  int v29; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v30; // [rsp+28h] [rbp-A0h] BYREF
  const WCHAR *v31; // [rsp+30h] [rbp-98h] BYREF
  __int64 *v32; // [rsp+38h] [rbp-90h] BYREF
  __int64 v33; // [rsp+40h] [rbp-88h] BYREF
  int v34; // [rsp+48h] [rbp-80h]
  _QWORD *v35; // [rsp+50h] [rbp-78h] BYREF
  __int64 v36; // [rsp+58h] [rbp-70h] BYREF
  __int64 *v37; // [rsp+60h] [rbp-68h] BYREF
  __int64 v38; // [rsp+68h] [rbp-60h] BYREF
  __int64 v39; // [rsp+70h] [rbp-58h] BYREF
  _QWORD v40[2]; // [rsp+78h] [rbp-50h] BYREF
  HSTRING_HEADER v41; // [rsp+88h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  v40[1] = a2;
  v31 = L"Start.TileGrid";
  wil::ActivateInstance<WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollectionManager>(
    &v39,
    a2,
    a3);
  v37 = 0LL;
  v4 = v39;
  v5 = *(__int64 (__fastcall **)(__int64, PVOID, __int64 **))(*(_QWORD *)v39 + 56LL);
  v7 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v41, &v31, v6);
  v8 = v5(v4, v7[1].Reserved.Reserved1, &v37);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      21LL,
      (__int64)"shellcommon\\Shell\\ContentDeliveryManager\\Utils\\inc\\TargetedContentTileEnumerator.h",
      (const char *)(unsigned int)v8,
      v29);
  v36 = 0LL;
  v9 = *v37;
  v36 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v9 + 104))(v37, &v36);
  if ( v10 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      24LL,
      (__int64)"shellcommon\\Shell\\ContentDeliveryManager\\Utils\\inc\\TargetedContentTileEnumerator.h",
      (const char *)(unsigned int)v10,
      v29);
  v38 = 0LL;
  v11 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v36)(
          v36,
          &GUID_29e14483_299b_51db_a4a9_4fa71439ba45,
          &v38);
  if ( v11 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      6136LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v11,
      v29);
  v33 = 0LL;
  v35 = 0LL;
  v12 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v38 + 48LL))(v38, &v33);
  if ( v12 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      6136LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v12,
      v29);
  v13 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v33 + 56LL))(v33, &v29);
  if ( v13 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      6136LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v13,
      v29);
  LOBYTE(v14) = -(char)v29;
  v15 = ((_BYTE)v29 != 0) - 1;
  v34 = v15;
  v41.Reserved.Reserved1 = 0LL;
  *(_DWORD *)&v41.Reserved.Reserved2[8] = -1;
  *(_QWORD *)&v41.Reserved.Reserved2[16] = 0LL;
  while ( v15 != -1 )
  {
    v16 = v33;
    v17 = *(__int64 (__fastcall **)(__int64, _QWORD **))(*(_QWORD *)v33 + 48LL);
    v18 = v35;
    if ( v35 )
    {
      v35 = 0LL;
      (*(void (__fastcall **)(_QWORD *))(*v18 + 16LL))(v18);
    }
    v19 = v17(v16, &v35);
    if ( v19 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        6136LL,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
        (const char *)(unsigned int)v19,
        v29);
    v32 = 0LL;
    v20 = *v35;
    v32 = 0LL;
    v21 = (*(__int64 (__fastcall **)(_QWORD *, __int64 **))(v20 + 56))(v35, &v32);
    if ( v21 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        34LL,
        (__int64)"shellcommon\\Shell\\ContentDeliveryManager\\Utils\\inc\\TargetedContentTileEnumerator.h",
        (const char *)(unsigned int)v21,
        v29);
    v30 = 0LL;
    v22 = *v32;
    v30 = 0LL;
    v23 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v22 + 48))(v32, &v30);
    if ( v23 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        37LL,
        (__int64)"shellcommon\\Shell\\ContentDeliveryManager\\Utils\\inc\\TargetedContentTileEnumerator.h",
        (const char *)(unsigned int)v23,
        v29);
    v31 = 0LL;
    (**(void (__fastcall ***)(__int64, GUID *, const WCHAR **))v30)(
      v30,
      &GUID_9be3b1e0_66b3_4cf5_b034_7d2a2db8132a,
      &v31);
    v24 = v31;
    if ( v31 )
    {
      v40[0] = v30;
      v25 = *(_QWORD *)(a2 + 24);
      if ( !v25 )
        std::_Xbad_function_call();
      LOBYTE(v14) = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v25 + 16LL))(v25, v40);
      if ( !(_BYTE)v14 )
      {
        if ( v31 )
          LOBYTE(v14) = (*(__int64 (**)(void))(*(_QWORD *)v31 + 16LL))();
        if ( v30 )
          LOBYTE(v14) = (*(__int64 (**)(void))(*(_QWORD *)v30 + 16LL))();
        if ( v32 )
          LOBYTE(v14) = (*(__int64 (**)(void))(*v32 + 16))();
        break;
      }
      v24 = v31;
    }
    if ( v24 )
      (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v24 + 16LL))(v24);
    if ( v30 )
      (*(void (**)(void))(*(_QWORD *)v30 + 16LL))();
    if ( v32 )
      (*(void (**)(void))(*v32 + 16))();
    v14 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v33 + 64LL))(v33, &v29);
    if ( v14 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        6136LL,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
        (const char *)(unsigned int)v14,
        v29);
    if ( (_BYTE)v29 )
      v15 = v34 + 1;
    else
      v15 = -1;
    v34 = v15;
  }
  v26 = v35;
  if ( v35 )
  {
    v35 = 0LL;
    LOBYTE(v14) = (*(__int64 (__fastcall **)(_QWORD *))(*v26 + 16LL))(v26);
  }
  v27 = v33;
  if ( v33 )
  {
    v33 = 0LL;
    LOBYTE(v14) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  }
  if ( v38 )
    LOBYTE(v14) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
  if ( v36 )
    LOBYTE(v14) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
  if ( v37 )
    LOBYTE(v14) = (*(__int64 (__fastcall **)(__int64 *))(*v37 + 16))(v37);
  if ( v39 )
    LOBYTE(v14) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
  return v14;
}
