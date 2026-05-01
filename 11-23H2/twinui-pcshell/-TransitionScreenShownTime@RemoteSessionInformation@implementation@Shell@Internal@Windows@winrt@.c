/*
 * XREFs of ?TransitionScreenShownTime@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAA?AV?$time_point@Uclock@winrt@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@chrono@std@@XZ @ 0x180733D8C
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection$_ResumeCoro$1 @ 0x1802829E0 (winrt--Windows--Internal--Shell--implementation--SwitchConnectionHandler--CloseClou_ea_1802829E0.c)
 * Callees:
 *     <none>
 */

PVOID *__fastcall winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::TransitionScreenShownTime(
        RTL_SRWLOCK *a1,
        PVOID *a2)
{
  RTL_SRWLOCK *v2; // rdi

  v2 = a1 + 2;
  AcquireSRWLockShared(a1 + 2);
  *a2 = a1[5].Ptr;
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return a2;
}
