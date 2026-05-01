/*
 * XREFs of ?PushDesiredNavigationLevelToDerivedClass@UwpWindowWrapperBase@@AEAAXXZ @ 0x180415D54
 * Callers:
 *     _lambda_b43377fd694361d7de0643b09c3ea597_::operator() @ 0x180412818 (_lambda_b43377fd694361d7de0643b09c3ea597_--operator().c)
 *     ?SetNavigationLevelOverride@UwpWindowWrapperBase@@UEAA_NW4NavigationLevelOverride@@@Z @ 0x180417700 (-SetNavigationLevelOverride@UwpWindowWrapperBase@@UEAA_NW4NavigationLevelOverride@@@Z.c)
 *     ?SetRegistration@UwpWindowWrapperBase@@UEAAXV?$shared_ptr@UViewEventRegistration@@@std@@W4ViewInitializationScenario@@@Z @ 0x1804179A0 (-SetRegistration@UwpWindowWrapperBase@@UEAAXV-$shared_ptr@UViewEventRegistration@@@std@@W4ViewIn.c)
 *     ?put_VisibilityRevoked@UwpWindowWrapperBase@@UEAAJE@Z @ 0x18041A270 (-put_VisibilityRevoked@UwpWindowWrapperBase@@UEAAJE@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?NotifyGlobalComponentsForWindowStateChange@UwpWindowWrapperBase@@AEAAXPEAUHWND__@@W4WindowChange@1@@Z @ 0x180415948 (-NotifyGlobalComponentsForWindowStateChange@UwpWindowWrapperBase@@AEAAXPEAUHWND__@@W4WindowChang.c)
 */

void __fastcall UwpWindowWrapperBase::PushDesiredNavigationLevelToDerivedClass(UwpWindowWrapperBase *this)
{
  int v2; // eax
  __int64 v3; // rsi
  unsigned int v4; // edi

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 34) + 224LL))(*((_QWORD *)this + 34));
  v2 = *((_DWORD *)this + 43);
  v3 = *((int *)this + 72);
  v4 = *((_DWORD *)this + 118);
  if ( (v2 & 0x10) != 0 && (v2 & 0x20) == 0 )
    v4 = v4 != 0;
  if ( v4 != (*(unsigned int (__fastcall **)(UwpWindowWrapperBase *))(*(_QWORD *)this + 144LL))(this) )
  {
    (*(void (__fastcall **)(UwpWindowWrapperBase *, _QWORD))(*(_QWORD *)this + 176LL))(this, v4);
    if ( v3 )
      UwpWindowWrapperBase::NotifyGlobalComponentsForWindowStateChange((__int64)this, v3, 2);
  }
  UwpWindowWrapperBase::ReconcileSessionIdleTaskCompletion(this);
}
