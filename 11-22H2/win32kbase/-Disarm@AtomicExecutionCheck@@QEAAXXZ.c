/*
 * XREFs of ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009CB48
 * Callers:
 *     ?ResetSystemColors@@YAXXZ @ 0x1C00121BC (-ResetSystemColors@@YAXXZ.c)
 *     xxxResetDisplayDevice @ 0x1C00138D0 (xxxResetDisplayDevice.c)
 *     xxxInitProcessInfo @ 0x1C0036A38 (xxxInitProcessInfo.c)
 *     xxxCreateThreadInfo @ 0x1C004D550 (xxxCreateThreadInfo.c)
 *     ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C004EC10 (-HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     DestroyThreadsObjects @ 0x1C004F800 (DestroyThreadsObjects.c)
 *     xxxDestroyThreadInfo @ 0x1C0051264 (xxxDestroyThreadInfo.c)
 *     HandleInputDestDestruction @ 0x1C0052E4C (HandleInputDestDestruction.c)
 *     ?ExecuteMoveMouseWindowManagement@CMouseProcessor@@QEAAXXZ @ 0x1C0055268 (-ExecuteMoveMouseWindowManagement@CMouseProcessor@@QEAAXXZ.c)
 *     InitUserScreen @ 0x1C005CD6C (InitUserScreen.c)
 *     NtUserRegisterTouchPadCapable @ 0x1C00C1410 (NtUserRegisterTouchPadCapable.c)
 *     DestroyProcessInfo @ 0x1C00C5EA0 (DestroyProcessInfo.c)
 *     ?SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CD994 (-SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNode@@@Z @ 0x1C00E446E (-GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNod.c)
 *     NtUserEnableTouchPad @ 0x1C0143E70 (NtUserEnableTouchPad.c)
 *     NtUserGetPrecisionTouchPadConfiguration @ 0x1C0145720 (NtUserGetPrecisionTouchPadConfiguration.c)
 *     NtUserSetAdditionalForegroundBoostProcesses @ 0x1C014A390 (NtUserSetAdditionalForegroundBoostProcesses.c)
 *     NtUserSetPrecisionTouchPadConfiguration @ 0x1C014BA50 (NtUserSetPrecisionTouchPadConfiguration.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01D4AC0 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     PostEvent @ 0x1C01E87A8 (PostEvent.c)
 *     PostThreadEvent @ 0x1C01E88E0 (PostThreadEvent.c)
 *     ?AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@Z @ 0x1C01F4E24 (-AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@.c)
 *     ?AccessibilityReleaseMouseButton@CMouseProcessor@@QEAAXW4MouseKeyButton@@@Z @ 0x1C01F5058 (-AccessibilityReleaseMouseButton@CMouseProcessor@@QEAAXW4MouseKeyButton@@@Z.c)
 *     ?DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1C01F632C (-DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInpu.c)
 *     ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent @ 0x1C02062D4 (ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009CB48
 * Reason: Hex-Rays returned no pseudocode for 0x1C009CB48
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C009CB48: push    rbx
 * 00000001C009CB4A: sub     rsp, 20h
 * 00000001C009CB4E: cmp     byte ptr [rcx], 0
 * 00000001C009CB51: mov     rbx, rcx
 * 00000001C009CB54: jz      short loc_1C009CB68
 * 00000001C009CB56: call    cs:__imp_PsGetCurrentThreadWin32Thread
 * 00000001C009CB5D: nop     dword ptr [rax+rax+00h]
 * 00000001C009CB62: dec     dword ptr [rax+30h]
 * 00000001C009CB65: mov     byte ptr [rbx], 0
 * 00000001C009CB68: add     rsp, 20h
 * 00000001C009CB6C: pop     rbx
 * 00000001C009CB6D: retn
 */
