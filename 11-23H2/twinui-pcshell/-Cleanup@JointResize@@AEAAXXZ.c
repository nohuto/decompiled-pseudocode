/*
 * XREFs of ?Cleanup@JointResize@@AEAAXXZ @ 0x1802E6B64
 * Callers:
 *     ?OnArrangedWindowBorderExit@JointResize@@AEAAXXZ @ 0x1802E6DC2 (-OnArrangedWindowBorderExit@JointResize@@AEAAXXZ.c)
 *     wil::details::ScopeExitFn__lambda_a7d4e9b7e97af61c3367f340c016b266___::_ScopeExitFn__lambda_a7d4e9b7e97af61c3367f340c016b266___ @ 0x1805E15BC (wil--details--ScopeExitFn__lambda_a7d4e9b7e97af61c3367f340c016b266___--_ScopeExitFn__lambda_a7d4.c)
 *     ?OnArrangedWindowJointResizeCompleted@JointResize@@AEAAJPEBUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@UArrangedWindowJointResizeCompletedEventArgs@3456@@Z @ 0x1805E3920 (-OnArrangedWindowJointResizeCompleted@JointResize@@AEAAJPEBUIWindowManagementEvents2@WindowManag.c)
 *     ?OnArrangedWindowResizeStarted@JointResize@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@PEAUIArrangedWindowResizeStartedEventArgs@3456@@Z @ 0x1805E3A20 (-OnArrangedWindowResizeStarted@JointResize@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEv.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Destroy_range@V?$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@YAXPEAUSecondaryViewInfo@JointResize@@QEAU12@AEAV?$allocator@USecondaryViewInfo@JointResize@@@0@@Z @ 0x1802E68FC (--$_Destroy_range@V-$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@YAXPEAUSecondaryViewI.c)
 *     ?RegisterRawInput@JointResize@@AEAAX_N@Z @ 0x1802E6E54 (-RegisterRawInput@JointResize@@AEAAX_N@Z.c)
 *     ?RegisterViewChanges@JointResize@@AEAAX_N@Z @ 0x1802E6F64 (-RegisterViewChanges@JointResize@@AEAAX_N@Z.c)
 */

void __fastcall JointResize::Cleanup(JointResize *this)
{
  JointResize::RegisterRawInput(this, 0);
  JointResize::RegisterViewChanges(this, 0);
  *((_WORD *)this + 128) = 0;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 23);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)this + 24);
  *((_QWORD *)this + 33) = 0LL;
  std::_Destroy_range<std::allocator<JointResize::SecondaryViewInfo>>(
    *((__int64 **)this + 25),
    *((__int64 **)this + 26));
  *((_QWORD *)this + 26) = *((_QWORD *)this + 25);
  *((_DWORD *)this + 74) = -2;
  *((_BYTE *)this + 432) = 0;
}
