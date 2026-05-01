/*
 * XREFs of ?IsTransitionScreenShown@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x180733ABC
 * Callers:
 *     ?ShowPhysicalDeviceAccessTransitionScreen@BootPhysicalDeviceAccessState@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@Z @ 0x1802813F4 (-ShowPhysicalDeviceAccessTransitionScreen@BootPhysicalDeviceAccessState@implementation@Shell@Int.c)
 *     winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection$_ResumeCoro$1 @ 0x1802829E0 (winrt--Windows--Internal--Shell--implementation--SwitchConnectionHandler--CloseClou_ea_1802829E0.c)
 *     _lambda_1cf95a55fff0866401cd411783285d2a_::operator() @ 0x1807203FC (_lambda_1cf95a55fff0866401cd411783285d2a_--operator().c)
 *     ?OnWindowDestroyed@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUWindowId@UI@56@@Z @ 0x180722188 (-OnWindowDestroyed@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAX.c)
 *     ?ShowTransitionScreen@SwitchConnectingState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@AEBUhstring@6@AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@8@@Z @ 0x180732AE0 (-ShowTransitionScreen@SwitchConnectingState@implementation@Shell@Internal@Windows@winrt@@UEAAXAE.c)
 *     ?DismissTransitionScreen@ConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@IEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@AEBW4DismissalReason@TransitionScreen@CloudDesktop@3456@@Z @ 0x180735D40 (-DismissTransitionScreen@ConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@IEAAXA.c)
 *     ?ShowTransitionScreen@ConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@MEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@AEBUhstring@6@AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@8@@Z @ 0x180736970 (-ShowTransitionScreen@ConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@MEAAXAEBV.c)
 * Callees:
 *     <none>
 */

char __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::IsTransitionScreenShown(
        RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rdi
  char v3; // bl

  v1 = this + 2;
  AcquireSRWLockShared(this + 2);
  v3 = BYTE4(this[15].Ptr);
  if ( v1 )
    ReleaseSRWLockShared(v1);
  return v3;
}
