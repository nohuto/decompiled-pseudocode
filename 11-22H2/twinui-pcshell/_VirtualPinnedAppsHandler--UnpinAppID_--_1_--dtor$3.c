/*
 * XREFs of _VirtualPinnedAppsHandler::UnpinAppID_::_1_::dtor$3 @ 0x180615BD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VirtualPinnedAppsHandler::UnpinAppID_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>((__int64 *)(a2 + 112));
}
