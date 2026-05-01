/*
 * XREFs of ?IsDisconnecting@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAAX_N@Z @ 0x1807339B8
 * Callers:
 *     _lambda_501a545e3e62ea2d6f88499b5047d98e_::operator() @ 0x18027AE10 (_lambda_501a545e3e62ea2d6f88499b5047d98e_--operator().c)
 *     ?DeactivateRemoteDesktop@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUguid@6@@Z @ 0x180721258 (-DeactivateRemoteDesktop@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@.c)
 * Callees:
 *     <none>
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::IsDisconnecting(
        RTL_SRWLOCK *this,
        char a2)
{
  RTL_SRWLOCK *v2; // rsi

  v2 = this + 3;
  AcquireSRWLockExclusive(this + 3);
  LOBYTE(this[20].Ptr) = a2;
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
