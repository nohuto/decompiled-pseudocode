/*
 * XREFs of ??$get_weak@USnapMigrationHandler@@@?$root_implements@USnapMigrationHandler@@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@IEAA?AU?$weak_ref@USnapMigrationHandler@@@2@XZ @ 0x18012B168
 * Callers:
 *     ??0SnapMigrationHandler@@QEAA@PEAUIWindowManagementEvents@@@Z @ 0x18012AEB0 (--0SnapMigrationHandler@@QEAA@PEAUIWindowManagementEvents@@@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?make_weak_ref@?$root_implements@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@U13456@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x1801113CC (-make_weak_ref@-$root_implements@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@U1.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall winrt::impl::root_implements<SnapMigrationHandler,winrt::Windows::Foundation::IInspectable>::get_weak<SnapMigrationHandler>(
        volatile signed __int64 *a1,
        _QWORD *a2)
{
  void *weak_ref; // rax
  int v4; // eax
  _QWORD pExceptionObject[4]; // [rsp+28h] [rbp-20h] BYREF
  void *v7; // [rsp+60h] [rbp+18h] BYREF

  weak_ref = winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::WindowsTracker,winrt::Windows::Internal::Shell::WindowsTracker>::make_weak_ref(a1);
  if ( !weak_ref )
  {
    pExceptionObject[2] = 0LL;
    pExceptionObject[1] = "bad allocation";
    pExceptionObject[0] = &std::bad_alloc::`vftable';
    throw (std::bad_alloc *)pExceptionObject;
  }
  v7 = weak_ref;
  *a2 = 0LL;
  v4 = (*(__int64 (__fastcall **)(void *, _QWORD *))(*(_QWORD *)weak_ref + 24LL))(weak_ref, a2);
  if ( v4 < 0 )
    winrt::throw_hresult((unsigned int)v4);
  winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref((__int64 *)&v7);
  return a2;
}
