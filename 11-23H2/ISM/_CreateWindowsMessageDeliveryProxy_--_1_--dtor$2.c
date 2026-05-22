/*
 * XREFs of _CreateWindowsMessageDeliveryProxy_::_1_::dtor$2 @ 0x18006BBB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CreateWindowsMessageDeliveryProxy_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<IResizeAreaClientProxy>::~ComPtr<IResizeAreaClientProxy>((__int64 *)(a2 + 32));
}
