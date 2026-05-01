/*
 * XREFs of ?get_weak@?$implements@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@U13456@@winrt@@QEAA?AU?$weak_ref@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@@2@XZ @ 0x1800DAC84
 * Callers:
 *     ??0RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV?$shared_ptr@UProviderActivator@implementation@Shell@Internal@Windows@winrt@@@std@@AEBV?$shared_ptr@UConnectionHandler@implementation@Shell@Internal@Windows@winrt@@@7@@Z @ 0x1800DA6BC (--0RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV-$shared_ptr.c)
 * Callees:
 *     ??$get_weak@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@@?$root_implements@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@U13456@@impl@winrt@@IEAA?AU?$weak_ref@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@@2@XZ @ 0x1800DACA4 (--$get_weak@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@@-$root_imp.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager,winrt::Windows::Internal::Shell::RemoteSessionWindowManager>::get_weak(
        __int64 a1,
        __int64 a2)
{
  winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager,winrt::Windows::Internal::Shell::RemoteSessionWindowManager>::get_weak<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager>();
  return a2;
}
