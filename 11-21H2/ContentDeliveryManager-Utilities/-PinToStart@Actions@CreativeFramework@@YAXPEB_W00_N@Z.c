/*
 * XREFs of ?PinToStart@Actions@CreativeFramework@@YAXPEB_W00_N@Z @ 0x1800C0988
 * Callers:
 *     ?Invoke@PinToStartService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800BFC20 (-Invoke@PinToStartService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18003F5AC (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x180075B18 (--$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foun.c)
 *     ??$ActivateInstance@UICuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@wil@@YA?AV?$com_ptr_t@UICuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x1800BBFF8 (--$ActivateInstance@UICuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@Wind.c)
 *     ?CreatePackagedUnifiedTileIdentifier@Actions@CreativeFramework@@YA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@PEB_W0@Z @ 0x1800BE008 (-CreatePackagedUnifiedTileIdentifier@Actions@CreativeFramework@@YA-AV-$com_ptr_t@UIUnifiedTileId.c)
 *     ?GetStartGridCollection@Actions@CreativeFramework@@YA?AV?$com_ptr_t@UICuratedTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1800BF484 (-GetStartGridCollection@Actions@CreativeFramework@@YA-AV-$com_ptr_t@UICuratedTileCollection@Cura.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=13
void __fastcall CreativeFramework::Actions::PinToStart(
        const WCHAR *this,
        const wchar_t *a2,
        const wchar_t *a3,
        const wchar_t *a4)
{
  char v4; // si
  wchar_t **v6; // rbx
  __int64 v7; // rdx
  unsigned int v8; // r8d
  unsigned int v9; // edi
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, HSTRING, __int64 *); // rsi
  HRESULT v12; // eax
  int v13; // eax
  wil::details::in1diag3 *v14; // rcx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  __int64 (__fastcall **v18)(__int64, GUID *, __int64 *); // rax
  int v19; // eax
  DWORD v20; // edx
  int v21; // r8d
  int v22; // eax
  BOOL bIgnoreCase; // [rsp+20h] [rbp-29h]
  _BYTE v24[8]; // [rsp+30h] [rbp-19h] BYREF
  __int64 v25; // [rsp+38h] [rbp-11h] BYREF
  __int64 (__fastcall ***v26)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp-9h] BYREF
  __int64 v27; // [rsp+48h] [rbp-1h] BYREF
  __int64 v28; // [rsp+50h] [rbp+7h] BYREF
  __int64 v29; // [rsp+58h] [rbp+Fh] BYREF
  __int64 (__fastcall ***v30)(__int64, GUID *, __int64 *); // [rsp+60h] [rbp+17h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+68h] [rbp+1Fh] BYREF
  HSTRING string; // [rsp+80h] [rbp+37h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  v4 = (char)a4;
  CreativeFramework::Actions::CreatePackagedUnifiedTileIdentifier(&v27, this, a2);
  v6 = &off_180119DE8;
  while ( CompareStringOrdinal(*v6, -1, a3, -1, 1) != 2 )
  {
    v6 += 2;
    if ( v6 == off_180119E08 )
    {
      v9 = 0;
      goto LABEL_6;
    }
  }
  v9 = *((_DWORD *)v6 + 2);
LABEL_6:
  if ( !v4 )
    goto LABEL_21;
  wil::ActivateInstance<WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollectionManager>(
    &v28,
    v7,
    v8);
  v25 = 0LL;
  v10 = v28;
  v11 = *(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v28 + 56LL);
  string = 0LL;
  v12 = WindowsCreateStringReference(L"AllTiles", 8u, &hstringHeader, &string);
  if ( v12 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v12);
LABEL_36:
    wil::details::in1diag3::Throw_Hr(
      v14,
      120LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v13,
      bIgnoreCase);
  }
  v13 = v11(v10, string, &v25);
  v14 = retaddr;
  if ( v13 < 0 )
    goto LABEL_36;
  v24[0] = 0;
  v15 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _BYTE *))(*(_QWORD *)v25 + 112LL))(v25, v27, 0LL, v24);
  if ( v15 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      122LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v15,
      bIgnoreCase);
  if ( !v24[0] )
  {
    if ( v25 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    if ( v28 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
    if ( v27 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    return;
  }
  if ( v25 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  if ( v28 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
LABEL_21:
  CreativeFramework::Actions::GetStartGridCollection(&v30, v7, v8);
  v29 = 0LL;
  v16 = (**v30)((__int64)v30, &GUID_adbf8965_6056_4126_ab26_6660af4661ce, &v29);
  if ( v16 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      6136LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v16,
      bIgnoreCase);
  v17 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v29 + 48LL))(v29, v27, v9);
  if ( v17 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      131LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v17,
      bIgnoreCase);
  v26 = 0LL;
  v18 = *v30;
  v26 = 0LL;
  v19 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64 *), __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))v18[28])(
          v30,
          &v26);
  if ( v19 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      134LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v19,
      bIgnoreCase);
  v22 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncAction *>(v26, v20, v21);
  if ( v22 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      1639LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\winrt.h",
      (const char *)(unsigned int)v22,
      bIgnoreCase);
  if ( v26 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v26)[2])(v26);
  if ( v29 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  if ( v30 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64 *)))(*v30)[2])(v30);
  if ( v27 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
}
