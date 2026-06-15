/*
 * XREFs of _CAudioDGModule::CAudioDGModule_::_1_::dtor$3 @ 0x1400399E6
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioDGModule::CAudioDGModule_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(*(_QWORD *)(a2 + 256) + 136LL);
}
