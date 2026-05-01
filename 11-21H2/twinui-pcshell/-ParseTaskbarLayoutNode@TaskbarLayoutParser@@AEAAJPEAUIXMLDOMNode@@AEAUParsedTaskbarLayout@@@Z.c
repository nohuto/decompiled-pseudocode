/*
 * XREFs of ?ParseTaskbarLayoutNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@AEAUParsedTaskbarLayout@@@Z @ 0x18031C7A8
 * Callers:
 *     ?ParseTaskbarLayoutCollectionNode@TaskbarLayoutParser@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x18031C250 (-ParseTaskbarLayoutCollectionNode@TaskbarLayoutParser@@UEAAJAEAV-$ComPtr@UIXMLDOMNode@@@WRL@Micr.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UIXMLDOMElement@@@?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIXMLDOMElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x180316C34 (--$As@UIXMLDOMElement@@@-$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIXML.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18031A2A4 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ??$Make@VSelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VSelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@12@XZ @ 0x18031A650 (--$Make@VSelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@$$V@Detai.c)
 *     ?ParsePinnedAppNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUITaskbarLayoutItem@@@Z @ 0x18031BF18 (-ParsePinnedAppNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUITaskbarLayoutItem@@@Z.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall TaskbarLayoutParser::ParseTaskbarLayoutNode(
        const unsigned __int16 **this,
        struct IXMLDOMNode *a2,
        struct ParsedTaskbarLayout *a3)
{
  HRESULT (__stdcall *QueryInterface)(IXMLDOMNode *, const IID *const, void **); // rbx
  int v7; // eax
  unsigned int v8; // edi
  HRESULT (__stdcall *get_firstChild)(IXMLDOMNode *, IXMLDOMNode **); // rbx
  int v10; // eax
  int v11; // eax
  __int64 (__fastcall ***v12)(_QWORD, GUID *, __int64 *); // rbx
  __int64 (__fastcall *v13)(_QWORD, GUID *, __int64 *); // rdi
  int v14; // eax
  __int64 v15; // rbx
  int (__fastcall *v16)(__int64, struct IXMLDOMNode **); // rdi
  int v17; // eax
  void *v18; // r8
  __int64 v19; // rdx
  __int64 *v20; // rcx
  __int64 v21; // rdx
  __int64 *v22; // rax
  __int64 v23; // rbx
  struct ITaskbarLayoutItem *v24; // rcx
  __int64 v25; // r9
  __int64 v26; // rdx
  int v27; // eax
  __int64 (__fastcall ***v29)(_QWORD, GUID *, __int64 *); // [rsp+20h] [rbp-30h] BYREF
  __int64 v30; // [rsp+28h] [rbp-28h] BYREF
  __int64 v31; // [rsp+30h] [rbp-20h] BYREF
  __int64 v32[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  struct ITaskbarLayoutItem *v34; // [rsp+88h] [rbp+38h] BYREF
  struct IXMLDOMNode *v35; // [rsp+98h] [rbp+48h] BYREF

  v31 = 0LL;
  QueryInterface = a2->lpVtbl->QueryInterface;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v31);
  v7 = ((__int64 (__fastcall *)(struct IXMLDOMNode *, GUID *, __int64 *))QueryInterface)(
         a2,
         &GUID_2933bf80_7b36_11d2_b20e_00c04f983e60,
         &v31);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v29 = 0LL;
    get_firstChild = a2->lpVtbl->get_firstChild;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v29);
    v10 = ((__int64 (__fastcall *)(struct IXMLDOMNode *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))get_firstChild)(
            a2,
            &v29);
    v8 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAF,
        (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
        (const char *)(unsigned int)v10);
LABEL_34:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v29);
      goto LABEL_35;
    }
    v32[0] = 0LL;
    v11 = Microsoft::WRL::ComPtr<IXMLDOMNode>::As<IXMLDOMElement>(&v29, v32);
    v8 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB2,
        (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
        (const char *)(unsigned int)v11);
LABEL_33:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v32);
      goto LABEL_34;
    }
    v30 = 0LL;
    v12 = v29;
    v13 = (*v29)[12];
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v30);
    v14 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64 *))v13)(v12, &v30);
    v8 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB5,
        (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
        (const char *)(unsigned int)v14);
LABEL_32:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v30);
      goto LABEL_33;
    }
    v35 = 0LL;
    while ( 1 )
    {
      v15 = v30;
      v16 = *(int (__fastcall **)(__int64, struct IXMLDOMNode **))(*(_QWORD *)v30 + 72LL);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v35);
      if ( v16(v15, &v35) < 0 || !v35 )
        break;
      v34 = 0LL;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v34);
      v17 = TaskbarLayoutParser::ParsePinnedAppNode(this, v35, &v34);
      v8 = v17;
      if ( v17 < 0 )
      {
        v21 = 187LL;
        goto LABEL_20;
      }
      v19 = *((_QWORD *)a3 + 1);
      if ( v19 == *((_QWORD *)a3 + 3) )
      {
        v17 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                (__int64)a3,
                v19 + 1,
                v18);
        v8 = v17;
        if ( v17 < 0 )
        {
          v21 = 188LL;
LABEL_20:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v21,
            (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
            (const char *)(unsigned int)v17);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v34);
          goto LABEL_31;
        }
      }
      v20 = (__int64 *)(*(_QWORD *)a3 + 8 * (*((_QWORD *)a3 + 1))++);
      if ( v20 )
      {
        *v20 = (__int64)v34;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v20);
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v34);
    }
    v22 = Microsoft::WRL::Details::Make<WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser,>((__int64 *)&v34);
    v23 = *v22;
    v32[1] = *v22;
    *v22 = 0LL;
    v24 = v34;
    if ( v34 )
    {
      v34 = 0LL;
      (*(void (__fastcall **)(struct ITaskbarLayoutItem *))(*(_QWORD *)v24 + 16LL))(v24);
    }
    if ( v23 )
    {
      v27 = (*(__int64 (__fastcall **)(__int64, __int64 *, char *))(*(_QWORD *)v23 + 24LL))(v23, &v31, (char *)a3 + 32);
      v8 = v27;
      if ( v27 >= 0 )
      {
        v8 = 0;
        goto LABEL_29;
      }
      v25 = (unsigned int)v27;
      v26 = 193LL;
    }
    else
    {
      v8 = -2147024882;
      v25 = 2147942414LL;
      v26 = 192LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v26,
      (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
      (const char *)v25);
LABEL_29:
    if ( v23 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
LABEL_31:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v35);
    goto LABEL_32;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xAC,
    (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
    (const char *)(unsigned int)v7);
LABEL_35:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v31);
  return v8;
}
