/*
 * XREFs of WPP_RECORDER_SF_DDLDDi @ 0x1C0046234
 * Callers:
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C0001EC0 (Isoch_ProcessTransferEventWithED1.c)
 *     Isoch_ProcessTransferEventWithED0 @ 0x1C0044BF4 (Isoch_ProcessTransferEventWithED0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDLDDi @ 0x1C0046234
 * Reason: Hex-Rays returned no pseudocode for 0x1C0046234
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0046234: mov     r11, rsp
 * 00000001C0046237: mov     [r11+8], rbx
 * 00000001C004623B: mov     [r11+10h], rsi
 * 00000001C004623F: mov     [r11+18h], rdi
 * 00000001C0046243: mov     [r11+20h], r14
 * 00000001C0046247: push    rbp
 * 00000001C0046248: lea     rbp, [r11-27h]
 * 00000001C004624C: sub     rsp, 90h
 * 00000001C0046253: mov     rsi, rcx
 * 00000001C0046256: movzx   edi, r9w
 * 00000001C004625A: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0046261: mov     r14d, 4
 * 00000001C0046267: movzx   ebx, dl
 * 00000001C004626A: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C0046271: jz      short loc_1C00462E8
 * 00000001C0046273: cmp     [rcx+29h], bl
 * 00000001C0046276: jb      short loc_1C00462E8
 * 00000001C0046278: and     qword ptr [r11-18h], 0
 * 00000001C004627D: lea     rdx, [rbp+1Fh+arg_50]
 * 00000001C0046281: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0046288: lea     r8, WPP_393df0ddb70a3b662b6ac53bc5b55086_Traceguids
 * 00000001C004628F: mov     rcx, [rcx+18h]
 * 00000001C0046293: mov     r9d, edi
 * 00000001C0046296: mov     qword ptr [r11-20h], 8
 * 00000001C004629E: mov     [r11-28h], rdx
 * 00000001C00462A2: lea     rdx, [rbp+1Fh+arg_48]
 * 00000001C00462A6: mov     [r11-30h], r14
 * 00000001C00462AA: mov     [r11-38h], rdx
 * 00000001C00462AE: lea     rdx, [rbp+1Fh+arg_40]
 * 00000001C00462B2: mov     [r11-40h], r14
 * 00000001C00462B6: mov     [r11-48h], rdx
 * 00000001C00462BA: lea     rdx, [rbp+1Fh+arg_38]
 * 00000001C00462BE: mov     [r11-50h], r14
 * 00000001C00462C2: mov     [r11-58h], rdx
 * 00000001C00462C6: lea     rdx, [rbp+1Fh+arg_30]
 * 00000001C00462CA: mov     [r11-60h], r14
 * 00000001C00462CE: mov     [r11-68h], rdx
 * 00000001C00462D2: lea     rdx, [rbp+1Fh+arg_28]
 * 00000001C00462D6: mov     [r11-70h], r14
 * 00000001C00462DA: mov     [r11-78h], rdx
 * 00000001C00462DE: lea     edx, [r14+27h]
 * 00000001C00462E2: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00462E8: and     qword ptr [rsp+90h+var_8], 0
 * 00000001C00462F1: lea     rax, [rbp+1Fh+arg_50]
 * 00000001C00462F5: mov     [rsp+90h+var_10], 8
 * 00000001C0046301: lea     r9, WPP_393df0ddb70a3b662b6ac53bc5b55086_Traceguids
 * 00000001C0046308: mov     [rsp+90h+var_18], rax
 * 00000001C004630D: mov     r8d, 0Eh
 * 00000001C0046313: mov     [rsp+90h+var_20], r14
 * 00000001C0046318: lea     rax, [rbp+1Fh+arg_48]
 * 00000001C004631C: mov     [rsp+90h+var_28], rax
 * 00000001C0046321: mov     edx, ebx
 * 00000001C0046323: mov     [rsp+90h+var_30], r14
 * 00000001C0046328: lea     rax, [rbp+1Fh+arg_40]
 * 00000001C004632C: mov     [rsp+90h+var_38], rax
 * 00000001C0046331: mov     rcx, rsi
 * 00000001C0046334: mov     [rsp+90h+var_40], r14
 * 00000001C0046339: lea     rax, [rbp+1Fh+arg_38]
 * 00000001C004633D: mov     [rsp+90h+var_48], rax
 * 00000001C0046342: lea     rax, [rbp+1Fh+arg_30]
 * 00000001C0046346: mov     [rsp+90h+var_50], r14
 * 00000001C004634B: mov     [rsp+90h+var_58], rax
 * 00000001C0046350: lea     rax, [rbp+1Fh+arg_28]
 * 00000001C0046354: mov     [rsp+90h+var_60], r14
 * 00000001C0046359: mov     [rsp+90h+var_68], rax
 * 00000001C004635E: mov     word ptr [rsp+90h+var_70], di
 * 00000001C0046363: call    cs:__imp_WppAutoLogTrace
 * 00000001C004636A: nop     dword ptr [rax+rax+00h]
 * 00000001C004636F: lea     r11, [rsp+90h+var_s0]
 * 00000001C0046377: mov     rbx, [r11+10h]
 * 00000001C004637B: mov     rsi, [r11+18h]
 * 00000001C004637F: mov     rdi, [r11+20h]
 * 00000001C0046383: mov     r14, [r11+28h]
 * 00000001C0046387: mov     rsp, r11
 * 00000001C004638A: pop     rbp
 * 00000001C004638B: retn
 */
