/*
 * XREFs of WPP_RECORDER_SF_qLq @ 0x1C000ADA0
 * Callers:
 *     Command_InternalSendCommand @ 0x1C000A9C8 (Command_InternalSendCommand.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qLq @ 0x1C000ADA0
 * Reason: Hex-Rays returned no pseudocode for 0x1C000ADA0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000ADA0: mov     [rsp+arg_0], rbx
 * 00000001C000ADA5: mov     [rsp+arg_8], rbp
 * 00000001C000ADAA: push    rdi
 * 00000001C000ADAB: sub     rsp, 60h
 * 00000001C000ADAF: mov     rdi, rcx
 * 00000001C000ADB2: movzx   ebx, r9w
 * 00000001C000ADB6: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C000ADBD: mov     ebp, 8
 * 00000001C000ADC2: mov     eax, [rcx+2Ch]
 * 00000001C000ADC5: test    al, 40h
 * 00000001C000ADC7: jnz     loc_1C002C4F2
 * 00000001C000ADCD: and     [rsp+68h+var_10], 0
 * 00000001C000ADD3: lea     rax, [rsp+68h+arg_38]
 * 00000001C000ADDB: mov     [rsp+68h+var_18], rbp
 * 00000001C000ADE0: lea     r9, WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids
 * 00000001C000ADE7: mov     [rsp+68h+var_20], rax
 * 00000001C000ADEC: mov     edx, 4
 * 00000001C000ADF1: mov     [rsp+68h+var_28], 4
 * 00000001C000ADFA: lea     rax, [rsp+68h+arg_30]
 * 00000001C000AE02: mov     [rsp+68h+var_30], rax
 * 00000001C000AE07: mov     rcx, rdi
 * 00000001C000AE0A: lea     rax, [rsp+68h+arg_28]
 * 00000001C000AE12: mov     [rsp+68h+var_38], rbp
 * 00000001C000AE17: mov     [rsp+68h+var_40], rax
 * 00000001C000AE1C: lea     r8d, [rdx+3]
 * 00000001C000AE20: mov     word ptr [rsp+68h+var_48], bx
 * 00000001C000AE25: call    cs:__imp_WppAutoLogTrace
 * 00000001C000AE2C: nop     dword ptr [rax+rax+00h]
 * 00000001C000AE31: mov     rbx, [rsp+68h+arg_0]
 * 00000001C000AE36: mov     rbp, [rsp+68h+arg_8]
 * 00000001C000AE3B: add     rsp, 60h
 * 00000001C000AE3F: pop     rdi
 * 00000001C000AE40: retn
 * 00000001C002C4F2: cmp     byte ptr [rcx+29h], 4
 * 00000001C002C4F6: jb      loc_1C000ADCD
 * 00000001C002C4FC: and     [rsp+68h+var_18], 0
 * 00000001C002C502: lea     rdx, [rsp+68h+arg_38]
 * 00000001C002C50A: mov     rax, cs:pfnWppTraceMessage
 * 00000001C002C511: lea     r8, WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids
 * 00000001C002C518: mov     rcx, [rcx+18h]
 * 00000001C002C51C: mov     r9d, ebx
 * 00000001C002C51F: mov     [rsp+68h+var_20], rbp
 * 00000001C002C524: mov     [rsp+68h+var_28], rdx
 * 00000001C002C529: lea     rdx, [rsp+68h+arg_30]
 * 00000001C002C531: mov     [rsp+68h+var_30], 4
 * 00000001C002C53A: mov     [rsp+68h+var_38], rdx
 * 00000001C002C53F: lea     rdx, [rsp+68h+arg_28]
 * 00000001C002C547: mov     [rsp+68h+var_40], rbp
 * 00000001C002C54C: mov     [rsp+68h+var_48], rdx
 * 00000001C002C551: mov     edx, 2Bh ; '+'
 * 00000001C002C556: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002C55C: nop
 * 00000001C002C55D: jmp     loc_1C000ADCD
 */
