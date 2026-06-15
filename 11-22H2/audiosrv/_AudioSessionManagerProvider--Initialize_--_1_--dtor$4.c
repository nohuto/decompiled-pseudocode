/*
 * XREFs of _AudioSessionManagerProvider::Initialize_::_1_::dtor$4 @ 0x18007CD4D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AudioSessionManagerProvider::Initialize_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)(a2 + 128));
}
