/*
 * XREFs of _CPinnedList::InternalModify_::_1_::dtor$8 @ 0x180758095
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CPinnedList::InternalModify_::_1_::dtor_8(__int64 a1, __int64 a2)
{
  wil::details::out_param_t<wistd::unique_ptr<_ITEMIDLIST __unaligned,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_ITEMIDLIST __unaligned,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(a2 + 200);
}
