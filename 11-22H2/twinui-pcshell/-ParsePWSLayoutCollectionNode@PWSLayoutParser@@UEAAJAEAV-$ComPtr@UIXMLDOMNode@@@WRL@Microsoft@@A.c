/*
 * XREFs of ?ParsePWSLayoutCollectionNode@PWSLayoutParser@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAV?$CCoSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x180496830
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006F258 (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@VRecentAppsCache@Discover@PenWorkspace@@@WRL@Microsoft@@IEBAXXZ @ 0x1800704AC (-InternalAddRef@-$ComPtr@VRecentAppsCache@Discover@PenWorkspace@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1802D0AA0 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ??$Make@VSelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VSelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@12@XZ @ 0x1803E8C44 (--$Make@VSelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@$$V@Detai.c)
 *     ??0SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@AEBU01234@@Z @ 0x1803E96B4 (--0SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@AEBU01234@@Z.c)
 *     ??1SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ @ 0x1803E98E8 (--1SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ.c)
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x18049568C (-RemoveAll@-$CTSimpleArray@V-$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTP.c)
 *     ??$GetSelectedItem@UParsedPenWorkspaceLayout@@@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJAEBV?$vector@UParsedPenWorkspaceLayout@@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@USelectionData@0123@V?$function@$$A6A?AUSelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEBUParsedPenWorkspaceLayout@@@Z@5@PEAUParsedPenWorkspaceLayout@@@Z @ 0x180495CBC (--$GetSelectedItem@UParsedPenWorkspaceLayout@@@CuratedTileCollections@UnifiedTile@Shell@WindowsI.c)
 *     ??$_Destroy_range@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@YAXPEAUParsedPenWorkspaceLayout@@QEAU1@AEAV?$allocator@UParsedPenWorkspaceLayout@@@0@@Z @ 0x180495EE0 (--$_Destroy_range@V-$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@YAXPEAUParsedPenWorkspaceL.c)
 *     ??$emplace_back@UParsedPenWorkspaceLayout@@@?$vector@UParsedPenWorkspaceLayout@@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@QEAA?A_T$$QEAUParsedPenWorkspaceLayout@@@Z @ 0x180496200 (--$emplace_back@UParsedPenWorkspaceLayout@@@-$vector@UParsedPenWorkspaceLayout@@V-$allocator@UPa.c)
 *     ?CalculateSelectionAttributes@PWSLayoutParser@@AEAAJXZ @ 0x1804965BC (-CalculateSelectionAttributes@PWSLayoutParser@@AEAAJXZ.c)
 *     ?ParsePinnedAppNode@PWSLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUIPenWorkspaceLayoutItem@@@Z @ 0x180496FAC (-ParsePinnedAppNode@PWSLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUIPenWorkspaceLayoutItem@@@Z.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall PWSLayoutParser::ParsePWSLayoutCollectionNode(
        PWSLayoutParser *this,
        __int64 (__fastcall ****a2)(_QWORD, GUID *, int *),
        _QWORD *a3)
{
  _QWORD *v3; // r14
  PWSLayoutParser *v5; // r15
  int v6; // eax
  int v7; // ebx
  __int64 (__fastcall ***v8)(_QWORD, GUID *, int *); // rdi
  __int64 (__fastcall *v9)(_QWORD, GUID *, int *); // rbx
  int v10; // eax
  __int64 v11; // rbx
  int (__fastcall *v12)(__int64, struct IXMLDOMNode **); // rdi
  __int64 (__fastcall ***v13)(_QWORD, GUID *, int *); // rdi
  __int64 (__fastcall *v14)(_QWORD, GUID *, int *); // rbx
  int v15; // eax
  int v16; // eax
  void *v17; // r8
  __int64 v18; // rax
  __int64 *v19; // rcx
  __int64 *v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rcx
  int v23; // eax
  int v24; // edi
  unsigned __int64 v25; // r9
  __int64 v26; // rdx
  const char *v27; // r9
  WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *v28; // rax
  int Selected; // eax
  __int64 *v30; // rdi
  __int64 v31; // r15
  __int64 v32; // rbx
  void *v33; // r8
  __int64 v34; // rcx
  int v35; // eax
  __int64 *v36; // rdx
  int v38[2]; // [rsp+20h] [rbp-248h] BYREF
  struct IPenWorkspaceLayoutItem *v39; // [rsp+28h] [rbp-240h] BYREF
  __int64 v40; // [rsp+30h] [rbp-238h] BYREF
  __int128 v41; // [rsp+38h] [rbp-230h] BYREF
  __int64 v42; // [rsp+48h] [rbp-220h]
  __int64 v43[2]; // [rsp+50h] [rbp-218h] BYREF
  __int64 v44; // [rsp+60h] [rbp-208h] BYREF
  __int64 v45; // [rsp+68h] [rbp-200h]
  __int64 v46; // [rsp+70h] [rbp-1F8h]
  __int64 v47; // [rsp+78h] [rbp-1F0h]
  __int64 v48; // [rsp+80h] [rbp-1E8h] BYREF
  char v49; // [rsp+88h] [rbp-1E0h]
  __int128 v50; // [rsp+90h] [rbp-1D8h]
  __int128 v51; // [rsp+A0h] [rbp-1C8h]
  __int128 v52; // [rsp+B0h] [rbp-1B8h]
  __int128 v53; // [rsp+C0h] [rbp-1A8h]
  __int64 v54; // [rsp+D0h] [rbp-198h]
  __int64 v55; // [rsp+D8h] [rbp-190h]
  char v56; // [rsp+E0h] [rbp-188h]
  __int64 *v57; // [rsp+F0h] [rbp-178h]
  _OWORD v58[2]; // [rsp+100h] [rbp-168h] BYREF
  __int64 v59; // [rsp+120h] [rbp-148h] BYREF
  char v60; // [rsp+128h] [rbp-140h]
  __int128 v61; // [rsp+130h] [rbp-138h]
  __int128 v62; // [rsp+140h] [rbp-128h]
  __int128 v63; // [rsp+150h] [rbp-118h]
  __int128 v64; // [rsp+160h] [rbp-108h]
  __int64 v65; // [rsp+170h] [rbp-F8h]
  __int64 v66; // [rsp+178h] [rbp-F0h]
  char v67; // [rsp+180h] [rbp-E8h]
  __int64 v68[8]; // [rsp+190h] [rbp-D8h] BYREF
  char v69[152]; // [rsp+1D0h] [rbp-98h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+268h] [rbp+0h]
  struct IXMLDOMNode *v73; // [rsp+288h] [rbp+20h] BYREF

  v3 = a3;
  v5 = this;
  v6 = PWSLayoutParser::CalculateSelectionAttributes(this);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5D,
      (int)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v7;
  }
  v43[0] = 0LL;
  v8 = *a2;
  v9 = (**a2)[12];
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v43);
  v10 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, int *), __int64 *))v9)(v8, v43);
  v7 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x60,
      (int)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_44;
  }
  v73 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v49 = 0;
  v50 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v56 = 0;
  while ( 1 )
  {
    v11 = v43[0];
    v12 = *(int (__fastcall **)(__int64, struct IXMLDOMNode **))(*(_QWORD *)v43[0] + 72LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v73);
    if ( v12(v11, &v73) < 0 || !v73 )
      break;
    *(_QWORD *)v38 = 0LL;
    v13 = *a2;
    v14 = ***a2;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v38);
    v15 = v14(v13, &GUID_2933bf80_7b36_11d2_b20e_00c04f983e60, v38);
    v7 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x68,
        (int)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
        (const char *)(unsigned int)v15);
      goto LABEL_28;
    }
    v39 = 0LL;
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v39);
    v16 = PWSLayoutParser::ParsePinnedAppNode(v5, v73, &v39);
    v7 = v16;
    if ( v16 < 0 )
    {
      v25 = (unsigned int)v16;
      v26 = 107LL;
      goto LABEL_25;
    }
    v7 = 0;
    v18 = v45;
    if ( v45 == v47 )
    {
      v7 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
             (__int64)&v44,
             v45 + 1,
             v17);
      if ( v7 < 0 )
        goto LABEL_15;
      v18 = v45;
    }
    v45 = v18 + 1;
    v19 = (__int64 *)(v44 + 8 * (v18 + 1) - 8);
    if ( v44 + 8 * (v18 + 1) == 8 )
      goto LABEL_16;
    *v19 = (__int64)v39;
    Microsoft::WRL::ComPtr<PenWorkspace::Discover::RecentAppsCache>::InternalAddRef(v19);
LABEL_15:
    if ( v7 < 0 )
    {
      v25 = (unsigned int)v7;
      v26 = 108LL;
LABEL_25:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v26,
        (int)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
        (const char *)v25);
LABEL_26:
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v39);
LABEL_28:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v38);
LABEL_29:
      WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::~SelectionData((WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *)&v48);
      CTSimpleArray<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>>::RemoveAll((__int64)&v44);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v73);
      goto LABEL_44;
    }
LABEL_16:
    v20 = Microsoft::WRL::Details::Make<WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser,>(&v40);
    v21 = *v20;
    v57 = (__int64 *)*v20;
    *v20 = 0LL;
    v22 = v40;
    if ( v40 )
    {
      v40 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    }
    if ( !v21 )
    {
      v7 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6F,
        (int)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
        (const char *)0x8007000ELL);
      goto LABEL_26;
    }
    v23 = (*(__int64 (__fastcall **)(__int64, int *, __int64 *))(*(_QWORD *)v21 + 24LL))(v21, v38, &v48);
    v24 = v23;
    if ( v23 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x70,
        (int)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
        (const char *)(unsigned int)v23);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v39);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v38);
      WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::~SelectionData((WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *)&v48);
      CTSimpleArray<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>>::RemoveAll((__int64)&v44);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v73);
      v7 = v24;
      goto LABEL_44;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v39);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v38);
  }
  try
  {
    v41 = 0LL;
    v42 = 0LL;
    std::vector<ParsedPenWorkspaceLayout>::emplace_back<ParsedPenWorkspaceLayout>((__int64 *)&v41, &v44);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x77,
      (int)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
      v27);
    v5 = this;
    v3 = a3;
  }
  memset(v58, 0, sizeof(v58));
  v59 = 0LL;
  v60 = 0;
  v61 = 0LL;
  v62 = 0LL;
  v63 = 0LL;
  v64 = 0LL;
  v65 = 0LL;
  v66 = 0LL;
  v67 = 0;
  v57 = v68;
  v68[0] = (__int64)off_1807D7008;
  v68[7] = (__int64)v68;
  v28 = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::SelectionData(
          (WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *)v69,
          (PWSLayoutParser *)((char *)v5 + 40));
  Selected = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetSelectedItem<ParsedPenWorkspaceLayout>(
               (__int64 *)&v41,
               v28,
               v68,
               (__int64)v58);
  v7 = Selected;
  if ( Selected < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7D,
      (int)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
      (const char *)(unsigned int)Selected);
    WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::~SelectionData((WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *)&v59);
    CTSimpleArray<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>>::RemoveAll((__int64)v58);
    if ( (_QWORD)v41 )
    {
      std::_Destroy_range<std::allocator<ParsedPenWorkspaceLayout>>(v41, *((__int64 *)&v41 + 1));
      std::_Deallocate<16,0>((void *)v41, 8 * ((v42 - (__int64)v41) >> 3));
      v41 = 0LL;
      v42 = 0LL;
    }
    goto LABEL_29;
  }
  v30 = *(__int64 **)&v58[0];
  v31 = *(_QWORD *)&v58[0] + 8LL * *((_QWORD *)&v58[0] + 1);
  while ( v30 != (__int64 *)v31 )
  {
    v32 = *v30;
    v40 = *v30;
    Microsoft::WRL::ComPtr<PenWorkspace::Discover::RecentAppsCache>::InternalAddRef(&v40);
    v34 = v3[1];
    if ( v34 != v3[3]
      || (v35 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                  (__int64)v3,
                  v34 + 1,
                  v33),
          v34 = v3[1],
          v35 >= 0) )
    {
      v3[1] = v34 + 1;
      v36 = (__int64 *)(*v3 + 8 * v34);
      if ( v36 )
      {
        *v36 = 0LL;
        if ( v36 != &v40 )
        {
          *v36 = v32;
          v40 = 0LL;
        }
      }
    }
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v40);
    ++v30;
  }
  WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::~SelectionData((WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *)&v59);
  CTSimpleArray<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>>::RemoveAll((__int64)v58);
  if ( (_QWORD)v41 )
  {
    std::_Destroy_range<std::allocator<ParsedPenWorkspaceLayout>>(v41, *((__int64 *)&v41 + 1));
    std::_Deallocate<16,0>((void *)v41, 8 * ((v42 - (__int64)v41) >> 3));
    v41 = 0LL;
    v42 = 0LL;
  }
  WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::~SelectionData((WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *)&v48);
  CTSimpleArray<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>>::RemoveAll((__int64)&v44);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v73);
  v7 = 0;
LABEL_44:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v43);
  return (unsigned int)v7;
}
