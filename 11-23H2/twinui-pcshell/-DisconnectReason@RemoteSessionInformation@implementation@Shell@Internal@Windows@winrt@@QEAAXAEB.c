/*
 * XREFs of ?DisconnectReason@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBW4DisconnectSource@23456@@Z @ 0x180733960
 * Callers:
 *     ?DeactivateRemoteDesktop@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUguid@6@@Z @ 0x180721258 (-DeactivateRemoteDesktop@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@.c)
 *     ?DisconnectAllRemoteSessions@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180721540 (-DisconnectAllRemoteSessions@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@wi.c)
 * Callees:
 *     <none>
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::DisconnectReason(
        RTL_SRWLOCK *this,
        const enum winrt::Windows::Internal::Shell::implementation::DisconnectSource *a2)
{
  RTL_SRWLOCK *v2; // rsi

  v2 = this + 2;
  AcquireSRWLockExclusive(this + 2);
  LODWORD(this[6].Ptr) = *(_DWORD *)a2;
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
