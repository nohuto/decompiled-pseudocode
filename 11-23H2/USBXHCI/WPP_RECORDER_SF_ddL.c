/*
 * XREFs of WPP_RECORDER_SF_DDL @ 0x1C0046278
 * Callers:
 *     Isoch_ProcessSegment @ 0x1C0044754 (Isoch_ProcessSegment.c)
 *     Isoch_ProcessTransferEventWithED0 @ 0x1C0044D34 (Isoch_ProcessTransferEventWithED0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDL @ 0x1C0046278
 * Reason: Hex-Rays returned no pseudocode for 0x1C0046278
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0046278: mov     r11, rsp
 * 00000001C004627B: mov     [r11+8], rbx
 * 00000001C004627F: mov     [r11+10h], rbp
 * 00000001C0046283: mov     [r11+18h], rsi
 * 00000001C0046287: push    rdi
 * 00000001C0046288: sub     rsp, 60h
 * 00000001C004628C: mov     rsi, rcx
 * 00000001C004628F: movzx   edi, r9w
 * 00000001C0046293: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C004629A: mov     ebp, 4
 * 00000001C004629F: movzx   ebx, dl
 * 00000001C00462A2: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C00462A9: jz      short loc_1C00462F7
 * 00000001C00462AB: cmp     [rcx+29h], bl
 * 00000001C00462AE: jb      short loc_1C00462F7
 * 00000001C00462B0: and     qword ptr [r11-18h], 0
 * 00000001C00462B5: lea     rdx, [r11+40h]
 * 00000001C00462B9: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00462C0: lea     r8, WPP_393df0ddb70a3b662b6ac53bc5b55086_Traceguids
 * 00000001C00462C7: mov     rcx, [rcx+18h]
 * 00000001C00462CB: mov     r9d, edi
 * 00000001C00462CE: mov     [r11-20h], rbp
 * 00000001C00462D2: mov     [r11-28h], rdx
 * 00000001C00462D6: lea     rdx, [r11+38h]
 * 00000001C00462DA: mov     [r11-30h], rbp
 * 00000001C00462DE: mov     [r11-38h], rdx
 * 00000001C00462E2: lea     rdx, [r11+30h]
 * 00000001C00462E6: mov     [r11-40h], rbp
 * 00000001C00462EA: mov     [r11-48h], rdx
 * 00000001C00462EE: lea     edx, [rbp+27h]
 * 00000001C00462F1: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00462F7: and     [rsp+68h+var_10], 0
 * 00000001C00462FD: lea     rax, [rsp+68h+arg_38]
 * 00000001C0046305: mov     [rsp+68h+var_18], rbp
 * 00000001C004630A: lea     r9, WPP_393df0ddb70a3b662b6ac53bc5b55086_Traceguids
 * 00000001C0046311: mov     [rsp+68h+var_20], rax
 * 00000001C0046316: mov     r8d, 0Eh
 * 00000001C004631C: mov     [rsp+68h+var_28], rbp
 * 00000001C0046321: lea     rax, [rsp+68h+arg_30]
 * 00000001C0046329: mov     [rsp+68h+var_30], rax
 * 00000001C004632E: mov     edx, ebx
 * 00000001C0046330: lea     rax, [rsp+68h+arg_28]
 * 00000001C0046338: mov     [rsp+68h+var_38], rbp
 * 00000001C004633D: mov     [rsp+68h+var_40], rax
 * 00000001C0046342: mov     rcx, rsi
 * 00000001C0046345: mov     [rsp+68h+var_48], di
 * 00000001C004634A: call    cs:__imp_WppAutoLogTrace
 * 00000001C0046351: nop     dword ptr [rax+rax+00h]
 * 00000001C0046356: lea     r11, [rsp+68h+var_8]
 * 00000001C004635B: mov     rbx, [r11+10h]
 * 00000001C004635F: mov     rbp, [r11+18h]
 * 00000001C0046363: mov     rsi, [r11+20h]
 * 00000001C0046367: mov     rsp, r11
 * 00000001C004636A: pop     rdi
 * 00000001C004636B: retn
 */
