/*
 * XREFs of ?AddSchemaToCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEBG0PEAUIXMLDOMSchemaCollection@@@Z @ 0x180738EAC
 * Callers:
 *     ?LoadSchema@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJV?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@PEAPEAUIXMLDOMSchemaCollection@@@Z @ 0x180739138 (-LoadSchema@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJV-$vector@U-$pair@PEBGP.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0_bstr_t@@QEAA@PEBG@Z @ 0x1802D2494 (--0_bstr_t@@QEAA@PEBG@Z.c)
 *     ?_Free@_bstr_t@@AEAAXXZ @ 0x1802D292A (-_Free@_bstr_t@@AEAAXXZ.c)
 *     ?_com_issue_error@@YAXJ@Z @ 0x180390134 (-_com_issue_error@@YAXJ@Z.c)
 *     ??0_variant_t@@QEAA@PEAUIDispatch@@_N@Z @ 0x180738E68 (--0_variant_t@@QEAA@PEAUIDispatch@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::AddSchemaToCollection(
        WindowsInternal::Shell::UnifiedTile::CuratedTileCollections *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        struct IXMLDOMSchemaCollection *a4)
{
  HRESULT v7; // eax
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rdx
  LPVOID v11; // rbx
  __int64 (__fastcall *v12)(LPVOID, struct IDispatch **); // rdi
  int v13; // eax
  unsigned __int64 v14; // r9
  __int64 v15; // rdx
  __int64 (__fastcall *v16)(const unsigned __int16 *, _QWORD *, __int128 *); // rbx
  _variant_t *v17; // rax
  _QWORD *v18; // rdx
  HRESULT v19; // eax
  LPVOID ppv; // [rsp+30h] [rbp-29h] BYREF
  struct IDispatch *v22; // [rsp+38h] [rbp-21h] BYREF
  _bstr_t::Data_t *v23; // [rsp+40h] [rbp-19h] BYREF
  __int64 v24; // [rsp+48h] [rbp-11h]
  _bstr_t::Data_t *v25[2]; // [rsp+50h] [rbp-9h] BYREF
  __int128 v26; // [rsp+60h] [rbp+7h] BYREF
  __int64 v27; // [rsp+70h] [rbp+17h]
  VARIANTARG pvarg; // [rsp+80h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]
  __int16 v30; // [rsp+D8h] [rbp+7Fh] BYREF

  ppv = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppv);
  v7 = CoCreateInstance(
         &GUID_88d96a05_f192_11d4_a65f_0040963251e5,
         0LL,
         1u,
         &GUID_2933bf81_7b36_11d2_b20e_00c04f983e60,
         &ppv);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(LPVOID, _QWORD))(*(_QWORD *)ppv + 504LL))(ppv, 0LL);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 26LL;
      goto LABEL_5;
    }
    _bstr_t::_bstr_t((_bstr_t *)&v23, a2);
    if ( v23 )
      v10 = *(_QWORD *)v23;
    else
      v10 = 0LL;
    (*(void (__fastcall **)(LPVOID, __int64, __int16 *))(*(_QWORD *)ppv + 520LL))(ppv, v10, &v30);
    if ( v30 != -1 )
    {
      v8 = -2147467259;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1F,
        (int)"shellcommon\\shell\\tiles\\curatedtilecollections\\collectioninitialization\\helpers\\layoutxmlvalidationhelper.cpp",
        (const char *)0x80004005LL);
LABEL_22:
      _bstr_t::_Free(&v23);
      goto LABEL_23;
    }
    v22 = 0LL;
    v11 = ppv;
    v12 = *(__int64 (__fastcall **)(LPVOID, struct IDispatch **))(*(_QWORD *)ppv + 360LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v22);
    v13 = v12(v11, &v22);
    v8 = v13;
    if ( v13 >= 0 )
    {
      v16 = *(__int64 (__fastcall **)(const unsigned __int16 *, _QWORD *, __int128 *))(*(_QWORD *)a3 + 56LL);
      v17 = _variant_t::_variant_t((_variant_t *)&pvarg, v22);
      v26 = *(_OWORD *)v17;
      v24 = *((_QWORD *)v17 + 2);
      v18 = *(_QWORD **)_bstr_t::_bstr_t((_bstr_t *)v25, (const unsigned __int16 *)this);
      if ( v18 )
        v18 = (_QWORD *)*v18;
      v27 = v24;
      v8 = v16(a3, v18, &v26);
      _bstr_t::_Free(v25);
      v19 = VariantClear(&pvarg);
      if ( v19 < 0 )
        _com_issue_error((char *)(unsigned int)v19);
      if ( v8 >= 0 )
      {
        v8 = 0;
        goto LABEL_21;
      }
      v14 = (unsigned int)v8;
      v15 = 35LL;
    }
    else
    {
      v14 = (unsigned int)v13;
      v15 = 34LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (int)"shellcommon\\shell\\tiles\\curatedtilecollections\\collectioninitialization\\helpers\\layoutxmlvalidationhelper.cpp",
      (const char *)v14);
LABEL_21:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v22);
    goto LABEL_22;
  }
  v9 = 25LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"shellcommon\\shell\\tiles\\curatedtilecollections\\collectioninitialization\\helpers\\layoutxmlvalidationhelper.cpp",
    (const char *)(unsigned int)v7);
LABEL_23:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppv);
  return (unsigned int)v8;
}
