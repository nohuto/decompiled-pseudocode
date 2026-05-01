/*
 * XREFs of ?get_local_iids@?$implements@URemoteSystemTimeOutInfoChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@U13456@@winrt@@UEBA?AU?$pair@IPEBUguid@winrt@@@std@@XZ @ 0x1801C4FA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::RemoteSystemTimeOutInfoChangedEventArgs,winrt::Windows::Internal::Shell::RemoteSystemTimeOutInfoChangedEventArgs>::get_local_iids(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)a2 = 1;
  *(_QWORD *)(a2 + 8) = &winrt::impl::uncloaked_iids<winrt::impl::interface_list<winrt::Windows::Internal::Shell::RemoteSystemTimeOutInfoChangedEventArgs>>::value;
  return a2;
}
