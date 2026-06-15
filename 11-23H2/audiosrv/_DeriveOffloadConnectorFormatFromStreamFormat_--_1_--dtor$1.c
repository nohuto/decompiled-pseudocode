/*
 * XREFs of _DeriveOffloadConnectorFormatFromStreamFormat_::_1_::dtor$1 @ 0x180115766
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DeriveOffloadConnectorFormatFromStreamFormat_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(a2 + 48);
}
