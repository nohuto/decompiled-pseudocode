/*
 * XREFs of ??$make@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@$$V@winrt@@YA?AUWindowJointResizeTransitionHandler@Private@Transitions@Udwm@0@XZ @ 0x180053D30
 * Callers:
 *     ?Initialize@CWindowList@@QEAAJXZ @ 0x180053924 (-Initialize@CWindowList@@QEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall winrt::make<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler,>(
        __int64 *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx

  v2 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         48LL);
  v3 = v2;
  if ( v2 )
  {
    *(_OWORD *)v2 = 0LL;
    *(_OWORD *)(v2 + 16) = 0LL;
    *(_OWORD *)(v2 + 32) = 0LL;
    *(_QWORD *)(v2 + 16) = &winrt::impl::produce<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler,winrt::Udwm::Transitions::ITransitionHandler>::`vftable';
    _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
    *(_QWORD *)(v2 + 8) = 1LL;
    *(_QWORD *)(v2 + 24) = 0LL;
    *(_QWORD *)(v2 + 32) = 0LL;
    *(_DWORD *)(v2 + 40) = 0;
    *(_QWORD *)v2 = &winrt::impl::heap_implements<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler>::`vftable';
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = (v3 + 16) & -(__int64)(v3 != 0);
  return a1;
}
