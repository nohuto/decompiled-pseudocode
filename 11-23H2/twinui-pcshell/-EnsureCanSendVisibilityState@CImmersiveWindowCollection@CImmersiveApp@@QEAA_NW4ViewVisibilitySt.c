/*
 * XREFs of ?EnsureCanSendVisibilityState@CImmersiveWindowCollection@CImmersiveApp@@QEAA_NW4ViewVisibilityState@@@Z @ 0x180021024
 * Callers:
 *     ?ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x180020F10 (-ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 * Callees:
 *     ?QueueAyncVisibilityReconciliation@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x18001F0E0 (-QueueAyncVisibilityReconciliation@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 *     ?_AddGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x1800207C0 (-_AddGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z.c)
 *     ?IsPresentationInProgress@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x180020E80 (-IsPresentationInProgress@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x180023798 (-IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core_0000_0331_0001@@W4GHOST_STATUS@@@Z @ 0x1801D70F8 (-ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core.c)
 */

char __fastcall CImmersiveApp::CImmersiveWindowCollection::EnsureCanSendVisibilityState(
        CImmersiveApp::CImmersiveWindowCollection *a1,
        int a2)
{
  char v3; // bl

  v3 = 1;
  if ( a2 != 2 )
  {
    if ( CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost(a1) )
      CImmersiveApp::CImmersiveWindowCollection::_AddGhostStatus((__int64)a1, 0x10u);
    else
      CImmersiveApp::CImmersiveWindowCollection::ShowSystemVisual(a1, 0LL, 16LL);
    if ( CImmersiveApp::CImmersiveWindowCollection::IsPresentationInProgress(a1) )
    {
      v3 = 0;
      CImmersiveApp::CImmersiveWindowCollection::QueueAyncVisibilityReconciliation(a1);
    }
  }
  return v3;
}
