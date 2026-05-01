/*
 * XREFs of _VirtualPinnedAppsHandler::PinAppID_::_1_::dtor$4 @ 0x180613875
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VirtualPinnedAppsHandler::PinAppID_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>((__int64 *)(a2 + 120));
}
