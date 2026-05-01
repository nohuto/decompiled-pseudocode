/*
 * XREFs of ?GetBoolAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@PEA_N@Z @ 0x1805E4CBC
 * Callers:
 *     ?ParseSelectionAttributes@SelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAUSelectionData@2345@@Z @ 0x1805E5C70 (-ParseSelectionAttributes@SelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsIn.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_com_issue_error@@YAXJ@Z @ 0x1802D9E14 (-_com_issue_error@@YAXJ@Z.c)
 *     ?ChangeType@_variant_t@@QEAAXGPEBV1@@Z @ 0x1805E4C84 (-ChangeType@_variant_t@@QEAAXGPEBV1@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetBoolAttributeValue(
        WindowsInternal::Shell::UnifiedTile::CuratedTileCollections *this,
        struct IXMLDOMElement *a2,
        const struct _bstr_t *a3,
        bool *a4)
{
  HRESULT (__stdcall *QueryInterface)(IXMLDOMElement *, const IID *const, void **); // rdx
  int v8; // eax
  const struct _variant_t *v9; // r8
  unsigned int v10; // ebx
  __int64 v11; // r9
  __int64 v12; // rdx
  HRESULT v13; // eax
  VARIANTARG pvarg; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *(_BYTE *)a3 = 0;
  VariantInit(&pvarg);
  if ( a2->lpVtbl )
    QueryInterface = a2->lpVtbl->QueryInterface;
  else
    QueryInterface = 0LL;
  v8 = (*(__int64 (__fastcall **)(WindowsInternal::Shell::UnifiedTile::CuratedTileCollections *, HRESULT (__stdcall *)(IXMLDOMElement *, const IID *const, void **), VARIANTARG *))(*(_QWORD *)this + 352LL))(
         this,
         QueryInterface,
         &pvarg);
  v10 = v8;
  if ( v8 < 0 )
  {
    v11 = (unsigned int)v8;
    v12 = 13LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"shellcommon\\shell\\tiles\\curatedtilecollections\\collectioninitialization\\helpers\\xmlhelpers.cpp",
      (const char *)v11);
    goto LABEL_12;
  }
  if ( pvarg.vt == 1 )
  {
    v10 = -2147023728;
    goto LABEL_12;
  }
  _variant_t::ChangeType(&pvarg, 0xBu, v9);
  if ( pvarg.vt != 11 )
  {
    v10 = -2147418113;
    v11 = 2147549183LL;
    v12 = 17LL;
    goto LABEL_10;
  }
  *(_BYTE *)a3 = pvarg.iVal != 0;
  v10 = 0;
LABEL_12:
  v13 = VariantClear(&pvarg);
  if ( v13 < 0 )
    _com_issue_error((char *)(unsigned int)v13);
  return v10;
}
