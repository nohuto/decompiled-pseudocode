/*
 * XREFs of ?UpdateFloatProperties@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXAEBU?$IMap@Uhstring@winrt@@N@Collections@Foundation@Windows@6@@Z @ 0x1800F5B80
 * Callers:
 *     ?UpdateFloatProperties@?$produce@UScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UITransitionHandler@456@@impl@winrt@@UEAAHPEAX@Z @ 0x1800F5B20 (-UpdateFloatProperties@-$produce@UScreenRotationRejuvTransitionHandler@implementation@Private@Tr.c)
 * Callees:
 *     ?HasKey@?$consume_Windows_Foundation_Collections_IMap@U?$IMap@Uhstring@winrt@@N@Collections@Foundation@Windows@winrt@@Uhstring@5@N@impl@winrt@@QEBA_NAEBUhstring@param@3@@Z @ 0x1800F41CC (-HasKey@-$consume_Windows_Foundation_Collections_IMap@U-$IMap@Uhstring@winrt@@N@Collections@Foun.c)
 *     ?Lookup@?$consume_Windows_Foundation_Collections_IMap@U?$IMap@Uhstring@winrt@@N@Collections@Foundation@Windows@winrt@@Uhstring@5@N@impl@winrt@@QEBANAEBUhstring@param@3@@Z @ 0x1800F4258 (-Lookup@-$consume_Windows_Foundation_Collections_IMap@U-$IMap@Uhstring@winrt@@N@Collections@Foun.c)
 *     ?SkipAnimationDelay@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F4C08 (-SkipAnimationDelay@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm.c)
 *     ?UpdateAngle@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXHH@Z @ 0x1800F56FC (-UpdateAngle@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@.c)
 */

void __fastcall winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler::UpdateFloatProperties(
        winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler *this,
        __int64 *a2)
{
  _QWORD v4[5]; // [rsp+20h] [rbp-28h] BYREF

  v4[0] = qword_180143140;
  if ( winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IMap<winrt::hstring,double>,winrt::hstring,double>::HasKey(
         a2,
         v4) )
  {
    winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler::SkipAnimationDelay(this);
  }
  else
  {
    v4[0] = qword_180143148;
    if ( winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IMap<winrt::hstring,double>,winrt::hstring,double>::HasKey(
           a2,
           v4) )
    {
      v4[0] = qword_180143150;
      if ( winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IMap<winrt::hstring,double>,winrt::hstring,double>::HasKey(
             a2,
             v4) )
      {
        v4[0] = qword_180143148;
        winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IMap<winrt::hstring,double>,winrt::hstring,double>::Lookup(
          a2,
          v4);
        v4[0] = qword_180143150;
        winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IMap<winrt::hstring,double>,winrt::hstring,double>::Lookup(
          a2,
          v4);
        winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler::UpdateAngle(this);
      }
    }
  }
}
