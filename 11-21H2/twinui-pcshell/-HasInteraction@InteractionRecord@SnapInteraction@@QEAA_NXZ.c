/*
 * XREFs of ?HasInteraction@InteractionRecord@SnapInteraction@@QEAA_NXZ @ 0x180099458
 * Callers:
 *     ?OnViewFocused@InteractionTracker@SnapInteraction@@AEAAXAEBU?$com_ptr@UIApplicationView@@@winrt@@@Z @ 0x180078F18 (-OnViewFocused@InteractionTracker@SnapInteraction@@AEAAXAEBU-$com_ptr@UIApplicationView@@@winrt@.c)
 *     ?OnViewSnapped@InteractionTracker@SnapInteraction@@AEAAXAEBU?$com_ptr@UIApplicationView@@@winrt@@@Z @ 0x1805A0870 (-OnViewSnapped@InteractionTracker@SnapInteraction@@AEAAXAEBU-$com_ptr@UIApplicationView@@@winrt@.c)
 *     ?UpdateTelemetry@InteractionTracker@SnapInteraction@@AEAAXXZ @ 0x1805A0BE0 (-UpdateTelemetry@InteractionTracker@SnapInteraction@@AEAAXXZ.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180096D00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 */

char __fastcall SnapInteraction::InteractionRecord::HasInteraction(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rbx
  char v3; // bl
  RTL_SRWLOCK *v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = this + 5;
  AcquireSRWLockShared(this + 5);
  v5 = v1;
  v3 = 0;
  if ( LOBYTE(this[3].Ptr) || (__int64)this[4].Ptr > 1000000000 )
    v3 = 1;
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v5);
  return v3;
}
