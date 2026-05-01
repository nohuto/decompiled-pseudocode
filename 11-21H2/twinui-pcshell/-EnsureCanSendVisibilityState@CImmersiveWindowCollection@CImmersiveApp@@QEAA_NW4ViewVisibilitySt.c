/*
 * XREFs of ?EnsureCanSendVisibilityState@CImmersiveWindowCollection@CImmersiveApp@@QEAA_NW4ViewVisibilityState@@@Z @ 0x1800734F8
 * Callers:
 *     ?ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x1800733F0 (-ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 * Callees:
 *     ?IsPresentationInProgress@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x1800735D4 (-IsPresentationInProgress@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?_AddGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x1800749B8 (-_AddGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z.c)
 *     ?QueueAyncVisibilityReconciliation@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x18014A6C8 (-QueueAyncVisibilityReconciliation@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 *     ?ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core_0000_0325_0001@@W4GHOST_STATUS@@@Z @ 0x180190A58 (-ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CImmersiveApp::CImmersiveWindowCollection::EnsureCanSendVisibilityState(
        CImmersiveApp::CImmersiveWindowCollection *a1,
        int a2)
{
  char v3; // bl

  v3 = 1;
  if ( a2 != 2 )
  {
    if ( (*(unsigned int (__fastcall **)(_QWORD *))(**((_QWORD **)a1 + 19) + 56LL))(*((_QWORD **)a1 + 19)) )
      CImmersiveApp::CImmersiveWindowCollection::_AddGhostStatus(a1, 16LL);
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
