/*
 * XREFs of _InputSiteManager::GetInputSiteFromInputSinkData_::_1_::dtor$2 @ 0x18005F783
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall InputSiteManager::GetInputSiteFromInputSinkData_::_1_::dtor_2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>(
           (__int64 *)(a2 + 496),
           a2,
           a3,
           a4);
}
