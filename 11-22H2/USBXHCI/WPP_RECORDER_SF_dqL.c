/*
 * XREFs of WPP_RECORDER_SF_dqL @ 0x1C000CCA0
 * Callers:
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C000D0A0 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_UcxEvtReset @ 0x1C0018D80 (UsbDevice_UcxEvtReset.c)
 *     UsbDevice_DisableCompletion @ 0x1C0048760 (UsbDevice_DisableCompletion.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dqL @ 0x1C000CCA0
 * Reason: Hex-Rays returned no pseudocode for 0x1C000CCA0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000CCA0: mov     [rsp+arg_0], rbx
 * 00000001C000CCA5: mov     [rsp+arg_8], rbp
 * 00000001C000CCAA: mov     [rsp+arg_10], rsi
 * 00000001C000CCAF: push    rdi
 * 00000001C000CCB0: sub     rsp, 60h
 * 00000001C000CCB4: mov     rsi, rcx
 * 00000001C000CCB7: movzx   edi, r9w
 * 00000001C000CCBB: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C000CCC2: mov     ebp, 4
 * 00000001C000CCC7: movzx   ebx, dl
 * 00000001C000CCCA: test    dword ptr [rcx+2Ch], 800h
 * 00000001C000CCD1: jnz     loc_1C002D7B6
 * 00000001C000CCD7: and     [rsp+68h+var_10], 0
 * 00000001C000CCDD: lea     rax, [rsp+68h+arg_38]
 * 00000001C000CCE5: mov     [rsp+68h+var_18], rbp
 * 00000001C000CCEA: lea     r9, WPP_a3acd40f84823909f7fc3b79b04bc30f_Traceguids
 * 00000001C000CCF1: mov     [rsp+68h+var_20], rax
 * 00000001C000CCF6: mov     r8d, 0Ch
 * 00000001C000CCFC: mov     [rsp+68h+var_28], 8
 * 00000001C000CD05: lea     rax, [rsp+68h+arg_30]
 * 00000001C000CD0D: mov     [rsp+68h+var_30], rax
 * 00000001C000CD12: mov     edx, ebx
 * 00000001C000CD14: lea     rax, [rsp+68h+arg_28]
 * 00000001C000CD1C: mov     [rsp+68h+var_38], rbp
 * 00000001C000CD21: mov     [rsp+68h+var_40], rax
 * 00000001C000CD26: mov     rcx, rsi
 * 00000001C000CD29: mov     word ptr [rsp+68h+var_48], di
 * 00000001C000CD2E: call    cs:__imp_WppAutoLogTrace
 * 00000001C000CD35: nop     dword ptr [rax+rax+00h]
 * 00000001C000CD3A: lea     r11, [rsp+68h+var_8]
 * 00000001C000CD3F: mov     rbx, [r11+10h]
 * 00000001C000CD43: mov     rbp, [r11+18h]
 * 00000001C000CD47: mov     rsi, [r11+20h]
 * 00000001C000CD4B: mov     rsp, r11
 * 00000001C000CD4E: pop     rdi
 * 00000001C000CD4F: retn
 * 00000001C002D7B6: cmp     [rcx+29h], bl
 * 00000001C002D7B9: jb      loc_1C000CCD7
 * 00000001C002D7BF: and     [rsp+68h+var_18], 0
 * 00000001C002D7C5: lea     rdx, [rsp+68h+arg_38]
 * 00000001C002D7CD: mov     rax, cs:pfnWppTraceMessage
 * 00000001C002D7D4: lea     r8, WPP_a3acd40f84823909f7fc3b79b04bc30f_Traceguids
 * 00000001C002D7DB: mov     rcx, [rcx+18h]
 * 00000001C002D7DF: mov     r9d, edi
 * 00000001C002D7E2: mov     [rsp+68h+var_20], rbp
 * 00000001C002D7E7: mov     [rsp+68h+var_28], rdx
 * 00000001C002D7EC: lea     rdx, [rsp+68h+arg_30]
 * 00000001C002D7F4: mov     [rsp+68h+var_30], 8
 * 00000001C002D7FD: mov     [rsp+68h+var_38], rdx
 * 00000001C002D802: lea     rdx, [rsp+68h+arg_28]
 * 00000001C002D80A: mov     [rsp+68h+var_40], rbp
 * 00000001C002D80F: mov     [rsp+68h+var_48], rdx
 * 00000001C002D814: mov     edx, 2Bh ; '+'
 * 00000001C002D819: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002D81F: nop
 * 00000001C002D820: jmp     loc_1C000CCD7
 */
