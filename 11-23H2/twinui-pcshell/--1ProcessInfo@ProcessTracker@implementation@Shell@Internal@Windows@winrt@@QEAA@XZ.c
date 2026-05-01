/*
 * XREFs of ??1ProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18027E01C
 * Callers:
 *     ??1?$unique_ptr@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@QEAA@XZ @ 0x18027DFC0 (--1-$unique_ptr@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@U-$defa.c)
 * Callees:
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?UnregisterWait@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x18027DFF0 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-UnregisterWait@@YAH0@Z@details@w.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::ProcessTracker::ProcessInfo::~ProcessInfo(void **this)
{
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int UnregisterWait(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int UnregisterWait(void *)>>(this + 2);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(this + 1);
}
