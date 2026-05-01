/*
 * XREFs of ?Unregister@AgileRegistrationList@@QEAAJK@Z @ 0x18014E014
 * Callers:
 *     ?v_UnregisterZBandNotification@CImmersiveMode@@UEAAJK@Z @ 0x18014DE50 (-v_UnregisterZBandNotification@CImmersiveMode@@UEAAJK@Z.c)
 *     ?Unregister@VirtualDesktopAnimationSyncNotifications@@UEAAJK@Z @ 0x18014DE70 (-Unregister@VirtualDesktopAnimationSyncNotifications@@UEAAJK@Z.c)
 *     ?UnregisterForApplicationViewChanges@ApplicationViewManagerVisibilityDebouncer@@UEAAJK@Z @ 0x18014DEA0 (-UnregisterForApplicationViewChanges@ApplicationViewManagerVisibilityDebouncer@@UEAAJK@Z.c)
 *     ?v_UnregisterModeNotification@CImmersiveMode@@UEAAJK@Z @ 0x18014DEC0 (-v_UnregisterModeNotification@CImmersiveMode@@UEAAJK@Z.c)
 *     ?Unregister@HolographicPositioner@@UEAAJK@Z @ 0x18014DEE0 (-Unregister@HolographicPositioner@@UEAAJK@Z.c)
 *     ?UnregisterInternal@CVirtualDesktopNotifications@@UEAAJK@Z @ 0x18014DF10 (-UnregisterInternal@CVirtualDesktopNotifications@@UEAAJK@Z.c)
 *     ?Unregister@CApplicationManager@@UEAAJK@Z @ 0x18014DF40 (-Unregister@CApplicationManager@@UEAAJK@Z.c)
 *     ?UnregisterForApplicationViewChanges@CApplicationViewManager@@UEAAJK@Z @ 0x18014DF60 (-UnregisterForApplicationViewChanges@CApplicationViewManager@@UEAAJK@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180098014 (--1-$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall AgileRegistrationList::Unregister(RTL_SRWLOCK *this, int a2)
{
  RTL_SRWLOCK *v4; // r14
  RTL_SRWLOCK v5; // rax
  __int64 v6; // rsi
  char *Ptr; // r15
  char *i; // rbx
  __int64 v9; // rax
  __int64 v10; // rcx
  char v12; // cl
  int v13; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = this + 3;
  AcquireSRWLockExclusive(this + 3);
  for ( v5.Ptr = this->Ptr; ; v5.Ptr = (char *)v5.Ptr + 16 )
  {
    if ( v5.Ptr == this[1].Ptr )
    {
      v12 = 1;
      goto LABEL_7;
    }
    if ( *(_DWORD *)v5.Ptr == a2 )
      break;
  }
  v12 = 0;
LABEL_7:
  if ( v12 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x2B,
      (int)"desktop\\internal\\shell\\inc\\private\\agileregistrationlist.h",
      (const char *)0x80070057LL,
      v13);
  v6 = *((_QWORD *)v5.Ptr + 1);
  *((_QWORD *)v5.Ptr + 1) = 0LL;
  Ptr = (char *)this[1].Ptr;
  for ( i = (char *)v5.Ptr + 16; i != Ptr; i += 16 )
  {
    *((_DWORD *)i - 4) = *(_DWORD *)i;
    v9 = *((_QWORD *)i + 1);
    *((_QWORD *)i + 1) = 0LL;
    v10 = *((_QWORD *)i - 1);
    *((_QWORD *)i - 1) = v9;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>((__int64 *)this[1].Ptr - 1);
  this[1].Ptr = (char *)this[1].Ptr - 16;
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return 0LL;
}
