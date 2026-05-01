/*
 * XREFs of ??$_InsertAt@AEBUCacheEntry@ScreenManager@@@?$CTSimpleArray@UCacheEntry@ScreenManager@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UCacheEntry@ScreenManager@@@@V?$CSimpleArrayStandardCompareHelper@UCacheEntry@ScreenManager@@@@V?$CSimpleArrayStandardMergeHelper@UCacheEntry@ScreenManager@@@@@@QEAAJAEBUCacheEntry@ScreenManager@@_K@Z @ 0x1805C5484
 * Callers:
 *     ?HandleAppToAppLayoutChange@ScreenManager@@AEAAJPEAUIAppLayoutOperation@@PEA_N@Z @ 0x1805C5A7C (-HandleAppToAppLayoutChange@ScreenManager@@AEAAJPEAUIAppLayoutOperation@@PEA_N@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     memmove_0 @ 0x1801C9357 (memmove_0.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@UDropTarget@WindowArrangementViewDragData@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UDropTarget@WindowArrangementViewDragData@@@@V?$CSimpleArrayStandardCompareHelper@UDropTarget@WindowArrangementViewDragData@@@@V?$CSimpleArrayStandardMergeHelper@UDropTarget@WindowArrangementViewDragData@@@@@@QEAAJ_K0@Z @ 0x1805951E0 (-_EnsureCapacity@-$CTSimpleArray@UDropTarget@WindowArrangementViewDragData@@$0PPPPPPPO@V-$CTPoli.c)
 */

__int64 __fastcall CTSimpleArray<ScreenManager::CacheEntry,4294967294,CTPolicyCoTaskMem<ScreenManager::CacheEntry>,CSimpleArrayStandardCompareHelper<ScreenManager::CacheEntry>,CSimpleArrayStandardMergeHelper<ScreenManager::CacheEntry>>::_InsertAt<ScreenManager::CacheEntry const &>(
        __int64 **a1,
        __int64 *a2)
{
  __int64 *v2; // r8
  int v3; // edi
  unsigned __int64 v6; // rsi
  __int64 *v7; // rax
  __int64 *v8; // rbx

  v2 = a1[1];
  v3 = 0;
  v6 = 1LL;
  if ( v2 )
    v6 = (unsigned __int64)v2 + 1;
  if ( v6 <= (unsigned __int64)a1[3]
    || (v3 = CTSimpleArray<WindowArrangementViewDragData::DropTarget,4294967294,CTPolicyCoTaskMem<WindowArrangementViewDragData::DropTarget>,CSimpleArrayStandardCompareHelper<WindowArrangementViewDragData::DropTarget>,CSimpleArrayStandardMergeHelper<WindowArrangementViewDragData::DropTarget>>::_EnsureCapacity(
               (__int64)a1,
               v6,
               v2),
        v3 >= 0) )
  {
    v7 = a1[1];
    if ( v7 )
      memmove_0(*a1 + 3, *a1, 24LL * (_QWORD)v7);
    a1[1] = (__int64 *)v6;
  }
  if ( v3 >= 0 )
  {
    v8 = *a1;
    if ( v8 )
    {
      *v8 = *a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v8);
      v8[1] = a2[1];
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v8 + 1);
      v8[2] = a2[2];
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v8 + 2);
    }
  }
  return (unsigned int)v3;
}
