/*
 * XREFs of ??$?0VCPlaceModeButtonAcc@@@?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@QEAA@AEBV?$ComPtr@VCPlaceModeButtonAcc@@@12@PEAPEAX@Z @ 0x1805F54B8
 * Callers:
 *     ?InitPlaceMode@CDragVisualAcc@@UEAAXPEAUIApplicationView@@PEAUIAppLayout@@@Z @ 0x1805F6870 (-InitPlaceMode@CDragVisualAcc@@UEAAXPEAUIApplicationView@@PEAUIAppLayout@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIGlobalInterfaceTable@@@WRL@Microsoft@@IEBAXXZ @ 0x18006E0D0 (-InternalAddRef@-$ComPtr@UIGlobalInterfaceTable@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>::ComPtr<IPlaceModeButtonAcc>(__int64 *a1, _QWORD *a2)
{
  *a1 = (*a2 + 24LL) & -(__int64)(*a2 != 0LL);
  Microsoft::WRL::ComPtr<IGlobalInterfaceTable>::InternalAddRef(a1);
  return a1;
}
