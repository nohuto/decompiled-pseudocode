/*
 * XREFs of ?DisconnectReason@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAA?AW4DisconnectSource@23456@XZ @ 0x180733914
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection$_ResumeCoro$1 @ 0x1802829E0 (winrt--Windows--Internal--Shell--implementation--SwitchConnectionHandler--CloseClou_ea_1802829E0.c)
 *     ?ShowDisconnectingScreen@SwitchDisconnectedState@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@Z @ 0x180732704 (-ShowDisconnectingScreen@SwitchDisconnectedState@implementation@Shell@Internal@Windows@winrt@@AE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::DisconnectReason(
        __int64 a1)
{
  RTL_SRWLOCK *v1; // rdi
  unsigned int v3; // ebx

  v1 = (RTL_SRWLOCK *)(a1 + 16);
  AcquireSRWLockShared((PSRWLOCK)(a1 + 16));
  v3 = *(_DWORD *)(a1 + 48);
  if ( v1 )
    ReleaseSRWLockShared(v1);
  return v3;
}
