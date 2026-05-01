/*
 * XREFs of ?RemoveAll@?$CTSimpleArray@UAppSpecialInfo@CAppTransitionManager@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UAppSpecialInfo@CAppTransitionManager@@@@V?$CSimpleArrayStandardCompareHelper@UAppSpecialInfo@CAppTransitionManager@@@@V?$CSimpleArrayStandardMergeHelper@UAppSpecialInfo@CAppTransitionManager@@@@@@QEAAXXZ @ 0x1801BE9CC
 * Callers:
 *     ??1CAppTransitionManager@@UEAA@XZ @ 0x1801B0DB8 (--1CAppTransitionManager@@UEAA@XZ.c)
 *     ??_GPositionAdjustmentHistory@@UEAAPEAXI@Z @ 0x1801BC090 (--_GPositionAdjustmentHistory@@UEAAPEAXI@Z.c)
 *     ?_ClearAnimationPassState@CAppTransitionManager@@AEAAXXZ @ 0x1805982AC (-_ClearAnimationPassState@CAppTransitionManager@@AEAAXXZ.c)
 *     ?ClearHistory@PositionAdjustmentHistory@@UEAAXXZ @ 0x1805C6C20 (-ClearHistory@PositionAdjustmentHistory@@UEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CTSimpleArray<CAppTransitionManager::AppSpecialInfo,4294967294,CTPolicyCoTaskMem<CAppTransitionManager::AppSpecialInfo>,CSimpleArrayStandardCompareHelper<CAppTransitionManager::AppSpecialInfo>,CSimpleArrayStandardMergeHelper<CAppTransitionManager::AppSpecialInfo>>::RemoveAll(
        __int64 a1)
{
  unsigned __int64 *v1; // rdi
  unsigned __int64 v3; // rbp
  __int64 v4; // rsi

  v1 = (unsigned __int64 *)(a1 + 8);
  if ( *(_QWORD *)a1 )
  {
    v3 = 0LL;
    if ( *v1 )
    {
      v4 = 0LL;
      do
      {
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)(v4 + *(_QWORD *)a1));
        ++v3;
        v4 += 16LL;
      }
      while ( v3 < *v1 );
    }
    CoTaskMemFree(*(LPVOID *)a1);
    *(_QWORD *)a1 = 0LL;
  }
  *v1 = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
}
