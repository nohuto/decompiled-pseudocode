/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_ddq @ 0x1C01F79EC
 * Callers:
 *     ?PacketCallback@CIVChannel@@AEAAJPEAU_IVSRContext@@@Z @ 0x1C01F6DB0 (-PacketCallback@CIVChannel@@AEAAJPEAU_IVSRContext@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_ddq @ 0x1C01F79EC
 * Reason: Hex-Rays returned no pseudocode for 0x1C01F79EC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C01F79EC: mov     r11, rsp
 * 00000001C01F79EF: mov     [r11+8], rbx
 * 00000001C01F79F3: mov     [r11+10h], rsi
 * 00000001C01F79F7: mov     [r11+18h], rdi
 * 00000001C01F79FB: push    r14
 * 00000001C01F79FD: sub     rsp, 60h
 * 00000001C01F7A01: mov     rdi, qword ptr cs:WPP_MAIN_CB.Queue
 * 00000001C01F7A08: mov     esi, 4
 * 00000001C01F7A0D: mov     bl, r8b
 * 00000001C01F7A10: lea     r14d, [rsi+21h]
 * 00000001C01F7A14: test    dl, dl
 * 00000001C01F7A16: jz      short loc_1C01F7A60
 * 00000001C01F7A18: and     qword ptr [r11-18h], 0
 * 00000001C01F7A1D: lea     rdx, [r11+58h]
 * 00000001C01F7A21: mov     rax, cs:pfnWppTraceMessage
 * 00000001C01F7A28: lea     r8, WPP_e36f0bd77e21300be1523eb9b2f96338_Traceguids
 * 00000001C01F7A2F: mov     qword ptr [r11-20h], 8
 * 00000001C01F7A37: mov     [r11-28h], rdx
 * 00000001C01F7A3B: lea     rdx, [r11+50h]
 * 00000001C01F7A3F: mov     [r11-30h], rsi
 * 00000001C01F7A43: mov     [r11-38h], rdx
 * 00000001C01F7A47: lea     rdx, [r11+48h]
 * 00000001C01F7A4B: mov     [r11-40h], rsi
 * 00000001C01F7A4F: mov     [r11-48h], rdx
 * 00000001C01F7A53: lea     edx, [rsi+27h]
 * 00000001C01F7A56: movzx   r9d, r14w
 * 00000001C01F7A5A: call    cs:__guard_dispatch_icall_fptr
 * 00000001C01F7A60: test    bl, bl
 * 00000001C01F7A62: jz      short loc_1C01F7AC8
 * 00000001C01F7A64: and     [rsp+68h+var_10], 0
 * 00000001C01F7A6A: lea     rax, [rsp+68h+arg_50]
 * 00000001C01F7A72: mov     [rsp+68h+var_18], 8
 * 00000001C01F7A7B: lea     r9, WPP_e36f0bd77e21300be1523eb9b2f96338_Traceguids
 * 00000001C01F7A82: mov     [rsp+68h+var_20], rax
 * 00000001C01F7A87: mov     r8d, 0Ch
 * 00000001C01F7A8D: mov     [rsp+68h+var_28], rsi
 * 00000001C01F7A92: lea     rax, [rsp+68h+arg_48]
 * 00000001C01F7A9A: mov     [rsp+68h+var_30], rax
 * 00000001C01F7A9F: mov     edx, esi
 * 00000001C01F7AA1: lea     rax, [rsp+68h+arg_40]
 * 00000001C01F7AA9: mov     [rsp+68h+var_38], rsi
 * 00000001C01F7AAE: mov     [rsp+68h+var_40], rax
 * 00000001C01F7AB3: mov     rcx, rdi
 * 00000001C01F7AB6: mov     [rsp+68h+var_48], r14w
 * 00000001C01F7ABC: call    cs:__imp_WppAutoLogTrace
 * 00000001C01F7AC3: nop     dword ptr [rax+rax+00h]
 * 00000001C01F7AC8: lea     r11, [rsp+68h+var_8]
 * 00000001C01F7ACD: mov     rbx, [r11+10h]
 * 00000001C01F7AD1: mov     rsi, [r11+18h]
 * 00000001C01F7AD5: mov     rdi, [r11+20h]
 * 00000001C01F7AD9: mov     rsp, r11
 * 00000001C01F7ADC: pop     r14
 * 00000001C01F7ADE: retn
 */
