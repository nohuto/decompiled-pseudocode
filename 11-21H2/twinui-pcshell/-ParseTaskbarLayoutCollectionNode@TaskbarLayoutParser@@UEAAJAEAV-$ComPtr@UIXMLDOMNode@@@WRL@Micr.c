/*
 * XREFs of ?ParseTaskbarLayoutCollectionNode@TaskbarLayoutParser@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x18031C250
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@@@VComPtrCompareHelper@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x180319714 (-RemoveAll@-$CTSimpleArray@V-$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@$0PPPPPPPO@V.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18031A2A4 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ??$GetSelectedItem@UParsedTaskbarLayout@@@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJAEBV?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@USelectionData@0123@V?$function@$$A6A?AUSelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEBUParsedTaskbarLayout@@@Z@5@PEAUParsedTaskbarLayout@@@Z @ 0x18031A4EC (--$GetSelectedItem@UParsedTaskbarLayout@@@CuratedTileCollections@UnifiedTile@Shell@WindowsIntern.c)
 *     ??$_Destroy_range@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@YAXPEAUParsedTaskbarLayout@@QEAU1@AEAV?$allocator@UParsedTaskbarLayout@@@0@@Z @ 0x18031A848 (--$_Destroy_range@V-$allocator@UParsedTaskbarLayout@@@std@@@std@@YAXPEAUParsedTaskbarLayout@@QEA.c)
 *     ??$_Emplace_back_with_unused_capacity@UParsedTaskbarLayout@@@?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@AEAAAEAUParsedTaskbarLayout@@$$QEAU2@@Z @ 0x18031A88C (--$_Emplace_back_with_unused_capacity@UParsedTaskbarLayout@@@-$vector@UParsedTaskbarLayout@@V-$a.c)
 *     ??$_Emplace_reallocate@UParsedTaskbarLayout@@@?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAAPEAUParsedTaskbarLayout@@QEAU2@$$QEAU2@@Z @ 0x18031ACDC (--$_Emplace_reallocate@UParsedTaskbarLayout@@@-$vector@UParsedTaskbarLayout@@V-$allocator@UParse.c)
 *     ??0SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@AEBU01234@@Z @ 0x18031B14C (--0SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@AEBU01234@@Z.c)
 *     ??1SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ @ 0x18031B354 (--1SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ.c)
 *     ?CalculateSelectionAttributes@TaskbarLayoutParser@@AEAAJXZ @ 0x18031B5C0 (-CalculateSelectionAttributes@TaskbarLayoutParser@@AEAAJXZ.c)
 *     ?ParseTaskbarLayoutNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@AEAUParsedTaskbarLayout@@@Z @ 0x18031C7A8 (-ParseTaskbarLayoutNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@AEAUParsedTaskbarLayout@@@Z.c)
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
  __int64 v20; // rdx
  __int64 *v21; // rdx
  int v23[4]; // [rsp+20h] [rbp-218h] BYREF
  __int64 v24; // [rsp+30h] [rbp-208h]
  struct IXMLDOMNode *v25; // [rsp+38h] [rbp-200h] BYREF
  __int64 v26[2]; // [rsp+40h] [rbp-1F8h] BYREF
  __int64 v27[4]; // [rsp+50h] [rbp-1E8h] BYREF
  __int64 v28; // [rsp+70h] [rbp-1C8h] BYREF
  char v29; // [rsp+78h] [rbp-1C0h]
  __int128 v30; // [rsp+80h] [rbp-1B8h]
  __int128 v31; // [rsp+90h] [rbp-1A8h]
  __int128 v32; // [rsp+A0h] [rbp-198h]
  __int128 v33; // [rsp+B0h] [rbp-188h]
  __int64 v34; // [rsp+C0h] [rbp-178h]
  __int64 v35; // [rsp+C8h] [rbp-170h]
  char v36; // [rsp+D0h] [rbp-168h]
  _OWORD v37[2]; // [rsp+E0h] [rbp-158h] BYREF
  __int64 v38; // [rsp+100h] [rbp-138h] BYREF
  char v39; // [rsp+108h] [rbp-130h]
  __int128 v40; // [rsp+110h] [rbp-128h]
  __int128 v41; // [rsp+120h] [rbp-118h]
  __int128 v42; // [rsp+130h] [rbp-108h]
  __int128 v43; // [rsp+140h] [rbp-F8h]
  __int64 v44; // [rsp+150h] [rbp-E8h]
  __int64 v45; // [rsp+158h] [rbp-E0h]
  char v46; // [rsp+160h] [rbp-D8h]
  __int64 v47[8]; // [rsp+178h] [rbp-C0h] BYREF
  _BYTE v48[104]; // [rsp+1B8h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+238h] [rbp+0h]
  __int64 *v50; // [rsp+258h] [rbp+20h] BYREF

  v6 = TaskbarLayoutParser::CalculateSelectionAttributes(this);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v26[0] = 0LL;
    v8 = *a2;
    v9 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 96LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v26);
    v10 = v9(v8, v26);
    v7 = v10;
    if ( v10 >= 0 )
    {
      v25 = 0LL;
      *(_OWORD *)v23 = 0LL;
      v24 = 0LL;
      while ( 1 )
      {
        v11 = v26[0];
        v12 = *(int (__fastcall **)(__int64, struct IXMLDOMNode **))(*(_QWORD *)v26[0] + 72LL);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v25);
        if ( v12(v11, &v25) < 0 || !v25 )
          break;
        memset(v27, 0, sizeof(v27));
        v28 = 0LL;
        v29 = 0;
        v30 = 0LL;
        v31 = 0LL;
        v32 = 0LL;
        v33 = 0LL;
        v34 = 0LL;
        v35 = 0LL;
        v36 = 0;
        if ( (int)TaskbarLayoutParser::ParseTaskbarLayoutNode(this, v25, (struct ParsedTaskbarLayout *)v27) >= 0 )
        {
          try
          {
            if ( *(_QWORD *)&v23[2] == v24 )
              std::vector<ParsedTaskbarLayout>::_Emplace_reallocate<ParsedTaskbarLayout>(
                (__int64 *)v23,
                *(__int64 *)&v23[2],
                v27);
            else
              std::vector<ParsedTaskbarLayout>::_Emplace_back_with_unused_capacity<ParsedTaskbarLayout>(
                (__int64)v23,
                v27);
          }
          catch ( ... )
          {
            LODWORD(v50) = wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x6D,
                             (int)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
                             v13);
            WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::~SelectionData((WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *)&v28);
            CTSimpleArray<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>>,ComPtrCompareHelper,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>>>::RemoveAll((__int64)v27);
            if ( *(_QWORD *)v23 )
            {
              std::_Destroy_range<std::allocator<ParsedTaskbarLayout>>(*(__int64 *)v23, *(__int64 *)&v23[2]);
              std::_Deallocate<16,0>(*(void **)v23, 8 * ((v24 - *(_QWORD *)v23) >> 3));
              *(_OWORD *)v23 = 0LL;
              v24 = 0LL;
            }
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v25);
            v7 = (unsigned int)v50;
            goto LABEL_32;
          }
        }
        WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::~SelectionData((WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *)&v28);
        CTSimpleArray<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>>,ComPtrCompareHelper,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>>>::RemoveAll((__int64)v27);
      }
      memset(v37, 0, sizeof(v37));
      v38 = 0LL;
      v39 = 0;
      v40 = 0LL;
      v41 = 0LL;
      v42 = 0LL;
      v43 = 0LL;
      v44 = 0LL;
      v45 = 0LL;
      v46 = 0;
      v50 = v47;
      v47[0] = (__int64)off_1806496E0;
      v47[7] = (__int64)v47;
      v14 = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::SelectionData(
              (WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *)v48,
              (TaskbarLayoutParser *)((char *)this + 48));
      Selected = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetSelectedItem<ParsedTaskbarLayout>(
                   (__int64 *)v23,
                   v14,
                   v47,
                   (__int64)v37);
      v7 = Selected;
      if ( Selected >= 0 )
      {
        v16 = *(__int64 **)&v37[0];
        v17 = *(_QWORD *)&v37[0] + 8LL * *((_QWORD *)&v37[0] + 1);
        while ( v16 != (__int64 *)v17 )
        {
          v18 = *v16;
          v50 = (__int64 *)*v16;
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v50);
          v20 = a3[1];
          if ( v20 != a3[3]
            || (int)CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                      (__int64)a3,
                      v20 + 1,
                      v19) >= 0 )
          {
            v21 = (__int64 *)(*a3 + 8 * a3[1]++);
            if ( v21 )
            {
              *v21 = 0LL;
              if ( v21 != (__int64 *)&v50 )
              {
                *v21 = v18;
                v50 = 0LL;
              }
            }
          }
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v50);
          ++v16;
        }
        WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::~SelectionData((WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *)&v38);
        CTSimpleArray<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>>,ComPtrCompareHelper,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>>>::RemoveAll((__int64)v37);
        if ( *(_QWORD *)v23 )
        {
          std::_Destroy_range<std::allocator<ParsedTaskbarLayout>>(*(__int64 *)v23, *(__int64 *)&v23[2]);
          std::_Deallocate<16,0>(*(void **)v23, 8 * ((v24 - *(_QWORD *)v23) >> 3));
          *(_OWORD *)v23 = 0LL;
          v24 = 0LL;
        }
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v25);
        v7 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x75,
          (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
          (const char *)(unsigned int)Selected);
        WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::~SelectionData((WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *)&v38);
        CTSimpleArray<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>>,ComPtrCompareHelper,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>>>::RemoveAll((__int64)v37);
        if ( *(_QWORD *)v23 )
        {
          std::_Destroy_range<std::allocator<ParsedTaskbarLayout>>(*(__int64 *)v23, *(__int64 *)&v23[2]);
          std::_Deallocate<16,0>(*(void **)v23, 8 * ((v24 - *(_QWORD *)v23) >> 3));
          *(_OWORD *)v23 = 0LL;
          v24 = 0LL;
        }
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v25);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x60,
        (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
        (const char *)(unsigned int)v10);
    }
LABEL_32:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v26);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5D,
      (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
      (const char *)(unsigned int)v6);
  }
  return v7;
}
