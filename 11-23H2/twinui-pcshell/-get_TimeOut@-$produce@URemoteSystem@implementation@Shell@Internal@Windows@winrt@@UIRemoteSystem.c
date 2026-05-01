/*
 * XREFs of ?get_TimeOut@?$produce@URemoteSystem@implementation@Shell@Internal@Windows@winrt@@UIRemoteSystem@3456@@impl@winrt@@UEAAHPEA_J@Z @ 0x18072A530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::RemoteSystem,winrt::Windows::Internal::Shell::IRemoteSystem>::get_TimeOut(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rdi

  v4 = a1 + 16;
  if ( !a1 )
    v4 = 32LL;
  AcquireSRWLockShared((PSRWLOCK)v4);
  v5 = a1 + 32;
  if ( !a1 )
    v5 = 48LL;
  v6 = *(_QWORD *)v5;
  if ( v4 )
    ReleaseSRWLockShared((PSRWLOCK)v4);
  *a2 = v6;
  return 0LL;
}
