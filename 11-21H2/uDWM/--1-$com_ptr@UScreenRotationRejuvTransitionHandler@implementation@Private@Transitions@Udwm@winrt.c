/*
 * XREFs of ??1?$com_ptr@UScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@@winrt@@QEAA@XZ @ 0x1800F33A8
 * Callers:
 *     _winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler::CreateTimeline_::_1_::dtor$0 @ 0x1800F3F26 (_winrt--Udwm--Transitions--Private--implementation--ScreenRotationRejuvTransitionHandler--Create.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@U?$map_impl@Uhstring@winrt@@NV?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800F6D68 (-unconditional_release_ref@-$com_ptr@U-$map_impl@Uhstring@winrt@@NV-$map@Uhstring@winrt@@NU-$les.c)
 */

__int64 __fastcall winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler>::~com_ptr<winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<winrt::impl::map_impl<winrt::hstring,double,std::map<winrt::hstring,double>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref();
  return result;
}
