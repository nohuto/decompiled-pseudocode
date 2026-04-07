/*
 * XREFs of _CDesktopManager::CDesktopManager_::_1_::dtor$1 @ 0x18006825A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDesktopManager::CDesktopManager_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::UI::Composition::ICompositionEffectFactory,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositionEffectFactory,wil::err_returncode_policy>((__int64 *)(*(_QWORD *)(a2 + 48) + 48LL));
}
