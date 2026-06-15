/*
 * XREFs of _CProcess::RuntimeClassInitialize_::_1_::dtor$0 @ 0x18004A758
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CProcess::RuntimeClassInitialize_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)(a2 + 192));
}
