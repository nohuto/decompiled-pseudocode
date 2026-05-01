/*
 * XREFs of _lambda_cad582326f08631f2948fcf147cbafec_::__lambda_cad582326f08631f2948fcf147cbafec_ @ 0x18019B930
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_cad582326f08631f2948fcf147cbafec___::_CTaskWrapper__lambda_cad582326f08631f2948fcf147cbafec___ @ 0x18019BAA4 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_cad582326f08631f2948fcf147cbafec___--_CTask.c)
 *     ?ActivateSearch@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@WindowsUdk@winrt@@_N@Z @ 0x18019E468 (-ActivateSearch@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@U.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall lambda_cad582326f08631f2948fcf147cbafec_::__lambda_cad582326f08631f2948fcf147cbafec_(__int64 a1)
{
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)(a1 + 16));
  winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(a1 + 8));
}
