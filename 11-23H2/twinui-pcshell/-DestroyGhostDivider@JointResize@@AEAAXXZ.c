/*
 * XREFs of ?DestroyGhostDivider@JointResize@@AEAAXXZ @ 0x1802E6D38
 * Callers:
 *     ?OnArrangedWindowBorderExit@JointResize@@AEAAXXZ @ 0x1802E6DC2 (-OnArrangedWindowBorderExit@JointResize@@AEAAXXZ.c)
 *     wil::details::ScopeExitFn__lambda_a7d4e9b7e97af61c3367f340c016b266___::_ScopeExitFn__lambda_a7d4e9b7e97af61c3367f340c016b266___ @ 0x1805E15BC (wil--details--ScopeExitFn__lambda_a7d4e9b7e97af61c3367f340c016b266___--_ScopeExitFn__lambda_a7d4.c)
 *     _lambda_af26cd4e336a58c3fc15d2bb79fbb070_::operator() @ 0x1805E17A8 (_lambda_af26cd4e336a58c3fc15d2bb79fbb070_--operator().c)
 *     ?ObservedKeyDown@JointResize@@UEAAJI@Z @ 0x1805E3580 (-ObservedKeyDown@JointResize@@UEAAJI@Z.c)
 *     ?OnArrangedWindowJointResizeCompleted@JointResize@@AEAAJPEBUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@UArrangedWindowJointResizeCompletedEventArgs@3456@@Z @ 0x1805E3920 (-OnArrangedWindowJointResizeCompleted@JointResize@@AEAAJPEBUIWindowManagementEvents2@WindowManag.c)
 *     ?OnArrangedWindowResizeStarted@JointResize@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@PEAUIArrangedWindowResizeStartedEventArgs@3456@@Z @ 0x1805E3A20 (-OnArrangedWindowResizeStarted@JointResize@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEv.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
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
