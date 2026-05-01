/*
 * XREFs of ?put_TimeOut@?$produce@URemoteSystem@implementation@Shell@Internal@Windows@winrt@@UIRemoteSystem@3456@@impl@winrt@@UEAAH_J@Z @ 0x18072A6A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::RemoteSystem,winrt::Windows::Internal::Shell::IRemoteSystem>::put_TimeOut(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax

  v4 = a1 + 16;
  if ( !a1 )
    v4 = 32LL;
  AcquireSRWLockExclusive((PSRWLOCK)v4);
  v5 = a1 + 32;
  if ( !a1 )
    v5 = 48LL;
  *(_QWORD *)v5 = a2;
  if ( v4 )
    ReleaseSRWLockExclusive((PSRWLOCK)v4);
  return 0LL;
}
