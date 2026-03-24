/*
 * XREFs of WPP_RECORDER_SF_qdi @ 0x1C0019FB8
 * Callers:
 *     XilCoreDeviceSlot_SetDeviceContext @ 0x1C0019E94 (XilCoreDeviceSlot_SetDeviceContext.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qdi @ 0x1C0019FB8
 * Reason: Hex-Rays returned no pseudocode for 0x1C0019FB8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0019FB8: mov     [rsp+arg_0], rbx
 * 00000001C0019FBD: mov     [rsp+arg_8], rbp
 * 00000001C0019FC2: push    rsi
 * 00000001C0019FC3: sub     rsp, 60h
 * 00000001C0019FC7: mov     rbx, rcx
 * 00000001C0019FCA: mov     ebp, 0Bh
 * 00000001C0019FCF: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0019FD6: lea     esi, [rbp-3]
 * 00000001C0019FD9: test    dword ptr [rcx+2Ch], 200h
 * 00000001C0019FE0: jnz     loc_1C002EE64
 * 00000001C0019FE6: and     [rsp+68h+var_10], 0
 * 00000001C0019FEC: lea     rax, [rsp+68h+arg_38]
 * 00000001C0019FF4: mov     [rsp+68h+var_18], rsi
 * 00000001C0019FF9: lea     r9, WPP_cb7a5c278baa3da630509d7564b04261_Traceguids
 * 00000001C001A000: mov     [rsp+68h+var_20], rax
 * 00000001C001A005: mov     edx, 4
 * 00000001C001A00A: mov     [rsp+68h+var_28], 4
 * 00000001C001A013: lea     rax, [rsp+68h+arg_30]
 * 00000001C001A01B: mov     [rsp+68h+var_30], rax
 * 00000001C001A020: mov     rcx, rbx
 * 00000001C001A023: lea     rax, [rsp+68h+arg_28]
 * 00000001C001A02B: mov     [rsp+68h+var_38], rsi
 * 00000001C001A030: mov     [rsp+68h+var_40], rax
 * 00000001C001A035: lea     r8d, [rdx+6]
 * 00000001C001A039: mov     word ptr [rsp+68h+var_48], bp
 * 00000001C001A03E: call    cs:__imp_WppAutoLogTrace
 * 00000001C001A045: nop     dword ptr [rax+rax+00h]
 * 00000001C001A04A: mov     rbx, [rsp+68h+arg_0]
 * 00000001C001A04F: mov     rbp, [rsp+68h+arg_8]
 * 00000001C001A054: add     rsp, 60h
 * 00000001C001A058: pop     rsi
 * 00000001C001A059: retn
 * 00000001C002EE64: cmp     byte ptr [rcx+29h], 4
 * 00000001C002EE68: jb      loc_1C0019FE6
 * 00000001C002EE6E: and     [rsp+68h+var_18], 0
 * 00000001C002EE74: lea     rdx, [rsp+68h+arg_38]
 * 00000001C002EE7C: mov     rax, cs:pfnWppTraceMessage
 * 00000001C002EE83: lea     r8, WPP_cb7a5c278baa3da630509d7564b04261_Traceguids
 * 00000001C002EE8A: mov     rcx, [rcx+18h]
 * 00000001C002EE8E: mov     r9d, ebp
 * 00000001C002EE91: mov     [rsp+68h+var_20], rsi
 * 00000001C002EE96: mov     [rsp+68h+var_28], rdx
 * 00000001C002EE9B: lea     rdx, [rsp+68h+arg_30]
 * 00000001C002EEA3: mov     [rsp+68h+var_30], 4
 * 00000001C002EEAC: mov     [rsp+68h+var_38], rdx
 * 00000001C002EEB1: lea     rdx, [rsp+68h+arg_28]
 * 00000001C002EEB9: mov     [rsp+68h+var_40], rsi
 * 00000001C002EEBE: mov     [rsp+68h+var_48], rdx
 * 00000001C002EEC3: mov     edx, 2Bh ; '+'
 * 00000001C002EEC8: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002EECE: nop
 * 00000001C002EECF: jmp     loc_1C0019FE6
 */
