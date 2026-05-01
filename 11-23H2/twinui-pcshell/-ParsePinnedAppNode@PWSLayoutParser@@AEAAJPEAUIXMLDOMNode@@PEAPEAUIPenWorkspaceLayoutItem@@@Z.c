/*
 * XREFs of ?ParsePinnedAppNode@PWSLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUIPenWorkspaceLayoutItem@@@Z @ 0x180496FAC
 * Callers:
 *     ?ParsePWSLayoutCollectionNode@PWSLayoutParser@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAV?$CCoSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x180496830 (-ParsePWSLayoutCollectionNode@PWSLayoutParser@@UEAAJAEAV-$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@A.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006F258 (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@VRecentAppsCache@Discover@PenWorkspace@@@WRL@Microsoft@@IEBAXXZ @ 0x1800704AC (-InternalAddRef@-$ComPtr@VRecentAppsCache@Discover@PenWorkspace@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x180188BA0 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0_bstr_t@@QEAA@PEBG@Z @ 0x1802D2494 (--0_bstr_t@@QEAA@PEBG@Z.c)
 *     ?_Free@_bstr_t@@AEAAXXZ @ 0x1802D292A (-_Free@_bstr_t@@AEAAXXZ.c)
 *     ?PWSLayoutItem_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180497820 (-PWSLayoutItem_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetStringAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@AEAV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@Z @ 0x18073951C (-GetStringAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDO.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall PWSLayoutParser::ParsePinnedAppNode(
        const unsigned __int16 **this,
        struct IXMLDOMNode *a2,
        struct IPenWorkspaceLayoutItem **a3)
{
  const struct _GUID *v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  void *v9; // rbx
  __int64 (__fastcall *v10)(void *, GUID *, __int64 *); // rdi
  int v11; // eax
  HRESULT (__stdcall *QueryInterface)(IXMLDOMNode *, const IID *const, void **); // rbx
  int v13; // eax
  bool v14; // bl
  _QWORD *v15; // rax
  __int64 v16; // r8
  __int64 (__fastcall *v17)(__int64, _QWORD *); // r9
  int v18; // eax
  __int64 v19; // rdx
  bool v20; // bl
  _QWORD *v21; // rax
  __int64 v22; // r8
  __int64 (__fastcall *v23)(__int64, _QWORD *); // r9
  __int64 v25; // [rsp+20h] [rbp-30h] BYREF
  _bstr_t::Data_t *v26; // [rsp+28h] [rbp-28h] BYREF
  std::_Ref_count_base *v27[2]; // [rsp+30h] [rbp-20h] BYREF
  std::_Ref_count_base *v28[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  void *v30; // [rsp+90h] [rbp+40h] BYREF
  __int64 v31; // [rsp+98h] [rbp+48h] BYREF

  *a3 = 0LL;
  v30 = 0LL;
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v30);
  v7 = PWSLayoutItem_CreateInstance(v6, &v30);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v25 = 0LL;
    v9 = v30;
    v10 = **(__int64 (__fastcall ***)(void *, GUID *, __int64 *))v30;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v25);
    v11 = v10(v9, &GUID_ec14b3b3_3cd8_428a_a455_490250210fd2, &v25);
    v8 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD6,
        (int)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
        (const char *)(unsigned int)v11);
LABEL_21:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v25);
      goto LABEL_22;
    }
    v31 = 0LL;
    QueryInterface = a2->lpVtbl->QueryInterface;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v31);
    v13 = ((__int64 (__fastcall *)(struct IXMLDOMNode *, GUID *, __int64 *))QueryInterface)(
            a2,
            &GUID_2933bf86_7b36_11d2_b20e_00c04f983e60,
            &v31);
    v8 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD9,
        (int)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
        (const char *)(unsigned int)v13);
LABEL_20:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v31);
      goto LABEL_21;
    }
    *(_OWORD *)v28 = 0LL;
    *(_OWORD *)v27 = 0LL;
    _bstr_t::_bstr_t((_bstr_t *)&v26, this[2]);
    v14 = (int)WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetStringAttributeValue(v31, &v26, v28) >= 0;
    _bstr_t::_Free(&v26);
    if ( v14 )
    {
      v15 = std::wstring::c_str((_QWORD *)v28[0]);
      v18 = v17(v16, v15);
      v8 = v18;
      if ( v18 < 0 )
      {
        v19 = 222LL;
LABEL_13:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v19,
          (int)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
          (const char *)(unsigned int)v18);
LABEL_16:
        if ( v27[1] )
          std::_Ref_count_base::_Decref(v27[1]);
        if ( v28[1] )
          std::_Ref_count_base::_Decref(v28[1]);
        goto LABEL_20;
      }
    }
    else
    {
      _bstr_t::_bstr_t((_bstr_t *)&v26, this[3]);
      v20 = (int)WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetStringAttributeValue(v31, &v26, v27) >= 0;
      _bstr_t::_Free(&v26);
      if ( !v20 )
      {
        v8 = -2147467259;
        goto LABEL_16;
      }
      v21 = std::wstring::c_str((_QWORD *)v27[0]);
      v18 = v23(v22, v21);
      v8 = v18;
      if ( v18 < 0 )
      {
        v19 = 226LL;
        goto LABEL_13;
      }
    }
    Microsoft::WRL::ComPtr<PenWorkspace::Discover::RecentAppsCache>::InternalAddRef((__int64 *)&v30);
    *a3 = (struct IPenWorkspaceLayoutItem *)v30;
    v8 = 0;
    goto LABEL_16;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD3,
    (int)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
    (const char *)(unsigned int)v7);
LABEL_22:
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v30);
  return v8;
}
