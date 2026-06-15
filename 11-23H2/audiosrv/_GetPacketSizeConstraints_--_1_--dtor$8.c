/*
 * XREFs of _GetPacketSizeConstraints_::_1_::dtor$8 @ 0x180079C32
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetPacketSizeConstraints_::_1_::dtor_8(__int64 a1, __int64 a2)
{
  return wil::details::out_param_t<wistd::unique_ptr<KSDATAFORMAT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<KSDATAFORMAT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(a2 + 88);
}
