/*
 * XREFs of ??$make@UWindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@$$V@winrt@@YA?AUWindowMaximizeSnapTransitionHandler@Private@Transitions@Udwm@0@XZ @ 0x180053C64
 * Callers:
 *     ?Initialize@CWindowList@@QEAAJXZ @ 0x180053924 (-Initialize@CWindowList@@QEAAJXZ.c)
 * Callees:
 *     memset_0 @ 0x180060F40 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall winrt::make<winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler,>(
        __int64 *a1)
{
  char *v2; // rax
  char *v3; // rbx

  v2 = (char *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                 WPF::g_pProcessHeap,
                 112LL);
  v3 = v2;
  if ( v2 )
  {
    memset_0(v2, 0, 0x70uLL);
    *((_QWORD *)v3 + 2) = &winrt::impl::produce<winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler,winrt::Udwm::Transitions::ITransitionHandler>::`vftable';
    _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
    *((_QWORD *)v3 + 1) = 1LL;
    *((_QWORD *)v3 + 3) = 0LL;
    *((_QWORD *)v3 + 4) = 0LL;
    *((_QWORD *)v3 + 5) = 0LL;
    *((_QWORD *)v3 + 7) = 0LL;
    *((_QWORD *)v3 + 8) = 0LL;
    v3[72] = 0;
    *(_OWORD *)(v3 + 76) = 0LL;
    *((_QWORD *)v3 + 12) = 0LL;
    *((_QWORD *)v3 + 13) = 0LL;
    *(_QWORD *)v3 = &winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler::`vftable';
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = (unsigned __int64)(v3 + 16) & -(__int64)(v3 != 0LL);
  return a1;
}
