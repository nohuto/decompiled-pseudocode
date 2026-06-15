/*
 * XREFs of _DerivePeriodicityForStream_::_1_::dtor$7 @ 0x180078EF2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DerivePeriodicityForStream_::_1_::dtor_7(__int64 a1, __int64 a2)
{
  wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(a2 + 248);
}
