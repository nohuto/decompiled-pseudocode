/*
 * XREFs of WPP_RECORDER_SF_DDqqDDD @ 0x1C004675C
 * Callers:
 *     Isoch_Stage_MapIntoRing @ 0x1C0001050 (Isoch_Stage_MapIntoRing.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDqqDDD @ 0x1C004675C
 * Reason: Hex-Rays returned no pseudocode for 0x1C004675C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C004675C: mov     r11, rsp
 * 00000001C004675F: mov     [r11+8], rbx
 * 00000001C0046763: mov     [r11+10h], rsi
 * 00000001C0046767: mov     [r11+18h], rdi
 * 00000001C004676B: mov     [r11+20h], r14
 * 00000001C004676F: push    rbp
 * 00000001C0046770: lea     rbp, [r11-1Fh]
 * 00000001C0046774: sub     rsp, 0A0h
 * 00000001C004677B: mov     edi, 4
 * 00000001C0046780: mov     rbx, rcx
 * 00000001C0046783: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C004678A: lea     esi, [rdi+4]
 * 00000001C004678D: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C0046794: lea     r14d, [rdi+2Eh]
 * 00000001C0046798: jz      short loc_1C0046818
 * 00000001C004679A: cmp     byte ptr [rcx+29h], 2
 * 00000001C004679E: jb      short loc_1C0046818
 * 00000001C00467A0: and     qword ptr [r11-18h], 0
 * 00000001C00467A5: lea     rdx, [rbp+17h+arg_58]
 * 00000001C00467A9: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00467B0: lea     r8, WPP_393df0ddb70a3b662b6ac53bc5b55086_Traceguids
 * 00000001C00467B7: mov     rcx, [rcx+18h]
 * 00000001C00467BB: mov     r9d, r14d
 * 00000001C00467BE: mov     [r11-20h], rdi
 * 00000001C00467C2: mov     [r11-28h], rdx
 * 00000001C00467C6: lea     rdx, [rbp+17h+arg_50]
 * 00000001C00467CA: mov     [r11-30h], rdi
 * 00000001C00467CE: mov     [r11-38h], rdx
 * 00000001C00467D2: lea     rdx, [rbp+17h+arg_48]
 * 00000001C00467D6: mov     [r11-40h], rdi
 * 00000001C00467DA: mov     [r11-48h], rdx
 * 00000001C00467DE: lea     rdx, [rbp+17h+arg_40]
 * 00000001C00467E2: mov     [r11-50h], rsi
 * 00000001C00467E6: mov     [r11-58h], rdx
 * 00000001C00467EA: lea     rdx, [rbp+17h+arg_38]
 * 00000001C00467EE: mov     [r11-60h], rsi
 * 00000001C00467F2: mov     [r11-68h], rdx
 * 00000001C00467F6: lea     rdx, [rbp+17h+arg_30]
 * 00000001C00467FA: mov     [r11-70h], rdi
 * 00000001C00467FE: mov     [r11-78h], rdx
 * 00000001C0046802: lea     rdx, [rbp+17h+arg_28]
 * 00000001C0046806: mov     [r11-80h], rdi
 * 00000001C004680A: mov     [rsp+0A0h+var_80], rdx
 * 00000001C004680F: lea     edx, [rdi+27h]
 * 00000001C0046812: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0046818: and     qword ptr [rsp+0A0h+var_8], 0
 * 00000001C0046821: lea     rax, [rbp+17h+arg_58]
 * 00000001C0046825: mov     [rsp+0A0h+var_10], rdi
 * 00000001C004682D: lea     r9, WPP_393df0ddb70a3b662b6ac53bc5b55086_Traceguids
 * 00000001C0046834: mov     [rsp+0A0h+var_18], rax
 * 00000001C004683C: mov     edx, 2
 * 00000001C0046841: mov     [rsp+0A0h+var_20], rdi
 * 00000001C0046849: lea     rax, [rbp+17h+arg_50]
 * 00000001C004684D: mov     [rsp+0A0h+var_28], rax
 * 00000001C0046852: mov     rcx, rbx
 * 00000001C0046855: mov     [rsp+0A0h+var_30], rdi
 * 00000001C004685A: lea     rax, [rbp+17h+arg_48]
 * 00000001C004685E: mov     [rsp+0A0h+var_38], rax
 * 00000001C0046863: lea     r8d, [rdx+0Ch]
 * 00000001C0046867: mov     [rsp+0A0h+var_40], rsi
 * 00000001C004686C: lea     rax, [rbp+17h+arg_40]
 * 00000001C0046870: mov     [rsp+0A0h+var_48], rax
 * 00000001C0046875: lea     rax, [rbp+17h+arg_38]
 * 00000001C0046879: mov     [rsp+0A0h+var_50], rsi
 * 00000001C004687E: mov     [rsp+0A0h+var_58], rax
 * 00000001C0046883: lea     rax, [rbp+17h+arg_30]
 * 00000001C0046887: mov     [rsp+0A0h+var_60], rdi
 * 00000001C004688C: mov     [rsp+0A0h+var_68], rax
 * 00000001C0046891: lea     rax, [rbp+17h+arg_28]
 * 00000001C0046895: mov     [rsp+0A0h+var_70], rdi
 * 00000001C004689A: mov     [rsp+0A0h+var_78], rax
 * 00000001C004689F: mov     word ptr [rsp+0A0h+var_80], r14w
 * 00000001C00468A5: call    cs:__imp_WppAutoLogTrace
 * 00000001C00468AC: nop     dword ptr [rax+rax+00h]
 * 00000001C00468B1: lea     r11, [rsp+0A0h+var_s0]
 * 00000001C00468B9: mov     rbx, [r11+10h]
 * 00000001C00468BD: mov     rsi, [r11+18h]
 * 00000001C00468C1: mov     rdi, [r11+20h]
 * 00000001C00468C5: mov     r14, [r11+28h]
 * 00000001C00468C9: mov     rsp, r11
 * 00000001C00468CC: pop     rbp
 * 00000001C00468CD: retn
 */
