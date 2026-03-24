/*
 * XREFs of WPP_RECORDER_SF_dqL @ 0x1C000CC70
 * Callers:
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C000D070 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_UcxEvtReset @ 0x1C0018D30 (UsbDevice_UcxEvtReset.c)
 *     UsbDevice_DisableCompletion @ 0x1C00488A0 (UsbDevice_DisableCompletion.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dqL @ 0x1C000CC70
 * Reason: Hex-Rays returned no pseudocode for 0x1C000CC70
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000CC70: mov     [rsp+arg_0], rbx
 * 00000001C000CC75: mov     [rsp+arg_8], rbp
 * 00000001C000CC7A: mov     [rsp+arg_10], rsi
 * 00000001C000CC7F: push    rdi
 * 00000001C000CC80: sub     rsp, 60h
 * 00000001C000CC84: mov     rsi, rcx
 * 00000001C000CC87: movzx   edi, r9w
 * 00000001C000CC8B: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C000CC92: mov     ebp, 4
 * 00000001C000CC97: movzx   ebx, dl
 * 00000001C000CC9A: test    dword ptr [rcx+2Ch], 800h
 * 00000001C000CCA1: jnz     loc_1C002D8F6
 * 00000001C000CCA7: and     [rsp+68h+var_10], 0
 * 00000001C000CCAD: lea     rax, [rsp+68h+arg_38]
 * 00000001C000CCB5: mov     [rsp+68h+var_18], rbp
 * 00000001C000CCBA: lea     r9, WPP_a3acd40f84823909f7fc3b79b04bc30f_Traceguids
 * 00000001C000CCC1: mov     [rsp+68h+var_20], rax
 * 00000001C000CCC6: mov     r8d, 0Ch
 * 00000001C000CCCC: mov     [rsp+68h+var_28], 8
 * 00000001C000CCD5: lea     rax, [rsp+68h+arg_30]
 * 00000001C000CCDD: mov     [rsp+68h+var_30], rax
 * 00000001C000CCE2: mov     edx, ebx
 * 00000001C000CCE4: lea     rax, [rsp+68h+arg_28]
 * 00000001C000CCEC: mov     [rsp+68h+var_38], rbp
 * 00000001C000CCF1: mov     [rsp+68h+var_40], rax
 * 00000001C000CCF6: mov     rcx, rsi
 * 00000001C000CCF9: mov     word ptr [rsp+68h+var_48], di
 * 00000001C000CCFE: call    cs:__imp_WppAutoLogTrace
 * 00000001C000CD05: nop     dword ptr [rax+rax+00h]
 * 00000001C000CD0A: lea     r11, [rsp+68h+var_8]
 * 00000001C000CD0F: mov     rbx, [r11+10h]
 * 00000001C000CD13: mov     rbp, [r11+18h]
 * 00000001C000CD17: mov     rsi, [r11+20h]
 * 00000001C000CD1B: mov     rsp, r11
 * 00000001C000CD1E: pop     rdi
 * 00000001C000CD1F: retn
 * 00000001C002D8F6: cmp     [rcx+29h], bl
 * 00000001C002D8F9: jb      loc_1C000CCA7
 * 00000001C002D8FF: and     [rsp+68h+var_18], 0
 * 00000001C002D905: lea     rdx, [rsp+68h+arg_38]
 * 00000001C002D90D: mov     rax, cs:pfnWppTraceMessage
 * 00000001C002D914: lea     r8, WPP_a3acd40f84823909f7fc3b79b04bc30f_Traceguids
 * 00000001C002D91B: mov     rcx, [rcx+18h]
 * 00000001C002D91F: mov     r9d, edi
 * 00000001C002D922: mov     [rsp+68h+var_20], rbp
 * 00000001C002D927: mov     [rsp+68h+var_28], rdx
 * 00000001C002D92C: lea     rdx, [rsp+68h+arg_30]
 * 00000001C002D934: mov     [rsp+68h+var_30], 8
 * 00000001C002D93D: mov     [rsp+68h+var_38], rdx
 * 00000001C002D942: lea     rdx, [rsp+68h+arg_28]
 * 00000001C002D94A: mov     [rsp+68h+var_40], rbp
 * 00000001C002D94F: mov     [rsp+68h+var_48], rdx
 * 00000001C002D954: mov     edx, 2Bh ; '+'
 * 00000001C002D959: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002D95F: nop
 * 00000001C002D960: jmp     loc_1C000CCA7
 */
