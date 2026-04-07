/*
 * XREFs of _CCompositionEffectCache::Initialize_::_1_::dtor$0 @ 0x1800683A2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionEffectCache::Initialize_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::UI::Composition::ICompositionEffectFactory,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositionEffectFactory,wil::err_returncode_policy>((__int64 *)(a2 + 72));
}
