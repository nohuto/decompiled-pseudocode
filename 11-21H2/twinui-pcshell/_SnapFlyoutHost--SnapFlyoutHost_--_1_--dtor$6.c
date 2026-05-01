/*
 * XREFs of _SnapFlyoutHost::SnapFlyoutHost_::_1_::dtor$6 @ 0x18021BF1A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SnapFlyoutHost::SnapFlyoutHost_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(*(_QWORD *)(a2 + 48) + 88LL);
}
