/*
 * XREFs of WPP_RECORDER_SF_DDqqDD @ 0x1C0046744
 * Callers:
 *     Isoch_PrepareStage @ 0x1C0004AD0 (Isoch_PrepareStage.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDqqDD @ 0x1C0046744
 * Reason: Hex-Rays returned no pseudocode for 0x1C0046744
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0046744: mov     r11, rsp
 * 00000001C0046747: mov     [r11+8], rbx
 * 00000001C004674B: mov     [r11+10h], rsi
 * 00000001C004674F: mov     [r11+18h], rdi
 * 00000001C0046753: mov     [r11+20h], r14
 * 00000001C0046757: push    rbp
 * 00000001C0046758: lea     rbp, [r11-27h]
 * 00000001C004675C: sub     rsp, 90h
 * 00000001C0046763: mov     edi, 4
 * 00000001C0046768: mov     rbx, rcx
 * 00000001C004676B: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0046772: lea     esi, [rdi+4]
 * 00000001C0046775: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C004677C: lea     r14d, [rdi+2Bh]
 * 00000001C0046780: jz      short loc_1C00467F3
 * 00000001C0046782: cmp     [rcx+29h], dil
 * 00000001C0046786: jb      short loc_1C00467F3
 * 00000001C0046788: and     qword ptr [r11-18h], 0
 * 00000001C004678D: lea     rdx, [rbp+1Fh+arg_50]
 * 00000001C0046791: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0046798: lea     r8, WPP_393df0ddb70a3b662b6ac53bc5b55086_Traceguids
 * 00000001C004679F: mov     rcx, [rcx+18h]
 * 00000001C00467A3: mov     r9d, r14d
 * 00000001C00467A6: mov     [r11-20h], rdi
 * 00000001C00467AA: mov     [r11-28h], rdx
 * 00000001C00467AE: lea     rdx, [rbp+1Fh+arg_48]
 * 00000001C00467B2: mov     [r11-30h], rdi
 * 00000001C00467B6: mov     [r11-38h], rdx
 * 00000001C00467BA: lea     rdx, [rbp+1Fh+arg_40]
 * 00000001C00467BE: mov     [r11-40h], rsi
 * 00000001C00467C2: mov     [r11-48h], rdx
 * 00000001C00467C6: lea     rdx, [rbp+1Fh+arg_38]
 * 00000001C00467CA: mov     [r11-50h], rsi
 * 00000001C00467CE: mov     [r11-58h], rdx
 * 00000001C00467D2: lea     rdx, [rbp+1Fh+arg_30]
 * 00000001C00467D6: mov     [r11-60h], rdi
 * 00000001C00467DA: mov     [r11-68h], rdx
 * 00000001C00467DE: lea     rdx, [rbp+1Fh+arg_28]
 * 00000001C00467E2: mov     [r11-70h], rdi
 * 00000001C00467E6: mov     [r11-78h], rdx
 * 00000001C00467EA: lea     edx, [rdi+27h]
 * 00000001C00467ED: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00467F3: and     qword ptr [rsp+90h+var_8], 0
 * 00000001C00467FC: lea     rax, [rbp+1Fh+arg_50]
 * 00000001C0046800: mov     [rsp+90h+var_10], rdi
 * 00000001C0046808: lea     r9, WPP_393df0ddb70a3b662b6ac53bc5b55086_Traceguids
 * 00000001C004680F: mov     [rsp+90h+var_18], rax
 * 00000001C0046814: mov     r8d, 0Eh
 * 00000001C004681A: mov     [rsp+90h+var_20], rdi
 * 00000001C004681F: lea     rax, [rbp+1Fh+arg_48]
 * 00000001C0046823: mov     [rsp+90h+var_28], rax
 * 00000001C0046828: mov     edx, edi
 * 00000001C004682A: mov     [rsp+90h+var_30], rsi
 * 00000001C004682F: lea     rax, [rbp+1Fh+arg_40]
 * 00000001C0046833: mov     [rsp+90h+var_38], rax
 * 00000001C0046838: mov     rcx, rbx
 * 00000001C004683B: mov     [rsp+90h+var_40], rsi
 * 00000001C0046840: lea     rax, [rbp+1Fh+arg_38]
 * 00000001C0046844: mov     [rsp+90h+var_48], rax
 * 00000001C0046849: lea     rax, [rbp+1Fh+arg_30]
 * 00000001C004684D: mov     [rsp+90h+var_50], rdi
 * 00000001C0046852: mov     [rsp+90h+var_58], rax
 * 00000001C0046857: lea     rax, [rbp+1Fh+arg_28]
 * 00000001C004685B: mov     [rsp+90h+var_60], rdi
 * 00000001C0046860: mov     [rsp+90h+var_68], rax
 * 00000001C0046865: mov     word ptr [rsp+90h+var_70], r14w
 * 00000001C004686B: call    cs:__imp_WppAutoLogTrace
 * 00000001C0046872: nop     dword ptr [rax+rax+00h]
 * 00000001C0046877: lea     r11, [rsp+90h+var_s0]
 * 00000001C004687F: mov     rbx, [r11+10h]
 * 00000001C0046883: mov     rsi, [r11+18h]
 * 00000001C0046887: mov     rdi, [r11+20h]
 * 00000001C004688B: mov     r14, [r11+28h]
 * 00000001C004688F: mov     rsp, r11
 * 00000001C0046892: pop     rbp
 * 00000001C0046893: retn
 */
