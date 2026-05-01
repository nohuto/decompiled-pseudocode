/*
 * XREFs of _PeoplePaneViewManager::CloseView_::_1_::dtor$1 @ 0x1803D6458
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PeoplePaneViewManager::CloseView_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>((__int64 *)(a2 + 64));
}
