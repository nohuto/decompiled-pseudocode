/*
 * XREFs of ??$make@UScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@$$V@winrt@@YA?A_PXZ @ 0x180053168
 * Callers:
 *     ?Initialize@CWindowList@@QEAAJXZ @ 0x180040C6C (-Initialize@CWindowList@@QEAAJXZ.c)
 * Callees:
 *     memset_0 @ 0x18005D340 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall winrt::make<winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler,>(
        __int64 *a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx

  v2 = (_QWORD *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                   WPF::g_pProcessHeap,
                   128LL);
  v3 = v2;
  if ( v2 )
  {
    memset_0(v2, 0, 0x80uLL);
    v3[2] = &winrt::impl::produce<winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler,winrt::Udwm::Transitions::ITransitionHandler>::`vftable';
    v3[3] = &winrt::impl::produce<winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler,winrt::Udwm::Transitions::Private::IScreenRotationResponsiveTransitionHandler>::`vftable';
    _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
    v3[1] = 1LL;
    v3[5] = 0LL;
    v3[6] = 0LL;
    v3[7] = 0LL;
    v3[8] = 0LL;
    *((_DWORD *)v3 + 18) = -1;
    *((_DWORD *)v3 + 19) = -1;
    *((_WORD *)v3 + 40) = 0;
    *((_BYTE *)v3 + 82) = 0;
    *((_DWORD *)v3 + 21) = 0;
    v3[11] = 0LL;
    v3[12] = 0LL;
    v3[13] = 0LL;
    v3[14] = 0LL;
    *v3 = &winrt::impl::heap_implements<winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler>::`vftable'{for `winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler_base<winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler,>'};
    v3[4] = &winrt::impl::heap_implements<winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler>::`vftable'{for `IAnimationListener'};
    *((_DWORD *)v3 + 30) = 0;
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = (unsigned __int64)(v3 + 2) & -(__int64)(v3 != 0LL);
  return a1;
}
