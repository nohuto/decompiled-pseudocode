/*
 * XREFs of _lambda_c5bad73058b4167fadc00bcfc86ad84b_::__lambda_c5bad73058b4167fadc00bcfc86ad84b_ @ 0x1803AC258
 * Callers:
 *     _CAppViewManager::PrepareToSwitch_::_1_::dtor$2 @ 0x1803B0BDB (_CAppViewManager--PrepareToSwitch_--_1_--dtor$2.c)
 *     _CAppViewManager::ShowView_::_1_::dtor$2 @ 0x1803B1766 (_CAppViewManager--ShowView_--_1_--dtor$2.c)
 *     _CAppViewManager::SwitchViews_::_1_::dtor$2 @ 0x1803B4FAB (_CAppViewManager--SwitchViews_--_1_--dtor$2.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall lambda_c5bad73058b4167fadc00bcfc86ad84b_::__lambda_c5bad73058b4167fadc00bcfc86ad84b_(__int64 *a1)
{
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a1 + 4);
  return Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a1);
}
