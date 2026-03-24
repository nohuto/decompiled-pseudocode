/*
 * XREFs of WPP_RECORDER_SF_dqqd @ 0x1C000AE8C
 * Callers:
 *     UsbDevice_CompleteConfigureEndpointRequest @ 0x1C00085AC (UsbDevice_CompleteConfigureEndpointRequest.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dqqd @ 0x1C000AE8C
 * Reason: Hex-Rays returned no pseudocode for 0x1C000AE8C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000AE8C: mov     [rsp+arg_0], rbx
 * 00000001C000AE91: mov     [rsp+arg_8], rbp
 * 00000001C000AE96: mov     [rsp+arg_10], rsi
 * 00000001C000AE9B: push    rdi
 * 00000001C000AE9C: sub     rsp, 70h
 * 00000001C000AEA0: mov     edi, 4
 * 00000001C000AEA5: mov     rbx, rcx
 * 00000001C000AEA8: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C000AEAF: lea     ebp, [rdi+1Ch]
 * 00000001C000AEB2: test    dword ptr [rcx+2Ch], 800h
 * 00000001C000AEB9: lea     esi, [rdi+4]
 * 00000001C000AEBC: jnz     loc_1C002C782
 * 00000001C000AEC2: and     [rsp+78h+var_10], 0
 * 00000001C000AEC8: lea     rax, [rsp+78h+arg_40]
 * 00000001C000AED0: mov     [rsp+78h+var_18], rdi
 * 00000001C000AED5: lea     r9, WPP_a3acd40f84823909f7fc3b79b04bc30f_Traceguids
 * 00000001C000AEDC: mov     [rsp+78h+var_20], rax
 * 00000001C000AEE1: mov     r8d, 0Ch
 * 00000001C000AEE7: mov     [rsp+78h+var_28], rsi
 * 00000001C000AEEC: lea     rax, [rsp+78h+arg_38]
 * 00000001C000AEF4: mov     [rsp+78h+var_30], rax
 * 00000001C000AEF9: mov     edx, edi
 * 00000001C000AEFB: mov     [rsp+78h+var_38], rsi
 * 00000001C000AF00: lea     rax, [rsp+78h+arg_30]
 * 00000001C000AF08: mov     [rsp+78h+var_40], rax
 * 00000001C000AF0D: mov     rcx, rbx
 * 00000001C000AF10: lea     rax, [rsp+78h+arg_28]
 * 00000001C000AF18: mov     [rsp+78h+var_48], rdi
 * 00000001C000AF1D: mov     [rsp+78h+var_50], rax
 * 00000001C000AF22: mov     word ptr [rsp+78h+var_58], bp
 * 00000001C000AF27: call    cs:__imp_WppAutoLogTrace
 * 00000001C000AF2E: nop     dword ptr [rax+rax+00h]
 * 00000001C000AF33: lea     r11, [rsp+78h+var_8]
 * 00000001C000AF38: mov     rbx, [r11+10h]
 * 00000001C000AF3C: mov     rbp, [r11+18h]
 * 00000001C000AF40: mov     rsi, [r11+20h]
 * 00000001C000AF44: mov     rsp, r11
 * 00000001C000AF47: pop     rdi
 * 00000001C000AF48: retn
 * 00000001C002C782: cmp     [rcx+29h], dil
 * 00000001C002C786: jb      loc_1C000AEC2
 * 00000001C002C78C: and     [rsp+78h+var_18], 0
 * 00000001C002C792: lea     rdx, [rsp+78h+arg_40]
 * 00000001C002C79A: mov     rax, cs:pfnWppTraceMessage
 * 00000001C002C7A1: lea     r8, WPP_a3acd40f84823909f7fc3b79b04bc30f_Traceguids
 * 00000001C002C7A8: mov     rcx, [rcx+18h]
 * 00000001C002C7AC: mov     r9d, ebp
 * 00000001C002C7AF: mov     [rsp+78h+var_20], rdi
 * 00000001C002C7B4: mov     [rsp+78h+var_28], rdx
 * 00000001C002C7B9: lea     rdx, [rsp+78h+arg_38]
 * 00000001C002C7C1: mov     [rsp+78h+var_30], rsi
 * 00000001C002C7C6: mov     [rsp+78h+var_38], rdx
 * 00000001C002C7CB: lea     rdx, [rsp+78h+arg_30]
 * 00000001C002C7D3: mov     [rsp+78h+var_40], rsi
 * 00000001C002C7D8: mov     [rsp+78h+var_48], rdx
 * 00000001C002C7DD: lea     rdx, [rsp+78h+arg_28]
 * 00000001C002C7E5: mov     [rsp+78h+var_50], rdi
 * 00000001C002C7EA: mov     [rsp+78h+var_58], rdx
 * 00000001C002C7EF: mov     edx, 2Bh ; '+'
 * 00000001C002C7F4: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002C7FA: nop
 * 00000001C002C7FB: jmp     loc_1C000AEC2
 */
