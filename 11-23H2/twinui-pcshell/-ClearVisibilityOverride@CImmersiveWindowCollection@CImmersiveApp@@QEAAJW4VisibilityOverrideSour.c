/*
 * XREFs of ?ClearVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4VisibilityOverrideSource@@@Z @ 0x180071298
 * Callers:
 *     ?_HandleGhostStatusChange@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@0@Z @ 0x1800220C0 (-_HandleGhostStatusChange@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@0@Z.c)
 *     ?OnFramePositionChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x180024724 (-OnFramePositionChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     ?ReportVisibilityOverride@CImmersiveApp@@UEAA_NW4WINDOW_PRESENTED_OVERRIDE@@W4SESSION_IDLE_STATE@@W4OVERRIDE_IMMUNITY_CHANGE@@W4ReportVisibilityOverrideOptions@@@Z @ 0x1802D0FD0 (-ReportVisibilityOverride@CImmersiveApp@@UEAA_NW4WINDOW_PRESENTED_OVERRIDE@@W4SESSION_IDLE_STATE.c)
 *     ?SetForcedVisibilityWhileEnsured@CImmersiveApp@@UEAAX_N@Z @ 0x1803C4520 (-SetForcedVisibilityWhileEnsured@CImmersiveApp@@UEAAX_N@Z.c)
 * Callees:
 *     ?ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x180020F10 (-ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::ClearVisibilityOverride(
        CImmersiveApp::CImmersiveWindowCollection *a1,
        unsigned int a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *((_BYTE *)a1 + 8 * a2 + 216) = 0;
  v2 = CImmersiveApp::CImmersiveWindowCollection::ReconcileVisibility(a1);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1D80,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
      (const char *)(unsigned int)v2,
      v5);
  return v3;
}
