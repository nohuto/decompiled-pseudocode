/*
 * XREFs of _VirtualPinnedAppsHandler::PinAppID_::_1_::dtor$7 @ 0x180613899
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VirtualPinnedAppsHandler::PinAppID_::_1_::dtor_7(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IApplicationView>::~ComPtr<IApplicationView>((__int64 *)(a2 + 112));
}
