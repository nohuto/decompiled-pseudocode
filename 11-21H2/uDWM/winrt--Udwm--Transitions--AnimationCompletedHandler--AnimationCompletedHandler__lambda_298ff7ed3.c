/*
 * XREFs of winrt::Udwm::Transitions::AnimationCompletedHandler::AnimationCompletedHandler__lambda_298ff7ed3f48e3f8f0577bc4e02d17e0___ @ 0x180008280
 * Callers:
 *     ?PostTransition@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x18003EF80 (-PostTransition@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winr.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x180006224 (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall winrt::Udwm::Transitions::AnimationCompletedHandler::AnimationCompletedHandler__lambda_298ff7ed3f48e3f8f0577bc4e02d17e0___(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx

  v4 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         24LL);
  if ( v4 )
  {
    v5 = *a2;
    *a2 = 0LL;
    *(_QWORD *)(v4 + 8) = v5;
    _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
    *(_DWORD *)(v4 + 16) = 1;
    *(_QWORD *)v4 = off_18010C740;
  }
  *a1 = v4;
  if ( *a2 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(a2);
  return a1;
}
