/*
 * XREFs of _lambda_96b4b9d69bfc42f917c8cf51ea7a8297_::__lambda_96b4b9d69bfc42f917c8cf51ea7a8297_ @ 0x180499790
 * Callers:
 *     _CMultitaskingViewHotKeyHandler::_OnAltTab_::_1_::dtor$3 @ 0x180499D7A (_CMultitaskingViewHotKeyHandler--_OnAltTab_--_1_--dtor$3.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall lambda_96b4b9d69bfc42f917c8cf51ea7a8297_::__lambda_96b4b9d69bfc42f917c8cf51ea7a8297_(__int64 a1)
{
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)(a1 + 16));
  return Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)(a1 + 8));
}
