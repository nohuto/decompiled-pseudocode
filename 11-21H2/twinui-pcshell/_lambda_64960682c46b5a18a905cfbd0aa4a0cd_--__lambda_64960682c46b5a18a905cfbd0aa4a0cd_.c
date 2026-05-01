/*
 * XREFs of _lambda_64960682c46b5a18a905cfbd0aa4a0cd_::__lambda_64960682c46b5a18a905cfbd0aa4a0cd_ @ 0x1804288F0
 * Callers:
 *     _Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_64960682c46b5a18a905cfbd0aa4a0cd____::_1_::dtor$0 @ 0x180428638 (_Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_64960682c46b5a18a905cfbd0aa4a0c.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall lambda_64960682c46b5a18a905cfbd0aa4a0cd_::__lambda_64960682c46b5a18a905cfbd0aa4a0cd_(__int64 a1)
{
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)(a1 + 16));
  return Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)(a1 + 8));
}
