/*
 * XREFs of _CHMDManager::GetHeadRotation_::_1_::dtor$1 @ 0x18010EC5B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHMDManager::GetHeadRotation_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)(a2 + 64));
}
