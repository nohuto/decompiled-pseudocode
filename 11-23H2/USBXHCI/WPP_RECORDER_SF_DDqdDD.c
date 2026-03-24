/*
 * XREFs of WPP_RECORDER_SF_DDqDDD @ 0x1C00465EC
 * Callers:
 *     Isoch_PrepareStage @ 0x1C0004AD0 (Isoch_PrepareStage.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDqDDD @ 0x1C00465EC
 * Reason: Hex-Rays returned no pseudocode for 0x1C00465EC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00465EC: mov     r11, rsp
 * 00000001C00465EF: mov     [r11+8], rbx
 * 00000001C00465F3: mov     [r11+10h], rdi
 * 00000001C00465F7: mov     [r11+18h], r14
 * 00000001C00465FB: push    rbp
 * 00000001C00465FC: lea     rbp, [r11-27h]
 * 00000001C0046600: sub     rsp, 90h
 * 00000001C0046607: mov     rbx, rcx
 * 00000001C004660A: mov     edi, 4
 * 00000001C004660F: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0046616: lea     r14d, [rdi+2Ah]
 * 00000001C004661A: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C0046621: jz      short loc_1C0046698
 * 00000001C0046623: cmp     byte ptr [rcx+29h], 5
 * 00000001C0046627: jb      short loc_1C0046698
 * 00000001C0046629: and     qword ptr [r11-18h], 0
 * 00000001C004662E: lea     rdx, [rbp+1Fh+arg_50]
 * 00000001C0046632: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0046639: lea     r8, WPP_393df0ddb70a3b662b6ac53bc5b55086_Traceguids
 * 00000001C0046640: mov     rcx, [rcx+18h]
 * 00000001C0046644: mov     r9d, r14d
 * 00000001C0046647: mov     [r11-20h], rdi
 * 00000001C004664B: mov     [r11-28h], rdx
 * 00000001C004664F: lea     rdx, [rbp+1Fh+arg_48]
 * 00000001C0046653: mov     [r11-30h], rdi
 * 00000001C0046657: mov     [r11-38h], rdx
 * 00000001C004665B: lea     rdx, [rbp+1Fh+arg_40]
 * 00000001C004665F: mov     [r11-40h], rdi
 * 00000001C0046663: mov     [r11-48h], rdx
 * 00000001C0046667: lea     rdx, [rbp+1Fh+arg_38]
 * 00000001C004666B: mov     qword ptr [r11-50h], 8
 * 00000001C0046673: mov     [r11-58h], rdx
 * 00000001C0046677: lea     rdx, [rbp+1Fh+arg_30]
 * 00000001C004667B: mov     [r11-60h], rdi
 * 00000001C004667F: mov     [r11-68h], rdx
 * 00000001C0046683: lea     rdx, [rbp+1Fh+arg_28]
 * 00000001C0046687: mov     [r11-70h], rdi
 * 00000001C004668B: mov     [r11-78h], rdx
 * 00000001C004668F: lea     edx, [rdi+27h]
 * 00000001C0046692: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0046698: and     qword ptr [rsp+90h+var_8], 0
 * 00000001C00466A1: lea     rax, [rbp+1Fh+arg_50]
 * 00000001C00466A5: mov     [rsp+90h+var_10], rdi
 * 00000001C00466AD: lea     r9, WPP_393df0ddb70a3b662b6ac53bc5b55086_Traceguids
 * 00000001C00466B4: mov     [rsp+90h+var_18], rax
 * 00000001C00466B9: mov     edx, 5
 * 00000001C00466BE: mov     [rsp+90h+var_20], rdi
 * 00000001C00466C3: lea     rax, [rbp+1Fh+arg_48]
 * 00000001C00466C7: mov     [rsp+90h+var_28], rax
 * 00000001C00466CC: mov     rcx, rbx
 * 00000001C00466CF: mov     [rsp+90h+var_30], rdi
 * 00000001C00466D4: lea     rax, [rbp+1Fh+arg_40]
 * 00000001C00466D8: mov     [rsp+90h+var_38], rax
 * 00000001C00466DD: lea     r8d, [rdx+9]
 * 00000001C00466E1: mov     [rsp+90h+var_40], 8
 * 00000001C00466EA: lea     rax, [rbp+1Fh+arg_38]
 * 00000001C00466EE: mov     [rsp+90h+var_48], rax
 * 00000001C00466F3: lea     rax, [rbp+1Fh+arg_30]
 * 00000001C00466F7: mov     [rsp+90h+var_50], rdi
 * 00000001C00466FC: mov     [rsp+90h+var_58], rax
 * 00000001C0046701: lea     rax, [rbp+1Fh+arg_28]
 * 00000001C0046705: mov     [rsp+90h+var_60], rdi
 * 00000001C004670A: mov     [rsp+90h+var_68], rax
 * 00000001C004670F: mov     word ptr [rsp+90h+var_70], r14w
 * 00000001C0046715: call    cs:__imp_WppAutoLogTrace
 * 00000001C004671C: nop     dword ptr [rax+rax+00h]
 * 00000001C0046721: lea     r11, [rsp+90h+var_s0]
 * 00000001C0046729: mov     rbx, [r11+10h]
 * 00000001C004672D: mov     rdi, [r11+18h]
 * 00000001C0046731: mov     r14, [r11+20h]
 * 00000001C0046735: mov     rsp, r11
 * 00000001C0046738: pop     rbp
 * 00000001C0046739: retn
 */
