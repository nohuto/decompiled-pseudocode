/*
 * XREFs of _CSaDeviceProxy::_CSaDeviceProxy_::_1_::dtor$5 @ 0x18007916A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSaDeviceProxy::_CSaDeviceProxy_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)(*(_QWORD *)(a2 + 224) + 120LL));
}
