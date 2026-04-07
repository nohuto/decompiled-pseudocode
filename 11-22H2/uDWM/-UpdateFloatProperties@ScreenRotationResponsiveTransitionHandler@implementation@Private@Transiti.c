/*
 * XREFs of ?UpdateFloatProperties@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXAEBU?$IMap@Uhstring@winrt@@N@Collections@Foundation@Windows@6@@Z @ 0x1800F6A70
 * Callers:
 *     ?UpdateFloatProperties@?$produce@UScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UITransitionHandler@456@@impl@winrt@@UEAAHPEAX@Z @ 0x1800F6A10 (-UpdateFloatProperties@-$produce@UScreenRotationResponsiveTransitionHandler@implementation@Priva.c)
 * Callees:
 *     ?HasKey@?$consume_Windows_Foundation_Collections_IMap@U?$IMap@Uhstring@winrt@@N@Collections@Foundation@Windows@winrt@@Uhstring@5@N@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1800F1C90 (-HasKey@-$consume_Windows_Foundation_Collections_IMap@U-$IMap@Uhstring@winrt@@N@Collections@Foun.c)
 *     ?Lookup@?$consume_Windows_Foundation_Collections_IMap@U?$IMap@Uhstring@winrt@@N@Collections@Foundation@Windows@winrt@@Uhstring@5@N@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1800F1CD8 (-Lookup@-$consume_Windows_Foundation_Collections_IMap@U-$IMap@Uhstring@winrt@@N@Collections@Foun.c)
 *     ?UpdateAngle@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXHH@Z @ 0x1800F68E8 (-UpdateAngle@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@w.c)
 */

void __fastcall winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler::UpdateFloatProperties(
        CVisual **this,
        __int64 *a2)
{
  double v4; // xmm0_8
  int v5; // ebx
  int v6; // r8d
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF

  v7[0] = qword_180148860;
  if ( winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IMap<winrt::hstring,double>,winrt::hstring,double>::HasKey(
         a2,
         v7) )
  {
    v7[0] = qword_180148868;
    if ( winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IMap<winrt::hstring,double>,winrt::hstring,double>::HasKey(
           a2,
           v7) )
    {
      v7[0] = qword_180148860;
      v4 = winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IMap<winrt::hstring,double>,winrt::hstring,double>::Lookup(
             a2,
             v7);
      v7[0] = qword_180148868;
      v5 = (int)v4;
      winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IMap<winrt::hstring,double>,winrt::hstring,double>::Lookup(
        a2,
        v7);
      winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler::UpdateAngle(
        this,
        v5,
        v6);
    }
  }
}
