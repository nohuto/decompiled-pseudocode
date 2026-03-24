/*
 * XREFs of WPP_RECORDER_SF_qdi @ 0x1C0019F68
 * Callers:
 *     XilCoreDeviceSlot_SetDeviceContext @ 0x1C0019E44 (XilCoreDeviceSlot_SetDeviceContext.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qdi @ 0x1C0019F68
 * Reason: Hex-Rays returned no pseudocode for 0x1C0019F68
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0019F68: mov     [rsp+arg_0], rbx
 * 00000001C0019F6D: mov     [rsp+arg_8], rbp
 * 00000001C0019F72: push    rsi
 * 00000001C0019F73: sub     rsp, 60h
 * 00000001C0019F77: mov     rbx, rcx
 * 00000001C0019F7A: mov     ebp, 0Bh
 * 00000001C0019F7F: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0019F86: lea     esi, [rbp-3]
 * 00000001C0019F89: test    dword ptr [rcx+2Ch], 200h
 * 00000001C0019F90: jnz     loc_1C002EFA4
 * 00000001C0019F96: and     [rsp+68h+var_10], 0
 * 00000001C0019F9C: lea     rax, [rsp+68h+arg_38]
 * 00000001C0019FA4: mov     [rsp+68h+var_18], rsi
 * 00000001C0019FA9: lea     r9, WPP_cb7a5c278baa3da630509d7564b04261_Traceguids
 * 00000001C0019FB0: mov     [rsp+68h+var_20], rax
 * 00000001C0019FB5: mov     edx, 4
 * 00000001C0019FBA: mov     [rsp+68h+var_28], 4
 * 00000001C0019FC3: lea     rax, [rsp+68h+arg_30]
 * 00000001C0019FCB: mov     [rsp+68h+var_30], rax
 * 00000001C0019FD0: mov     rcx, rbx
 * 00000001C0019FD3: lea     rax, [rsp+68h+arg_28]
 * 00000001C0019FDB: mov     [rsp+68h+var_38], rsi
 * 00000001C0019FE0: mov     [rsp+68h+var_40], rax
 * 00000001C0019FE5: lea     r8d, [rdx+6]
 * 00000001C0019FE9: mov     word ptr [rsp+68h+var_48], bp
 * 00000001C0019FEE: call    cs:__imp_WppAutoLogTrace
 * 00000001C0019FF5: nop     dword ptr [rax+rax+00h]
 * 00000001C0019FFA: mov     rbx, [rsp+68h+arg_0]
 * 00000001C0019FFF: mov     rbp, [rsp+68h+arg_8]
 * 00000001C001A004: add     rsp, 60h
 * 00000001C001A008: pop     rsi
 * 00000001C001A009: retn
 * 00000001C002EFA4: cmp     byte ptr [rcx+29h], 4
 * 00000001C002EFA8: jb      loc_1C0019F96
 * 00000001C002EFAE: and     [rsp+68h+var_18], 0
 * 00000001C002EFB4: lea     rdx, [rsp+68h+arg_38]
 * 00000001C002EFBC: mov     rax, cs:pfnWppTraceMessage
 * 00000001C002EFC3: lea     r8, WPP_cb7a5c278baa3da630509d7564b04261_Traceguids
 * 00000001C002EFCA: mov     rcx, [rcx+18h]
 * 00000001C002EFCE: mov     r9d, ebp
 * 00000001C002EFD1: mov     [rsp+68h+var_20], rsi
 * 00000001C002EFD6: mov     [rsp+68h+var_28], rdx
 * 00000001C002EFDB: lea     rdx, [rsp+68h+arg_30]
 * 00000001C002EFE3: mov     [rsp+68h+var_30], 4
 * 00000001C002EFEC: mov     [rsp+68h+var_38], rdx
 * 00000001C002EFF1: lea     rdx, [rsp+68h+arg_28]
 * 00000001C002EFF9: mov     [rsp+68h+var_40], rsi
 * 00000001C002EFFE: mov     [rsp+68h+var_48], rdx
 * 00000001C002F003: mov     edx, 2Bh ; '+'
 * 00000001C002F008: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002F00E: nop
 * 00000001C002F00F: jmp     loc_1C0019F96
 */
