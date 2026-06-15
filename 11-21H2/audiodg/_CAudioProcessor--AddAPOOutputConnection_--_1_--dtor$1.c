/*
 * XREFs of _CAudioProcessor::AddAPOOutputConnection_::_1_::dtor$1 @ 0x140037940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioProcessor::AddAPOOutputConnection_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::details::out_param_t<wistd::unique_ptr<APO_REG_PROPERTIES,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<APO_REG_PROPERTIES,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(a2 + 88);
}
