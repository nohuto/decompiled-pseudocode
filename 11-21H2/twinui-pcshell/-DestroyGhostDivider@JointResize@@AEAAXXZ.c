/*
 * XREFs of ?DestroyGhostDivider@JointResize@@AEAAXXZ @ 0x180528E9C
 * Callers:
 *     _lambda_1e36923a9b749c25b7f1ddb2e1df24d1_::operator() @ 0x1801B4BF4 (_lambda_1e36923a9b749c25b7f1ddb2e1df24d1_--operator().c)
 *     wil::details::ScopeExitFn__lambda_02b73f030ed331f89959ed5da7ffd36e___::_ScopeExitFn__lambda_02b73f030ed331f89959ed5da7ffd36e___ @ 0x180527C24 (wil--details--ScopeExitFn__lambda_02b73f030ed331f89959ed5da7ffd36e___--_ScopeExitFn__lambda_02b7.c)
 *     ?ObservedKeyDown@JointResize@@UEAAJI@Z @ 0x180529580 (-ObservedKeyDown@JointResize@@UEAAJI@Z.c)
 *     ?OnArrangedWindowBorderExit@JointResize@@AEAAXXZ @ 0x180529940 (-OnArrangedWindowBorderExit@JointResize@@AEAAXXZ.c)
 *     ?OnArrangedWindowJointResizeCompleted@JointResize@@AEAAJPEBUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@UArrangedWindowJointResizeCompletedEventArgs@3456@@Z @ 0x180529980 (-OnArrangedWindowJointResizeCompleted@JointResize@@AEAAJPEBUIWindowManagementEvents2@WindowManag.c)
 *     ?OnArrangedWindowResizeStarted@JointResize@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@PEAUIArrangedWindowResizeStartedEventArgs@3456@@Z @ 0x180529A40 (-OnArrangedWindowResizeStarted@JointResize@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEv.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall JointResize::DestroyGhostDivider(JointResize *this)
{
  __int64 *v1; // rbx
  __int64 v2; // rcx

  v1 = (__int64 *)((char *)this + 176);
  v2 = *((_QWORD *)this + 22);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(v1);
  }
}
