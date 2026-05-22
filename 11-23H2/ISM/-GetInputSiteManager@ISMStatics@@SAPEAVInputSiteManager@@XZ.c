/*
 * XREFs of ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x180022308
 * Callers:
 *     ?GetInputSite@DWMFocusedInputTarget@@UEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@XZ @ 0x180017FB0 (-GetInputSite@DWMFocusedInputTarget@@UEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@XZ.c)
 *     ?UpdateForegroundTarget@ForegroundManager@@AEAAX_KIII_N@Z @ 0x18001D9D0 (-UpdateForegroundTarget@ForegroundManager@@AEAAX_KIII_N@Z.c)
 *     ?UpdateHierarchyFromInputSinkDataCache@InputSiteHierarchyManager@@UEAAXXZ @ 0x18001F960 (-UpdateHierarchyFromInputSinkDataCache@InputSiteHierarchyManager@@UEAAXXZ.c)
 *     std::_Func_impl_no_alloc__lambda_7686d6ebc3159bdf5e46abc7d00177b2__void__MIT_INPUT_FOCUS_MESSAGE_const___::_Do_call @ 0x180021750 (std--_Func_impl_no_alloc__lambda_7686d6ebc3159bdf5e46abc7d00177b2__void__MIT_INPUT_FOCUS_MESSAGE.c)
 *     ?GetInputSite@DWMLegacyInputTarget@@UEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@XZ @ 0x180021C30 (-GetInputSite@DWMLegacyInputTarget@@UEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@XZ.c)
 *     ?PopulateInputSiteFromViewId@DWMFocusedInputTarget@@AEAAXXZ @ 0x1800269EC (-PopulateInputSiteFromViewId@DWMFocusedInputTarget@@AEAAXXZ.c)
 *     ?GetInputSiteFromInputDest@InputDestTarget@@AEBA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@AEBUtagINPUTDEST@@@Z @ 0x180040A88 (-GetInputSiteFromInputDest@InputDestTarget@@AEBA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@AEBUtagI.c)
 *     ?NotifyWindowOfActivationStateChange@CUIHierarchy@@AEAAXPEAUCUIWindow@@W4CUIActivationState@Input@Internal@UI@Windows@@_K@Z @ 0x18009C470 (-NotifyWindowOfActivationStateChange@CUIHierarchy@@AEAAXPEAUCUIWindow@@W4CUIActivationState@Inpu.c)
 *     ?NotifyWindowOfInputDisabledStateChange@CUIHierarchy@@AEAAX_KW4InputDisabledState@@1@Z @ 0x18009C6D8 (-NotifyWindowOfInputDisabledStateChange@CUIHierarchy@@AEAAX_KW4InputDisabledState@@1@Z.c)
 *     ?UpdateInputDisabledStateOnWindowAddition@CUIHierarchy@@AEAAX_K@Z @ 0x18009D95C (-UpdateInputDisabledStateOnWindowAddition@CUIHierarchy@@AEAAX_K@Z.c)
 *     ?SetInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@III@Z @ 0x1800A3070 (-SetInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@III@Z.c)
 *     ?GetWorkspaceRelativeCoordinates@InjectionRawInputProvider@@AEAA?AUtagPOINT@@U2@PEAVInputInjectionClientProxy@@@Z @ 0x1800E8030 (-GetWorkspaceRelativeCoordinates@InjectionRawInputProvider@@AEAA-AUtagPOINT@@U2@PEAVInputInjecti.c)
 *     ?GetMPCTarget@MPCInputRouter@@AEAAX_KIPEAPEAUIMPCTarget@@@Z @ 0x180109308 (-GetMPCTarget@MPCInputRouter@@AEAAX_KIPEAPEAUIMPCTarget@@@Z.c)
 *     ?Initialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x180109C3C (-Initialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 *     ?OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ @ 0x18010AB8C (-OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ.c)
 *     ?UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAXPEAUIInputTarget@@@Z @ 0x18010B428 (-UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAXPEAUIInputTarget@@@Z.c)
 *     ?TransferForegroundToComponent@CUIHostInputObjectProxy@@MEAAJAEBUTransferForegroundInfo@@@Z @ 0x1801415C0 (-TransferForegroundToComponent@CUIHostInputObjectProxy@@MEAAJAEBUTransferForegroundInfo@@@Z.c)
 *     ?GetControllerForManualResize@ResizeProcessor@@AEAAXPEAVBamoManualResizeAreaClientProxy@@PEAPEAVBamoResizeControllerClientProxy@@PEAPEAVInputSite@@@Z @ 0x1801641CC (-GetControllerForManualResize@ResizeProcessor@@AEAAXPEAVBamoManualResizeAreaClientProxy@@PEAPEAV.c)
 *     ?GetResizeControllerInputSite@ResizeProcessor@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAVBamoResizeControllerClientProxy@@@Z @ 0x18016442C (-GetResizeControllerInputSite@ResizeProcessor@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@PEAVB.c)
 *     ?CreateTargetFromHitTestResult@DWMInputRouter@@AEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBUHitTestResult@@@Z @ 0x1801B89F0 (-CreateTargetFromHitTestResult@DWMInputRouter@@AEAA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@AE.c)
 *     ?HitTest@DWMInputRouter@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputTarget@@PEAPEAU4@@Z @ 0x1801B9380 (-HitTest@DWMInputRouter@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputTarget@@PEAPEAU4@@Z.c)
 *     ?HitTestForPoint@DWMInputRouter@@UEAA?AUHitTestResult@@UtagPOINT@@@Z @ 0x1801B95A0 (-HitTestForPoint@DWMInputRouter@@UEAA-AUHitTestResult@@UtagPOINT@@@Z.c)
 *     ?HitTestForPointAndType@DWMInputRouter@@UEAA?AUHitTestResult@@UtagPOINT@@K@Z @ 0x1801B9620 (-HitTestForPointAndType@DWMInputRouter@@UEAA-AUHitTestResult@@UtagPOINT@@K@Z.c)
 *     ?HitTestForPointTypeAndWorkspace@DWMInputRouter@@UEAA?AUHitTestResult@@UtagPOINT@@KK@Z @ 0x1801B96D0 (-HitTestForPointTypeAndWorkspace@DWMInputRouter@@UEAA-AUHitTestResult@@UtagPOINT@@KK@Z.c)
 *     ?RequestUIAHitTest@DWMInputRouter@@QEAA?AU_GUID@@II@Z @ 0x1801B9E4C (-RequestUIAHitTest@DWMInputRouter@@QEAA-AU_GUID@@II@Z.c)
 *     ?RequestViewHitTestHelper@DWMInputRouter@@IEAAXUViewHitTestInfo@@PEAI@Z @ 0x1801BA190 (-RequestViewHitTestHelper@DWMInputRouter@@IEAAXUViewHitTestInfo@@PEAI@Z.c)
 *     ?PopulateInputSiteFromWindowId@DWMLegacyInputTarget@@AEAAXXZ @ 0x1801BB0F8 (-PopulateInputSiteFromWindowId@DWMLegacyInputTarget@@AEAAXXZ.c)
 *     ?UpdateInputTarget@EdgyProcessorTarget@@QEAAJUtagMsgRoutingInfo@@PEAXAEBUEdgyPointerInfo@@@Z @ 0x1801CC0D4 (-UpdateInputTarget@EdgyProcessorTarget@@QEAAJUtagMsgRoutingInfo@@PEAXAEBUEdgyPointerInfo@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015974 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@IEAAKXZ @ 0x18003234C (-InternalRelease@-$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@InputSystemServerConnection@@SA?AV?$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@PEAUIMessageSession@@@Z @ 0x180039474 (-Create@InputSystemServerConnection@@SA-AV-$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
struct InputSiteManager *ISMStatics::GetInputSiteManager(void)
{
  struct InputSystemServerConnection *v0; // rax
  int v2; // eax
  struct InputSystemServerConnection **v3; // rax
  struct InputSystemServerConnection *v4; // rcx
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  int v8; // [rsp+38h] [rbp+10h] BYREF

  v0 = ISMStatics::s_inputSystemBamoConnection;
  if ( !ISMStatics::s_inputSystemBamoConnection )
  {
    v7 = 0LL;
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v7);
    v2 = CoreUICreate(&v7);
    if ( v2 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2F,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\ismstatics.cpp",
        (const char *)(unsigned int)v2,
        v5);
    v3 = (struct InputSystemServerConnection **)InputSystemServerConnection::Create((int)&v8);
    v4 = *v3;
    *v3 = 0LL;
    ISMStatics::s_inputSystemBamoConnection = v4;
    Microsoft::WRL::ComPtr<InputSystemServerConnection>::InternalRelease(&v8);
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v7);
    v0 = ISMStatics::s_inputSystemBamoConnection;
  }
  return (struct InputSiteManager *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)v0 + 31) + 8LL) + 152LL))(*((_QWORD *)v0 + 31) + 8LL);
}
