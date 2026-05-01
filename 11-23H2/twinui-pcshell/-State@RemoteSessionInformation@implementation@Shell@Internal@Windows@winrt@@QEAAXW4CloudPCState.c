/*
 * XREFs of ?State@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAAXW4CloudPCState@3456@@Z @ 0x180733C58
 * Callers:
 *     ?HandleConnectionStateChange@ConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@W4CloudPCState@3456@@Z @ 0x180736060 (-HandleConnectionStateChange@ConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAA.c)
 * Callees:
 *     <none>
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::State(__int64 a1, int a2)
{
  RTL_SRWLOCK *v2; // rsi

  v2 = (RTL_SRWLOCK *)(a1 + 16);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 16));
  *(_DWORD *)(a1 + 32) = a2;
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
