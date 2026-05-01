/*
 * XREFs of ?SetTransitionScreenDismissedCallback@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBV?$function@$$A6AXXZ@std@@@Z @ 0x180733B98
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection$_ResumeCoro$1 @ 0x1802829E0 (winrt--Windows--Internal--Shell--implementation--SwitchConnectionHandler--CloseClou_ea_1802829E0.c)
 * Callees:
 *     ??4?$function@$$A6AXXZ@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800A1B00 (--4-$function@$$A6AXXZ@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::SetTransitionScreenDismissedCallback(
        RTL_SRWLOCK *a1,
        __int64 a2)
{
  RTL_SRWLOCK *v4; // rsi

  v4 = a1 + 2;
  AcquireSRWLockExclusive(a1 + 2);
  std::function<void (void)>::operator=((__int64)&a1[7], a2);
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
}
