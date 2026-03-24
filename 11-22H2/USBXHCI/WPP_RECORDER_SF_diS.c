/*
 * XREFs of WPP_RECORDER_SF_diS @ 0x1C001B218
 * Callers:
 *     Controller_PopulateDeviceFlagsFromKse @ 0x1C001ABB8 (Controller_PopulateDeviceFlagsFromKse.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_diS @ 0x1C001B218
 * Reason: Hex-Rays returned no pseudocode for 0x1C001B218
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C001B218: mov     rax, rsp
 * 00000001C001B21B: mov     [rax+8], rbx
 * 00000001C001B21F: mov     [rax+10h], rbp
 * 00000001C001B223: mov     [rax+18h], rsi
 * 00000001C001B227: mov     [rax+20h], rdi
 * 00000001C001B22B: push    r12
 * 00000001C001B22D: push    r14
 * 00000001C001B22F: push    r15
 * 00000001C001B231: sub     rsp, 60h
 * 00000001C001B235: mov     rdx, cs:WPP_GLOBAL_Control
 * 00000001C001B23C: lea     r8, aNull_0; "NULL"
 * 00000001C001B243: mov     rbx, [rsp+78h+arg_38]
 * 00000001C001B24B: or      rdi, 0FFFFFFFFFFFFFFFFh
 * 00000001C001B24F: xor     r15d, r15d
 * 00000001C001B252: movzx   ebp, r9w
 * 00000001C001B256: mov     r14, rcx
 * 00000001C001B259: mov     r12d, 4
 * 00000001C001B25F: mov     eax, [rdx+2Ch]
 * 00000001C001B262: lea     esi, [rdi+0Bh]
 * 00000001C001B265: test    al, 8
 * 00000001C001B267: jnz     loc_1C0028DE2
 * 00000001C001B26D: test    rbx, rbx
 * 00000001C001B270: jz      short loc_1C001B287
 * 00000001C001B272: inc     rdi
 * 00000001C001B275: cmp     [rbx+rdi*2], r15w
 * 00000001C001B27A: jnz     short loc_1C001B272
 * 00000001C001B27C: lea     rsi, ds:2[rdi*2]
 * 00000001C001B284: test    rbx, rbx
 * 00000001C001B287: mov     [rsp+78h+var_20], r15
 * 00000001C001B28C: lea     rax, [rsp+78h+arg_30]
 * 00000001C001B294: mov     [rsp+78h+var_28], rsi
 * 00000001C001B299: lea     r9, WPP_ac07559723993fb37d1c33c002d3118e_Traceguids
 * 00000001C001B2A0: cmovz   rbx, r8
 * 00000001C001B2A4: mov     edx, r12d
 * 00000001C001B2A7: mov     [rsp+78h+var_30], rbx
 * 00000001C001B2AC: mov     r8d, r12d
 * 00000001C001B2AF: mov     [rsp+78h+var_38], 8
 * 00000001C001B2B8: mov     rcx, r14
 * 00000001C001B2BB: mov     [rsp+78h+var_40], rax
 * 00000001C001B2C0: lea     rax, [rsp+78h+arg_28]
 * 00000001C001B2C8: mov     [rsp+78h+var_48], r12
 * 00000001C001B2CD: mov     [rsp+78h+var_50], rax
 * 00000001C001B2D2: mov     word ptr [rsp+78h+var_58], bp
 * 00000001C001B2D7: call    cs:__imp_WppAutoLogTrace
 * 00000001C001B2DE: nop     dword ptr [rax+rax+00h]
 * 00000001C001B2E3: lea     r11, [rsp+78h+var_18]
 * 00000001C001B2E8: mov     rbx, [r11+20h]
 * 00000001C001B2EC: mov     rbp, [r11+28h]
 * 00000001C001B2F0: mov     rsi, [r11+30h]
 * 00000001C001B2F4: mov     rdi, [r11+38h]
 * 00000001C001B2F8: mov     rsp, r11
 * 00000001C001B2FB: pop     r15
 * 00000001C001B2FD: pop     r14
 * 00000001C001B2FF: pop     r12
 * 00000001C001B301: retn
 * 00000001C0028DE2: cmp     [rdx+29h], r12b
 * 00000001C0028DE6: jb      loc_1C001B26D
 * 00000001C0028DEC: test    rbx, rbx
 * 00000001C0028DEF: jz      short loc_1C0028E08
 * 00000001C0028DF1: mov     rax, rdi
 * 00000001C0028DF4: inc     rax
 * 00000001C0028DF7: cmp     [rbx+rax*2], r15w
 * 00000001C0028DFC: jnz     short loc_1C0028DF4
 * 00000001C0028DFE: lea     rdx, ds:2[rax*2]
 * 00000001C0028E06: jmp     short loc_1C0028E0B
 * 00000001C0028E08: mov     rdx, rsi
 * 00000001C0028E0B: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0028E12: test    rbx, rbx
 * 00000001C0028E15: mov     [rsp+78h+var_28], r15
 * 00000001C0028E1A: mov     rcx, rbx
 * 00000001C0028E1D: cmovz   rcx, r8
 * 00000001C0028E21: mov     [rsp+78h+var_30], rdx
 * 00000001C0028E26: mov     [rsp+78h+var_38], rcx
 * 00000001C0028E2B: lea     r8, WPP_ac07559723993fb37d1c33c002d3118e_Traceguids
 * 00000001C0028E32: mov     [rsp+78h+var_40], 8
 * 00000001C0028E3B: lea     rcx, [rsp+78h+arg_30]
 * 00000001C0028E43: mov     [rsp+78h+var_48], rcx
 * 00000001C0028E48: mov     r9d, ebp
 * 00000001C0028E4B: lea     rcx, [rsp+78h+arg_28]
 * 00000001C0028E53: mov     [rsp+78h+var_50], r12
 * 00000001C0028E58: mov     [rsp+78h+var_58], rcx
 * 00000001C0028E5D: mov     edx, 2Bh ; '+'
 * 00000001C0028E62: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0028E69: mov     rcx, [rcx+18h]
 * 00000001C0028E6D: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0028E73: lea     r8, aNull_0; "NULL"
 * 00000001C0028E7A: jmp     loc_1C001B26D
 */
