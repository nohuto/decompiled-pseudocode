/*
 * XREFs of WPP_RECORDER_SF_DDDDL @ 0x1C0045EF4
 * Callers:
 *     Isoch_ProcessSegment @ 0x1C0044614 (Isoch_ProcessSegment.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDDDL @ 0x1C0045EF4
 * Reason: Hex-Rays returned no pseudocode for 0x1C0045EF4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0045EF4: mov     r11, rsp
 * 00000001C0045EF7: mov     [r11+8], rbx
 * 00000001C0045EFB: mov     [r11+10h], rsi
 * 00000001C0045EFF: push    rdi
 * 00000001C0045F00: sub     rsp, 80h
 * 00000001C0045F07: mov     rbx, rcx
 * 00000001C0045F0A: mov     esi, 1Dh
 * 00000001C0045F0F: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0045F16: lea     edi, [rsi-19h]
 * 00000001C0045F19: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C0045F20: jz      short loc_1C0045F87
 * 00000001C0045F22: cmp     byte ptr [rcx+29h], 2
 * 00000001C0045F26: jb      short loc_1C0045F87
 * 00000001C0045F28: and     qword ptr [r11-18h], 0
 * 00000001C0045F2D: lea     rdx, [r11+50h]
 * 00000001C0045F31: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0045F38: lea     r8, WPP_393df0ddb70a3b662b6ac53bc5b55086_Traceguids
 * 00000001C0045F3F: mov     rcx, [rcx+18h]
 * 00000001C0045F43: mov     r9d, esi
 * 00000001C0045F46: mov     [r11-20h], rdi
 * 00000001C0045F4A: mov     [r11-28h], rdx
 * 00000001C0045F4E: lea     rdx, [r11+48h]
 * 00000001C0045F52: mov     [r11-30h], rdi
 * 00000001C0045F56: mov     [r11-38h], rdx
 * 00000001C0045F5A: lea     rdx, [r11+40h]
 * 00000001C0045F5E: mov     [r11-40h], rdi
 * 00000001C0045F62: mov     [r11-48h], rdx
 * 00000001C0045F66: lea     rdx, [r11+38h]
 * 00000001C0045F6A: mov     [r11-50h], rdi
 * 00000001C0045F6E: mov     [r11-58h], rdx
 * 00000001C0045F72: lea     rdx, [r11+30h]
 * 00000001C0045F76: mov     [r11-60h], rdi
 * 00000001C0045F7A: mov     [r11-68h], rdx
 * 00000001C0045F7E: lea     edx, [rsi+0Eh]
 * 00000001C0045F81: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0045F87: and     [rsp+88h+var_10], 0
 * 00000001C0045F8D: lea     rax, [rsp+88h+arg_48]
 * 00000001C0045F95: mov     [rsp+88h+var_18], rdi
 * 00000001C0045F9A: lea     r9, WPP_393df0ddb70a3b662b6ac53bc5b55086_Traceguids
 * 00000001C0045FA1: mov     [rsp+88h+var_20], rax
 * 00000001C0045FA6: mov     edx, 2
 * 00000001C0045FAB: mov     [rsp+88h+var_28], rdi
 * 00000001C0045FB0: lea     rax, [rsp+88h+arg_40]
 * 00000001C0045FB8: mov     [rsp+88h+var_30], rax
 * 00000001C0045FBD: mov     rcx, rbx
 * 00000001C0045FC0: mov     [rsp+88h+var_38], rdi
 * 00000001C0045FC5: lea     rax, [rsp+88h+arg_38]
 * 00000001C0045FCD: mov     [rsp+88h+var_40], rax
 * 00000001C0045FD2: lea     r8d, [rdx+0Ch]
 * 00000001C0045FD6: mov     [rsp+88h+var_48], rdi
 * 00000001C0045FDB: lea     rax, [rsp+88h+arg_30]
 * 00000001C0045FE3: mov     [rsp+88h+var_50], rax
 * 00000001C0045FE8: lea     rax, [rsp+88h+arg_28]
 * 00000001C0045FF0: mov     [rsp+88h+var_58], rdi
 * 00000001C0045FF5: mov     [rsp+88h+var_60], rax
 * 00000001C0045FFA: mov     [rsp+88h+var_68], si
 * 00000001C0045FFF: call    cs:__imp_WppAutoLogTrace
 * 00000001C0046006: nop     dword ptr [rax+rax+00h]
 * 00000001C004600B: lea     r11, [rsp+88h+var_8]
 * 00000001C0046013: mov     rbx, [r11+10h]
 * 00000001C0046017: mov     rsi, [r11+18h]
 * 00000001C004601B: mov     rsp, r11
 * 00000001C004601E: pop     rdi
 * 00000001C004601F: retn
 */
