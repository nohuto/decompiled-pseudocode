/*
 * XREFs of ?IsSwitchItemVisibleOnDesktop@?$consume_Windows_Internal_ComposableShell_Multitasking_IVirtualDesktopController@UIVirtualDesktopController@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUISwitchItem@Multitasking@ComposableShell@Internal@Windows@3@AEBUIVirtualDesktop@56783@@Z @ 0x1801BAB2C
 * Callers:
 *     _lambda_690d2e9773cc08e07279b20ff14abba4_::operator() @ 0x18028A24C (_lambda_690d2e9773cc08e07279b20ff14abba4_--operator().c)
 *     _lambda_286d0fe4c5dad9546df8d1816c162f02_::operator() @ 0x180762E68 (_lambda_286d0fe4c5dad9546df8d1816c162f02_--operator().c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
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
