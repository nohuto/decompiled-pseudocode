/*
 * XREFs of ?ParsePinnedAppNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUITaskbarLayoutItem@@@Z @ 0x18031BF18
 * Callers:
 *     ?ParseTaskbarLayoutNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@AEAUParsedTaskbarLayout@@@Z @ 0x18031C7A8 (-ParseTaskbarLayoutNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@AEAUParsedTaskbarLayout@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x180190FB0 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UITaskbarLayoutItemInternal@@@?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UITaskbarLayoutItemInternal@@@WRL@Microsoft@@@Details@12@@Z @ 0x180316BD8 (--$As@UITaskbarLayoutItemInternal@@@-$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@QEBAJV-$ComPtr.c)
 *     ??0_bstr_t@@QEAA@PEBG@Z @ 0x1803170A4 (--0_bstr_t@@QEAA@PEBG@Z.c)
 *     ?_Free@_bstr_t@@AEAAXXZ @ 0x18031A368 (-_Free@_bstr_t@@AEAAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_OEMWebsitePinning@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18031CBD8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_OEMWebsitePinning@@@details@wil@@QEAAX_NW.c)
 *     ?TaskbarLayoutItem_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18031D718 (-TaskbarLayoutItem_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetStringAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@AEAV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@Z @ 0x1805E4DCC (-GetStringAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDO.c)
 */

// Hidden C++ exception states: #wind=11
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
  _bstr_t::Data_t *v27; // [rsp+20h] [rbp-50h] BYREF
  __int64 v28; // [rsp+28h] [rbp-48h] BYREF
  void *v29; // [rsp+30h] [rbp-40h] BYREF
  __int64 v30; // [rsp+38h] [rbp-38h] BYREF
  std::_Ref_count_base *v31[2]; // [rsp+40h] [rbp-30h] BYREF
  std::_Ref_count_base *v32[2]; // [rsp+50h] [rbp-20h] BYREF
  __int128 v33; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  *a3 = 0LL;
  v29 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v29);
  v7 = TaskbarLayoutItem_CreateInstance(v6, &v29);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v30 = 0LL;
    v9 = Microsoft::WRL::ComPtr<ITaskbarLayoutItem>::As<ITaskbarLayoutItemInternal>(
           (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v29,
           &v30);
    v8 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xCE,
        (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
        (const char *)(unsigned int)v9);
LABEL_24:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v30);
      goto LABEL_25;
    }
    v28 = 0LL;
    QueryInterface = a2->lpVtbl->QueryInterface;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v28);
    v11 = ((__int64 (__fastcall *)(struct IXMLDOMNode *, GUID *, __int64 *))QueryInterface)(
            a2,
            &GUID_2933bf86_7b36_11d2_b20e_00c04f983e60,
            &v28);
    v8 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD1,
        (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
        (const char *)(unsigned int)v11);
LABEL_23:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v28);
      goto LABEL_24;
    }
    *(_OWORD *)v31 = 0LL;
    *(_OWORD *)v32 = 0LL;
    v33 = 0LL;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_OEMWebsitePinning>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_OEMWebsitePinning>::GetImpl'::`2'::impl,
      0LL);
    _bstr_t::_bstr_t((_bstr_t *)&v27, this[2]);
    v12 = (int)WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetStringAttributeValue(v28, &v27, v31) >= 0;
    _bstr_t::_Free(&v27);
    if ( v12 )
    {
      v13 = std::wstring::c_str((_QWORD *)v31[0]);
      v16 = v15(v14, v13);
      v8 = v16;
      if ( v16 < 0 )
      {
        v17 = 231LL;
LABEL_16:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v17,
          (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
          (const char *)(unsigned int)v16);
LABEL_19:
        if ( v32[1] )
          std::_Ref_count_base::_Decref(v32[1]);
        if ( v31[1] )
          std::_Ref_count_base::_Decref(v31[1]);
        goto LABEL_23;
      }
    }
    else
    {
      _bstr_t::_bstr_t((_bstr_t *)&v27, this[3]);
      v18 = (int)WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetStringAttributeValue(v28, &v27, v31) >= 0;
      _bstr_t::_Free(&v27);
      if ( v18 )
      {
        v19 = std::wstring::c_str((_QWORD *)v31[0]);
        v16 = v21(v20, v19);
        v8 = v16;
        if ( v16 < 0 )
        {
          v17 = 235LL;
          goto LABEL_16;
        }
      }
      else
      {
        _bstr_t::_bstr_t((_bstr_t *)&v27, this[4]);
        v22 = (int)WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetStringAttributeValue(v28, &v27, v32) >= 0;
        _bstr_t::_Free(&v27);
        if ( !v22 )
        {
          v8 = -2147467259;
          goto LABEL_19;
        }
        v23 = std::wstring::c_str((_QWORD *)v32[0]);
        v16 = v25(v24, v23);
        v8 = v16;
        if ( v16 < 0 )
        {
          v17 = 239LL;
          goto LABEL_16;
        }
      }
    }
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v29);
    *a3 = (struct ITaskbarLayoutItem *)v29;
    v8 = 0;
    goto LABEL_19;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xCB,
    (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
    (const char *)(unsigned int)v7);
LABEL_25:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v29);
  return v8;
}
