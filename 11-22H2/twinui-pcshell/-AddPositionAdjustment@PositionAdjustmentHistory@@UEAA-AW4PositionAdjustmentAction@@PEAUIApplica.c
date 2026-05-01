/*
 * XREFs of ?AddPositionAdjustment@PositionAdjustmentHistory@@UEAA?AW4PositionAdjustmentAction@@PEAUIApplicationView@@@Z @ 0x1805C6AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@IEAAKXZ @ 0x18014025C (-InternalRelease@-$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardMergeHelper@VLayoutItem@GridLayoutFactory@@@@@@QEAAJ_K0@Z @ 0x1802D73A4 (-_EnsureCapacity@-$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_a506e902e7170e918a173785fdf388b8___ @ 0x1805C69B8 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_a506e902e7170e918a173785fdf388b8___.c)
 *     ?GetEntryCountForView@PositionAdjustmentHistory@@AEAAIPEAUIApplicationView@@@Z @ 0x1805C6C30 (-GetEntryCountForView@PositionAdjustmentHistory@@AEAAIPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PositionAdjustmentHistory::AddPositionAdjustment(__int64 a1, struct IApplicationView *a2)
{
  void *v4; // r8
  ULONGLONG TickCount64; // r12
  unsigned int v6; // edi
  int v7; // ebp
  volatile int *v8; // rdx
  __int64 v9; // rsi
  __int64 *v10; // rsi
  Microsoft::WRL::Details *v11; // rcx
  unsigned int EntryCountForView; // eax
  __int64 v14[7]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF
  __int64 v17; // [rsp+68h] [rbp+10h] BYREF

  v14[0] = (__int64)a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v14);
  TickCount64 = GetTickCount64();
  v14[1] = TickCount64;
  v6 = 0;
  v7 = 0;
  v8 = *(volatile int **)(a1 + 32);
  if ( v8 != *(volatile int **)(a1 + 48)
    || (v7 = CTSimpleArray<GridLayoutFactory::LayoutItem,4294967294,CTPolicyCoTaskMem<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardCompareHelper<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardMergeHelper<GridLayoutFactory::LayoutItem>>::_EnsureCapacity(
               a1 + 24,
               (unsigned __int64)v8 + 1,
               v4),
        v7 >= 0) )
  {
    v9 = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(a1 + 32) = v9 + 1;
    v10 = (__int64 *)(*(_QWORD *)(a1 + 24) + 16 * v9);
    if ( v10 )
    {
      *v10 = (__int64)a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v10);
      v10[1] = TickCount64;
    }
  }
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2B,
      (int)"pcshell\\twinui\\tabletmode\\lib\\positionadjustmenthistory.cpp",
      (const char *)(unsigned int)v7);
  v17 = a1;
  v11 = (Microsoft::WRL::Details *)(a1 + 20);
  if ( a1 )
    Microsoft::WRL::Details::SafeUnknownIncrementReference(v11, v8);
  v16 = a1;
  if ( a1 )
    Microsoft::WRL::Details::SafeUnknownIncrementReference(v11, v8);
  Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_a506e902e7170e918a173785fdf388b8___(
    (__int64)v11,
    *(unsigned int *)(a1 + 56),
    (__int64)v4,
    &v16);
  Microsoft::WRL::ComPtr<PositionAdjustmentHistory>::InternalRelease(&v16);
  EntryCountForView = PositionAdjustmentHistory::GetEntryCountForView((PositionAdjustmentHistory *)a1, a2);
  if ( EntryCountForView >= 3 )
    v6 = 2 - (EntryCountForView < 4);
  Microsoft::WRL::ComPtr<PositionAdjustmentHistory>::InternalRelease(&v17);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v14);
  return v6;
}
