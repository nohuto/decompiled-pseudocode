/*
 * XREFs of ?get_local_iids@?$implements@UProcessTracker@implementation@Shell@Internal@Windows@winrt@@U13456@@winrt@@UEBA?AU?$pair@IPEBUguid@winrt@@@std@@XZ @ 0x18027EF00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::ProcessTracker,winrt::Windows::Internal::Shell::ProcessTracker>::get_local_iids(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)a2 = 1;
  *(_QWORD *)(a2 + 8) = winrt::impl::uncloaked_iids<winrt::impl::interface_list<winrt::Windows::Internal::Shell::ProcessTracker>>::value;
  return a2;
}
