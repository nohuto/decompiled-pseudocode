/*
 * XREFs of ?Cleanup@JointResize@@AEAAXXZ @ 0x18052883C
 * Callers:
 *     wil::details::ScopeExitFn__lambda_02b73f030ed331f89959ed5da7ffd36e___::_ScopeExitFn__lambda_02b73f030ed331f89959ed5da7ffd36e___ @ 0x180527C24 (wil--details--ScopeExitFn__lambda_02b73f030ed331f89959ed5da7ffd36e___--_ScopeExitFn__lambda_02b7.c)
 *     ?OnArrangedWindowBorderExit@JointResize@@AEAAXXZ @ 0x180529940 (-OnArrangedWindowBorderExit@JointResize@@AEAAXXZ.c)
 *     ?OnArrangedWindowJointResizeCompleted@JointResize@@AEAAJPEBUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@UArrangedWindowJointResizeCompletedEventArgs@3456@@Z @ 0x180529980 (-OnArrangedWindowJointResizeCompleted@JointResize@@AEAAJPEBUIWindowManagementEvents2@WindowManag.c)
 *     ?OnArrangedWindowResizeStarted@JointResize@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@PEAUIArrangedWindowResizeStartedEventArgs@3456@@Z @ 0x180529A40 (-OnArrangedWindowResizeStarted@JointResize@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEv.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MszAdjustment@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800DBEB4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MszAdjustment@@@details@wil@@QEAAX_NW4Rep.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Destroy_range@V?$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@YAXPEAUSecondaryViewInfo@JointResize@@QEAU12@AEAV?$allocator@USecondaryViewInfo@JointResize@@@0@@Z @ 0x180527844 (--$_Destroy_range@V-$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@YAXPEAUSecondaryViewI.c)
 *     ?RegisterRawInput@JointResize@@AEAAX_N@Z @ 0x18052A368 (-RegisterRawInput@JointResize@@AEAAX_N@Z.c)
 *     ?RegisterViewChanges@JointResize@@AEAAX_N@Z @ 0x18052A478 (-RegisterViewChanges@JointResize@@AEAAX_N@Z.c)
 */

void __fastcall JointResize::Cleanup(JointResize *this)
{
  __int64 v2; // r8
  __int64 v3; // r9

  JointResize::RegisterRawInput(this, 0);
  JointResize::RegisterViewChanges(this, 0);
  *((_WORD *)this + 128) = 0;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 24);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)this + 25);
  *((_QWORD *)this + 33) = 0LL;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MszAdjustment>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_MszAdjustment>::GetImpl'::`2'::impl,
    1u,
    v2,
    v3);
  std::_Destroy_range<std::allocator<JointResize::SecondaryViewInfo>>(
    *((__int64 **)this + 27),
    *((__int64 **)this + 28));
  *((_QWORD *)this + 28) = *((_QWORD *)this + 27);
  *((_DWORD *)this + 80) = -2;
  *((_BYTE *)this + 456) = 0;
}
