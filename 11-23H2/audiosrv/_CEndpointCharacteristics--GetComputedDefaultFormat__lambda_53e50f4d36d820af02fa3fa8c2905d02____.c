/*
 * XREFs of _CEndpointCharacteristics::GetComputedDefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02____::_1_::dtor$12 @ 0x18007CCC3
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CEndpointCharacteristics::GetComputedDefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02____::_1_::dtor_12(
        __int64 a1,
        __int64 a2)
{
  return wil::details::out_param_t<wistd::unique_ptr<KSDATAFORMAT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<KSDATAFORMAT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(a2 + 288);
}
