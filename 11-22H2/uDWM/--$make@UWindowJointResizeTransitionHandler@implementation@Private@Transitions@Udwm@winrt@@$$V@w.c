/*
 * XREFs of ??$make@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@$$V@winrt@@YA?A_PXZ @ 0x180053010
 * Callers:
 *     ?Initialize@CWindowList@@QEAAJXZ @ 0x180040C6C (-Initialize@CWindowList@@QEAAJXZ.c)
 * Callees:
 *     ??0WindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAA@XZ @ 0x180053368 (--0WindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAA@XZ.c)
 *     memset_0 @ 0x18005D340 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

unsigned __int64 *__fastcall winrt::make<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler,>(
        unsigned __int64 *a1)
{
  winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler *v2; // rax
  winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler *v3; // rbx

  v2 = (winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                                                                                  WPF::g_pProcessHeap,
                                                                                                  184LL);
  v3 = v2;
  if ( v2 )
  {
    memset_0(v2, 0, 0xB8uLL);
    winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler::WindowJointResizeTransitionHandler(v3);
    *(_QWORD *)v3 = &winrt::impl::heap_implements<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler>::`vftable'{for `winrt::impl::producers_base<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler,std::tuple<winrt::Udwm::Transitions::Private::WindowJointResizeTransitionHandler,Udwm::Transitions::IBitmapManager>>'};
    *((_QWORD *)v3 + 2) = &winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler::`vftable'{for `winrt::impl::root_implements<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler,winrt::Udwm::Transitions::Private::WindowJointResizeTransitionHandler,Udwm::Transitions::IBitmapManager>'};
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = ((unsigned __int64)v3 + 8) & -(__int64)(v3 != 0LL);
  return a1;
}
