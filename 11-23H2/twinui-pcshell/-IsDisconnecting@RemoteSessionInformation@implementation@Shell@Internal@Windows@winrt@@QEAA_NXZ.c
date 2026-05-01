/*
 * XREFs of ?IsDisconnecting@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x180733A14
 * Callers:
 *     ?IsDisconnecting@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUguid@6@@Z @ 0x180721D50 (-IsDisconnecting@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NA.c)
 * Callees:
 *     <none>
 */

char __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::IsDisconnecting(
        RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rdi
  char Ptr; // bl

  v1 = this + 3;
  AcquireSRWLockShared(this + 3);
  Ptr = (char)this[20].Ptr;
  if ( v1 )
    ReleaseSRWLockShared(v1);
  return Ptr;
}
