/*
 * XREFs of WPP_RECORDER_SF_qddd @ 0x1C0030F28
 * Callers:
 *     Command_InternalSendCommand @ 0x1C000A9C8 (Command_InternalSendCommand.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qddd @ 0x1C0030F28
 * Reason: Hex-Rays returned no pseudocode for 0x1C0030F28
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0030F28: mov     r11, rsp
 * 00000001C0030F2B: mov     [r11+8], rbx
 * 00000001C0030F2F: mov     [r11+10h], rbp
 * 00000001C0030F33: push    rdi
 * 00000001C0030F34: sub     rsp, 70h
 * 00000001C0030F38: mov     rbx, rcx
 * 00000001C0030F3B: mov     ebp, 36h ; '6'
 * 00000001C0030F40: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0030F47: lea     edi, [rbp-32h]
 * 00000001C0030F4A: mov     eax, [rcx+2Ch]
 * 00000001C0030F4D: test    al, 40h
 * 00000001C0030F4F: jz      short loc_1C0030FAE
 * 00000001C0030F51: cmp     byte ptr [rcx+29h], 5
 * 00000001C0030F55: jb      short loc_1C0030FAE
 * 00000001C0030F57: and     qword ptr [r11-18h], 0
 * 00000001C0030F5C: lea     rdx, [r11+48h]
 * 00000001C0030F60: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0030F67: lea     r8, WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids
 * 00000001C0030F6E: mov     rcx, [rcx+18h]
 * 00000001C0030F72: mov     r9d, ebp
 * 00000001C0030F75: mov     [r11-20h], rdi
 * 00000001C0030F79: mov     [r11-28h], rdx
 * 00000001C0030F7D: lea     rdx, [r11+40h]
 * 00000001C0030F81: mov     [r11-30h], rdi
 * 00000001C0030F85: mov     [r11-38h], rdx
 * 00000001C0030F89: lea     rdx, [r11+38h]
 * 00000001C0030F8D: mov     [r11-40h], rdi
 * 00000001C0030F91: mov     [r11-48h], rdx
 * 00000001C0030F95: lea     rdx, [r11+30h]
 * 00000001C0030F99: mov     qword ptr [r11-50h], 8
 * 00000001C0030FA1: mov     [r11-58h], rdx
 * 00000001C0030FA5: lea     edx, [rbp-0Bh]
 * 00000001C0030FA8: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0030FAE: and     [rsp+78h+var_10], 0
 * 00000001C0030FB4: lea     rax, [rsp+78h+arg_40]
 * 00000001C0030FBC: mov     [rsp+78h+var_18], rdi
 * 00000001C0030FC1: lea     r9, WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids
 * 00000001C0030FC8: mov     [rsp+78h+var_20], rax
 * 00000001C0030FCD: mov     edx, 5
 * 00000001C0030FD2: mov     [rsp+78h+var_28], rdi
 * 00000001C0030FD7: lea     rax, [rsp+78h+arg_38]
 * 00000001C0030FDF: mov     [rsp+78h+var_30], rax
 * 00000001C0030FE4: mov     rcx, rbx
 * 00000001C0030FE7: mov     [rsp+78h+var_38], rdi
 * 00000001C0030FEC: lea     rax, [rsp+78h+arg_30]
 * 00000001C0030FF4: mov     [rsp+78h+var_40], rax
 * 00000001C0030FF9: lea     r8d, [rdx+2]
 * 00000001C0030FFD: lea     rax, [rsp+78h+arg_28]
 * 00000001C0031005: mov     [rsp+78h+var_48], 8
 * 00000001C003100E: mov     [rsp+78h+var_50], rax
 * 00000001C0031013: mov     [rsp+78h+var_58], bp
 * 00000001C0031018: call    cs:__imp_WppAutoLogTrace
 * 00000001C003101F: nop     dword ptr [rax+rax+00h]
 * 00000001C0031024: lea     r11, [rsp+78h+var_8]
 * 00000001C0031029: mov     rbx, [r11+10h]
 * 00000001C003102D: mov     rbp, [r11+18h]
 * 00000001C0031031: mov     rsp, r11
 * 00000001C0031034: pop     rdi
 * 00000001C0031035: retn
 */
