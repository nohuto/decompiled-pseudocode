/*
 * XREFs of ?ValidateLayoutFile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJV?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@PEAUIXMLDOMDocument@@@Z @ 0x1802EB77A
 * Callers:
 *     ?ValidateLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x1802D25DE (-ValidateLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 *     ?ValidateDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x1803E876C (-ValidateDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 *     ?ValidateDefaultLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x180495828 (-ValidateDefaultLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 *     ?ValidateLayoutModificationXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x180495990 (-ValidateLayoutModificationXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Free@_bstr_t@@AEAAXXZ @ 0x1802D292A (-_Free@_bstr_t@@AEAAXXZ.c)
 *     ?_Tidy@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ @ 0x1802D2954 (-_Tidy@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ.c)
 *     ?_com_issue_error@@YAXJ@Z @ 0x180390134 (-_com_issue_error@@YAXJ@Z.c)
 *     ??0?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@QEAA@AEBV01@@Z @ 0x1803E5D88 (--0-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEBG@std@@@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??0_variant_t@@QEAA@PEAUIDispatch@@_N@Z @ 0x180738E68 (--0_variant_t@@QEAA@PEAUIDispatch@@_N@Z.c)
 *     ?LoadSchema@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJV?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@PEAPEAUIXMLDOMSchemaCollection@@@Z @ 0x180739138 (-LoadSchema@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJV-$vector@U-$pair@PEBGP.c)
 *     McTemplateU0z_EventWriteTransfer @ 0x180739260 (McTemplateU0z_EventWriteTransfer.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ValidateLayoutFile(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *))
{
  __int64 v4; // rax
  int v5; // eax
  unsigned int v6; // ebx
  __int64 (__fastcall *v7)(_QWORD, GUID *, __int64 *); // rbx
  int v8; // eax
  bool v9; // r8
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, __int128 *); // rdi
  _variant_t *v14; // rax
  HRESULT v15; // eax
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(__int64, __int64 *); // rdi
  int v18; // eax
  __int64 v20; // rbx
  void (__fastcall *v21)(__int64, _bstr_t::Data_t *); // r14
  _bstr_t::Data_t *v22; // rax
  _bstr_t::Data_t *v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rcx
  struct IDispatch *v26; // [rsp+20h] [rbp-50h] BYREF
  _bstr_t::Data_t *v27; // [rsp+28h] [rbp-48h] BYREF
  __int128 v28; // [rsp+30h] [rbp-40h] BYREF
  __int64 v29; // [rsp+40h] [rbp-30h]
  VARIANTARG pvarg; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  __int64 v32; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v33; // [rsp+B8h] [rbp+48h] BYREF

  v26 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v26);
  v4 = std::vector<std::pair<unsigned short const *,unsigned short const *>>::vector<std::pair<unsigned short const *,unsigned short const *>>(
         &v28,
         a1);
  v5 = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::LoadSchema(v4, &v26);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A,
      (int)"shellcommon\\shell\\tiles\\curatedtilecollections\\collectioninitialization\\helpers\\layoutxmlvalidationhelper.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_14;
  }
  v32 = 0LL;
  v7 = **a2;
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v32);
  v8 = v7(a2, &GUID_2933bf95_7b36_11d2_b20e_00c04f983e60, &v32);
  v6 = v8;
  if ( v8 < 0 )
  {
    v10 = (unsigned int)v8;
    v11 = 62LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"shellcommon\\shell\\tiles\\curatedtilecollections\\collectioninitialization\\helpers\\layoutxmlvalidationhelper.cpp",
      (const char *)v10);
LABEL_13:
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v32);
    goto LABEL_14;
  }
  v12 = v32;
  v13 = *(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v32 + 624LL);
  v14 = _variant_t::_variant_t((_variant_t *)&pvarg, v26, v9);
  v28 = *(_OWORD *)v14;
  v29 = *((_QWORD *)v14 + 2);
  v6 = v13(v12, &v28);
  v15 = VariantClear(&pvarg);
  if ( v15 < 0 )
    _com_issue_error((char *)(unsigned int)v15);
  if ( (v6 & 0x80000000) != 0 )
  {
    v10 = v6;
    v11 = 63LL;
    goto LABEL_5;
  }
  v33 = 0LL;
  v16 = v32;
  v17 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v32 + 632LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v33);
  v18 = v17(v16, &v33);
  v6 = v18;
  if ( v18 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x42,
      (int)"shellcommon\\shell\\tiles\\curatedtilecollections\\collectioninitialization\\helpers\\layoutxmlvalidationhelper.cpp",
      (const char *)(unsigned int)v18);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4B,
      (int)"shellcommon\\shell\\tiles\\curatedtilecollections\\collectioninitialization\\helpers\\layoutxmlvalidationhelper.cpp",
      (const char *)v6);
LABEL_12:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v33);
    goto LABEL_13;
  }
  if ( v18 != 1 )
    goto LABEL_12;
  v27 = 0LL;
  v20 = v33;
  v21 = *(void (__fastcall **)(__int64, _bstr_t::Data_t *))(*(_QWORD *)v33 + 72LL);
  _bstr_t::_Free(&v27);
  v22 = (_bstr_t::Data_t *)operator new(0x18uLL);
  v23 = v22;
  v27 = v22;
  if ( v22 )
  {
    *((_QWORD *)v22 + 1) = 0LL;
    *((_DWORD *)v22 + 4) = 1;
    *(_QWORD *)v22 = 0LL;
  }
  else
  {
    v23 = 0LL;
  }
  v27 = v23;
  if ( !v23 )
    _com_issue_error((char *)0x8007000ELL);
  v21(v20, v23);
  if ( (Microsoft_Windows_ShellCommon_StartLayoutPopulationEnableBits & 4) != 0 )
    McTemplateU0z_EventWriteTransfer(v25, v24, *(_QWORD *)v23);
  _bstr_t::_Free(&v27);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v33);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v32);
  v6 = -2147023431;
LABEL_14:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v26);
  std::vector<Geometry::CRect>::_Tidy(a1);
  return v6;
}
