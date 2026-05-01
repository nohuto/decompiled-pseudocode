/*
 * XREFs of ?get_TimeOut@?$produce@URemoteSystemTimeOutInfoChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@UIRemoteSystemTimeOutInfoChangedEventArgs@3456@@impl@winrt@@UEAAHPEA_J@Z @ 0x18072C1E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::RemoteSystemTimeOutInfoChangedEventArgs,winrt::Windows::Internal::Shell::IRemoteSystemTimeOutInfoChangedEventArgs>::get_TimeOut(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rax

  v2 = a1 + 16;
  if ( !a1 )
    v2 = 32LL;
  *a2 = *(_QWORD *)v2;
  return 0LL;
}
