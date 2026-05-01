/*
 * XREFs of ?put@?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?UnregisterWait@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAAPEAPEAXXZ @ 0x18027EF40
 * Callers:
 *     ?StartTrackingProcess@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@QEAAXI@Z @ 0x18027E708 (-StartTrackingProcess@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@QEAAXI@Z.c)
 * Callees:
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x18038D30C (--1last_error_context@wil@@QEAA@XZ.c)
 */

void **__fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int UnregisterWait(void *)>>>::put(
        void **a1)
{
  void *v1; // rdi
  char v4; // [rsp+30h] [rbp+8h] BYREF
  DWORD LastError; // [rsp+34h] [rbp+Ch]

  v1 = *a1;
  if ( (char *)*a1 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    v4 = 0;
    LastError = GetLastError();
    UnregisterWait(v1);
    wil::last_error_context::~last_error_context((wil::last_error_context *)&v4);
  }
  *a1 = 0LL;
  return a1;
}
