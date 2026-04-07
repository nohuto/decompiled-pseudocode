/*
 * XREFs of _CGlobalLightSet::AddNewRevealSpotLightWithType_::_1_::dtor$4 @ 0x18006483E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CGlobalLightSet::AddNewRevealSpotLightWithType_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(a2 + 56);
}
