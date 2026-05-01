/*
 * XREFs of ?ClearCachedAppView@ApplicationViewManagerVisibilityDebouncer@@AEAAXPEAUIApplicationView@@@Z @ 0x1800EAB10
 * Callers:
 *     ?OnApplicationViewChanged@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18007C630 (-OnApplicationViewChanged@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUIApplicationView@@.c)
 *     ?ProcessPendingNotifications@ApplicationViewManagerVisibilityDebouncer@@AEAAJXZ @ 0x1800E97CC (-ProcessPendingNotifications@ApplicationViewManagerVisibilityDebouncer@@AEAAJXZ.c)
 *     ?HandleApplicationViewChangeSync@ApplicationViewManagerVisibilityDebouncer@@UEAAXPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@@Z @ 0x1800EAA20 (-HandleApplicationViewChangeSync@ApplicationViewManagerVisibilityDebouncer@@UEAAXPEAUIApplicatio.c)
 * Callees:
 *     ?GetCachedAppViewIndex@ApplicationViewManagerVisibilityDebouncer@@AEBA_KPEAUIApplicationView@@@Z @ 0x1800EAB90 (-GetCachedAppViewIndex@ApplicationViewManagerVisibilityDebouncer@@AEBA_KPEAUIApplicationView@@@Z.c)
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x1800EDDE0 (-RemoveAt@-$CTSimpleArray@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPolicyCoT.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ApplicationViewManagerVisibilityDebouncer::ClearCachedAppView(
        RTL_SRWLOCK *this,
        struct IApplicationView *a2)
{
  RTL_SRWLOCK *v4; // rbx
  unsigned __int64 CachedAppViewIndex; // rax

  v4 = this + 23;
  AcquireSRWLockExclusive(this + 23);
  CachedAppViewIndex = ApplicationViewManagerVisibilityDebouncer::GetCachedAppViewIndex(
                         (ApplicationViewManagerVisibilityDebouncer *)this,
                         a2);
  if ( CachedAppViewIndex != -1LL )
    CTSimpleArray<Microsoft::WRL::ComPtr<IApplicationView>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IApplicationView>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IApplicationView>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IApplicationView>>>::RemoveAt(
      &this[24],
      CachedAppViewIndex);
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
}
