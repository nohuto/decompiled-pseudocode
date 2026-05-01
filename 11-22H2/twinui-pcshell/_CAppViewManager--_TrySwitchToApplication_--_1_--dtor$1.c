/*
 * XREFs of _CAppViewManager::_TrySwitchToApplication_::_1_::dtor$1 @ 0x1803BA0D8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAppViewManager::_TrySwitchToApplication_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IApplicationView>::~ComPtr<IApplicationView>((__int64 *)(a2 + 104));
}
