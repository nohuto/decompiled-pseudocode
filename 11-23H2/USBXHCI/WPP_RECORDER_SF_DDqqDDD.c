/*
 * XREFs of WPP_RECORDER_SF_DDqqDDD @ 0x1C004689C
 * Callers:
 *     Isoch_Stage_MapIntoRing @ 0x1C0001050 (Isoch_Stage_MapIntoRing.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDqqDDD @ 0x1C004689C
 * Reason: Hex-Rays returned no pseudocode for 0x1C004689C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C004689C: mov     r11, rsp
 * 00000001C004689F: mov     [r11+8], rbx
 * 00000001C00468A3: mov     [r11+10h], rsi
 * 00000001C00468A7: mov     [r11+18h], rdi
 * 00000001C00468AB: mov     [r11+20h], r14
 * 00000001C00468AF: push    rbp
 * 00000001C00468B0: lea     rbp, [r11-1Fh]
 * 00000001C00468B4: sub     rsp, 0A0h
 * 00000001C00468BB: mov     edi, 4
 * 00000001C00468C0: mov     rbx, rcx
 * 00000001C00468C3: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00468CA: lea     esi, [rdi+4]
 * 00000001C00468CD: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C00468D4: lea     r14d, [rdi+2Eh]
 * 00000001C00468D8: jz      short loc_1C0046958
 * 00000001C00468DA: cmp     byte ptr [rcx+29h], 2
 * 00000001C00468DE: jb      short loc_1C0046958
 * 00000001C00468E0: and     qword ptr [r11-18h], 0
 * 00000001C00468E5: lea     rdx, [rbp+17h+arg_58]
 * 00000001C00468E9: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00468F0: lea     r8, WPP_393df0ddb70a3b662b6ac53bc5b55086_Traceguids
 * 00000001C00468F7: mov     rcx, [rcx+18h]
 * 00000001C00468FB: mov     r9d, r14d
 * 00000001C00468FE: mov     [r11-20h], rdi
 * 00000001C0046902: mov     [r11-28h], rdx
 * 00000001C0046906: lea     rdx, [rbp+17h+arg_50]
 * 00000001C004690A: mov     [r11-30h], rdi
 * 00000001C004690E: mov     [r11-38h], rdx
 * 00000001C0046912: lea     rdx, [rbp+17h+arg_48]
 * 00000001C0046916: mov     [r11-40h], rdi
 * 00000001C004691A: mov     [r11-48h], rdx
 * 00000001C004691E: lea     rdx, [rbp+17h+arg_40]
 * 00000001C0046922: mov     [r11-50h], rsi
 * 00000001C0046926: mov     [r11-58h], rdx
 * 00000001C004692A: lea     rdx, [rbp+17h+arg_38]
 * 00000001C004692E: mov     [r11-60h], rsi
 * 00000001C0046932: mov     [r11-68h], rdx
 * 00000001C0046936: lea     rdx, [rbp+17h+arg_30]
 * 00000001C004693A: mov     [r11-70h], rdi
 * 00000001C004693E: mov     [r11-78h], rdx
 * 00000001C0046942: lea     rdx, [rbp+17h+arg_28]
 * 00000001C0046946: mov     [r11-80h], rdi
 * 00000001C004694A: mov     [rsp+0A0h+var_80], rdx
 * 00000001C004694F: lea     edx, [rdi+27h]
 * 00000001C0046952: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0046958: and     qword ptr [rsp+0A0h+var_8], 0
 * 00000001C0046961: lea     rax, [rbp+17h+arg_58]
 * 00000001C0046965: mov     [rsp+0A0h+var_10], rdi
 * 00000001C004696D: lea     r9, WPP_393df0ddb70a3b662b6ac53bc5b55086_Traceguids
 * 00000001C0046974: mov     [rsp+0A0h+var_18], rax
 * 00000001C004697C: mov     edx, 2
 * 00000001C0046981: mov     [rsp+0A0h+var_20], rdi
 * 00000001C0046989: lea     rax, [rbp+17h+arg_50]
 * 00000001C004698D: mov     [rsp+0A0h+var_28], rax
 * 00000001C0046992: mov     rcx, rbx
 * 00000001C0046995: mov     [rsp+0A0h+var_30], rdi
 * 00000001C004699A: lea     rax, [rbp+17h+arg_48]
 * 00000001C004699E: mov     [rsp+0A0h+var_38], rax
 * 00000001C00469A3: lea     r8d, [rdx+0Ch]
 * 00000001C00469A7: mov     [rsp+0A0h+var_40], rsi
 * 00000001C00469AC: lea     rax, [rbp+17h+arg_40]
 * 00000001C00469B0: mov     [rsp+0A0h+var_48], rax
 * 00000001C00469B5: lea     rax, [rbp+17h+arg_38]
 * 00000001C00469B9: mov     [rsp+0A0h+var_50], rsi
 * 00000001C00469BE: mov     [rsp+0A0h+var_58], rax
 * 00000001C00469C3: lea     rax, [rbp+17h+arg_30]
 * 00000001C00469C7: mov     [rsp+0A0h+var_60], rdi
 * 00000001C00469CC: mov     [rsp+0A0h+var_68], rax
 * 00000001C00469D1: lea     rax, [rbp+17h+arg_28]
 * 00000001C00469D5: mov     [rsp+0A0h+var_70], rdi
 * 00000001C00469DA: mov     [rsp+0A0h+var_78], rax
 * 00000001C00469DF: mov     word ptr [rsp+0A0h+var_80], r14w
 * 00000001C00469E5: call    cs:__imp_WppAutoLogTrace
 * 00000001C00469EC: nop     dword ptr [rax+rax+00h]
 * 00000001C00469F1: lea     r11, [rsp+0A0h+var_s0]
 * 00000001C00469F9: mov     rbx, [r11+10h]
 * 00000001C00469FD: mov     rsi, [r11+18h]
 * 00000001C0046A01: mov     rdi, [r11+20h]
 * 00000001C0046A05: mov     r14, [r11+28h]
 * 00000001C0046A09: mov     rsp, r11
 * 00000001C0046A0C: pop     rbp
 * 00000001C0046A0D: retn
 */
