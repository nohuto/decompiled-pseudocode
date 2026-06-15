/*
 * XREFs of _CSaDeviceProxy::_CSaDeviceProxy_::_1_::dtor$4 @ 0x180079154
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSaDeviceProxy::_CSaDeviceProxy_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<CAudioStream>::~ComPtr<CAudioStream>(*(_QWORD *)(a2 + 224) + 112LL);
}
