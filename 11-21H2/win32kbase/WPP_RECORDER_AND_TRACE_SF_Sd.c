/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_sd @ 0x1C01E7350
 * Callers:
 *     ActivateKSTInputProcessingHelper @ 0x1C0054AB4 (ActivateKSTInputProcessingHelper.c)
 *     _anonymous_namespace_::InitializeInputSensorPass1Worker @ 0x1C0054C14 (_anonymous_namespace_--InitializeInputSensorPass1Worker.c)
 *     ?HitTestRejectionRegion@DelayZonePalmRejection@@AEAA_NPEAXUtagPOINT@@1PEA_NPEAUCDelayZonePanelTelemetryData@@@Z @ 0x1C01E5E30 (-HitTestRejectionRegion@DelayZonePalmRejection@@AEAA_NPEAXUtagPOINT@@1PEA_NPEAUCDelayZonePanelTe.c)
 *     InitializeInputSensorsOnSharedThread @ 0x1C01E7CD4 (InitializeInputSensorsOnSharedThread.c)
 *     ?Initialize@CIVChannel@@QEAAXXZ @ 0x1C01F654C (-Initialize@CIVChannel@@QEAAXXZ.c)
 *     ?Uninitialize@CIVChannel@@QEAAXXZ @ 0x1C01F7658 (-Uninitialize@CIVChannel@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_sd @ 0x1C01E7350
 * Reason: Hex-Rays returned no pseudocode for 0x1C01E7350
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C01E7350: mov     rax, rsp
 * 00000001C01E7353: mov     [rax+8], rbx
 * 00000001C01E7357: mov     [rax+10h], rbp
 * 00000001C01E735B: mov     [rax+18h], rsi
 * 00000001C01E735F: mov     [rax+20h], rdi
 * 00000001C01E7363: push    r14
 * 00000001C01E7365: sub     rsp, 50h
 * 00000001C01E7369: mov     r14, qword ptr cs:WPP_MAIN_CB.Queue
 * 00000001C01E7370: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C01E7374: mov     rdi, [rsp+58h+arg_40]
 * 00000001C01E737C: mov     sil, r8b
 * 00000001C01E737F: movzx   ebp, [rsp+58h+arg_30]
 * 00000001C01E7387: mov     r11, rcx
 * 00000001C01E738A: lea     r8, aNull; "NULL"
 * 00000001C01E7391: test    dl, dl
 * 00000001C01E7393: jz      short loc_1C01E740A
 * 00000001C01E7395: mov     r10, cs:pfnWppTraceMessage
 * 00000001C01E739C: test    rdi, rdi
 * 00000001C01E739F: jz      short loc_1C01E73B2
 * 00000001C01E73A1: mov     rax, rbx
 * 00000001C01E73A4: inc     rax
 * 00000001C01E73A7: cmp     byte ptr [rdi+rax], 0
 * 00000001C01E73AB: jnz     short loc_1C01E73A4
 * 00000001C01E73AD: inc     rax
 * 00000001C01E73B0: jmp     short loc_1C01E73B7
 * 00000001C01E73B2: mov     eax, 5
 * 00000001C01E73B7: lea     rdx, [rsp+58h+arg_48]
 * 00000001C01E73BF: test    rdi, rdi
 * 00000001C01E73C2: mov     rcx, rdi
 * 00000001C01E73C5: mov     r9d, ebp
 * 00000001C01E73C8: cmovz   rcx, r8
 * 00000001C01E73CC: and     [rsp+58h+var_18], 0
 * 00000001C01E73D2: mov     r8, [rsp+58h+arg_38]
 * 00000001C01E73DA: mov     [rsp+58h+var_20], 4
 * 00000001C01E73E3: mov     [rsp+58h+var_28], rdx
 * 00000001C01E73E8: mov     edx, 2Bh ; '+'
 * 00000001C01E73ED: mov     [rsp+58h+var_30], rax
 * 00000001C01E73F2: mov     rax, r10
 * 00000001C01E73F5: mov     [rsp+58h+var_38], rcx
 * 00000001C01E73FA: mov     rcx, r11
 * 00000001C01E73FD: call    cs:__guard_dispatch_icall_fptr
 * 00000001C01E7403: lea     r8, aNull; "NULL"
 * 00000001C01E740A: test    sil, sil
 * 00000001C01E740D: jz      short loc_1C01E7480
 * 00000001C01E740F: test    rdi, rdi
 * 00000001C01E7412: jz      short loc_1C01E7422
 * 00000001C01E7414: inc     rbx
 * 00000001C01E7417: cmp     byte ptr [rdi+rbx], 0
 * 00000001C01E741B: jnz     short loc_1C01E7414
 * 00000001C01E741D: inc     rbx
 * 00000001C01E7420: jmp     short loc_1C01E7427
 * 00000001C01E7422: mov     ebx, 5
 * 00000001C01E7427: mov     r9, [rsp+58h+arg_38]
 * 00000001C01E742F: lea     rax, [rsp+58h+arg_48]
 * 00000001C01E7437: movzx   edx, [rsp+58h+arg_20]
 * 00000001C01E743F: test    rdi, rdi
 * 00000001C01E7442: mov     rcx, r14
 * 00000001C01E7445: cmovz   rdi, r8
 * 00000001C01E7449: and     [rsp+58h+var_10], 0
 * 00000001C01E744F: mov     r8d, [rsp+58h+arg_28]
 * 00000001C01E7457: mov     [rsp+58h+var_18], 4
 * 00000001C01E7460: mov     [rsp+58h+var_20], rax
 * 00000001C01E7465: mov     [rsp+58h+var_28], rbx
 * 00000001C01E746A: mov     [rsp+58h+var_30], rdi
 * 00000001C01E746F: mov     word ptr [rsp+58h+var_38], bp
 * 00000001C01E7474: call    cs:__imp_WppAutoLogTrace
 * 00000001C01E747B: nop     dword ptr [rax+rax+00h]
 * 00000001C01E7480: mov     rbx, [rsp+58h+arg_0]
 * 00000001C01E7485: mov     rbp, [rsp+58h+arg_8]
 * 00000001C01E748A: mov     rsi, [rsp+58h+arg_10]
 * 00000001C01E748F: mov     rdi, [rsp+58h+arg_18]
 * 00000001C01E7494: add     rsp, 50h
 * 00000001C01E7498: pop     r14
 * 00000001C01E749A: retn
 */
