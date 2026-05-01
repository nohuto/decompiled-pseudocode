/*
 * XREFs of ??1ItemRemovedInfo@ItemAnimationCoordinatorBase@@QEAA@XZ @ 0x18058ABB4
 * Callers:
 *     __lambda_88032d98673c75c82401aed8ec27639f_::operator()_::_1_::dtor$0 @ 0x180593C12 (__lambda_88032d98673c75c82401aed8ec27639f_--operator()_--_1_--dtor$0.c)
 *     _ItemAnimationCoordinatorBase::BeginAnimation_::_1_::dtor$10 @ 0x1805943A1 (_ItemAnimationCoordinatorBase--BeginAnimation_--_1_--dtor$10.c)
 *     _ItemAnimationCoordinatorBase::ItemRemoved_::_1_::dtor$4 @ 0x180594C0C (_ItemAnimationCoordinatorBase--ItemRemoved_--_1_--dtor$4.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall ItemAnimationCoordinatorBase::ItemRemovedInfo::~ItemRemovedInfo(
        ItemAnimationCoordinatorBase::ItemRemovedInfo *this)
{
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 1);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this);
}
