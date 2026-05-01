/*
 * XREFs of ??1MULTITASKING_HOST_DATA@CMultitaskingViewManager@@QEAA@XZ @ 0x18049A2F0
 * Callers:
 *     _CMultitaskingViewManager::_CreateXamlMTVHost_::_1_::dtor$5 @ 0x18021AF64 (_CMultitaskingViewManager--_CreateXamlMTVHost_--_1_--dtor$5.c)
 *     _CMultitaskingViewManager::_CreateDCompMTVHost_::_1_::dtor$3 @ 0x18049B364 (_CMultitaskingViewManager--_CreateDCompMTVHost_--_1_--dtor$3.c)
 *     __lambda_88032d98673c75c82401aed8ec27639f_::operator()_::_1_::dtor$0 @ 0x1804DBE22 (__lambda_88032d98673c75c82401aed8ec27639f_--operator()_--_1_--dtor$0.c)
 *     _ItemAnimationCoordinatorBase::BeginAnimation_::_1_::dtor$10 @ 0x1804DC5C7 (_ItemAnimationCoordinatorBase--BeginAnimation_--_1_--dtor$10.c)
 *     _ItemAnimationCoordinatorBase::ItemRemoved_::_1_::dtor$4 @ 0x1804DCE2B (_ItemAnimationCoordinatorBase--ItemRemoved_--_1_--dtor$4.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CMultitaskingViewManager::MULTITASKING_HOST_DATA::~MULTITASKING_HOST_DATA(
        CMultitaskingViewManager::MULTITASKING_HOST_DATA *this)
{
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 1);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this);
}
