/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180008B2C
 * Callers:
 *     _CProcess::RuntimeClassInitialize_::_1_::dtor$0 @ 0x18004567A (_CProcess--RuntimeClassInitialize_--_1_--dtor$0.c)
 *     _CApplicationManager::RpcGetProcess_::_1_::dtor$3 @ 0x180045A40 (_CApplicationManager--RpcGetProcess_--_1_--dtor$3.c)
 *     _CApplicationManager::RpcGetProcess_::_1_::dtor$6 @ 0x180045A76 (_CApplicationManager--RpcGetProcess_--_1_--dtor$6.c)
 *     _CApplicationManager::RpcGetProcess_::_1_::dtor$9 @ 0x180045AAC (_CApplicationManager--RpcGetProcess_--_1_--dtor$9.c)
 * Callees:
 *     <none>
 */

int __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(
        void **a1)
{
  char *v1; // rcx
  int result; // eax

  v1 = (char *)*a1;
  result = (_DWORD)v1 - 1;
  if ( (unsigned __int64)(v1 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    return CloseHandle(v1);
  return result;
}
