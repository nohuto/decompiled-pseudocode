/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18005A8C8
 * Callers:
 *     _InputSiteManager::GetInputSiteFromInputSinkData_::_1_::dtor$2 @ 0x18007140F (_InputSiteManager--GetInputSiteFromInputSinkData_--_1_--dtor$2.c)
 *     _wil::details::shared_storage_wil::unique_any_t_wil::details::unique_storage_wil::details::handle_null_resource_policy_long_(__cdecl_)(void__)_&NtCloseCompositionInputSink_______::reset_::_1_::dtor$0 @ 0x1800833C6 (_wil--details--shared_storage_wil--unique_any_t_wil--details--unique_storage_wil--details--handl.c)
 *     _LegacyInputSinkData::GetDuplicatedInputSinkHandle_::_1_::dtor$0 @ 0x18014D70B (_LegacyInputSinkData--GetDuplicatedInputSinkHandle_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  result = v4 - 1;
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    return NtCloseCompositionInputSink(v4, a2, a3, a4);
  return result;
}
