/*
 * XREFs of WPP_RECORDER_SF_dqqd @ 0x1C000AEBC
 * Callers:
 *     UsbDevice_CompleteConfigureEndpointRequest @ 0x1C00085DC (UsbDevice_CompleteConfigureEndpointRequest.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dqqd @ 0x1C000AEBC
 * Reason: Hex-Rays returned no pseudocode for 0x1C000AEBC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000AEBC: mov     [rsp+arg_0], rbx
 * 00000001C000AEC1: mov     [rsp+arg_8], rbp
 * 00000001C000AEC6: mov     [rsp+arg_10], rsi
 * 00000001C000AECB: push    rdi
 * 00000001C000AECC: sub     rsp, 70h
 * 00000001C000AED0: mov     edi, 4
 * 00000001C000AED5: mov     rbx, rcx
 * 00000001C000AED8: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C000AEDF: lea     ebp, [rdi+1Ch]
 * 00000001C000AEE2: test    dword ptr [rcx+2Ch], 800h
 * 00000001C000AEE9: lea     esi, [rdi+4]
 * 00000001C000AEEC: jnz     loc_1C002C642
 * 00000001C000AEF2: and     [rsp+78h+var_10], 0
 * 00000001C000AEF8: lea     rax, [rsp+78h+arg_40]
 * 00000001C000AF00: mov     [rsp+78h+var_18], rdi
 * 00000001C000AF05: lea     r9, WPP_a3acd40f84823909f7fc3b79b04bc30f_Traceguids
 * 00000001C000AF0C: mov     [rsp+78h+var_20], rax
 * 00000001C000AF11: mov     r8d, 0Ch
 * 00000001C000AF17: mov     [rsp+78h+var_28], rsi
 * 00000001C000AF1C: lea     rax, [rsp+78h+arg_38]
 * 00000001C000AF24: mov     [rsp+78h+var_30], rax
 * 00000001C000AF29: mov     edx, edi
 * 00000001C000AF2B: mov     [rsp+78h+var_38], rsi
 * 00000001C000AF30: lea     rax, [rsp+78h+arg_30]
 * 00000001C000AF38: mov     [rsp+78h+var_40], rax
 * 00000001C000AF3D: mov     rcx, rbx
 * 00000001C000AF40: lea     rax, [rsp+78h+arg_28]
 * 00000001C000AF48: mov     [rsp+78h+var_48], rdi
 * 00000001C000AF4D: mov     [rsp+78h+var_50], rax
 * 00000001C000AF52: mov     word ptr [rsp+78h+var_58], bp
 * 00000001C000AF57: call    cs:__imp_WppAutoLogTrace
 * 00000001C000AF5E: nop     dword ptr [rax+rax+00h]
 * 00000001C000AF63: lea     r11, [rsp+78h+var_8]
 * 00000001C000AF68: mov     rbx, [r11+10h]
 * 00000001C000AF6C: mov     rbp, [r11+18h]
 * 00000001C000AF70: mov     rsi, [r11+20h]
 * 00000001C000AF74: mov     rsp, r11
 * 00000001C000AF77: pop     rdi
 * 00000001C000AF78: retn
 * 00000001C002C642: cmp     [rcx+29h], dil
 * 00000001C002C646: jb      loc_1C000AEF2
 * 00000001C002C64C: and     [rsp+78h+var_18], 0
 * 00000001C002C652: lea     rdx, [rsp+78h+arg_40]
 * 00000001C002C65A: mov     rax, cs:pfnWppTraceMessage
 * 00000001C002C661: lea     r8, WPP_a3acd40f84823909f7fc3b79b04bc30f_Traceguids
 * 00000001C002C668: mov     rcx, [rcx+18h]
 * 00000001C002C66C: mov     r9d, ebp
 * 00000001C002C66F: mov     [rsp+78h+var_20], rdi
 * 00000001C002C674: mov     [rsp+78h+var_28], rdx
 * 00000001C002C679: lea     rdx, [rsp+78h+arg_38]
 * 00000001C002C681: mov     [rsp+78h+var_30], rsi
 * 00000001C002C686: mov     [rsp+78h+var_38], rdx
 * 00000001C002C68B: lea     rdx, [rsp+78h+arg_30]
 * 00000001C002C693: mov     [rsp+78h+var_40], rsi
 * 00000001C002C698: mov     [rsp+78h+var_48], rdx
 * 00000001C002C69D: lea     rdx, [rsp+78h+arg_28]
 * 00000001C002C6A5: mov     [rsp+78h+var_50], rdi
 * 00000001C002C6AA: mov     [rsp+78h+var_58], rdx
 * 00000001C002C6AF: mov     edx, 2Bh ; '+'
 * 00000001C002C6B4: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002C6BA: nop
 * 00000001C002C6BB: jmp     loc_1C000AEF2
 */
