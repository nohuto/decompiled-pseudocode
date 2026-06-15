/*
 * XREFs of ?InternalTimerCallback@RoutingTimer@@KAXPEAXE@Z @ 0x18013DAD0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x180014E70 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall RoutingTimer::InternalTimerCallback(struct _RTL_CRITICAL_SECTION **a1)
{
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v3; // [rsp+28h] [rbp-10h]

  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    a1[3]);
  (*(void (__fastcall **)(struct _RTL_CRITICAL_SECTION **))&(*a1)->LockCount)(a1);
  ((void (__fastcall *)(struct _RTL_CRITICAL_SECTION **, struct _RTL_CRITICAL_SECTION *))(*a1)->SpinCount)(a1, a1[1]);
  if ( v3 )
    LeaveCriticalSection(lpCriticalSection);
}
