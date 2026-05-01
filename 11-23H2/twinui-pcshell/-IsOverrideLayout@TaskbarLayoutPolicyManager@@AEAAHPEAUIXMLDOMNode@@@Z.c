/*
 * XREFs of ?IsOverrideLayout@TaskbarLayoutPolicyManager@@AEAAHPEAUIXMLDOMNode@@@Z @ 0x1803E74CC
 * Callers:
 *     ?CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z @ 0x180105440 (-CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z.c)
 *     ?CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z @ 0x1803E6050 (-CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0_bstr_t@@QEAA@PEBG@Z @ 0x1802D2494 (--0_bstr_t@@QEAA@PEBG@Z.c)
 *     ?_Free@_bstr_t@@AEAAXXZ @ 0x1802D292A (-_Free@_bstr_t@@AEAAXXZ.c)
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHQEBG@Z @ 0x1802D2990 (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHQEBG@Z.c)
 *     ?GetStringAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@AEAV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@Z @ 0x18073951C (-GetStringAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDO.c)
 */

// Hidden C++ exception states: #wind=3
_BOOL8 __fastcall TaskbarLayoutPolicyManager::IsOverrideLayout(const unsigned __int16 **this, struct IXMLDOMNode *a2)
{
  HRESULT (__stdcall *QueryInterface)(IXMLDOMNode *, const IID *const, void **); // rbx
  bool v5; // bl
  int v6; // eax
  BOOL v7; // ebx
  std::_Ref_count_base *v9[2]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v10; // [rsp+58h] [rbp+28h] BYREF
  _bstr_t::Data_t *v11; // [rsp+60h] [rbp+30h] BYREF

  v10 = 0LL;
  QueryInterface = a2->lpVtbl->QueryInterface;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
  if ( ((int (__fastcall *)(struct IXMLDOMNode *, GUID *, __int64 *))QueryInterface)(
         a2,
         &GUID_2933bf86_7b36_11d2_b20e_00c04f983e60,
         &v10) < 0 )
  {
LABEL_7:
    v7 = 0;
    goto LABEL_8;
  }
  *(_OWORD *)v9 = 0LL;
  _bstr_t::_bstr_t((_bstr_t *)&v11, this[19]);
  v5 = (int)WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetStringAttributeValue(v10, &v11, v9) >= 0;
  _bstr_t::_Free(&v11);
  if ( !v5 )
  {
    if ( v9[1] )
      std::_Ref_count_base::_Decref(v9[1]);
    goto LABEL_7;
  }
  LOBYTE(v6) = std::wstring::compare((char *)v9[0], (char *)L"Replace");
  v7 = v6 == 0;
  if ( v9[1] )
    std::_Ref_count_base::_Decref(v9[1]);
LABEL_8:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
  return v7;
}
