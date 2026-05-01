/*
 * XREFs of ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?UnregisterWait@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x18027DFF0
 * Callers:
 *     ??1ProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18027E01C (--1ProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

int __fastcall wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int UnregisterWait(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int UnregisterWait(void *)>>(
        void **a1)
{
  char *v1; // rcx
  int result; // eax

  v1 = (char *)*a1;
  result = (_DWORD)v1 - 1;
  if ( (unsigned __int64)(v1 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    return UnregisterWait(v1);
  return result;
}
