/*
 * XREFs of ?_Destroy@?$_Ref_count_obj2@VSharedTargetWithHandle@SystemCursors@@@std@@EEAAXXZ @ 0x1800EE040
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x1800B3850 (--1-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@w.c)
 */

__int64 __fastcall std::_Ref_count_obj2<SystemCursors::SharedTargetWithHandle>::_Destroy(__int64 a1)
{
  wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)(a1 + 32));
  return wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)(a1 + 24));
}
