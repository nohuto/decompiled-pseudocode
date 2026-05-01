/*
 * XREFs of ?revoke@?$event_revoker@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@@winrt@@QEAAXXZ @ 0x18000ABE0
 * Callers:
 *     ?Show@CActionCenterExperienceManager@@AEAAJXZ @ 0x18000AC38 (-Show@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ??1?$event_revoker@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@@winrt@@QEAA@XZ @ 0x18034CAE8 (--1-$event_revoker@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@@winrt@@QEAA@XZ.c)
 *     ??1CActionCenterExperienceManager@@UEAA@XZ @ 0x18034D03C (--1CActionCenterExperienceManager@@UEAA@XZ.c)
 * Callees:
 *     ??4?$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1800F4980 (--4-$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800F70DC (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall winrt::event_revoker<winrt::WindowsUdk::UI::Shell::IViewCoordinator>::revoke(__int64 *a1)
{
  __int64 v2; // rbx
  __int64 v3; // [rsp+40h] [rbp+20h] BYREF
  __int64 v4; // [rsp+48h] [rbp+28h] BYREF
  __int64 v5; // [rsp+50h] [rbp+30h] BYREF

  v3 = 0LL;
  v2 = *a1;
  *a1 = 0LL;
  v5 = v2;
  winrt::com_ptr<winrt::impl::IWeakReference>::operator=(a1, &v3);
  v4 = 0LL;
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64, void *, __int64 *))(*(_QWORD *)v2 + 24LL))(
      v2,
      &winrt::impl::guid_v<winrt::WindowsUdk::UI::Shell::IViewCoordinator>,
      &v4);
    v2 = v4;
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v5);
  }
  if ( v3 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v3);
  if ( v2 )
  {
    ((void (__fastcall *)(__int64, __int64))a1[1])(v2, a1[2]);
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v4);
  }
}
