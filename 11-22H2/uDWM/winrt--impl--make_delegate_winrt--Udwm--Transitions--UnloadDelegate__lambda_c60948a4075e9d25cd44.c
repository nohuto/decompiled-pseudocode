/*
 * XREFs of winrt::impl::make_delegate_winrt::Udwm::Transitions::UnloadDelegate__lambda_c60948a4075e9d25cd4406f3dd63722d___ @ 0x1800F8EBC
 * Callers:
 *     ?PostTransition@WindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800F9908 (-PostTransition@WindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall winrt::impl::make_delegate_winrt::Udwm::Transitions::UnloadDelegate__lambda_c60948a4075e9d25cd4406f3dd63722d___(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 *result; // rax

  v4 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         32LL);
  v5 = v4;
  if ( v4 )
  {
    v6 = *a2;
    *a2 = 0LL;
    *(_QWORD *)(v4 + 8) = v6;
    v7 = a2[1];
    *(_QWORD *)(v4 + 16) = v7;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
    *(_DWORD *)(v5 + 24) = 1;
    *(_QWORD *)v5 = off_1801155F0;
  }
  else
  {
    v5 = 0LL;
  }
  result = a1;
  *a1 = v5;
  return result;
}
