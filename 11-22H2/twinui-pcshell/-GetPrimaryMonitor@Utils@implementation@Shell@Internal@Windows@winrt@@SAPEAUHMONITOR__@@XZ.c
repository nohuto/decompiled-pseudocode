/*
 * XREFs of ?GetPrimaryMonitor@Utils@implementation@Shell@Internal@Windows@winrt@@SAPEAUHMONITOR__@@XZ @ 0x18072DB6C
 * Callers:
 *     ?ShowErrorTransitionScreen@ConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@Z @ 0x180736440 (-ShowErrorTransitionScreen@ConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXA.c)
 * Callees:
 *     <none>
 */

HMONITOR winrt::Windows::Internal::Shell::implementation::Utils::GetPrimaryMonitor(void)
{
  return MonitorFromPoint(0LL, 1u);
}
