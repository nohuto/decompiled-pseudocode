/*
 * XREFs of ?Current@ProcessTracker@Shell@Internal@Windows@winrt@@SA?AU12345@XZ @ 0x18027E390
 * Callers:
 *     ??0RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV?$shared_ptr@UProviderActivator@implementation@Shell@Internal@Windows@winrt@@@std@@AEBV?$shared_ptr@UConnectionHandler@implementation@Shell@Internal@Windows@winrt@@@7@@Z @ 0x1800DA6BC (--0RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV-$shared_ptr.c)
 *     ?unsubscribe_from_services@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1801AC940 (-unsubscribe_from_services@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UEAAXPE.c)
 *     _lambda_af365597022eb112c50f104cc7bcdff6_::operator()_winrt::Windows::Internal::Shell::RemoteSystemWindowAddedEventArgs_ @ 0x18027A5F4 (_lambda_af365597022eb112c50f104cc7bcdff6_--operator()_winrt--Windows--Internal--Shell--RemoteSys.c)
 *     ?OnProcessDestroyed@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUIInspectable@Foundation@56@AEBI@Z @ 0x18027BE20 (-OnProcessDestroyed@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA.c)
 * Callees:
 *     ?Current@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@SA?AU13456@XZ @ 0x18027E3B0 (-Current@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@SA-AU13456@XZ.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::ProcessTracker::Current(__int64 a1)
{
  winrt::Windows::Internal::Shell::implementation::ProcessTracker::Current();
  return a1;
}
