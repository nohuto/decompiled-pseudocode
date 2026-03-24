/*
 * XREFs of WPP_RECORDER_SF_qLq @ 0x1C000AD70
 * Callers:
 *     Command_InternalSendCommand @ 0x1C000A998 (Command_InternalSendCommand.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qLq @ 0x1C000AD70
 * Reason: Hex-Rays returned no pseudocode for 0x1C000AD70
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000AD70: mov     [rsp+arg_0], rbx
 * 00000001C000AD75: mov     [rsp+arg_8], rbp
 * 00000001C000AD7A: push    rdi
 * 00000001C000AD7B: sub     rsp, 60h
 * 00000001C000AD7F: mov     rdi, rcx
 * 00000001C000AD82: movzx   ebx, r9w
 * 00000001C000AD86: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C000AD8D: mov     ebp, 8
 * 00000001C000AD92: mov     eax, [rcx+2Ch]
 * 00000001C000AD95: test    al, 40h
 * 00000001C000AD97: jnz     loc_1C002C632
 * 00000001C000AD9D: and     [rsp+68h+var_10], 0
 * 00000001C000ADA3: lea     rax, [rsp+68h+arg_38]
 * 00000001C000ADAB: mov     [rsp+68h+var_18], rbp
 * 00000001C000ADB0: lea     r9, WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids
 * 00000001C000ADB7: mov     [rsp+68h+var_20], rax
 * 00000001C000ADBC: mov     edx, 4
 * 00000001C000ADC1: mov     [rsp+68h+var_28], 4
 * 00000001C000ADCA: lea     rax, [rsp+68h+arg_30]
 * 00000001C000ADD2: mov     [rsp+68h+var_30], rax
 * 00000001C000ADD7: mov     rcx, rdi
 * 00000001C000ADDA: lea     rax, [rsp+68h+arg_28]
 * 00000001C000ADE2: mov     [rsp+68h+var_38], rbp
 * 00000001C000ADE7: mov     [rsp+68h+var_40], rax
 * 00000001C000ADEC: lea     r8d, [rdx+3]
 * 00000001C000ADF0: mov     word ptr [rsp+68h+var_48], bx
 * 00000001C000ADF5: call    cs:__imp_WppAutoLogTrace
 * 00000001C000ADFC: nop     dword ptr [rax+rax+00h]
 * 00000001C000AE01: mov     rbx, [rsp+68h+arg_0]
 * 00000001C000AE06: mov     rbp, [rsp+68h+arg_8]
 * 00000001C000AE0B: add     rsp, 60h
 * 00000001C000AE0F: pop     rdi
 * 00000001C000AE10: retn
 * 00000001C002C632: cmp     byte ptr [rcx+29h], 4
 * 00000001C002C636: jb      loc_1C000AD9D
 * 00000001C002C63C: and     [rsp+68h+var_18], 0
 * 00000001C002C642: lea     rdx, [rsp+68h+arg_38]
 * 00000001C002C64A: mov     rax, cs:pfnWppTraceMessage
 * 00000001C002C651: lea     r8, WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids
 * 00000001C002C658: mov     rcx, [rcx+18h]
 * 00000001C002C65C: mov     r9d, ebx
 * 00000001C002C65F: mov     [rsp+68h+var_20], rbp
 * 00000001C002C664: mov     [rsp+68h+var_28], rdx
 * 00000001C002C669: lea     rdx, [rsp+68h+arg_30]
 * 00000001C002C671: mov     [rsp+68h+var_30], 4
 * 00000001C002C67A: mov     [rsp+68h+var_38], rdx
 * 00000001C002C67F: lea     rdx, [rsp+68h+arg_28]
 * 00000001C002C687: mov     [rsp+68h+var_40], rbp
 * 00000001C002C68C: mov     [rsp+68h+var_48], rdx
 * 00000001C002C691: mov     edx, 2Bh ; '+'
 * 00000001C002C696: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002C69C: nop
 * 00000001C002C69D: jmp     loc_1C000AD9D
 */
