/*
 * XREFs of ?GetRuntimeClassName@?$ProcessTracker_base@UProcessTracker@implementation@Shell@Internal@Windows@winrt@@$$V@implementation@Shell@Internal@Windows@winrt@@UEBA?AUhstring@6@XZ @ 0x18027E430
 * Callers:
 *     <none>
 * Callees:
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800D20DC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 */

winrt::hstring *__fastcall winrt::Windows::Internal::Shell::implementation::ProcessTracker_base<winrt::Windows::Internal::Shell::implementation::ProcessTracker,>::GetRuntimeClassName(
        __int64 a1,
        winrt::hstring *a2)
{
  winrt::hstring::hstring(a2, L"Windows.Internal.Shell.ProcessTracker");
  return a2;
}
