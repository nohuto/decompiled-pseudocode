/*
 * XREFs of _CGraphicsDeviceManager::InitializeGraphicsDevice_::_1_::dtor$3 @ 0x180068390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CGraphicsDeviceManager::InitializeGraphicsDevice_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::UI::Composition::ICompositionEffectFactory,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositionEffectFactory,wil::err_returncode_policy>((__int64 *)(a2 + 80));
}
