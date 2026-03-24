/*
 * XREFs of WPP_RECORDER_SF_DDqqDD @ 0x1C0046604
 * Callers:
 *     Isoch_PrepareStage @ 0x1C0004B00 (Isoch_PrepareStage.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDqqDD @ 0x1C0046604
 * Reason: Hex-Rays returned no pseudocode for 0x1C0046604
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0046604: mov     r11, rsp
 * 00000001C0046607: mov     [r11+8], rbx
 * 00000001C004660B: mov     [r11+10h], rsi
 * 00000001C004660F: mov     [r11+18h], rdi
 * 00000001C0046613: mov     [r11+20h], r14
 * 00000001C0046617: push    rbp
 * 00000001C0046618: lea     rbp, [r11-27h]
 * 00000001C004661C: sub     rsp, 90h
 * 00000001C0046623: mov     edi, 4
 * 00000001C0046628: mov     rbx, rcx
 * 00000001C004662B: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0046632: lea     esi, [rdi+4]
 * 00000001C0046635: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C004663C: lea     r14d, [rdi+2Bh]
 * 00000001C0046640: jz      short loc_1C00466B3
 * 00000001C0046642: cmp     [rcx+29h], dil
 * 00000001C0046646: jb      short loc_1C00466B3
 * 00000001C0046648: and     qword ptr [r11-18h], 0
 * 00000001C004664D: lea     rdx, [rbp+1Fh+arg_50]
 * 00000001C0046651: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0046658: lea     r8, WPP_393df0ddb70a3b662b6ac53bc5b55086_Traceguids
 * 00000001C004665F: mov     rcx, [rcx+18h]
 * 00000001C0046663: mov     r9d, r14d
 * 00000001C0046666: mov     [r11-20h], rdi
 * 00000001C004666A: mov     [r11-28h], rdx
 * 00000001C004666E: lea     rdx, [rbp+1Fh+arg_48]
 * 00000001C0046672: mov     [r11-30h], rdi
 * 00000001C0046676: mov     [r11-38h], rdx
 * 00000001C004667A: lea     rdx, [rbp+1Fh+arg_40]
 * 00000001C004667E: mov     [r11-40h], rsi
 * 00000001C0046682: mov     [r11-48h], rdx
 * 00000001C0046686: lea     rdx, [rbp+1Fh+arg_38]
 * 00000001C004668A: mov     [r11-50h], rsi
 * 00000001C004668E: mov     [r11-58h], rdx
 * 00000001C0046692: lea     rdx, [rbp+1Fh+arg_30]
 * 00000001C0046696: mov     [r11-60h], rdi
 * 00000001C004669A: mov     [r11-68h], rdx
 * 00000001C004669E: lea     rdx, [rbp+1Fh+arg_28]
 * 00000001C00466A2: mov     [r11-70h], rdi
 * 00000001C00466A6: mov     [r11-78h], rdx
 * 00000001C00466AA: lea     edx, [rdi+27h]
 * 00000001C00466AD: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00466B3: and     qword ptr [rsp+90h+var_8], 0
 * 00000001C00466BC: lea     rax, [rbp+1Fh+arg_50]
 * 00000001C00466C0: mov     [rsp+90h+var_10], rdi
 * 00000001C00466C8: lea     r9, WPP_393df0ddb70a3b662b6ac53bc5b55086_Traceguids
 * 00000001C00466CF: mov     [rsp+90h+var_18], rax
 * 00000001C00466D4: mov     r8d, 0Eh
 * 00000001C00466DA: mov     [rsp+90h+var_20], rdi
 * 00000001C00466DF: lea     rax, [rbp+1Fh+arg_48]
 * 00000001C00466E3: mov     [rsp+90h+var_28], rax
 * 00000001C00466E8: mov     edx, edi
 * 00000001C00466EA: mov     [rsp+90h+var_30], rsi
 * 00000001C00466EF: lea     rax, [rbp+1Fh+arg_40]
 * 00000001C00466F3: mov     [rsp+90h+var_38], rax
 * 00000001C00466F8: mov     rcx, rbx
 * 00000001C00466FB: mov     [rsp+90h+var_40], rsi
 * 00000001C0046700: lea     rax, [rbp+1Fh+arg_38]
 * 00000001C0046704: mov     [rsp+90h+var_48], rax
 * 00000001C0046709: lea     rax, [rbp+1Fh+arg_30]
 * 00000001C004670D: mov     [rsp+90h+var_50], rdi
 * 00000001C0046712: mov     [rsp+90h+var_58], rax
 * 00000001C0046717: lea     rax, [rbp+1Fh+arg_28]
 * 00000001C004671B: mov     [rsp+90h+var_60], rdi
 * 00000001C0046720: mov     [rsp+90h+var_68], rax
 * 00000001C0046725: mov     word ptr [rsp+90h+var_70], r14w
 * 00000001C004672B: call    cs:__imp_WppAutoLogTrace
 * 00000001C0046732: nop     dword ptr [rax+rax+00h]
 * 00000001C0046737: lea     r11, [rsp+90h+var_s0]
 * 00000001C004673F: mov     rbx, [r11+10h]
 * 00000001C0046743: mov     rsi, [r11+18h]
 * 00000001C0046747: mov     rdi, [r11+20h]
 * 00000001C004674B: mov     r14, [r11+28h]
 * 00000001C004674F: mov     rsp, r11
 * 00000001C0046752: pop     rbp
 * 00000001C0046753: retn
 */
