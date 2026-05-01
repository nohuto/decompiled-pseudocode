/*
 * XREFs of _CapabilityHelper::CreateSecurityAttributesForUWPCapability_::_1_::dtor$2 @ 0x18021D71B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CapabilityHelper::CreateSecurityAttributesForUWPCapability_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(a2 + 80);
}
