/*
 * XREFs of _CapabilityHelper::CreateSecurityAttributesForUWPCapability_::_1_::dtor$2_0 @ 0x180710CCE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CapabilityHelper::CreateSecurityAttributesForUWPCapability_::_1_::dtor_2_0(__int64 a1, __int64 a2)
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>((void **)(a2 + 80));
}
