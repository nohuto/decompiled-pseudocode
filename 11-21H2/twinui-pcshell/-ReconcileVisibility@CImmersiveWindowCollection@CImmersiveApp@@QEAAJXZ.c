/*
 * XREFs of ?ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x1800733F0
 * Callers:
 *     ?_SetPos_ShowApplication@CImmersiveApp@@AEAAXPEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@_N@Z @ 0x180039C18 (-_SetPos_ShowApplication@CImmersiveApp@@AEAAXPEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_.c)
 *     CAsyncCallbackWithLambda__lambda_e2bfed03b2a69a603428f007f3531625__&_::Invoke @ 0x18003D6A0 (CAsyncCallbackWithLambda__lambda_e2bfed03b2a69a603428f007f3531625__-_--Invoke.c)
 *     ?SetVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4ViewVisibilityState@@W4VisibilityOverrideSource@@@Z @ 0x180040BC4 (-SetVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4ViewVisibilityState@@W4V.c)
 *     ?ClearVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4VisibilityOverrideSource@@@Z @ 0x180041B6C (-ClearVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4VisibilityOverrideSour.c)
 *     ?PresentWindowInFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUITaskWindow@@@Z @ 0x1800732F8 (-PresentWindowInFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUITaskWindow@@@Z.c)
 *     ?HideFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x1800C6E0C (-HideFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     ?SetPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@W4APP_TRANSITION_TYPE@@@Z @ 0x180307FFC (-SetPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@W4APP_TR.c)
 *     ?_CleanupPendingPresentedWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ @ 0x180308F84 (-_CleanupPendingPresentedWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ.c)
 * Callees:
 *     ?_RemoveGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x180021D10 (-_RemoveGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z.c)
 *     ?RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z @ 0x180070364 (-RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z.c)
 *     ?EnsureCanSendVisibilityState@CImmersiveWindowCollection@CImmersiveApp@@QEAA_NW4ViewVisibilityState@@@Z @ 0x1800734F8 (-EnsureCanSendVisibilityState@CImmersiveWindowCollection@CImmersiveApp@@QEAA_NW4ViewVisibilitySt.c)
 *     ?ComputeAppFacingVisibilityState@CImmersiveWindowCollection@CImmersiveApp@@QEBA?AW4ViewVisibilityState@@XZ @ 0x180073574 (-ComputeAppFacingVisibilityState@CImmersiveWindowCollection@CImmersiveApp@@QEBA-AW4ViewVisibilit.c)
 *     ?CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18007518C (-CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x1800C6E68 (-IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::ReconcileVisibility(
        CImmersiveApp::CImmersiveWindowCollection *this)
{
  __int64 v2; // rdi
  unsigned __int64 i; // rsi
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rcx

  if ( *((_QWORD *)this + 22) )
  {
    v2 = (unsigned int)CImmersiveApp::CImmersiveWindowCollection::ComputeAppFacingVisibilityState();
    if ( (unsigned __int8)CImmersiveApp::CImmersiveWindowCollection::EnsureCanSendVisibilityState(this, v2) )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(***((_QWORD ***)this + 21) + 224LL))(
        **((_QWORD **)this + 21),
        (unsigned int)v2);
      for ( i = 1LL; i < *((_QWORD *)this + 22); ++i )
      {
        v5 = *(_QWORD *)(*((_QWORD *)this + 21) + 8 * i);
        v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 216LL))(v5);
        v7 = *(_QWORD *)(*((_QWORD *)this + 21) + 8 * i);
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 224LL))(v7, v6 != 0 ? (unsigned int)v2 : 0);
      }
      if ( (_DWORD)v2 == 2 && CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost(this) )
      {
        CImmersiveApp::CImmersiveWindowCollection::_RemoveGhostStatus((__int64)this, 16);
        if ( CImmersiveApp::CImmersiveWindowCollection::CanRemoveGhost(this) )
          CImmersiveApp::CImmersiveWindowCollection::RemoveSystemVisual(this);
      }
    }
  }
  return 0LL;
}
