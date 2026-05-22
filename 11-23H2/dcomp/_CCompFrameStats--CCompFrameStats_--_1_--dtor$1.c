/*
 * XREFs of _CCompFrameStats::CCompFrameStats_::_1_::dtor$1 @ 0x1800B1E04
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompFrameStats::CCompFrameStats_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(*(_QWORD *)(a2 + 48) + 64LL);
}
