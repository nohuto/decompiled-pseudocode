/*
 * XREFs of ?get_State@?$produce@URemoteSystem@implementation@Shell@Internal@Windows@winrt@@UIRemoteSystem@3456@@impl@winrt@@UEAAHPEAH@Z @ 0x18072A480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::RemoteSystem,winrt::Windows::Internal::Shell::IRemoteSystem>::get_State(
        __int64 a1,
        _DWORD *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  int v6; // edi

  v4 = a1 + 16;
  if ( !a1 )
    v4 = 32LL;
  AcquireSRWLockShared((PSRWLOCK)v4);
  v5 = a1 + 24;
  if ( !a1 )
    v5 = 40LL;
  v6 = *(_DWORD *)v5;
  if ( v4 )
    ReleaseSRWLockShared((PSRWLOCK)v4);
  *a2 = v6;
  return 0LL;
}
