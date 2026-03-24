/*
 * XREFs of WPP_RECORDER_SF_S @ 0x1C0002D60
 * Callers:
 *     KeyboardAddDeviceEx @ 0x1C000DBB0 (KeyboardAddDeviceEx.c)
 *     KbdCreateClassObject @ 0x1C000DDB0 (KbdCreateClassObject.c)
 *     KbdConfiguration @ 0x1C0011560 (KbdConfiguration.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00031C0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_S @ 0x1C0002D60
 * Reason: Hex-Rays returned no pseudocode for 0x1C0002D60
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0002D60: mov     [rsp+arg_0], rbx
 * 00000001C0002D65: mov     [rsp+arg_8], rbp
 * 00000001C0002D6A: mov     [rsp+arg_10], rsi
 * 00000001C0002D6F: mov     [rsp+arg_18], rdi
 * 00000001C0002D74: push    r12
 * 00000001C0002D76: push    r14
 * 00000001C0002D78: push    r15
 * 00000001C0002D7A: sub     rsp, 40h
 * 00000001C0002D7E: mov     r8, cs:WPP_GLOBAL_Control
 * 00000001C0002D85: lea     r12, aNull_0; "NULL"
 * 00000001C0002D8C: mov     rdi, [rsp+58h+arg_28]
 * 00000001C0002D94: mov     rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C0002D9B: movzx   r14d, r9w
 * 00000001C0002D9F: mov     r15, rcx
 * 00000001C0002DA2: movzx   ebp, dl
 * 00000001C0002DA5: mov     eax, [r8+2Ch]
 * 00000001C0002DA9: lea     esi, [rbx+0Bh]
 * 00000001C0002DAC: test    al, 1
 * 00000001C0002DAE: jnz     loc_1C0003F1E
 * 00000001C0002DB4: test    rdi, rdi
 * 00000001C0002DB7: jz      short loc_1C0002E2B
 * 00000001C0002DB9: nop     dword ptr [rax+00000000h]
 * 00000001C0002DC0: cmp     word ptr [rdi+rbx*2+2], 0
 * 00000001C0002DC6: lea     rbx, [rbx+1]
 * 00000001C0002DCA: jnz     short loc_1C0002DC0
 * 00000001C0002DCC: lea     rsi, ds:2[rbx*2]
 * 00000001C0002DD4: mov     [rsp+58h+var_20], 0
 * 00000001C0002DDD: lea     r9, WPP_1b6d0084df9f3ca48f318fdd34bf6db2_Traceguids
 * 00000001C0002DE4: mov     [rsp+58h+var_28], rsi
 * 00000001C0002DE9: mov     r8d, 1
 * 00000001C0002DEF: mov     [rsp+58h+var_30], rdi
 * 00000001C0002DF4: mov     edx, ebp
 * 00000001C0002DF6: mov     rcx, r15
 * 00000001C0002DF9: mov     word ptr [rsp+58h+var_38], r14w
 * 00000001C0002DFF: call    cs:__imp_WppAutoLogTrace
 * 00000001C0002E06: nop     dword ptr [rax+rax+00h]
 * 00000001C0002E0B: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0002E10: mov     rbp, [rsp+58h+arg_8]
 * 00000001C0002E15: mov     rsi, [rsp+58h+arg_10]
 * 00000001C0002E1A: mov     rdi, [rsp+58h+arg_18]
 * 00000001C0002E1F: add     rsp, 40h
 * 00000001C0002E23: pop     r15
 * 00000001C0002E25: pop     r14
 * 00000001C0002E27: pop     r12
 * 00000001C0002E29: retn
 * 00000001C0002E2B: mov     rdi, r12
 * 00000001C0002E2E: jmp     short loc_1C0002DD4
 * 00000001C0003F1E: cmp     [r8+29h], bpl
 * 00000001C0003F22: jb      loc_1C0002DB4
 * 00000001C0003F28: test    rdi, rdi
 * 00000001C0003F2B: jz      short loc_1C0003F46
 * 00000001C0003F2D: mov     rax, rbx
 * 00000001C0003F30: cmp     word ptr [rdi+rax*2+2], 0
 * 00000001C0003F36: lea     rax, [rax+1]
 * 00000001C0003F3A: jnz     short loc_1C0003F30
 * 00000001C0003F3C: lea     rdx, ds:2[rax*2]
 * 00000001C0003F44: jmp     short loc_1C0003F49
 * 00000001C0003F46: mov     rdx, rsi
 * 00000001C0003F49: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0003F50: lea     r8, WPP_1b6d0084df9f3ca48f318fdd34bf6db2_Traceguids
 * 00000001C0003F57: test    rdi, rdi
 * 00000001C0003F5A: mov     [rsp+58h+var_28], 0
 * 00000001C0003F63: mov     [rsp+58h+var_30], rdx
 * 00000001C0003F68: mov     rcx, rdi
 * 00000001C0003F6B: cmovz   rcx, r12
 * 00000001C0003F6F: mov     r9d, r14d
 * 00000001C0003F72: mov     [rsp+58h+var_38], rcx
 * 00000001C0003F77: mov     edx, 2Bh ; '+'
 * 00000001C0003F7C: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0003F83: mov     rcx, [rcx+18h]
 * 00000001C0003F87: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0003F8D: nop
 * 00000001C0003F8E: jmp     loc_1C0002DB4
 */
