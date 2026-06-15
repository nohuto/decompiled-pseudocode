/*
 * XREFs of _CAudioPump::CAudioPump_::_1_::dtor$9 @ 0x140034552
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioPump::CAudioPump_::_1_::dtor_9(__int64 a1, __int64 a2)
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(*(_QWORD *)(a2 + 48) + 272LL);
}
