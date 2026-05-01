/*
 * XREFs of ?revoke@?$event_revoker@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@@winrt@@QEAAXXZ @ 0x1800659EC
 * Callers:
 *     ?Show@CActionCenterExperienceManager@@AEAAJXZ @ 0x1800178C0 (-Show@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ??1?$event_revoker@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@@winrt@@QEAA@XZ @ 0x180416CB0 (--1-$event_revoker@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@@winrt@@QEAA@XZ.c)
 *     ??1CActionCenterExperienceManager@@UEAA@XZ @ 0x1804172CC (--1CActionCenterExperienceManager@@UEAA@XZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??4?$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x18012C584 (--4-$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall winrt::event_revoker<winrt::WindowsUdk::UI::Shell::IViewCoordinator>::revoke(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // [rsp+40h] [rbp+20h] BYREF
  __int64 v5; // [rsp+48h] [rbp+28h] BYREF
  __int64 v6; // [rsp+50h] [rbp+30h] BYREF

  v4 = 0LL;
  v2 = *a1;
  *a1 = 0LL;
  v6 = v2;
  winrt::com_ptr<winrt::impl::IWeakReference>::operator=(a1, &v4);
  v5 = 0LL;
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64, void *, __int64 *))(*(_QWORD *)v2 + 24LL))(
      v2,
      &winrt::impl::guid_v<winrt::WindowsUdk::UI::Shell::IViewCoordinator>,
      &v5);
    v2 = v5;
    v3 = v5;
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v6);
  }
  else
  {
    v3 = 0LL;
  }
  if ( v4 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v4);
  if ( v3 )
    ((void (__fastcall *)(__int64, __int64))a1[1])(v2, a1[2]);
  if ( v2 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v5);
}
