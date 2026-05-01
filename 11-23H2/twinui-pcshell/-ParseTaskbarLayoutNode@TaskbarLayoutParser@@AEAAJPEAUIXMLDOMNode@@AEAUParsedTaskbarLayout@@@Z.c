/*
 * XREFs of ?ParseTaskbarLayoutNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@AEAUParsedTaskbarLayout@@@Z @ 0x1803EAC30
 * Callers:
 *     ?ParseTaskbarLayoutCollectionNode@TaskbarLayoutParser@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x1803EA6F0 (-ParseTaskbarLayoutCollectionNode@TaskbarLayoutParser@@UEAAJAEAV-$ComPtr@UIXMLDOMNode@@@WRL@Micr.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1802D0AA0 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ??$As@UIXMLDOMElement@@@?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIXMLDOMElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x1803E5B08 (--$As@UIXMLDOMElement@@@-$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIXML.c)
 *     ??$Make@VSelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VSelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@12@XZ @ 0x1803E8C44 (--$Make@VSelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@$$V@Detai.c)
 *     ?ParsePinnedAppNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUITaskbarLayoutItem@@@Z @ 0x1803EA338 (-ParsePinnedAppNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUITaskbarLayoutItem@@@Z.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall TaskbarLayoutParser::ParseTaskbarLayoutNode(
        const unsigned __int16 **this,
        struct IXMLDOMNode *a2,
        struct ParsedTaskbarLayout *a3)
{
  HRESULT (__stdcall *QueryInterface)(IXMLDOMNode *, const IID *const, void **); // rbx
  int v7; // eax
  int v8; // edi
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
  __int64 v19; // rcx
  __int64 *v20; // rcx
  unsigned __int64 v21; // r9
  __int64 v22; // rdx
  __int64 *v23; // rax
  __int64 v24; // rbx
  struct ITaskbarLayoutItem *v25; // rcx
  __int64 v26; // r9
  __int64 v27; // rdx
  int v28; // eax
  __int64 (__fastcall ***v30)(_QWORD, GUID *, __int64 *); // [rsp+20h] [rbp-30h] BYREF
  __int64 v31; // [rsp+28h] [rbp-28h] BYREF
  __int64 v32; // [rsp+30h] [rbp-20h] BYREF
  __int64 v33[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  struct ITaskbarLayoutItem *v35; // [rsp+88h] [rbp+38h] BYREF
  struct IXMLDOMNode *v36; // [rsp+98h] [rbp+48h] BYREF

  v32 = 0LL;
  QueryInterface = a2->lpVtbl->QueryInterface;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v32);
  v7 = ((__int64 (__fastcall *)(struct IXMLDOMNode *, GUID *, __int64 *))QueryInterface)(
         a2,
         &GUID_2933bf80_7b36_11d2_b20e_00c04f983e60,
         &v32);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB3,
      (int)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_36;
  }
  v30 = 0LL;
  get_firstChild = a2->lpVtbl->get_firstChild;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v30);
  v10 = ((__int64 (__fastcall *)(struct IXMLDOMNode *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))get_firstChild)(
          a2,
          &v30);
  v8 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB6,
      (int)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_35;
  }
  v33[0] = 0LL;
  v11 = Microsoft::WRL::ComPtr<IXMLDOMNode>::As<IXMLDOMElement>(&v30, v33);
  v8 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB9,
      (int)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_34;
  }
  v31 = 0LL;
  v12 = v30;
  v13 = (*v30)[12];
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v31);
  v14 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64 *))v13)(v12, &v31);
  v8 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBC,
      (int)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
      (const char *)(unsigned int)v14);
    goto LABEL_33;
  }
  v36 = 0LL;
  while ( 1 )
  {
    v15 = v31;
    v16 = *(int (__fastcall **)(__int64, struct IXMLDOMNode **))(*(_QWORD *)v31 + 72LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v36);
    if ( v16(v15, &v36) < 0 || !v36 )
      break;
    v35 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v35);
    v17 = TaskbarLayoutParser::ParsePinnedAppNode(this, v36, &v35);
    v8 = v17;
    if ( v17 < 0 )
    {
      v21 = (unsigned int)v17;
      v22 = 194LL;
      goto LABEL_21;
    }
    v8 = 0;
    v19 = *((_QWORD *)a3 + 1);
    if ( v19 != *((_QWORD *)a3 + 3)
      || (v8 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                 (__int64)a3,
                 v19 + 1,
                 v18),
          v19 = *((_QWORD *)a3 + 1),
          v8 >= 0) )
    {
      *((_QWORD *)a3 + 1) = v19 + 1;
      v20 = (__int64 *)(*(_QWORD *)a3 + 8 * v19);
      if ( !v20 )
        goto LABEL_18;
      *v20 = (__int64)v35;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v20);
    }
    if ( v8 < 0 )
    {
      v21 = (unsigned int)v8;
      v22 = 195LL;
LABEL_21:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v22,
        (int)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
        (const char *)v21);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v35);
      goto LABEL_32;
    }
LABEL_18:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v35);
  }
  v23 = Microsoft::WRL::Details::Make<WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser,>((__int64 *)&v35);
  v24 = *v23;
  v33[1] = *v23;
  *v23 = 0LL;
  v25 = v35;
  if ( v35 )
  {
    v35 = 0LL;
    (*(void (__fastcall **)(struct ITaskbarLayoutItem *))(*(_QWORD *)v25 + 16LL))(v25);
  }
  if ( !v24 )
  {
    v8 = -2147024882;
    v26 = 2147942414LL;
    v27 = 199LL;
    goto LABEL_28;
  }
  v28 = (*(__int64 (__fastcall **)(__int64, __int64 *, char *))(*(_QWORD *)v24 + 24LL))(v24, &v32, (char *)a3 + 32);
  v8 = v28;
  if ( v28 >= 0 )
  {
    v8 = 0;
  }
  else
  {
    v26 = (unsigned int)v28;
    v27 = 200LL;
LABEL_28:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v27,
      (int)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
      (const char *)v26);
  }
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
LABEL_32:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v36);
LABEL_33:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v31);
LABEL_34:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v33);
LABEL_35:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v30);
LABEL_36:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v32);
  return (unsigned int)v8;
}
