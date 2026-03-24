/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C0078850
 * Callers:
 *     EditionUpdateInputTransformFromHitTest @ 0x1C00028B0 (EditionUpdateInputTransformFromHitTest.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0058FB0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     MapDesktop @ 0x1C0077E30 (MapDesktop.c)
 *     ?VWPLNextBase@@YAPEAUtagWND@@PEAUtagVWPL@@_KPEAU1@PEAKHPEA_K@Z @ 0x1C00784D4 (-VWPLNextBase@@YAPEAUtagWND@@PEAUtagVWPL@@_KPEAU1@PEAKHPEA_K@Z.c)
 *     ?VWPLRemoveBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@HPEA_K@Z @ 0x1C00786B0 (-VWPLRemoveBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@HPEA_K@Z.c)
 *     RemoveProcessFromJob @ 0x1C007A1B0 (RemoveProcessFromJob.c)
 *     ?VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z @ 0x1C007A438 (-VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C007BCDC (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     SetNewForegroundQueue @ 0x1C007FCD0 (SetNewForegroundQueue.c)
 *     SetNewForegroundPti @ 0x1C00A87C0 (SetNewForegroundPti.c)
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C00AB408 (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C00AD9D0 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     ?xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z @ 0x1C00BA5DC (-xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z.c)
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C00CDA30 (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     DestroyThreadsMessages @ 0x1C00F6000 (DestroyThreadsMessages.c)
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x1C00FFB08 (_anonymous_namespace_--FAllowForegroundActivate.c)
 *     UserJobCallout @ 0x1C0101E20 (UserJobCallout.c)
 *     ?CreateW32Job@@YAPEAUtagW32JOB@@PEAU_EJOB@@@Z @ 0x1C010212C (-CreateW32Job@@YAPEAUtagW32JOB@@PEAU_EJOB@@@Z.c)
 *     ?JobCalloutAddProcess@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x1C01022A4 (-JobCalloutAddProcess@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?JobCalloutAddProcessWorker@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x1C01022D4 (-JobCalloutAddProcessWorker@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?_AllowSetForegroundWindow@@YA?AW4AllowSetForegroundWindowResult@@KW4AllowSetForegroundWindowPolicy@@@Z @ 0x1C01067C8 (-_AllowSetForegroundWindow@@YA-AW4AllowSetForegroundWindowResult@@KW4AllowSetForegroundWindowPol.c)
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C016B120 (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 *     ?xxxIVSyncForeground@IVContainerForegroundSync@@YAXXZ @ 0x1C01CE9BC (-xxxIVSyncForeground@IVContainerForegroundSync@@YAXXZ.c)
 *     ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C01DBF48 (-ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01DC5A0 (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     ?DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C01E9DA0 (-DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 *     ?FreeListAdd@@YAHPEAUtagDDECONV@@PEAXK@Z @ 0x1C0214F68 (-FreeListAdd@@YAHPEAUtagDDECONV@@PEAXK@Z.c)
 *     xxxDDETrackGetMessageHook @ 0x1C0217AA8 (xxxDDETrackGetMessageHook.c)
 *     xxxDDETrackSendHook @ 0x1C0218378 (xxxDDETrackSendHook.c)
 *     xxxDDETrackWindowDying @ 0x1C0218544 (xxxDDETrackWindowDying.c)
 *     ?xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z @ 0x1C02377B8 (-xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z.c)
 *     ?s_PostRecalcForWindow@CRecalcProp@@SAXPEAUtagWND@@@Z @ 0x1C023B1C4 (-s_PostRecalcForWindow@CRecalcProp@@SAXPEAUtagWND@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C0078850
 * Reason: Hex-Rays returned no pseudocode for 0x1C0078850
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0078850: mov     [rsp+arg_0], rbx
 * 00000001C0078855: mov     [rsp+arg_8], rbp
 * 00000001C007885A: mov     [rsp+arg_10], rsi
 * 00000001C007885F: push    rdi
 * 00000001C0078860: sub     rsp, 50h
 * 00000001C0078864: movzx   ebx, [rsp+58h+arg_30]
 * 00000001C007886C: mov     rsi, r9
 * 00000001C007886F: mov     dil, r8b
 * 00000001C0078872: mov     ebp, 8
 * 00000001C0078877: test    dl, dl
 * 00000001C0078879: jnz     loc_1C018DC30
 * 00000001C007887F: test    dil, dil
 * 00000001C0078882: jz      short loc_1C00788DA
 * 00000001C0078884: and     [rsp+58h+var_10], 0
 * 00000001C007888A: lea     rax, [rsp+58h+arg_48]
 * 00000001C0078892: mov     r9, [rsp+58h+arg_38]
 * 00000001C007889A: mov     rcx, rsi
 * 00000001C007889D: mov     r8d, [rsp+58h+arg_28]
 * 00000001C00788A5: movzx   edx, [rsp+58h+arg_20]
 * 00000001C00788AD: mov     [rsp+58h+var_18], rbp
 * 00000001C00788B2: mov     [rsp+58h+var_20], rax
 * 00000001C00788B7: lea     rax, [rsp+58h+arg_40]
 * 00000001C00788BF: mov     [rsp+58h+var_28], rbp
 * 00000001C00788C4: mov     [rsp+58h+var_30], rax
 * 00000001C00788C9: mov     word ptr [rsp+58h+var_38], bx
 * 00000001C00788CE: call    cs:__imp_WppAutoLogTrace
 * 00000001C00788D5: nop     dword ptr [rax+rax+00h]
 * 00000001C00788DA: mov     rbx, [rsp+58h+arg_0]
 * 00000001C00788DF: mov     rbp, [rsp+58h+arg_8]
 * 00000001C00788E4: mov     rsi, [rsp+58h+arg_10]
 * 00000001C00788E9: add     rsp, 50h
 * 00000001C00788ED: pop     rdi
 * 00000001C00788EE: retn
 * 00000001C018DC30: and     [rsp+58h+var_18], 0
 * 00000001C018DC36: lea     rdx, [rsp+58h+arg_48]
 * 00000001C018DC3E: mov     rax, cs:pfnWppTraceMessage
 * 00000001C018DC45: mov     r9d, ebx
 * 00000001C018DC48: mov     r8, [rsp+58h+arg_38]
 * 00000001C018DC50: mov     [rsp+58h+var_20], rbp
 * 00000001C018DC55: mov     [rsp+58h+var_28], rdx
 * 00000001C018DC5A: lea     rdx, [rsp+58h+arg_40]
 * 00000001C018DC62: mov     [rsp+58h+var_30], rbp
 * 00000001C018DC67: mov     [rsp+58h+var_38], rdx
 * 00000001C018DC6C: mov     edx, 2Bh ; '+'
 * 00000001C018DC71: call    cs:__guard_dispatch_icall_fptr
 * 00000001C018DC77: nop
 * 00000001C018DC78: jmp     loc_1C007887F
 */
