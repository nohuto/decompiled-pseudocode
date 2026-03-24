/*
 * XREFs of WPP_RECORDER_SF_diS @ 0x1C001B1C8
 * Callers:
 *     Controller_PopulateDeviceFlagsFromKse @ 0x1C001AB68 (Controller_PopulateDeviceFlagsFromKse.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_diS @ 0x1C001B1C8
 * Reason: Hex-Rays returned no pseudocode for 0x1C001B1C8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C001B1C8: mov     rax, rsp
 * 00000001C001B1CB: mov     [rax+8], rbx
 * 00000001C001B1CF: mov     [rax+10h], rbp
 * 00000001C001B1D3: mov     [rax+18h], rsi
 * 00000001C001B1D7: mov     [rax+20h], rdi
 * 00000001C001B1DB: push    r12
 * 00000001C001B1DD: push    r14
 * 00000001C001B1DF: push    r15
 * 00000001C001B1E1: sub     rsp, 60h
 * 00000001C001B1E5: mov     rdx, cs:WPP_GLOBAL_Control
 * 00000001C001B1EC: lea     r8, aNull_0; "NULL"
 * 00000001C001B1F3: mov     rbx, [rsp+78h+arg_38]
 * 00000001C001B1FB: or      rdi, 0FFFFFFFFFFFFFFFFh
 * 00000001C001B1FF: xor     r15d, r15d
 * 00000001C001B202: movzx   ebp, r9w
 * 00000001C001B206: mov     r14, rcx
 * 00000001C001B209: mov     r12d, 4
 * 00000001C001B20F: mov     eax, [rdx+2Ch]
 * 00000001C001B212: lea     esi, [rdi+0Bh]
 * 00000001C001B215: test    al, 8
 * 00000001C001B217: jnz     loc_1C0028F22
 * 00000001C001B21D: test    rbx, rbx
 * 00000001C001B220: jz      short loc_1C001B237
 * 00000001C001B222: inc     rdi
 * 00000001C001B225: cmp     [rbx+rdi*2], r15w
 * 00000001C001B22A: jnz     short loc_1C001B222
 * 00000001C001B22C: lea     rsi, ds:2[rdi*2]
 * 00000001C001B234: test    rbx, rbx
 * 00000001C001B237: mov     [rsp+78h+var_20], r15
 * 00000001C001B23C: lea     rax, [rsp+78h+arg_30]
 * 00000001C001B244: mov     [rsp+78h+var_28], rsi
 * 00000001C001B249: lea     r9, WPP_ac07559723993fb37d1c33c002d3118e_Traceguids
 * 00000001C001B250: cmovz   rbx, r8
 * 00000001C001B254: mov     edx, r12d
 * 00000001C001B257: mov     [rsp+78h+var_30], rbx
 * 00000001C001B25C: mov     r8d, r12d
 * 00000001C001B25F: mov     [rsp+78h+var_38], 8
 * 00000001C001B268: mov     rcx, r14
 * 00000001C001B26B: mov     [rsp+78h+var_40], rax
 * 00000001C001B270: lea     rax, [rsp+78h+arg_28]
 * 00000001C001B278: mov     [rsp+78h+var_48], r12
 * 00000001C001B27D: mov     [rsp+78h+var_50], rax
 * 00000001C001B282: mov     word ptr [rsp+78h+var_58], bp
 * 00000001C001B287: call    cs:__imp_WppAutoLogTrace
 * 00000001C001B28E: nop     dword ptr [rax+rax+00h]
 * 00000001C001B293: lea     r11, [rsp+78h+var_18]
 * 00000001C001B298: mov     rbx, [r11+20h]
 * 00000001C001B29C: mov     rbp, [r11+28h]
 * 00000001C001B2A0: mov     rsi, [r11+30h]
 * 00000001C001B2A4: mov     rdi, [r11+38h]
 * 00000001C001B2A8: mov     rsp, r11
 * 00000001C001B2AB: pop     r15
 * 00000001C001B2AD: pop     r14
 * 00000001C001B2AF: pop     r12
 * 00000001C001B2B1: retn
 * 00000001C0028F22: cmp     [rdx+29h], r12b
 * 00000001C0028F26: jb      loc_1C001B21D
 * 00000001C0028F2C: test    rbx, rbx
 * 00000001C0028F2F: jz      short loc_1C0028F48
 * 00000001C0028F31: mov     rax, rdi
 * 00000001C0028F34: inc     rax
 * 00000001C0028F37: cmp     [rbx+rax*2], r15w
 * 00000001C0028F3C: jnz     short loc_1C0028F34
 * 00000001C0028F3E: lea     rdx, ds:2[rax*2]
 * 00000001C0028F46: jmp     short loc_1C0028F4B
 * 00000001C0028F48: mov     rdx, rsi
 * 00000001C0028F4B: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0028F52: test    rbx, rbx
 * 00000001C0028F55: mov     [rsp+78h+var_28], r15
 * 00000001C0028F5A: mov     rcx, rbx
 * 00000001C0028F5D: cmovz   rcx, r8
 * 00000001C0028F61: mov     [rsp+78h+var_30], rdx
 * 00000001C0028F66: mov     [rsp+78h+var_38], rcx
 * 00000001C0028F6B: lea     r8, WPP_ac07559723993fb37d1c33c002d3118e_Traceguids
 * 00000001C0028F72: mov     [rsp+78h+var_40], 8
 * 00000001C0028F7B: lea     rcx, [rsp+78h+arg_30]
 * 00000001C0028F83: mov     [rsp+78h+var_48], rcx
 * 00000001C0028F88: mov     r9d, ebp
 * 00000001C0028F8B: lea     rcx, [rsp+78h+arg_28]
 * 00000001C0028F93: mov     [rsp+78h+var_50], r12
 * 00000001C0028F98: mov     [rsp+78h+var_58], rcx
 * 00000001C0028F9D: mov     edx, 2Bh ; '+'
 * 00000001C0028FA2: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0028FA9: mov     rcx, [rcx+18h]
 * 00000001C0028FAD: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0028FB3: lea     r8, aNull_0; "NULL"
 * 00000001C0028FBA: jmp     loc_1C001B21D
 */
