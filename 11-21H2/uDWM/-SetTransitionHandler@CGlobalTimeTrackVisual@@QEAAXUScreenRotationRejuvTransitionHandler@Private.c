/*
 * XREFs of ?SetTransitionHandler@CGlobalTimeTrackVisual@@QEAAXUScreenRotationRejuvTransitionHandler@Private@Transitions@Udwm@winrt@@@Z @ 0x1801002B4
 * Callers:
 *     ?CreateTimeline@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXAEBW4RejuvRotationTimelineReason@23456@@Z @ 0x1800F3D88 (-CreateTimeline@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@win.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x180006224 (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x180040BB0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??$make_weak@UScreenRotationRejuvTransitionHandler@Private@Transitions@Udwm@winrt@@@winrt@@YA?AU?$weak_ref@UScreenRotationRejuvTransitionHandler@Private@Transitions@Udwm@winrt@@@0@AEBUScreenRotationRejuvTransitionHandler@Private@Transitions@Udwm@0@@Z @ 0x180063314 (--$make_weak@UScreenRotationRejuvTransitionHandler@Private@Transitions@Udwm@winrt@@@winrt@@YA-AU.c)
 *     ??4?$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1800D20F4 (--4-$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CGlobalTimeTrackVisual::SetTransitionHandler(__int64 a1, winrt::Windows::Foundation::IUnknown *a2)
{
  __int64 *v4; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  winrt::Windows::Foundation::IUnknown *v6; // [rsp+38h] [rbp+10h]

  v6 = a2;
  v4 = winrt::make_weak<winrt::Udwm::Transitions::Private::ScreenRotationRejuvTransitionHandler>(
         &v5,
         (void (__fastcall ****)(_QWORD, __int64 *, __int64 *))a2);
  winrt::com_ptr<winrt::impl::IWeakReference>::operator=((__int64 *)(a1 + 288), v4);
  if ( v5 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v5);
  if ( *(_QWORD *)a2 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(a2);
}
