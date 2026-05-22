/*
 * XREFs of _MPCFocusTarget::MPCFocusTarget_::_1_::dtor$2 @ 0x18011A25D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall MPCFocusTarget::MPCFocusTarget_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>((void **)(*(_QWORD *)(a2 + 48) + 96LL));
}
