/*
 * XREFs of ??$make@UTransitionState@implementation@Transitions@Udwm@winrt@@$$V@winrt@@YA?AUTransitionState@Transitions@Udwm@0@XZ @ 0x180044C10
 * Callers:
 *     ?PreTransitionWithNativeWindow@TransitionManager@implementation@Transitions@Udwm@winrt@@UEAAJPEAVCTopLevelWindow3D@@W4ShellTransition@345@@Z @ 0x18003F600 (-PreTransitionWithNativeWindow@TransitionManager@implementation@Transitions@Udwm@winrt@@UEAAJPEA.c)
 *     ?PreTransition@TransitionManager@implementation@Transitions@Udwm@winrt@@QEAAXW4ShellTransition@345@@Z @ 0x1800FACD8 (-PreTransition@TransitionManager@implementation@Transitions@Udwm@winrt@@QEAAXW4ShellTransition@3.c)
 * Callees:
 *     memset_0 @ 0x180060F40 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall winrt::make<winrt::Udwm::Transitions::implementation::TransitionState,>(__int64 *a1)
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
    v3[2] = &winrt::impl::produce<winrt::Udwm::Transitions::implementation::TransitionState,winrt::Udwm::Transitions::ITransitionState>::`vftable';
    *v3 = &winrt::impl::producers_base<winrt::Udwm::Transitions::implementation::TransitionState,std::tuple<winrt::Udwm::Transitions::TransitionState,Udwm::Transitions::ITransitionStateNative,Udwm::Transitions::ITransitionStateNativePrivate>>::`vftable'{for `winrt::impl::producer_convert<winrt::Udwm::Transitions::implementation::TransitionState,Udwm::Transitions::ITransitionStateNative,void>'};
    v3[1] = &winrt::impl::producers_base<winrt::Udwm::Transitions::implementation::UserResizeVisual,std::tuple<winrt::Udwm::Transitions::UserResizeVisual,Udwm::Transitions::IUserResizeVisualNative>>::`vftable';
    _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
    v3[4] = 1LL;
    v3[5] = 0LL;
    v3[6] = 0LL;
    v3[7] = 0LL;
    v3[8] = 0LL;
    v3[9] = 0LL;
    v3[10] = 0LL;
    v3[11] = 0LL;
    v3[12] = 0LL;
    v3[13] = 0LL;
    v3[14] = 0LL;
    *v3 = &winrt::Udwm::Transitions::implementation::TransitionState::`vftable'{for `winrt::impl::producer_convert<winrt::Udwm::Transitions::implementation::TransitionState,Udwm::Transitions::ITransitionStateNative,void>'};
    v3[1] = &winrt::Udwm::Transitions::implementation::TransitionState::`vftable'{for `winrt::impl::producer_convert<winrt::Udwm::Transitions::implementation::TransitionState,Udwm::Transitions::ITransitionStateNativePrivate,void>'};
    v3[3] = &winrt::impl::heap_implements<winrt::Udwm::Transitions::implementation::TransitionState>::`vftable';
    *((_BYTE *)v3 + 120) = 0;
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = (unsigned __int64)(v3 + 2) & -(__int64)(v3 != 0LL);
  return a1;
}
