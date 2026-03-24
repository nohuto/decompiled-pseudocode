/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qi @ 0x1C01A9144
 * Callers:
 *     rimFindOtherQueuedFrames @ 0x1C01A9290 (rimFindOtherQueuedFrames.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C01A9638 (rimProcessAnyQueuedCompleteFrames.c)
 *     rimQueueCompleteFrame @ 0x1C01A9AEC (rimQueueCompleteFrame.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_qi @ 0x1C01A9144
 * Reason: Hex-Rays returned no pseudocode for 0x1C01A9144
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C01A9144: mov     r11, rsp
 * 00000001C01A9147: mov     [r11+8], rbx
 * 00000001C01A914B: mov     [r11+10h], rbp
 * 00000001C01A914F: mov     [r11+18h], rsi
 * 00000001C01A9153: push    rdi
 * 00000001C01A9154: sub     rsp, 50h
 * 00000001C01A9158: mov     rsi, cs:?gRimLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gRimLog
 * 00000001C01A915F: mov     dil, r8b
 * 00000001C01A9162: movzx   ebx, [rsp+58h+arg_30]
 * 00000001C01A916A: mov     ebp, 8
 * 00000001C01A916F: test    dl, dl
 * 00000001C01A9171: jz      short loc_1C01A91AA
 * 00000001C01A9173: and     qword ptr [r11-18h], 0
 * 00000001C01A9178: lea     rdx, [r11+50h]
 * 00000001C01A917C: mov     rax, cs:pfnWppTraceMessage
 * 00000001C01A9183: lea     r8, WPP_a2b4b56089d43a30275be3b006f568a3_Traceguids
 * 00000001C01A918A: mov     [r11-20h], rbp
 * 00000001C01A918E: mov     r9d, ebx
 * 00000001C01A9191: mov     [r11-28h], rdx
 * 00000001C01A9195: lea     rdx, [r11+48h]
 * 00000001C01A9199: mov     [r11-30h], rbp
 * 00000001C01A919D: mov     [r11-38h], rdx
 * 00000001C01A91A1: lea     edx, [rbp+23h]
 * 00000001C01A91A4: call    cs:__guard_dispatch_icall_fptr
 * 00000001C01A91AA: test    dil, dil
 * 00000001C01A91AD: jz      short loc_1C01A91FD
 * 00000001C01A91AF: and     [rsp+58h+var_10], 0
 * 00000001C01A91B5: lea     rax, [rsp+58h+arg_48]
 * 00000001C01A91BD: mov     [rsp+58h+var_18], rbp
 * 00000001C01A91C2: lea     r9, WPP_a2b4b56089d43a30275be3b006f568a3_Traceguids
 * 00000001C01A91C9: mov     [rsp+58h+var_20], rax
 * 00000001C01A91CE: mov     edx, 4
 * 00000001C01A91D3: lea     rax, [rsp+58h+arg_40]
 * 00000001C01A91DB: mov     [rsp+58h+var_28], rbp
 * 00000001C01A91E0: mov     [rsp+58h+var_30], rax
 * 00000001C01A91E5: mov     rcx, rsi
 * 00000001C01A91E8: mov     [rsp+58h+var_38], bx
 * 00000001C01A91ED: lea     r8d, [rdx-3]
 * 00000001C01A91F1: call    cs:__imp_WppAutoLogTrace
 * 00000001C01A91F8: nop     dword ptr [rax+rax+00h]
 * 00000001C01A91FD: mov     rbx, [rsp+58h+arg_0]
 * 00000001C01A9202: mov     rbp, [rsp+58h+arg_8]
 * 00000001C01A9207: mov     rsi, [rsp+58h+arg_10]
 * 00000001C01A920C: add     rsp, 50h
 * 00000001C01A9210: pop     rdi
 * 00000001C01A9211: retn
 */
