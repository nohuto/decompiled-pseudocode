/*
 * XREFs of ?Register@AgileRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z @ 0x18013DA74
 * Callers:
 *     ?RegisterForApplicationViewChanges@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUIApplicationViewChangeListener@@PEAK@Z @ 0x18013D620 (-RegisterForApplicationViewChanges@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUIApplicat.c)
 *     ?Register@CImmersiveMode@@UEAAJPEAUIImmersiveSystemModeNotification@@PEAK@Z @ 0x18013D6A0 (-Register@CImmersiveMode@@UEAAJPEAUIImmersiveSystemModeNotification@@PEAK@Z.c)
 *     ?Register@HolographicPositioner@@UEAAJPEAUIHolographicViewTransitionNotification@@PEAK@Z @ 0x18013D6C0 (-Register@HolographicPositioner@@UEAAJPEAUIHolographicViewTransitionNotification@@PEAK@Z.c)
 *     ?Register@CApplicationManager@@UEAAJPEAUIImmersiveApplicationNotification@@PEAK@Z @ 0x18013D6F0 (-Register@CApplicationManager@@UEAAJPEAUIImmersiveApplicationNotification@@PEAK@Z.c)
 *     ?RegisterInternal@CVirtualDesktopNotifications@@UEAAJPEAUIVirtualDesktopNotification@@PEAK@Z @ 0x18013D710 (-RegisterInternal@CVirtualDesktopNotifications@@UEAAJPEAUIVirtualDesktopNotification@@PEAK@Z.c)
 *     ?RegisterForApplicationViewChanges@CApplicationViewManager@@UEAAJPEAUIApplicationViewChangeListener@@PEAK@Z @ 0x18013D740 (-RegisterForApplicationViewChanges@CApplicationViewManager@@UEAAJPEAUIApplicationViewChangeListe.c)
 *     ?Register@VirtualDesktopAnimationSyncNotifications@@UEAAJPEAUIVirtualDesktopAnimationSyncNotification@@PEAK@Z @ 0x18013F200 (-Register@VirtualDesktopAnimationSyncNotifications@@UEAAJPEAUIVirtualDesktopAnimationSyncNotific.c)
 *     ?Register@CImmersiveMode@@UEAAJPEAUIActiveZBandNotification@@PEAK@Z @ 0x18013F2C0 (-Register@CImmersiveMode@@UEAAJPEAUIActiveZBandNotification@@PEAK@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@UItem@AgileRegistrationList@@@?$vector@UItem@AgileRegistrationList@@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@QEAAPEAUItem@AgileRegistrationList@@QEAU23@$$QEAU23@@Z @ 0x18013DB60 (--$_Emplace_reallocate@UItem@AgileRegistrationList@@@-$vector@UItem@AgileRegistrationList@@V-$al.c)
 *     ??$com_agile_query@AEAPEAUIUnknown@@@wil@@YA?AV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@0@AEAPEAUIUnknown@@W4AgileReferenceOptions@@@Z @ 0x1801D0314 (--$com_agile_query@AEAPEAUIUnknown@@@wil@@YA-AV-$com_ptr_t@UIAgileReference@@Uerr_exception_poli.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall AgileRegistrationList::Register(RTL_SRWLOCK *this, struct IUnknown *a2, unsigned int *a3)
{
  __int64 *v5; // rax
  __int64 v6; // r15
  int Ptr; // eax
  _QWORD *v8; // rdx
  __int64 v9; // rdi
  unsigned int v10; // edx
  int v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+28h] [rbp-20h]
  struct IUnknown *v14; // [rsp+58h] [rbp+10h] BYREF
  RTL_SRWLOCK *v15; // [rsp+60h] [rbp+18h] BYREF

  v14 = a2;
  *a3 = 0;
  v12 = 1;
  v13 = 0LL;
  v5 = (__int64 *)wil::com_agile_query<IUnknown * &>(&v15, &v14);
  v6 = *v5;
  *v5 = 0LL;
  v13 = v6;
  if ( v15 )
    (*((void (__fastcall **)(RTL_SRWLOCK *))v15->Ptr + 2))(v15);
  AcquireSRWLockExclusive(this + 3);
  v15 = this + 3;
  Ptr = (int)this[4].Ptr;
  v12 = Ptr;
  v8 = this[1].Ptr;
  if ( v8 == this[2].Ptr )
  {
    std::vector<AgileRegistrationList::Item>::_Emplace_reallocate<AgileRegistrationList::Item>(this, v8, &v12);
    v9 = v13;
  }
  else
  {
    *(_DWORD *)v8 = Ptr;
    v9 = 0LL;
    v8[1] = v6;
    this[1].Ptr = (char *)this[1].Ptr + 16;
  }
  v10 = (unsigned int)this[4].Ptr;
  LODWORD(this[4].Ptr) = v10 + 1;
  *a3 = v10;
  if ( this != (RTL_SRWLOCK *)-24LL )
    ReleaseSRWLockExclusive(this + 3);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  return 0LL;
}
