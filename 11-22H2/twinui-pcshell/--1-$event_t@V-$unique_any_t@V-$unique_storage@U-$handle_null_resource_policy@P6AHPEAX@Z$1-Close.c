/*
 * XREFs of ??1?$event_t@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@Uerr_exception_policy@2@@wil@@QEAA@XZ @ 0x18048C4D4
 * Callers:
 *     _PenWorkspace::Discover::RecentAppsCache::RecentAppsCache_::_1_::dtor$4 @ 0x1802B5A7B (_PenWorkspace--Discover--RecentAppsCache--RecentAppsCache_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

int __fastcall wil::event_t<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>,wil::err_exception_policy>::~event_t<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>,wil::err_exception_policy>(
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
