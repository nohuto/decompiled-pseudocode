/*
 * XREFs of ?remove_ProcessDestroyed@?$produce@UProcessTracker@implementation@Shell@Internal@Windows@winrt@@UIProcessTracker@3456@@impl@winrt@@UEAAHUevent_token@3@@Z @ 0x18027F160
 * Callers:
 *     <none>
 * Callees:
 *     ?remove@?$event@U?$EventHandler@I@Foundation@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x18027EFA4 (-remove@-$event@U-$EventHandler@I@Foundation@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::ProcessTracker,winrt::Windows::Internal::Shell::IProcessTracker>::remove_ProcessDestroyed(
        __int64 a1,
        void *a2)
{
  __int64 v3; // rcx

  v3 = a1 + 80;
  if ( !a1 )
    v3 = 96LL;
  winrt::event<winrt::Windows::Foundation::EventHandler<unsigned int>>::remove(v3, a2);
  return 0LL;
}
