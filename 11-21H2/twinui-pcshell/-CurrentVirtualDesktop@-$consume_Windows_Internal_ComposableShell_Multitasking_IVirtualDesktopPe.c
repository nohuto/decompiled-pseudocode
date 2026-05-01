/*
 * XREFs of ?CurrentVirtualDesktop@?$consume_Windows_Internal_ComposableShell_Multitasking_IVirtualDesktopPerMonitorCollection@UIVirtualDesktopPerMonitorCollection@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@3@XZ @ 0x180051C64
 * Callers:
 *     _lambda_fd92b21980b3dabee44eae3597b927cc_::operator() @ 0x18005127C (_lambda_fd92b21980b3dabee44eae3597b927cc_--operator().c)
 *     _lambda_fac63ae4a10d0c60eda94047ae860b1f_::operator() @ 0x1805F9A40 (_lambda_fac63ae4a10d0c60eda94047ae860b1f_--operator().c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_IVirtualDesktopPerMonitorCollection<winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopPerMonitorCollection>::CurrentVirtualDesktop(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  int v4; // eax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  v6 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 56LL))(v2, &v6);
  if ( v4 < 0 )
    winrt::throw_hresult((unsigned int)v4);
  *a2 = v6;
  return a2;
}
