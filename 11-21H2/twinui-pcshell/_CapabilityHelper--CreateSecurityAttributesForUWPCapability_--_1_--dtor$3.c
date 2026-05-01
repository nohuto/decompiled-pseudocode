/*
 * XREFs of _CapabilityHelper::CreateSecurityAttributesForUWPCapability_::_1_::dtor$3 @ 0x18021D72D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CapabilityHelper::CreateSecurityAttributesForUWPCapability_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return wil::details::out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>::~out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>(a2 + 32);
}
