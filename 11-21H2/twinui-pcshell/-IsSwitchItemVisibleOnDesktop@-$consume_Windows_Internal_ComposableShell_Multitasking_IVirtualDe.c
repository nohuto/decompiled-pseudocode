/*
 * XREFs of ?IsSwitchItemVisibleOnDesktop@?$consume_Windows_Internal_ComposableShell_Multitasking_IVirtualDesktopController@UIVirtualDesktopController@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA_NAEBUISwitchItem@Multitasking@ComposableShell@Internal@Windows@3@AEBUIVirtualDesktop@56783@@Z @ 0x180051C18
 * Callers:
 *     _lambda_fd92b21980b3dabee44eae3597b927cc_::operator() @ 0x18005127C (_lambda_fd92b21980b3dabee44eae3597b927cc_--operator().c)
 *     _lambda_fac63ae4a10d0c60eda94047ae860b1f_::operator() @ 0x1805F9A40 (_lambda_fac63ae4a10d0c60eda94047ae860b1f_--operator().c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

char __fastcall winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_IVirtualDesktopController<winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController>::IsSwitchItemVisibleOnDesktop(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v3; // rcx
  int v4; // eax
  char v6; // [rsp+40h] [rbp+8h] BYREF

  v3 = *a1;
  v6 = 0;
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, char *))(*(_QWORD *)v3 + 80LL))(v3, *a2, *a3, &v6);
  if ( v4 < 0 )
    winrt::throw_hresult((unsigned int)v4);
  return v6;
}
