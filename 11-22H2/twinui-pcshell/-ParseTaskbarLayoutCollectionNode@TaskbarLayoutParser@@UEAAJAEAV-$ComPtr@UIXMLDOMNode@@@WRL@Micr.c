/*
 * XREFs of ?ParseTaskbarLayoutCollectionNode@TaskbarLayoutParser@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x1803EA6F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1802D0AA0 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@@@VComPtrCompareHelper@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x1802D2574 (-RemoveAll@-$CTSimpleArray@V-$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@$0PPPPPPPO@V.c)
 *     ??$GetSelectedItem@UParsedTaskbarLayout@@@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJAEBV?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@USelectionData@0123@V?$function@$$A6A?AUSelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEBUParsedTaskbarLayout@@@Z@5@PEAUParsedTaskbarLayout@@@Z @ 0x1803E8AF0 (--$GetSelectedItem@UParsedTaskbarLayout@@@CuratedTileCollections@UnifiedTile@Shell@WindowsIntern.c)
 *     ??$_Destroy_range@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@YAXPEAUParsedTaskbarLayout@@QEAU1@AEAV?$allocator@UParsedTaskbarLayout@@@0@@Z @ 0x1803E8DFC (--$_Destroy_range@V-$allocator@UParsedTaskbarLayout@@@std@@@std@@YAXPEAUParsedTaskbarLayout@@QEA.c)
 *     ??$emplace_back@UParsedTaskbarLayout@@@?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAA?A_T$$QEAUParsedTaskbarLayout@@@Z @ 0x1803E94FC (--$emplace_back@UParsedTaskbarLayout@@@-$vector@UParsedTaskbarLayout@@V-$allocator@UParsedTaskba.c)
 *     ??0SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@AEBU01234@@Z @ 0x1803E96B4 (--0SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@AEBU01234@@Z.c)
 *     ??1SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ @ 0x1803E98E8 (--1SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ.c)
 *     ?CalculateSelectionAttributes@TaskbarLayoutParser@@AEAAJXZ @ 0x1803E9B60 (-CalculateSelectionAttributes@TaskbarLayoutParser@@AEAAJXZ.c)
 *     ?ParseTaskbarLayoutNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@AEAUParsedTaskbarLayout@@@Z @ 0x1803EAC30 (-ParseTaskbarLayoutNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@AEAUParsedTaskbarLayout@@@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall TaskbarLayoutParser::ParseTaskbarLayoutCollectionNode(
        TaskbarLayoutParser *this,
        __int64 *a2,
        _QWORD *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, __int64 *); // rbx
  int v10; // eax
  __int64 v11; // rbx
  int (__fastcall *v12)(__int64, struct IXMLDOMNode **); // rdi
  const char *v13; // r9
  WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *v14; // rax
  int Selected; // eax
  __int64 *v16; // rdi
  __int64 v17; // r15
  __int64 v18; // rbx
  void *v19; // r8
  __int64 v20; // rcx
  int v21; // eax
  __int64 *v22; // rcx
  int v24[4]; // [rsp+20h] [rbp-218h] BYREF
  __int64 v25; // [rsp+30h] [rbp-208h]
  struct IXMLDOMNode *v26; // [rsp+38h] [rbp-200h] BYREF
  __int64 v27[2]; // [rsp+40h] [rbp-1F8h] BYREF
  __int64 v28[4]; // [rsp+50h] [rbp-1E8h] BYREF
  __int64 v29; // [rsp+70h] [rbp-1C8h] BYREF
  char v30; // [rsp+78h] [rbp-1C0h]
  __int128 v31; // [rsp+80h] [rbp-1B8h]
  __int128 v32; // [rsp+90h] [rbp-1A8h]
  __int128 v33; // [rsp+A0h] [rbp-198h]
  __int128 v34; // [rsp+B0h] [rbp-188h]
  __int64 v35; // [rsp+C0h] [rbp-178h]
  __int64 v36; // [rsp+C8h] [rbp-170h]
  char v37; // [rsp+D0h] [rbp-168h]
  _OWORD v38[2]; // [rsp+E0h] [rbp-158h] BYREF
  __int64 v39; // [rsp+100h] [rbp-138h] BYREF
  char v40; // [rsp+108h] [rbp-130h]
  __int128 v41; // [rsp+110h] [rbp-128h]
  __int128 v42; // [rsp+120h] [rbp-118h]
  __int128 v43; // [rsp+130h] [rbp-108h]
  __int128 v44; // [rsp+140h] [rbp-F8h]
  __int64 v45; // [rsp+150h] [rbp-E8h]
  __int64 v46; // [rsp+158h] [rbp-E0h]
  char v47; // [rsp+160h] [rbp-D8h]
  __int64 v48[8]; // [rsp+178h] [rbp-C0h] BYREF
  _BYTE v49[104]; // [rsp+1B8h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+238h] [rbp+0h]
  __int64 *v51; // [rsp+258h] [rbp+20h] BYREF

  v6 = TaskbarLayoutParser::CalculateSelectionAttributes(this);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v27[0] = 0LL;
    v8 = *a2;
    v9 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 96LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v27);
    v10 = v9(v8, v27);
    v7 = v10;
    if ( v10 >= 0 )
    {
      v26 = 0LL;
      *(_OWORD *)v24 = 0LL;
      v25 = 0LL;
      while ( 1 )
      {
        v11 = v27[0];
        v12 = *(int (__fastcall **)(__int64, struct IXMLDOMNode **))(*(_QWORD *)v27[0] + 72LL);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v26);
        if ( v12(v11, &v26) < 0 || !v26 )
          break;
        memset(v28, 0, sizeof(v28));
        v29 = 0LL;
        v30 = 0;
        v31 = 0LL;
        v32 = 0LL;
        v33 = 0LL;
        v34 = 0LL;
        v35 = 0LL;
        v36 = 0LL;
        v37 = 0;
        if ( (int)TaskbarLayoutParser::ParseTaskbarLayoutNode(this, v26, (struct ParsedTaskbarLayout *)v28) >= 0 )
        {
          try
          {
            std::vector<ParsedTaskbarLayout>::emplace_back<ParsedTaskbarLayout>((__int64 *)v24, v28);
          }
          catch ( ... )
          {
            LODWORD(v51) = wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x74,
                             (int)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
                             v13);
            WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::~SelectionData((WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *)&v29);
            CTSimpleArray<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>>,ComPtrCompareHelper,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>>>::RemoveAll((__int64)v28);
            if ( *(_QWORD *)v24 )
            {
              std::_Destroy_range<std::allocator<ParsedTaskbarLayout>>(*(__int64 *)v24, *(__int64 *)&v24[2]);
              std::_Deallocate<16,0>(*(void **)v24, 8 * ((v25 - *(_QWORD *)v24) >> 3));
              *(_OWORD *)v24 = 0LL;
              v25 = 0LL;
            }
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v26);
            v7 = (unsigned int)v51;
            goto LABEL_29;
          }
        }
        WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::~SelectionData((WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *)&v29);
        CTSimpleArray<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>>,ComPtrCompareHelper,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>>>::RemoveAll((__int64)v28);
      }
      memset(v38, 0, sizeof(v38));
      v39 = 0LL;
      v40 = 0;
      v41 = 0LL;
      v42 = 0LL;
      v43 = 0LL;
      v44 = 0LL;
      v45 = 0LL;
      v46 = 0LL;
      v47 = 0;
      v51 = v48;
      v48[0] = (__int64)off_1807D1008;
      v48[7] = (__int64)v48;
      v14 = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::SelectionData(
              (WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *)v49,
              (TaskbarLayoutParser *)((char *)this + 56));
      Selected = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetSelectedItem<ParsedTaskbarLayout>(
                   (__int64 *)v24,
                   v14,
                   v48,
                   (__int64)v38);
      v7 = Selected;
      if ( Selected >= 0 )
      {
        v16 = *(__int64 **)&v38[0];
        v17 = *(_QWORD *)&v38[0] + 8LL * *((_QWORD *)&v38[0] + 1);
        while ( v16 != (__int64 *)v17 )
        {
          v18 = *v16;
          v51 = (__int64 *)*v16;
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v51);
          v20 = a3[1];
          if ( v20 != a3[3]
            || (v21 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                        (__int64)a3,
                        v20 + 1,
                        v19),
                v20 = a3[1],
                v21 >= 0) )
          {
            a3[1] = v20 + 1;
            v22 = (__int64 *)(*a3 + 8 * v20);
            if ( v22 )
            {
              *v22 = 0LL;
              if ( v22 != (__int64 *)&v51 )
              {
                *v22 = v18;
                v51 = 0LL;
              }
            }
          }
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v51);
          ++v16;
        }
        WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::~SelectionData((WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *)&v39);
        CTSimpleArray<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>>,ComPtrCompareHelper,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>>>::RemoveAll((__int64)v38);
        if ( *(_QWORD *)v24 )
        {
          std::_Destroy_range<std::allocator<ParsedTaskbarLayout>>(*(__int64 *)v24, *(__int64 *)&v24[2]);
          std::_Deallocate<16,0>(*(void **)v24, 8 * ((v25 - *(_QWORD *)v24) >> 3));
          *(_OWORD *)v24 = 0LL;
          v25 = 0LL;
        }
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v26);
        v7 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x7C,
          (int)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
          (const char *)(unsigned int)Selected);
        WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::~SelectionData((WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *)&v39);
        CTSimpleArray<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>>,ComPtrCompareHelper,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>>>::RemoveAll((__int64)v38);
        if ( *(_QWORD *)v24 )
        {
          std::_Destroy_range<std::allocator<ParsedTaskbarLayout>>(*(__int64 *)v24, *(__int64 *)&v24[2]);
          std::_Deallocate<16,0>(*(void **)v24, 8 * ((v25 - *(_QWORD *)v24) >> 3));
          *(_OWORD *)v24 = 0LL;
          v25 = 0LL;
        }
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v26);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x67,
        (int)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
        (const char *)(unsigned int)v10);
    }
LABEL_29:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v27);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x64,
      (int)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
      (const char *)(unsigned int)v6);
  }
  return v7;
}
