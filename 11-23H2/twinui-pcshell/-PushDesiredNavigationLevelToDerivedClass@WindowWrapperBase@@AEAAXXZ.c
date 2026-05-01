/*
 * XREFs of ?PushDesiredNavigationLevelToDerivedClass@WindowWrapperBase@@AEAAXXZ @ 0x1802D9002
 * Callers:
 *     ?SetNavigationLevelOverride@WindowWrapperBase@@UEAA_NW4NavigationLevelOverride@@@Z @ 0x1802D9480 (-SetNavigationLevelOverride@WindowWrapperBase@@UEAA_NW4NavigationLevelOverride@@@Z.c)
 *     _lambda_6b9a4813d4cd55222670e24e1f9f417a_::operator() @ 0x1804E6C70 (_lambda_6b9a4813d4cd55222670e24e1f9f417a_--operator().c)
 *     ?SetRegistration@WindowWrapperBase@@UEAAXV?$shared_ptr@UViewEventRegistration@@@std@@W4ViewInitializationScenario@@@Z @ 0x1804ECAF0 (-SetRegistration@WindowWrapperBase@@UEAAXV-$shared_ptr@UViewEventRegistration@@@std@@W4ViewIniti.c)
 *     ?put_VisibilityRevoked@WindowWrapperBase@@UEAAJE@Z @ 0x1804EF1B0 (-put_VisibilityRevoked@WindowWrapperBase@@UEAAJE@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?NotifyGlobalComponentsForWindowStateChange@WindowWrapperBase@@AEAAXPEAUHWND__@@W4WindowChange@1@@Z @ 0x1804EACB0 (-NotifyGlobalComponentsForWindowStateChange@WindowWrapperBase@@AEAAXPEAUHWND__@@W4WindowChange@1.c)
 */

void __fastcall WindowWrapperBase::PushDesiredNavigationLevelToDerivedClass(WindowWrapperBase *this)
{
  int v2; // eax
  __int64 v3; // rsi
  unsigned int v4; // edi

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 35) + 216LL))(*((_QWORD *)this + 35));
  v2 = *((_DWORD *)this + 45);
  v3 = *((int *)this + 74);
  v4 = *((_DWORD *)this + 120);
  if ( (v2 & 0x10) != 0 && (v2 & 0x20) == 0 )
    v4 = v4 != 0;
  if ( v4 != (*(unsigned int (__fastcall **)(WindowWrapperBase *))(*(_QWORD *)this + 144LL))(this) )
  {
    (*(void (__fastcall **)(WindowWrapperBase *, _QWORD))(*(_QWORD *)this + 168LL))(this, v4);
    if ( v3 )
      WindowWrapperBase::NotifyGlobalComponentsForWindowStateChange(this, v3, 2LL);
  }
  WindowWrapperBase::ReconcileSessionIdleTaskCompletion(this);
}
