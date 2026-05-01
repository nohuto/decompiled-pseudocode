/*
 * XREFs of ?GetDesktopIsPerMonitor@CVirtualDesktopManager@@UEAAJPEAH@Z @ 0x180545B00
 * Callers:
 *     ?GetDesktopIsPerMonitor@CVirtualDesktopManager@@WBA@EAAJPEAH@Z @ 0x18020CA00 (-GetDesktopIsPerMonitor@CVirtualDesktopManager@@WBA@EAAJPEAH@Z.c)
 * Callees:
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18009FDE0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VpmUpdates@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A01A0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VpmUpdates@@@details@wil@@QEAAX_NW4Report.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopManager::GetDesktopIsPerMonitor(CVirtualDesktopManager *this, int *a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  RTL_SRWLOCK *v5; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0;
  (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**((_QWORD **)this + 19) + 32LL))(*((_QWORD *)this + 19), &v5);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VpmUpdates>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_VpmUpdates>::GetImpl'::`2'::impl,
    0,
    v2,
    v3);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v5);
  return 0LL;
}
