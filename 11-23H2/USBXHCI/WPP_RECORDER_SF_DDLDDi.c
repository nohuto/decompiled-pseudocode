/*
 * XREFs of WPP_RECORDER_SF_DDLDDi @ 0x1C0046374
 * Callers:
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C0001EC0 (Isoch_ProcessTransferEventWithED1.c)
 *     Isoch_ProcessTransferEventWithED0 @ 0x1C0044D34 (Isoch_ProcessTransferEventWithED0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDLDDi @ 0x1C0046374
 * Reason: Hex-Rays returned no pseudocode for 0x1C0046374
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0046374: mov     r11, rsp
 * 00000001C0046377: mov     [r11+8], rbx
 * 00000001C004637B: mov     [r11+10h], rsi
 * 00000001C004637F: mov     [r11+18h], rdi
 * 00000001C0046383: mov     [r11+20h], r14
 * 00000001C0046387: push    rbp
 * 00000001C0046388: lea     rbp, [r11-27h]
 * 00000001C004638C: sub     rsp, 90h
 * 00000001C0046393: mov     rsi, rcx
 * 00000001C0046396: movzx   edi, r9w
 * 00000001C004639A: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00463A1: mov     r14d, 4
 * 00000001C00463A7: movzx   ebx, dl
 * 00000001C00463AA: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C00463B1: jz      short loc_1C0046428
 * 00000001C00463B3: cmp     [rcx+29h], bl
 * 00000001C00463B6: jb      short loc_1C0046428
 * 00000001C00463B8: and     qword ptr [r11-18h], 0
 * 00000001C00463BD: lea     rdx, [rbp+1Fh+arg_50]
 * 00000001C00463C1: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00463C8: lea     r8, WPP_393df0ddb70a3b662b6ac53bc5b55086_Traceguids
 * 00000001C00463CF: mov     rcx, [rcx+18h]
 * 00000001C00463D3: mov     r9d, edi
 * 00000001C00463D6: mov     qword ptr [r11-20h], 8
 * 00000001C00463DE: mov     [r11-28h], rdx
 * 00000001C00463E2: lea     rdx, [rbp+1Fh+arg_48]
 * 00000001C00463E6: mov     [r11-30h], r14
 * 00000001C00463EA: mov     [r11-38h], rdx
 * 00000001C00463EE: lea     rdx, [rbp+1Fh+arg_40]
 * 00000001C00463F2: mov     [r11-40h], r14
 * 00000001C00463F6: mov     [r11-48h], rdx
 * 00000001C00463FA: lea     rdx, [rbp+1Fh+arg_38]
 * 00000001C00463FE: mov     [r11-50h], r14
 * 00000001C0046402: mov     [r11-58h], rdx
 * 00000001C0046406: lea     rdx, [rbp+1Fh+arg_30]
 * 00000001C004640A: mov     [r11-60h], r14
 * 00000001C004640E: mov     [r11-68h], rdx
 * 00000001C0046412: lea     rdx, [rbp+1Fh+arg_28]
 * 00000001C0046416: mov     [r11-70h], r14
 * 00000001C004641A: mov     [r11-78h], rdx
 * 00000001C004641E: lea     edx, [r14+27h]
 * 00000001C0046422: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0046428: and     qword ptr [rsp+90h+var_8], 0
 * 00000001C0046431: lea     rax, [rbp+1Fh+arg_50]
 * 00000001C0046435: mov     [rsp+90h+var_10], 8
 * 00000001C0046441: lea     r9, WPP_393df0ddb70a3b662b6ac53bc5b55086_Traceguids
 * 00000001C0046448: mov     [rsp+90h+var_18], rax
 * 00000001C004644D: mov     r8d, 0Eh
 * 00000001C0046453: mov     [rsp+90h+var_20], r14
 * 00000001C0046458: lea     rax, [rbp+1Fh+arg_48]
 * 00000001C004645C: mov     [rsp+90h+var_28], rax
 * 00000001C0046461: mov     edx, ebx
 * 00000001C0046463: mov     [rsp+90h+var_30], r14
 * 00000001C0046468: lea     rax, [rbp+1Fh+arg_40]
 * 00000001C004646C: mov     [rsp+90h+var_38], rax
 * 00000001C0046471: mov     rcx, rsi
 * 00000001C0046474: mov     [rsp+90h+var_40], r14
 * 00000001C0046479: lea     rax, [rbp+1Fh+arg_38]
 * 00000001C004647D: mov     [rsp+90h+var_48], rax
 * 00000001C0046482: lea     rax, [rbp+1Fh+arg_30]
 * 00000001C0046486: mov     [rsp+90h+var_50], r14
 * 00000001C004648B: mov     [rsp+90h+var_58], rax
 * 00000001C0046490: lea     rax, [rbp+1Fh+arg_28]
 * 00000001C0046494: mov     [rsp+90h+var_60], r14
 * 00000001C0046499: mov     [rsp+90h+var_68], rax
 * 00000001C004649E: mov     word ptr [rsp+90h+var_70], di
 * 00000001C00464A3: call    cs:__imp_WppAutoLogTrace
 * 00000001C00464AA: nop     dword ptr [rax+rax+00h]
 * 00000001C00464AF: lea     r11, [rsp+90h+var_s0]
 * 00000001C00464B7: mov     rbx, [r11+10h]
 * 00000001C00464BB: mov     rsi, [r11+18h]
 * 00000001C00464BF: mov     rdi, [r11+20h]
 * 00000001C00464C3: mov     r14, [r11+28h]
 * 00000001C00464C7: mov     rsp, r11
 * 00000001C00464CA: pop     rbp
 * 00000001C00464CB: retn
 */
