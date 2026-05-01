/*
 * XREFs of ?Current@WindowsTracker@implementation@Shell@Internal@Windows@winrt@@SA?AU13456@XZ @ 0x1800B1FEC
 * Callers:
 *     ??0RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV?$shared_ptr@UProviderActivator@implementation@Shell@Internal@Windows@winrt@@@std@@AEBV?$shared_ptr@UConnectionHandler@implementation@Shell@Internal@Windows@winrt@@@7@@Z @ 0x1800DA6BC (--0RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV-$shared_ptr.c)
 *     ?unsubscribe_from_services@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1801AC940 (-unsubscribe_from_services@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UEAAXPE.c)
 *     ?Current@WindowsTracker@Shell@Internal@Windows@winrt@@SA?AU12345@XZ @ 0x1807257BC (-Current@WindowsTracker@Shell@Internal@Windows@winrt@@SA-AU12345@XZ.c)
 *     ?WinEventProc@WindowsTracker@implementation@Shell@Internal@Windows@winrt@@SAXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@Z @ 0x180725A70 (-WinEventProc@WindowsTracker@implementation@Shell@Internal@Windows@winrt@@SAXPEAUHWINEVENTHOOK__.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@@winrt@@AEAAXXZ @ 0x1800B1AC0 (-unconditional_release_ref@-$com_ptr@USearchAppActivatedEventArgs@implementation@Shell@UI@Window.c)
 *     ??$make_factory@UWindowsTracker@factory_implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@YA?AUIActivationFactory@Foundation@Windows@1@XZ @ 0x1800B2388 (--$make_factory@UWindowsTracker@factory_implementation@Shell@Internal@Windows@winrt@@@impl@winrt.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 */

volatile __int64 *__fastcall winrt::Windows::Internal::Shell::implementation::WindowsTracker::Current(
        volatile __int64 *a1)
{
  volatile __int64 *v2; // rbx
  volatile __int64 *v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = a1;
  v2 = 0LL;
  winrt::impl::make_factory<winrt::Windows::Internal::Shell::factory_implementation::WindowsTracker>(&v4);
  if ( v4 )
    v2 = v4 - 2;
  *a1 = *((_QWORD *)v2 + 4);
  v4 = v2;
  winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)a1);
  winrt::com_ptr<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs>::unconditional_release_ref(&v4);
  return a1;
}
