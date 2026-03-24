/*
 * XREFs of WPP_RECORDER_SF_qLq @ 0x1C00041A0
 * Callers:
 *     Command_InternalSendCommand @ 0x1C0003E9C (Command_InternalSendCommand.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qLq @ 0x1C00041A0
 * Reason: Hex-Rays returned no pseudocode for 0x1C00041A0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00041A0: mov     [rsp+arg_0], rbx
 * 00000001C00041A5: mov     [rsp+arg_8], rbp
 * 00000001C00041AA: push    rdi
 * 00000001C00041AB: sub     rsp, 60h
 * 00000001C00041AF: mov     rdi, rcx
 * 00000001C00041B2: movzx   ebx, r9w
 * 00000001C00041B6: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00041BD: mov     ebp, 8
 * 00000001C00041C2: mov     eax, [rcx+2Ch]
 * 00000001C00041C5: test    al, 40h
 * 00000001C00041C7: jnz     loc_1C0021EC2
 * 00000001C00041CD: and     [rsp+68h+var_10], 0
 * 00000001C00041D3: lea     rax, [rsp+68h+arg_38]
 * 00000001C00041DB: mov     [rsp+68h+var_18], rbp
 * 00000001C00041E0: lea     r9, WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids
 * 00000001C00041E7: mov     [rsp+68h+var_20], rax
 * 00000001C00041EC: mov     edx, 4
 * 00000001C00041F1: mov     [rsp+68h+var_28], 4
 * 00000001C00041FA: lea     rax, [rsp+68h+arg_30]
 * 00000001C0004202: mov     [rsp+68h+var_30], rax
 * 00000001C0004207: mov     rcx, rdi
 * 00000001C000420A: lea     rax, [rsp+68h+arg_28]
 * 00000001C0004212: mov     [rsp+68h+var_38], rbp
 * 00000001C0004217: mov     [rsp+68h+var_40], rax
 * 00000001C000421C: lea     r8d, [rdx+3]
 * 00000001C0004220: mov     word ptr [rsp+68h+var_48], bx
 * 00000001C0004225: call    cs:__imp_WppAutoLogTrace
 * 00000001C000422C: nop     dword ptr [rax+rax+00h]
 * 00000001C0004231: mov     rbx, [rsp+68h+arg_0]
 * 00000001C0004236: mov     rbp, [rsp+68h+arg_8]
 * 00000001C000423B: add     rsp, 60h
 * 00000001C000423F: pop     rdi
 * 00000001C0004240: retn
 * 00000001C0021EC2: cmp     byte ptr [rcx+29h], 4
 * 00000001C0021EC6: jb      loc_1C00041CD
 * 00000001C0021ECC: and     [rsp+68h+var_18], 0
 * 00000001C0021ED2: lea     rdx, [rsp+68h+arg_38]
 * 00000001C0021EDA: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0021EE1: lea     r8, WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids
 * 00000001C0021EE8: mov     rcx, [rcx+18h]
 * 00000001C0021EEC: mov     r9d, ebx
 * 00000001C0021EEF: mov     [rsp+68h+var_20], rbp
 * 00000001C0021EF4: mov     [rsp+68h+var_28], rdx
 * 00000001C0021EF9: lea     rdx, [rsp+68h+arg_30]
 * 00000001C0021F01: mov     [rsp+68h+var_30], 4
 * 00000001C0021F0A: mov     [rsp+68h+var_38], rdx
 * 00000001C0021F0F: lea     rdx, [rsp+68h+arg_28]
 * 00000001C0021F17: mov     [rsp+68h+var_40], rbp
 * 00000001C0021F1C: mov     [rsp+68h+var_48], rdx
 * 00000001C0021F21: mov     edx, 2Bh ; '+'
 * 00000001C0021F26: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0021F2C: nop
 * 00000001C0021F2D: jmp     loc_1C00041CD
 */
