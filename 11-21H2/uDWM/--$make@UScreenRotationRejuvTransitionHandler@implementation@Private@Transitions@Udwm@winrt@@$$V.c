/*
 * XREFs of ??$make@UScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@$$V@winrt@@YA?AUScreenRotationRejuvTransitionHandler@Private@Transitions@Udwm@0@XZ @ 0x180053B04
 * Callers:
 *     ?Initialize@CWindowList@@QEAAJXZ @ 0x180053924 (-Initialize@CWindowList@@QEAAJXZ.c)
 * Callees:
 *     ??0ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAA@XZ @ 0x180053BA0 (--0ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAA@XZ.c)
 *     memset_0 @ 0x180060F40 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
unsigned __int64 *__fastcall winrt::make<winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler,>(
        unsigned __int64 *a1)
{
  winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler *v2; // rax
  winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler *v3; // rbx

  v2 = (winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                                                                                    WPF::g_pProcessHeap,
                                                                                                    168LL);
  v3 = v2;
  if ( v2 )
  {
    memset_0(v2, 0, 0xA8uLL);
    winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler::ScreenRotationRejuvTransitionHandler(v3);
    *(_QWORD *)v3 = &winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler::`vftable'{for `winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler_base<winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler,>'};
    *((_QWORD *)v3 + 4) = &winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler::`vftable'{for `IAnimationListener'};
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = ((unsigned __int64)v3 + 16) & -(__int64)(v3 != 0LL);
  return a1;
}
