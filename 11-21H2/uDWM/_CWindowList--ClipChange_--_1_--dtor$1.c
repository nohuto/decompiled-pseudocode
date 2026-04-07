/*
 * XREFs of _CWindowList::ClipChange_::_1_::dtor$1 @ 0x18006506F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CWindowList::ClipChange_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(a2 + 128);
}
