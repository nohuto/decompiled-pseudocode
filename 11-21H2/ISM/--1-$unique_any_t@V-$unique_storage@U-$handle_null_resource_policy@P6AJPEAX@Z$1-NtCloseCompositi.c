/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18004C7C4
 * Callers:
 *     _InputSiteManager::GetInputSiteFromInputSinkData_::_1_::dtor$2 @ 0x180057520 (_InputSiteManager--GetInputSiteFromInputSinkData_--_1_--dtor$2.c)
 *     _LegacyInputSinkData::GetDuplicatedInputSinkHandle_::_1_::dtor$0 @ 0x180124CE7 (_LegacyInputSinkData--GetDuplicatedInputSinkHandle_--_1_--dtor$0.c)
 *     _wil::details::shared_storage_wil::unique_any_t_wil::details::unique_storage_wil::details::handle_null_resource_policy_long_(__cdecl_)(void__)_&NtCloseCompositionInputSink_______::reset_::_1_::dtor$0 @ 0x18015030C (_wil--details--shared_storage_wil--unique_any_t_wil--details--unique_storage_wil--details--handl.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  return wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>(
           a1,
           a2,
           a3,
           a4);
}
