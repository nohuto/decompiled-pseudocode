/*
 * XREFs of ??4ParsedTaskbarLayout@@QEAAXAEBU0@@Z @ 0x1803E99B8
 * Callers:
 *     ??$GetSelectedItem@UParsedTaskbarLayout@@@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJAEBV?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@USelectionData@0123@V?$function@$$A6A?AUSelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEBUParsedTaskbarLayout@@@Z@5@PEAUParsedTaskbarLayout@@@Z @ 0x1803E8AF0 (--$GetSelectedItem@UParsedTaskbarLayout@@@CuratedTileCollections@UnifiedTile@Shell@WindowsIntern.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1802D0AA0 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@@@VComPtrCompareHelper@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x1802D2574 (-RemoveAll@-$CTSimpleArray@V-$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@$0PPPPPPPO@V.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ParsedTaskbarLayout::operator=(_QWORD *a1, __int64 a2)
{
  __int64 *v4; // rsi
  __int64 v5; // rbp
  __int64 v6; // rbx
  void *v7; // r8
  __int64 v8; // rcx
  int v9; // eax
  __int64 *v10; // rcx
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  CTSimpleArray<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>>,ComPtrCompareHelper,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>>>::RemoveAll((__int64)a1);
  v4 = *(__int64 **)a2;
  v5 = *(_QWORD *)a2 + 8LL * *(_QWORD *)(a2 + 8);
  while ( v4 != (__int64 *)v5 )
  {
    v6 = *v4;
    v11 = *v4;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v11);
    v8 = a1[1];
    if ( v8 != a1[3]
      || (v9 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                 (__int64)a1,
                 v8 + 1,
                 v7),
          v8 = a1[1],
          v9 >= 0) )
    {
      a1[1] = v8 + 1;
      v10 = (__int64 *)(*a1 + 8 * v8);
      if ( v10 )
      {
        *v10 = v6;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v10);
      }
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v11);
    ++v4;
  }
  WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::Copy(
    (WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *)(a1 + 4),
    (const struct WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *)(a2 + 32));
}
