/*
 * XREFs of _GetConnectorProcessingModeDataFormatsFromDriver_::_1_::dtor$7 @ 0x18007D680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetConnectorProcessingModeDataFormatsFromDriver_::_1_::dtor_7(__int64 a1, __int64 a2)
{
  return wil::details::out_param_t<wistd::unique_ptr<KSDATAFORMAT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<KSDATAFORMAT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(a2 + 112);
}
