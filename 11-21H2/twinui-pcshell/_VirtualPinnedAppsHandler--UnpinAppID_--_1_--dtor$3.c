/*
 * XREFs of _VirtualPinnedAppsHandler::UnpinAppID_::_1_::dtor$3 @ 0x1805599C3
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VirtualPinnedAppsHandler::UnpinAppID_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>((__int64 *)(a2 + 112));
}
