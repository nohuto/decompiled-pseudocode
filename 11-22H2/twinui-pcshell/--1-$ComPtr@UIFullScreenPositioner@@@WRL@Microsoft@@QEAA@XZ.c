/*
 * XREFs of ??1?$ComPtr@UIFullScreenPositioner@@@WRL@Microsoft@@QEAA@XZ @ 0x1803EF1E8
 * Callers:
 *     __lambda_c306e9f60182553b56e58ad695426938_::operator()_::_1_::dtor$1 @ 0x1801F19BB (__lambda_c306e9f60182553b56e58ad695426938_--operator()_--_1_--dtor$1.c)
 *     __lambda_7bcbf056061a51ef99db996275205d7a_::operator()_::_1_::dtor$1 @ 0x18043E0C3 (__lambda_7bcbf056061a51ef99db996275205d7a_--operator()_--_1_--dtor$1.c)
 *     _TabletModeViewManager::StartSwipeHelper_::_1_::dtor$2 @ 0x1805C4E41 (_TabletModeViewManager--StartSwipeHelper_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<IFullScreenPositioner>::~ComPtr<IFullScreenPositioner>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<IFullScreenPositioner>::InternalRelease(a1);
}
