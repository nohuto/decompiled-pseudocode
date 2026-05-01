/*
 * XREFs of ?ParsePinnedAppNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUITaskbarLayoutItem@@@Z @ 0x1803EA338
 * Callers:
 *     ?ParseTaskbarLayoutNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@AEAUParsedTaskbarLayout@@@Z @ 0x1803EAC30 (-ParseTaskbarLayoutNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@AEAUParsedTaskbarLayout@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ @ 0x1800B3438 (--1-$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x180188BA0 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_AllowEnterpriseUnpin@@@details@wil@@QEAA_NXZ @ 0x1801D95AC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_AllowEnterpriseUnpin@@@details@wi.c)
 *     ??1?$tip_test@U_tip_OnLaunchedTest@XamlExplorerHostTipTests@@@tip@@QEAA@XZ @ 0x180206AA0 (--1-$tip_test@U_tip_OnLaunchedTest@XamlExplorerHostTipTests@@@tip@@QEAA@XZ.c)
 *     ?GetIntAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@PEAH@Z @ 0x1802850EC (-GetIntAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOMEl.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0_bstr_t@@QEAA@PEBG@Z @ 0x1802D2494 (--0_bstr_t@@QEAA@PEBG@Z.c)
 *     ??$As@UITaskbarLayoutItemInternal@@@?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UITaskbarLayoutItemInternal@@@WRL@Microsoft@@@Details@12@@Z @ 0x1803E5AAC (--$As@UITaskbarLayoutItemInternal@@@-$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@QEBAJV-$ComPtr.c)
 *     ??1_bstr_t@@QEAA@XZ @ 0x1803E5FA8 (--1_bstr_t@@QEAA@XZ.c)
 *     ?TaskbarLayoutItem_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1803EBA98 (-TaskbarLayoutItem_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetStringAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@AEAV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@Z @ 0x18073951C (-GetStringAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDO.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall TaskbarLayoutParser::ParsePinnedAppNode(
        const unsigned __int16 **this,
        struct IXMLDOMNode *a2,
        struct ITaskbarLayoutItem **a3)
{
  const struct _GUID *v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  HRESULT (__stdcall *QueryInterface)(IXMLDOMNode *, const IID *const, void **); // rbx
  int v11; // eax
  bool v12; // bl
  _QWORD *v13; // rax
  __int64 v14; // r8
  __int64 (__fastcall *v15)(__int64, _QWORD *); // r9
  int v16; // eax
  __int64 v17; // rdx
  bool v18; // bl
  _QWORD *v19; // rax
  __int64 v20; // r8
  __int64 (__fastcall *v21)(__int64, _QWORD *); // r9
  bool v22; // bl
  _QWORD *v23; // rax
  __int64 v24; // r8
  __int64 (__fastcall *v25)(__int64, _QWORD *); // r9
  int *v26; // r9
  bool v27; // bl
  _bstr_t::Data_t *v29; // [rsp+20h] [rbp-60h] BYREF
  WindowsInternal::Shell::UnifiedTile::CuratedTileCollections *v30; // [rsp+28h] [rbp-58h] BYREF
  __int64 v31; // [rsp+30h] [rbp-50h] BYREF
  void *v32; // [rsp+38h] [rbp-48h] BYREF
  IXMLDOMElement v33; // [rsp+40h] [rbp-40h] BYREF
  __int128 v34; // [rsp+48h] [rbp-38h] BYREF
  __int128 v35; // [rsp+58h] [rbp-28h] BYREF
  __int128 v36; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  *a3 = 0LL;
  v32 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v32);
  v7 = TaskbarLayoutItem_CreateInstance(v6, &v32);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v31 = 0LL;
    v9 = Microsoft::WRL::ComPtr<ITaskbarLayoutItem>::As<ITaskbarLayoutItemInternal>(
           (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v32,
           &v31);
    v8 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD5,
        (int)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
        (const char *)(unsigned int)v9);
LABEL_25:
      Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>(&v31);
      goto LABEL_26;
    }
    v30 = 0LL;
    QueryInterface = a2->lpVtbl->QueryInterface;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v30);
    v11 = ((__int64 (__fastcall *)(struct IXMLDOMNode *, GUID *, WindowsInternal::Shell::UnifiedTile::CuratedTileCollections **))QueryInterface)(
            a2,
            &GUID_2933bf86_7b36_11d2_b20e_00c04f983e60,
            &v30);
    v8 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD8,
        (int)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
        (const char *)(unsigned int)v11);
LABEL_24:
      Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>((__int64 *)&v30);
      goto LABEL_25;
    }
    v34 = 0LL;
    v35 = 0LL;
    v36 = 0LL;
    _bstr_t::_bstr_t((_bstr_t *)&v29, this[2]);
    v12 = (int)WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetStringAttributeValue(v30, &v29, &v34) >= 0;
    _bstr_t::~_bstr_t(&v29);
    if ( v12 )
    {
      v13 = std::wstring::c_str((_QWORD *)v34);
      v16 = v15(v14, v13);
      v8 = v16;
      if ( v16 < 0 )
      {
        v17 = 238LL;
        goto LABEL_20;
      }
    }
    else
    {
      _bstr_t::_bstr_t((_bstr_t *)&v29, this[3]);
      v18 = (int)WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetStringAttributeValue(v30, &v29, &v34) >= 0;
      _bstr_t::~_bstr_t(&v29);
      if ( v18 )
      {
        v19 = std::wstring::c_str((_QWORD *)v34);
        v16 = v21(v20, v19);
        v8 = v16;
        if ( v16 < 0 )
        {
          v17 = 242LL;
          goto LABEL_20;
        }
      }
      else
      {
        _bstr_t::_bstr_t((_bstr_t *)&v29, this[4]);
        v22 = (int)WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetStringAttributeValue(v30, &v29, &v35) >= 0;
        _bstr_t::~_bstr_t(&v29);
        if ( !v22 )
        {
          v8 = -2147467259;
          goto LABEL_23;
        }
        v23 = std::wstring::c_str((_QWORD *)v35);
        v16 = v25(v24, v23);
        v8 = v16;
        if ( v16 < 0 )
        {
          v17 = 246LL;
          goto LABEL_20;
        }
      }
    }
    if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_AllowEnterpriseUnpin>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_AllowEnterpriseUnpin>::GetImpl'::`2'::impl)
      || (LODWORD(v29) = -1,
          _bstr_t::_bstr_t((_bstr_t *)&v33, this[6]),
          v27 = (int)WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetIntAttributeValue(
                       v30,
                       &v33,
                       (const struct _bstr_t *)&v29,
                       v26) >= 0,
          _bstr_t::~_bstr_t((_bstr_t::Data_t **)&v33),
          !v27)
      || (v16 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v31 + 104LL))(v31, (unsigned int)v29),
          v8 = v16,
          v16 >= 0) )
    {
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v32);
      *a3 = (struct ITaskbarLayoutItem *)v32;
      v8 = 0;
      goto LABEL_23;
    }
    v17 = 258LL;
LABEL_20:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (int)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
      (const char *)(unsigned int)v16);
LABEL_23:
    tip::tip_test<XamlExplorerHostTipTests::_tip_OnLaunchedTest>::~tip_test<XamlExplorerHostTipTests::_tip_OnLaunchedTest>((__int64)&v36);
    tip::tip_test<XamlExplorerHostTipTests::_tip_OnLaunchedTest>::~tip_test<XamlExplorerHostTipTests::_tip_OnLaunchedTest>((__int64)&v35);
    tip::tip_test<XamlExplorerHostTipTests::_tip_OnLaunchedTest>::~tip_test<XamlExplorerHostTipTests::_tip_OnLaunchedTest>((__int64)&v34);
    goto LABEL_24;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD2,
    (int)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
    (const char *)(unsigned int)v7);
LABEL_26:
  Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>((__int64 *)&v32);
  return v8;
}
