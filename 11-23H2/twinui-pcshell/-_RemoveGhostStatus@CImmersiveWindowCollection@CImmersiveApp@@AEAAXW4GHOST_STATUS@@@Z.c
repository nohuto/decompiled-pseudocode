/*
 * XREFs of ?_RemoveGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x18002080C
 * Callers:
 *     ?HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z @ 0x180020860 (-HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z.c)
 *     ?ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x180020F10 (-ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     ?RemoveGhostStatusFlag@CImmersiveApp@@UEAAJW4__MIDL___MIDL_itf_shpriv_core_0000_0331_0004@@@Z @ 0x1801D6E70 (-RemoveGhostStatusFlag@CImmersiveApp@@UEAAJW4__MIDL___MIDL_itf_shpriv_core_0000_0331_0004@@@Z.c)
 *     ?HandleSessionIdleStateChanged@CImmersiveApp@@UEAAXW4SESSION_IDLE_STATE@@@Z @ 0x1802D0E80 (-HandleSessionIdleStateChanged@CImmersiveApp@@UEAAXW4SESSION_IDLE_STATE@@@Z.c)
 *     ?GhostAnimationWaitCompleted@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x1803C1B8C (-GhostAnimationWaitCompleted@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 *     ?OnActivationRequested@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x1803C30E4 (-OnActivationRequested@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 * Callees:
 *     WPP_SF_LSdL @ 0x1803C5F50 (WPP_SF_LSdL.c)
 */

__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::_RemoveGhostStatus(__int64 a1, int a2)
{
  __int64 v4; // rdx
  unsigned int v5; // ebx

  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    WPP_SF_LSdL(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      23,
      *(_QWORD *)(a1 + 160),
      a2,
      *(_QWORD *)(*(_QWORD *)(a1 + 160) + 584LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 160) + 592LL),
      *(_DWORD *)(a1 + 212));
  v4 = *(unsigned int *)(a1 + 212);
  v5 = v4 & ~a2;
  *(_DWORD *)(a1 + 212) = v5;
  return CImmersiveApp::CImmersiveWindowCollection::_HandleGhostStatusChange(a1, v4, v5);
}
