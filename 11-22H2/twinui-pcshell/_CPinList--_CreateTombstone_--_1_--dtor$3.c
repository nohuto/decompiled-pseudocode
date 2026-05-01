/*
 * XREFs of _CPinList::_CreateTombstone_::_1_::dtor$3 @ 0x18075D881
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CPinList::_CreateTombstone_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  wil::details::out_param_t<wistd::unique_ptr<_ITEMIDLIST __unaligned,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_ITEMIDLIST __unaligned,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(a2 + 32);
}
