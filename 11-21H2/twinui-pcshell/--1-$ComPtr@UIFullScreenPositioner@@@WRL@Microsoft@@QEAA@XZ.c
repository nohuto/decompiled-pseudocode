/*
 * XREFs of ??1?$ComPtr@UIFullScreenPositioner@@@WRL@Microsoft@@QEAA@XZ @ 0x180321BC4
 * Callers:
 *     __lambda_7bcbf056061a51ef99db996275205d7a_::operator()_::_1_::dtor$1 @ 0x18036813F (__lambda_7bcbf056061a51ef99db996275205d7a_--operator()_--_1_--dtor$1.c)
 *     __lambda_62276dcc8956575ffb6d344da47e5bef_::operator()_::_1_::dtor$1 @ 0x1803936C7 (__lambda_62276dcc8956575ffb6d344da47e5bef_--operator()_--_1_--dtor$1.c)
 *     _TabletModeViewManager::StartSwipeHelper_::_1_::dtor$2 @ 0x18050C90F (_TabletModeViewManager--StartSwipeHelper_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<IFullScreenPositioner>::~ComPtr<IFullScreenPositioner>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<ICallingProcessInfo>::InternalRelease(a1);
}
