/*
 * XREFs of ?OnArrangedWindowBorderExit@JointResize@@AEAAXXZ @ 0x180529940
 * Callers:
 *     ?OnHitTestPartNotifyEvent@JointResize@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@AEBUHitTestPartNotifyEventArgs@3456@@Z @ 0x180238460 (-OnHitTestPartNotifyEvent@JointResize@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@.c)
 *     wil::details::ScopeExitFn__lambda_6f49d1602fddbb99838411981311ff07___::_ScopeExitFn__lambda_6f49d1602fddbb99838411981311ff07___ @ 0x180527C68 (wil--details--ScopeExitFn__lambda_6f49d1602fddbb99838411981311ff07___--_ScopeExitFn__lambda_6f49.c)
 *     ?OnApplicationViewChanged@JointResize@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1805295E0 (-OnApplicationViewChanged@JointResize@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEA.c)
 *     ?OnArrangedWindowBorderEnter@JointResize@@AEAAJPEAUHWND__@@H@Z @ 0x180529764 (-OnArrangedWindowBorderEnter@JointResize@@AEAAJPEAUHWND__@@H@Z.c)
 * Callees:
 *     ?Cleanup@JointResize@@AEAAXXZ @ 0x18052883C (-Cleanup@JointResize@@AEAAXXZ.c)
 *     ?DestroyGhostDivider@JointResize@@AEAAXXZ @ 0x180528E9C (-DestroyGhostDivider@JointResize@@AEAAXXZ.c)
 *     ?RegisterRawInput@JointResize@@AEAAX_N@Z @ 0x18052A368 (-RegisterRawInput@JointResize@@AEAAX_N@Z.c)
 */

void __fastcall JointResize::OnArrangedWindowBorderExit(JointResize *this)
{
  JointResize::RegisterRawInput(this, 0);
  if ( !*((_BYTE *)this + 256) )
  {
    JointResize::DestroyGhostDivider(this);
    JointResize::Cleanup(this);
  }
}
