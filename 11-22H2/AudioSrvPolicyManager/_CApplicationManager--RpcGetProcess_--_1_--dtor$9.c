/*
 * XREFs of _CApplicationManager::RpcGetProcess_::_1_::dtor$9 @ 0x180048E60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CApplicationManager::RpcGetProcess_::_1_::dtor_9(__int64 a1, __int64 a2)
{
  return wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)(a2 + 224));
}
