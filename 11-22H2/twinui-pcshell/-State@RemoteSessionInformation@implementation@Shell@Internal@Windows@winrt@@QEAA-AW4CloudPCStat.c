/*
 * XREFs of ?State@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAA?AW4CloudPCState@3456@XZ @ 0x180733C0C
 * Callers:
 *     _lambda_501a545e3e62ea2d6f88499b5047d98e_::operator() @ 0x18027AE10 (_lambda_501a545e3e62ea2d6f88499b5047d98e_--operator().c)
 *     ?OnProcessDestroyed@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUIInspectable@Foundation@56@AEBI@Z @ 0x18027BE20 (-OnProcessDestroyed@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA.c)
 *     _lambda_1cf95a55fff0866401cd411783285d2a_::operator() @ 0x1807203FC (_lambda_1cf95a55fff0866401cd411783285d2a_--operator().c)
 *     ?OnWindowDestroyed@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUWindowId@UI@56@@Z @ 0x180722188 (-OnWindowDestroyed@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAX.c)
 *     ?ShowErrorTransitionScreen@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@Z @ 0x1807328B0 (-ShowErrorTransitionScreen@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@.c)
 *     ?HandleConnectionStateChange@ConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@W4CloudPCState@3456@@Z @ 0x180736060 (-HandleConnectionStateChange@ConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAA.c)
 *     ?ShowErrorTransitionScreen@ConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@Z @ 0x180736440 (-ShowErrorTransitionScreen@ConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::State(__int64 a1)
{
  RTL_SRWLOCK *v1; // rdi
  unsigned int v3; // ebx

  v1 = (RTL_SRWLOCK *)(a1 + 16);
  AcquireSRWLockShared((PSRWLOCK)(a1 + 16));
  v3 = *(_DWORD *)(a1 + 32);
  if ( v1 )
    ReleaseSRWLockShared(v1);
  return v3;
}
