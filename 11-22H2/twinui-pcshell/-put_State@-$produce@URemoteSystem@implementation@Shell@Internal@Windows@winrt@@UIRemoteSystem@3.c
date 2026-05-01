/*
 * XREFs of ?put_State@?$produce@URemoteSystem@implementation@Shell@Internal@Windows@winrt@@UIRemoteSystem@3456@@impl@winrt@@UEAAHH@Z @ 0x18072A5F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::RemoteSystem,winrt::Windows::Internal::Shell::IRemoteSystem>::put_State(
        __int64 a1,
        int a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax

  v4 = a1 + 16;
  if ( !a1 )
    v4 = 32LL;
  AcquireSRWLockExclusive((PSRWLOCK)v4);
  v5 = a1 + 24;
  if ( !a1 )
    v5 = 40LL;
  *(_DWORD *)v5 = a2;
  if ( v4 )
    ReleaseSRWLockExclusive((PSRWLOCK)v4);
  return 0LL;
}
