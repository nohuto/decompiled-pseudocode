/*
 * XREFs of ?GetStringAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@AEAV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@Z @ 0x18073951C
 * Callers:
 *     ?IsOverrideLayout@TaskbarLayoutPolicyManager@@AEAAHPEAUIXMLDOMNode@@@Z @ 0x1803E74CC (-IsOverrideLayout@TaskbarLayoutPolicyManager@@AEAAHPEAUIXMLDOMNode@@@Z.c)
 *     ?ParsePinnedAppNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUITaskbarLayoutItem@@@Z @ 0x1803EA338 (-ParsePinnedAppNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUITaskbarLayoutItem@@@Z.c)
 *     ?ParsePinnedAppNode@PWSLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUIPenWorkspaceLayoutItem@@@Z @ 0x180496FAC (-ParsePinnedAppNode@PWSLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUIPenWorkspaceLayoutItem@@@Z.c)
 *     ?GetTokenizedStringAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@AEBV?$function@$$A6AXPEAG@Z@std@@@Z @ 0x180739664 (-GetTokenizedStringAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJP.c)
 * Callees:
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18009C4F4 (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_com_issue_error@@YAXJ@Z @ 0x180390134 (-_com_issue_error@@YAXJ@Z.c)
 *     ??$make_shared@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAPEAG@std@@YA?AV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@AEAPEAG@Z @ 0x1807392F0 (--$make_shared@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAPEAG@std@@YA-AV-.c)
 *     ?ChangeType@_variant_t@@QEAAXGPEBV1@@Z @ 0x1807393D4 (-ChangeType@_variant_t@@QEAAXGPEBV1@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetStringAttributeValue(
        __int64 a1,
        __int64 **a2,
        _QWORD *a3)
{
  __int64 v6; // rdx
  int v7; // eax
  const struct _variant_t *v8; // r8
  unsigned int v9; // ebx
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 *v12; // rax
  HRESULT v13; // eax
  std::_Ref_count_base *v15[2]; // [rsp+20h] [rbp-30h] BYREF
  VARIANTARG pvarg; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]

  *(_OWORD *)v15 = 0LL;
  std::shared_ptr<KBViewInfo>::operator=(a3, (__int64 *)v15);
  if ( v15[1] )
    std::_Ref_count_base::_Decref(v15[1]);
  VariantInit(&pvarg);
  if ( *a2 )
    v6 = **a2;
  else
    v6 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, VARIANTARG *))(*(_QWORD *)a1 + 352LL))(a1, v6, &pvarg);
  v9 = v7;
  if ( v7 < 0 )
  {
    v10 = (unsigned int)v7;
    v11 = 65LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"shellcommon\\shell\\tiles\\curatedtilecollections\\collectioninitialization\\helpers\\xmlhelpers.cpp",
      (const char *)v10);
    goto LABEL_16;
  }
  if ( pvarg.vt == 1 )
  {
    v9 = -2147023728;
    goto LABEL_16;
  }
  _variant_t::ChangeType(&pvarg, 8u, v8);
  if ( pvarg.vt != 8 )
  {
    v9 = -2147418113;
    v10 = 2147549183LL;
    v11 = 69LL;
    goto LABEL_12;
  }
  v12 = std::make_shared<std::wstring,unsigned short * &>(v15, &pvarg.bstrVal);
  std::shared_ptr<KBViewInfo>::operator=(a3, v12);
  if ( v15[1] )
    std::_Ref_count_base::_Decref(v15[1]);
  v9 = 0;
LABEL_16:
  v13 = VariantClear(&pvarg);
  if ( v13 < 0 )
    _com_issue_error((char *)(unsigned int)v13);
  return v9;
}
