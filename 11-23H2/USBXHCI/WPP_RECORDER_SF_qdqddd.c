/*
 * XREFs of WPP_RECORDER_SF_qdqddd @ 0x1C0031180
 * Callers:
 *     Command_InternalSendCommand @ 0x1C000A998 (Command_InternalSendCommand.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qdqddd @ 0x1C0031180
 * Reason: Hex-Rays returned no pseudocode for 0x1C0031180
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0031180: mov     r11, rsp
 * 00000001C0031183: mov     [r11+8], rbx
 * 00000001C0031187: mov     [r11+10h], rsi
 * 00000001C003118B: mov     [r11+18h], rdi
 * 00000001C003118F: mov     [r11+20h], r14
 * 00000001C0031193: push    rbp
 * 00000001C0031194: lea     rbp, [r11-27h]
 * 00000001C0031198: sub     rsp, 90h
 * 00000001C003119F: mov     edi, 4
 * 00000001C00311A4: mov     rbx, rcx
 * 00000001C00311A7: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00311AE: lea     esi, [rdi+4]
 * 00000001C00311B1: mov     eax, [rcx+2Ch]
 * 00000001C00311B4: lea     r14d, [rdi+33h]
 * 00000001C00311B8: test    al, 40h
 * 00000001C00311BA: jz      short loc_1C003122D
 * 00000001C00311BC: cmp     byte ptr [rcx+29h], 5
 * 00000001C00311C0: jb      short loc_1C003122D
 * 00000001C00311C2: and     qword ptr [r11-18h], 0
 * 00000001C00311C7: lea     rdx, [rbp+1Fh+arg_50]
 * 00000001C00311CB: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00311D2: lea     r8, WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids
 * 00000001C00311D9: mov     rcx, [rcx+18h]
 * 00000001C00311DD: mov     r9d, r14d
 * 00000001C00311E0: mov     [r11-20h], rdi
 * 00000001C00311E4: mov     [r11-28h], rdx
 * 00000001C00311E8: lea     rdx, [rbp+1Fh+arg_48]
 * 00000001C00311EC: mov     [r11-30h], rdi
 * 00000001C00311F0: mov     [r11-38h], rdx
 * 00000001C00311F4: lea     rdx, [rbp+1Fh+arg_40]
 * 00000001C00311F8: mov     [r11-40h], rdi
 * 00000001C00311FC: mov     [r11-48h], rdx
 * 00000001C0031200: lea     rdx, [rbp+1Fh+arg_38]
 * 00000001C0031204: mov     [r11-50h], rsi
 * 00000001C0031208: mov     [r11-58h], rdx
 * 00000001C003120C: lea     rdx, [rbp+1Fh+arg_30]
 * 00000001C0031210: mov     [r11-60h], rdi
 * 00000001C0031214: mov     [r11-68h], rdx
 * 00000001C0031218: lea     rdx, [rbp+1Fh+arg_28]
 * 00000001C003121C: mov     [r11-70h], rsi
 * 00000001C0031220: mov     [r11-78h], rdx
 * 00000001C0031224: lea     edx, [rdi+27h]
 * 00000001C0031227: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003122D: and     qword ptr [rsp+90h+var_8], 0
 * 00000001C0031236: lea     rax, [rbp+1Fh+arg_50]
 * 00000001C003123A: mov     [rsp+90h+var_10], rdi
 * 00000001C0031242: lea     r9, WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids
 * 00000001C0031249: mov     [rsp+90h+var_18], rax
 * 00000001C003124E: mov     edx, 5
 * 00000001C0031253: mov     [rsp+90h+var_20], rdi
 * 00000001C0031258: lea     rax, [rbp+1Fh+arg_48]
 * 00000001C003125C: mov     [rsp+90h+var_28], rax
 * 00000001C0031261: mov     rcx, rbx
 * 00000001C0031264: mov     [rsp+90h+var_30], rdi
 * 00000001C0031269: lea     rax, [rbp+1Fh+arg_40]
 * 00000001C003126D: mov     [rsp+90h+var_38], rax
 * 00000001C0031272: lea     r8d, [rdx+2]
 * 00000001C0031276: mov     [rsp+90h+var_40], rsi
 * 00000001C003127B: lea     rax, [rbp+1Fh+arg_38]
 * 00000001C003127F: mov     [rsp+90h+var_48], rax
 * 00000001C0031284: lea     rax, [rbp+1Fh+arg_30]
 * 00000001C0031288: mov     [rsp+90h+var_50], rdi
 * 00000001C003128D: mov     [rsp+90h+var_58], rax
 * 00000001C0031292: lea     rax, [rbp+1Fh+arg_28]
 * 00000001C0031296: mov     [rsp+90h+var_60], rsi
 * 00000001C003129B: mov     [rsp+90h+var_68], rax
 * 00000001C00312A0: mov     word ptr [rsp+90h+var_70], r14w
 * 00000001C00312A6: call    cs:__imp_WppAutoLogTrace
 * 00000001C00312AD: nop     dword ptr [rax+rax+00h]
 * 00000001C00312B2: lea     r11, [rsp+90h+var_s0]
 * 00000001C00312BA: mov     rbx, [r11+10h]
 * 00000001C00312BE: mov     rsi, [r11+18h]
 * 00000001C00312C2: mov     rdi, [r11+20h]
 * 00000001C00312C6: mov     r14, [r11+28h]
 * 00000001C00312CA: mov     rsp, r11
 * 00000001C00312CD: pop     rbp
 * 00000001C00312CE: retn
 */
