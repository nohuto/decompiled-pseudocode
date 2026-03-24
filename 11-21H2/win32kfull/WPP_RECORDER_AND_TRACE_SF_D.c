/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0077CC4
 * Callers:
 *     NtUserSetWindowsHookEx @ 0x1C0024770 (NtUserSetWindowsHookEx.c)
 *     zzzSetWindowsHookEx @ 0x1C00249B8 (zzzSetWindowsHookEx.c)
 *     ?xxxGetShellShowWindowCommand@@YA?AUShowCommandAndSource@@PEAUtagWND@@EAEBUtagUSERSTARTUPINFO@@@Z @ 0x1C0069E3C (-xxxGetShellShowWindowCommand@@YA-AUShowCommandAndSource@@PEAUtagWND@@EAEBUtagUSERSTARTUPINFO@@@.c)
 *     _lambda_fa8dd67e252dc1cab0941e5eaeabf2c9_::operator() @ 0x1C00764F8 (_lambda_fa8dd67e252dc1cab0941e5eaeabf2c9_--operator().c)
 *     ?OnDaemonTimer@ForegroundLaunch@@YAXXZ @ 0x1C0076BC8 (-OnDaemonTimer@ForegroundLaunch@@YAXXZ.c)
 *     ?PushProcessLaunchForegroundPolicy@ForegroundLaunch@@YAXPEAXUtagProcessLaunchPolicy@@@Z @ 0x1C0077A00 (-PushProcessLaunchForegroundPolicy@ForegroundLaunch@@YAXPEAXUtagProcessLaunchPolicy@@@Z.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C007CC00 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C007D36C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     NtUserSendInput @ 0x1C007EAF0 (NtUserSendInput.c)
 *     xxxSendInput @ 0x1C007EDD4 (xxxSendInput.c)
 *     NtUserSetCursorPos @ 0x1C009BCC0 (NtUserSetCursorPos.c)
 *     ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00A4A14 (-xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C00AB408 (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 *     ?PruneRecalcStateList@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z @ 0x1C00AFA28 (-PruneRecalcStateList@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z.c)
 *     _anonymous_namespace_::FindPreviousMonitorIndex @ 0x1C00B0460 (_anonymous_namespace_--FindPreviousMonitorIndex.c)
 *     xxxSwitchDesktop @ 0x1C00B0E54 (xxxSwitchDesktop.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C00F575C (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     _anonymous_namespace_::HasLegacyForegroundActivateRight @ 0x1C00FE99C (_anonymous_namespace_--HasLegacyForegroundActivateRight.c)
 *     ?OnFirstActivationAttempted@ForegroundLaunch@@YAXPEAX@Z @ 0x1C00FFF74 (-OnFirstActivationAttempted@ForegroundLaunch@@YAXPEAX@Z.c)
 *     ?AddPendingRecalcWork@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z @ 0x1C011083C (-AddPendingRecalcWork@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z.c)
 *     ?xxxRemoteSetDisconnectDisplayMode@@YAJPEAUtagDESKTOP@@GPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01239DC (-xxxRemoteSetDisconnectDisplayMode@@YAJPEAUtagDESKTOP@@GPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     RestoreDesktopsMonitorsAndWindowsRects @ 0x1C0153530 (RestoreDesktopsMonitorsAndWindowsRects.c)
 *     ?xxxGetWorkAreasFromShell@@YA_NXZ @ 0x1C015B57C (-xxxGetWorkAreasFromShell@@YA_NXZ.c)
 *     RestoreMonitorsAndWindowsRects @ 0x1C01D2C24 (RestoreMonitorsAndWindowsRects.c)
 *     SnapshotWindowRects @ 0x1C01D31E8 (SnapshotWindowRects.c)
 *     ?SortTouchContacts@@YAHPEAUtagPOINTER_TOUCH_INFO@@I@Z @ 0x1C01D60A0 (-SortTouchContacts@@YAHPEAUtagPOINTER_TOUCH_INFO@@I@Z.c)
 *     ?ValidateInjectedTouchFrame@@YAHIPEAUtagPOINTER_TOUCH_INFO@@PEAUtagINJECTED_CONTACT@@PEAUtagRECT@@I@Z @ 0x1C01D63F0 (-ValidateInjectedTouchFrame@@YAHIPEAUtagPOINTER_TOUCH_INFO@@PEAUtagINJECTED_CONTACT@@PEAUtagRECT.c)
 *     xxxInjectTouchInput @ 0x1C01D73EC (xxxInjectTouchInput.c)
 *     zzzUnhookWindowsHook @ 0x1C01E1508 (zzzUnhookWindowsHook.c)
 *     NtUserInjectTouchInput @ 0x1C01F8300 (NtUserInjectTouchInput.c)
 *     NtUserShellSetWindowPos @ 0x1C01FEFF0 (NtUserShellSetWindowPos.c)
 *     ?EnsureDpiMoveSizeDataIsOnCurrentWindowDpiContext@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1C0209BA0 (-EnsureDpiMoveSizeDataIsOnCurrentWindowDpiContext@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxQueryShellForSizeCooperation@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1C020F498 (-xxxQueryShellForSizeCooperation@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C0215A00 (-xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxMigrateWindowHandler@CallShell@@YA_NPEAUtagWND@@W4_SHELL_MIGRATE_WINDOW_REASON@@AEBUtagRECT@@2GU4@PEAUtagMONITOR@@PEAU4@PEAW4State@AdvancedWindowPos@@PEAK@Z @ 0x1C02371B0 (-xxxMigrateWindowHandler@CallShell@@YA_NPEAUtagWND@@W4_SHELL_MIGRATE_WINDOW_REASON@@AEBUtagRECT@.c)
 *     ?s_RemovePendingWorkForExplicitRestore@CRecalcProp@@SAXPEAUtagWND@@@Z @ 0x1C023B310 (-s_RemovePendingWorkForExplicitRestore@CRecalcProp@@SAXPEAUtagWND@@@Z.c)
 *     ??0CRapidHpdInfo@@AEAA@PEAVCMonitorTopology@@AEBU_GUID@@@Z @ 0x1C0243E0C (--0CRapidHpdInfo@@AEAA@PEAVCMonitorTopology@@AEBU_GUID@@@Z.c)
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x1C024ADB8 (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0077CC4
 * Reason: Hex-Rays returned no pseudocode for 0x1C0077CC4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0077CC4: mov     [rsp+arg_0], rbx
 * 00000001C0077CC9: mov     [rsp+arg_8], rsi
 * 00000001C0077CCE: push    rdi
 * 00000001C0077CCF: sub     rsp, 40h
 * 00000001C0077CD3: movzx   ebx, [rsp+48h+arg_30]
 * 00000001C0077CDB: mov     rsi, r9
 * 00000001C0077CDE: mov     dil, r8b
 * 00000001C0077CE1: test    dl, dl
 * 00000001C0077CE3: jnz     loc_1C018DA60
 * 00000001C0077CE9: test    dil, dil
 * 00000001C0077CEC: jz      short loc_1C0077D30
 * 00000001C0077CEE: and     [rsp+48h+var_10], 0
 * 00000001C0077CF4: lea     rax, [rsp+48h+arg_40]
 * 00000001C0077CFC: mov     r9, [rsp+48h+arg_38]
 * 00000001C0077D04: mov     rcx, rsi
 * 00000001C0077D07: mov     r8d, [rsp+48h+arg_28]
 * 00000001C0077D0C: movzx   edx, [rsp+48h+arg_20]
 * 00000001C0077D11: mov     [rsp+48h+var_18], 4
 * 00000001C0077D1A: mov     [rsp+48h+var_20], rax
 * 00000001C0077D1F: mov     word ptr [rsp+48h+var_28], bx
 * 00000001C0077D24: call    cs:__imp_WppAutoLogTrace
 * 00000001C0077D2B: nop     dword ptr [rax+rax+00h]
 * 00000001C0077D30: mov     rbx, [rsp+48h+arg_0]
 * 00000001C0077D35: mov     rsi, [rsp+48h+arg_8]
 * 00000001C0077D3A: add     rsp, 40h
 * 00000001C0077D3E: pop     rdi
 * 00000001C0077D3F: retn
 * 00000001C018DA60: and     [rsp+48h+var_18], 0
 * 00000001C018DA66: lea     rdx, [rsp+48h+arg_40]
 * 00000001C018DA6E: mov     rax, cs:pfnWppTraceMessage
 * 00000001C018DA75: mov     r9d, ebx
 * 00000001C018DA78: mov     r8, [rsp+48h+arg_38]
 * 00000001C018DA80: mov     [rsp+48h+var_20], 4
 * 00000001C018DA89: mov     [rsp+48h+var_28], rdx
 * 00000001C018DA8E: mov     edx, 2Bh ; '+'
 * 00000001C018DA93: call    cs:__guard_dispatch_icall_fptr
 * 00000001C018DA99: nop
 * 00000001C018DA9A: jmp     loc_1C0077CE9
 */
