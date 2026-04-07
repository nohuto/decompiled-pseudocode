/*
 * XREFs of ??$make@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAPEAVCTopLevelWindow3D@@_N@winrt@@YA?AUUserResizeVisual@Transitions@Udwm@0@AEAPEAVCTopLevelWindow3D@@$$QEA_N@Z @ 0x1800FC934
 * Callers:
 *     ?TransferJointResizeVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA?AU?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@5@XZ @ 0x1800FE244 (-TransferJointResizeVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA-AU-$IVec.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAA@PEAVCTopLevelWindow3D@@_N@Z @ 0x1800FF584 (--0UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAA@PEAVCTopLevelWindow3D@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
unsigned __int64 *__fastcall winrt::make<winrt::Udwm::Transitions::implementation::UserResizeVisual,CTopLevelWindow3D * &,bool>(
        unsigned __int64 *a1,
        struct CTopLevelWindow3D **a2,
        bool *a3)
{
  winrt::Udwm::Transitions::implementation::UserResizeVisual *v6; // rax
  winrt::Udwm::Transitions::implementation::UserResizeVisual *v7; // rbx

  v6 = (winrt::Udwm::Transitions::implementation::UserResizeVisual *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                                                       WPF::g_pProcessHeap,
                                                                       136LL);
  v7 = v6;
  if ( v6 )
  {
    winrt::Udwm::Transitions::implementation::UserResizeVisual::UserResizeVisual(v6, *a2, *a3);
    *(_QWORD *)v7 = &winrt::impl::heap_implements<winrt::Udwm::Transitions::implementation::UserResizeVisual>::`vftable'{for `winrt::impl::producers_base<winrt::Udwm::Transitions::implementation::UserResizeVisual,std::tuple<winrt::Udwm::Transitions::UserResizeVisual,Udwm::Transitions::IUserResizeVisualNative>>'};
    *((_QWORD *)v7 + 2) = &winrt::impl::heap_implements<winrt::Udwm::Transitions::implementation::UserResizeVisual>::`vftable'{for `winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::UserResizeVisual,winrt::Udwm::Transitions::UserResizeVisual,Udwm::Transitions::IUserResizeVisualNative>'};
  }
  else
  {
    v7 = 0LL;
  }
  *a1 = ((unsigned __int64)v7 + 8) & -(__int64)(v7 != 0LL);
  return a1;
}
