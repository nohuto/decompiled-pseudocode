/*
 * XREFs of ?DisconnectAllRemoteSessions@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180721540
 * Callers:
 *     ?IsImmersiveModeSupported@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAX_N@Z @ 0x180721DF8 (-IsImmersiveModeSupported@RemoteSessionWindowManager@implementation@Shell@Internal@_ea_180721DF8.c)
 * Callees:
 *     ?DisconnectProvider@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SAXAEBUhstring@6@@Z @ 0x1807110E8 (-DisconnectProvider@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SAXAEBUhs.c)
 *     ?DisconnectReason@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBW4DisconnectSource@23456@@Z @ 0x180733960 (-DisconnectReason@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAAXAEB.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::DisconnectAllRemoteSessions(
        RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rbp
  __int64 **Ptr; // rdi
  __int64 **i; // rbx
  int v5; // [rsp+40h] [rbp+8h] BYREF
  RTL_SRWLOCK *v6; // [rsp+48h] [rbp+10h]

  v2 = this + 7;
  AcquireSRWLockShared(this + 7);
  v6 = v2;
  Ptr = (__int64 **)this[10].Ptr;
  for ( i = (__int64 **)*Ptr; i != Ptr; i = (__int64 **)*i )
  {
    v5 = 1;
    winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::DisconnectReason(
      (winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation *)i[3],
      (const enum winrt::Windows::Internal::Shell::implementation::DisconnectSource *)&v5);
    winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::DisconnectProvider((const struct winrt::hstring *)(i + 2));
  }
  if ( v2 )
    ReleaseSRWLockShared(v2);
}
