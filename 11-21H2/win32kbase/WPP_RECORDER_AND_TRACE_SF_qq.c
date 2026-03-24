/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C003D298
 * Callers:
 *     HandleDeferredInput @ 0x1C0001240 (HandleDeferredInput.c)
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z @ 0x1C0001CF8 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0003B78 (rimProcessDeviceBufferAndStartRead.c)
 *     rimSignalReadComplete @ 0x1C0003DB8 (rimSignalReadComplete.c)
 *     ?ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@CA?AVCInputDest@@AEBU_InputHitTestResult@@K_K@Z @ 0x1C0035090 (-ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@CA-AVCInputDest@@AEBU_InputHitTestResul.c)
 *     EtwTraceUIPIInputError @ 0x1C003D190 (EtwTraceUIPIInputError.c)
 *     RIMOnPnpNotification @ 0x1C0042B50 (RIMOnPnpNotification.c)
 *     rimFindPausedDeviceAndCompleteRead @ 0x1C00483F8 (rimFindPausedDeviceAndCompleteRead.c)
 *     rimDereferenceDev @ 0x1C00A12A0 (rimDereferenceDev.c)
 *     rimInputApc @ 0x1C00C06F0 (rimInputApc.c)
 *     NtUserMapPointsByVisualIdentifier @ 0x1C015F740 (NtUserMapPointsByVisualIdentifier.c)
 *     UserCreateBaseWindowHandle @ 0x1C0166410 (UserCreateBaseWindowHandle.c)
 *     RIMOnAsyncPnpWorkNotification @ 0x1C0185330 (RIMOnAsyncPnpWorkNotification.c)
 *     RIMGetPnpActionBitsFromGuid @ 0x1C01A0D90 (RIMGetPnpActionBitsFromGuid.c)
 *     ?RIMQueueAndSignalAsyncPnpWorkItem@@YAXPEAURawInputManagerObject@@PEAU_RIMAsyncPnpWorkItem@@@Z @ 0x1C01A9FF4 (-RIMQueueAndSignalAsyncPnpWorkItem@@YAXPEAURawInputManagerObject@@PEAU_RIMAsyncPnpWorkItem@@@Z.c)
 *     rimObsAddInputObserver @ 0x1C01B320C (rimObsAddInputObserver.c)
 *     rimObsDeliverInputToObserver @ 0x1C01B3FC8 (rimObsDeliverInputToObserver.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C003D298
 * Reason: Hex-Rays returned no pseudocode for 0x1C003D298
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C003D298: mov     [rsp+arg_0], rbx
 * 00000001C003D29D: mov     [rsp+arg_8], rbp
 * 00000001C003D2A2: mov     [rsp+arg_10], rsi
 * 00000001C003D2A7: push    rdi
 * 00000001C003D2A8: sub     rsp, 50h
 * 00000001C003D2AC: movzx   ebx, [rsp+58h+arg_30]
 * 00000001C003D2B4: mov     rsi, r9
 * 00000001C003D2B7: mov     dil, r8b
 * 00000001C003D2BA: mov     ebp, 8
 * 00000001C003D2BF: test    dl, dl
 * 00000001C003D2C1: jnz     loc_1C00FF6DA
 * 00000001C003D2C7: test    dil, dil
 * 00000001C003D2CA: jz      short loc_1C003D322
 * 00000001C003D2CC: and     [rsp+58h+var_10], 0
 * 00000001C003D2D2: lea     rax, [rsp+58h+arg_48]
 * 00000001C003D2DA: mov     r9, [rsp+58h+arg_38]
 * 00000001C003D2E2: mov     rcx, rsi
 * 00000001C003D2E5: mov     r8d, [rsp+58h+arg_28]
 * 00000001C003D2ED: movzx   edx, [rsp+58h+arg_20]
 * 00000001C003D2F5: mov     [rsp+58h+var_18], rbp
 * 00000001C003D2FA: mov     [rsp+58h+var_20], rax
 * 00000001C003D2FF: lea     rax, [rsp+58h+arg_40]
 * 00000001C003D307: mov     [rsp+58h+var_28], rbp
 * 00000001C003D30C: mov     [rsp+58h+var_30], rax
 * 00000001C003D311: mov     word ptr [rsp+58h+var_38], bx
 * 00000001C003D316: call    cs:__imp_WppAutoLogTrace
 * 00000001C003D31D: nop     dword ptr [rax+rax+00h]
 * 00000001C003D322: mov     rbx, [rsp+58h+arg_0]
 * 00000001C003D327: mov     rbp, [rsp+58h+arg_8]
 * 00000001C003D32C: mov     rsi, [rsp+58h+arg_10]
 * 00000001C003D331: add     rsp, 50h
 * 00000001C003D335: pop     rdi
 * 00000001C003D336: retn
 * 00000001C00FF6DA: and     [rsp+58h+var_18], 0
 * 00000001C00FF6E0: lea     rdx, [rsp+58h+arg_48]
 * 00000001C00FF6E8: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00FF6EF: mov     r9d, ebx
 * 00000001C00FF6F2: mov     r8, [rsp+58h+arg_38]
 * 00000001C00FF6FA: mov     [rsp+58h+var_20], rbp
 * 00000001C00FF6FF: mov     [rsp+58h+var_28], rdx
 * 00000001C00FF704: lea     rdx, [rsp+58h+arg_40]
 * 00000001C00FF70C: mov     [rsp+58h+var_30], rbp
 * 00000001C00FF711: mov     [rsp+58h+var_38], rdx
 * 00000001C00FF716: mov     edx, 2Bh ; '+'
 * 00000001C00FF71B: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00FF721: nop
 * 00000001C00FF722: jmp     loc_1C003D2C7
 */
