/*
 * XREFs of ?AddPositionAdjustment@PositionAdjustmentHistory@@UEAA?AW4PositionAdjustmentAction@@PEAUIApplicationView@@@Z @ 0x18050E620
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@IEAAKXZ @ 0x18017CA20 (-InternalRelease@-$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardMergeHelper@VLayoutItem@GridLayoutFactory@@@@@@QEAAJ_K0@Z @ 0x1803D98E0 (-_EnsureCapacity@-$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_a506e902e7170e918a173785fdf388b8___ @ 0x18050E508 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_a506e902e7170e918a173785fdf388b8___.c)
 *     ?GetEntryCountForView@PositionAdjustmentHistory@@AEAAIPEAUIApplicationView@@@Z @ 0x18050E780 (-GetEntryCountForView@PositionAdjustmentHistory@@AEAAIPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PositionAdjustmentHistory::AddPositionAdjustment(__int64 a1, struct IApplicationView *a2)
{
  void *v4; // r8
  ULONGLONG TickCount64; // r12
  unsigned int v6; // edi
  int v7; // r14d
  volatile int *v8; // rdx
  __int64 *v9; // rsi
  Microsoft::WRL::Details *v10; // rcx
  unsigned int EntryCountForView; // eax
  __int64 v13[7]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  volatile int *v15; // [rsp+60h] [rbp+8h] BYREF
  volatile int *v16; // [rsp+68h] [rbp+10h] BYREF

  v13[0] = (__int64)a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v13);
  TickCount64 = GetTickCount64();
  v13[1] = TickCount64;
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
    v9 = (__int64 *)(*(_QWORD *)(a1 + 24) + 16 * (*(_QWORD *)(a1 + 32))++);
    if ( v9 )
    {
      *v9 = (__int64)a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v9);
      v9[1] = TickCount64;
    }
  }
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2B,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\positionadjustmenthistory.cpp",
      (const char *)(unsigned int)v7);
  v16 = (volatile int *)a1;
  v10 = (Microsoft::WRL::Details *)(a1 + 20);
  if ( a1 )
    Microsoft::WRL::Details::SafeUnknownIncrementReference(v10, v8);
  v15 = (volatile int *)a1;
  if ( a1 )
    Microsoft::WRL::Details::SafeUnknownIncrementReference(v10, v8);
  Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_a506e902e7170e918a173785fdf388b8___(
    (__int64)v10,
    *(_DWORD *)(a1 + 56),
    (__int64)v4,
    &v15);
  Microsoft::WRL::ComPtr<PositionAdjustmentHistory>::InternalRelease(&v15);
  EntryCountForView = PositionAdjustmentHistory::GetEntryCountForView((PositionAdjustmentHistory *)a1, a2);
  if ( EntryCountForView >= 3 )
    v6 = 2 - (EntryCountForView < 4);
  Microsoft::WRL::ComPtr<PositionAdjustmentHistory>::InternalRelease(&v16);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v13);
  return v6;
}
