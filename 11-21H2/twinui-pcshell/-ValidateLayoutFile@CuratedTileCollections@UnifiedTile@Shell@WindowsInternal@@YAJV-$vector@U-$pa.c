/*
 * XREFs of ?ValidateLayoutFile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJV?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@PEAUIXMLDOMDocument@@@Z @ 0x1805E4824
 * Callers:
 *     ?ValidateDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x180319D44 (-ValidateDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 *     ?ValidateLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x180319EA4 (-ValidateLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 *     ?ValidateDefaultLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x1803BC8A8 (-ValidateDefaultLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 *     ?ValidateLayoutModificationXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x1803BCA04 (-ValidateLayoutModificationXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Tidy@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ @ 0x18022B92C (-_Tidy@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ.c)
 *     ?_com_issue_error@@YAXJ@Z @ 0x1802D9E14 (-_com_issue_error@@YAXJ@Z.c)
 *     ??0?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@QEAA@AEBV01@@Z @ 0x180316EA8 (--0-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEBG@std@@@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Free@_bstr_t@@AEAAXXZ @ 0x18031A368 (-_Free@_bstr_t@@AEAAXXZ.c)
 *     ??0_variant_t@@QEAA@PEAUIDispatch@@_N@Z @ 0x1805E442C (--0_variant_t@@QEAA@PEAUIDispatch@@_N@Z.c)
 *     ?LoadSchema@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJV?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@PEAPEAUIXMLDOMSchemaCollection@@@Z @ 0x1805E46FC (-LoadSchema@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJV-$vector@U-$pair@PEBGP.c)
 *     McTemplateU0z_EventWriteTransfer @ 0x1805E4B10 (McTemplateU0z_EventWriteTransfer.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ValidateLayoutFile(
        __int128 **a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *))
{
  __int64 *v4; // rax
  int Schema; // eax
  unsigned int v6; // ebx
  __int64 (__fastcall *v7)(_QWORD, GUID *, __int64 *); // rbx
  int v8; // eax
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, __int128 *); // rdi
  _variant_t *v13; // rax
  HRESULT v14; // eax
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, __int64 *); // rdi
  int v17; // eax
  __int64 v19; // rbx
  void (__fastcall *v20)(__int64, _bstr_t::Data_t *); // r14
  _bstr_t::Data_t *v21; // rax
  _bstr_t::Data_t *v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rcx
  struct IDispatch *v25; // [rsp+20h] [rbp-50h] BYREF
  _bstr_t::Data_t *v26; // [rsp+28h] [rbp-48h] BYREF
  __int128 v27; // [rsp+30h] [rbp-40h] BYREF
  __int64 v28; // [rsp+40h] [rbp-30h]
  VARIANTARG pvarg; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  __int64 v31; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v32; // [rsp+B8h] [rbp+48h] BYREF

  v25 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v25);
  v4 = std::vector<std::pair<unsigned short const *,unsigned short const *>>::vector<std::pair<unsigned short const *,unsigned short const *>>(
         &v27,
         a1);
  Schema = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::LoadSchema(v4, (unsigned __int16 **)&v25);
  v6 = Schema;
  if ( Schema < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A,
      (__int64)"shellcommon\\shell\\tiles\\curatedtilecollections\\collectioninitialization\\helpers\\layoutxmlvalidationhelper.cpp",
      (const char *)(unsigned int)Schema);
    goto LABEL_14;
  }
  v31 = 0LL;
  v7 = **a2;
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v31);
  v8 = v7(a2, &GUID_2933bf95_7b36_11d2_b20e_00c04f983e60, &v31);
  v6 = v8;
  if ( v8 < 0 )
  {
    v9 = (unsigned int)v8;
    v10 = 62LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"shellcommon\\shell\\tiles\\curatedtilecollections\\collectioninitialization\\helpers\\layoutxmlvalidationhelper.cpp",
      (const char *)v9);
LABEL_13:
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v31);
    goto LABEL_14;
  }
  v11 = v31;
  v12 = *(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v31 + 624LL);
  v13 = _variant_t::_variant_t((_variant_t *)&pvarg, v25);
  v27 = *(_OWORD *)v13;
  v28 = *((_QWORD *)v13 + 2);
  v6 = v12(v11, &v27);
  v14 = VariantClear(&pvarg);
  if ( v14 < 0 )
    _com_issue_error((char *)(unsigned int)v14);
  if ( (v6 & 0x80000000) != 0 )
  {
    v9 = v6;
    v10 = 63LL;
    goto LABEL_5;
  }
  v32 = 0LL;
  v15 = v31;
  v16 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v31 + 632LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v32);
  v17 = v16(v15, &v32);
  v6 = v17;
  if ( v17 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x42,
      (__int64)"shellcommon\\shell\\tiles\\curatedtilecollections\\collectioninitialization\\helpers\\layoutxmlvalidationhelper.cpp",
      (const char *)(unsigned int)v17);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4B,
      (__int64)"shellcommon\\shell\\tiles\\curatedtilecollections\\collectioninitialization\\helpers\\layoutxmlvalidationhelper.cpp",
      (const char *)v6);
LABEL_12:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v32);
    goto LABEL_13;
  }
  if ( v17 != 1 )
    goto LABEL_12;
  v26 = 0LL;
  v19 = v32;
  v20 = *(void (__fastcall **)(__int64, _bstr_t::Data_t *))(*(_QWORD *)v32 + 72LL);
  _bstr_t::_Free(&v26);
  v21 = (_bstr_t::Data_t *)operator new(0x18uLL);
  v22 = v21;
  v26 = v21;
  if ( v21 )
  {
    *((_QWORD *)v21 + 1) = 0LL;
    *((_DWORD *)v21 + 4) = 1;
    *(_QWORD *)v21 = 0LL;
  }
  else
  {
    v22 = 0LL;
  }
  v26 = v22;
  if ( !v22 )
    _com_issue_error((char *)0x8007000ELL);
  v20(v19, v22);
  if ( (Microsoft_Windows_ShellCommon_StartLayoutPopulationEnableBits & 4) != 0 )
    McTemplateU0z_EventWriteTransfer(v24, v23, *(_QWORD *)v22);
  _bstr_t::_Free(&v26);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v32);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v31);
  v6 = -2147023431;
LABEL_14:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v25);
  std::vector<Geometry::CRect>::_Tidy((__int64)a1);
  return v6;
}
