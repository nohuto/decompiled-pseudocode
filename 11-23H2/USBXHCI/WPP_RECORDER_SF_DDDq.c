/*
 * XREFs of WPP_RECORDER_SF_DDDq @ 0x1C000DE84
 * Callers:
 *     Bulk_WdfEvtRequestCancel @ 0x1C000DD10 (Bulk_WdfEvtRequestCancel.c)
 *     Bulk_RetrieveNextStage @ 0x1C0011FDC (Bulk_RetrieveNextStage.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDDq @ 0x1C000DE84
 * Reason: Hex-Rays returned no pseudocode for 0x1C000DE84
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000DE84: mov     [rsp+arg_0], rbx
 * 00000001C000DE89: mov     [rsp+arg_8], rbp
 * 00000001C000DE8E: mov     [rsp+arg_10], rsi
 * 00000001C000DE93: push    rdi
 * 00000001C000DE94: sub     rsp, 70h
 * 00000001C000DE98: mov     rsi, rcx
 * 00000001C000DE9B: movzx   edi, r9w
 * 00000001C000DE9F: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C000DEA6: mov     ebp, 4
 * 00000001C000DEAB: movzx   ebx, dl
 * 00000001C000DEAE: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C000DEB5: jnz     loc_1C0024DAE
 * 00000001C000DEBB: and     [rsp+78h+var_10], 0
 * 00000001C000DEC1: lea     rax, [rsp+78h+arg_40]
 * 00000001C000DEC9: mov     [rsp+78h+var_18], 8
 * 00000001C000DED2: lea     r9, WPP_92c598da33ef340e00f5370896d293ba_Traceguids
 * 00000001C000DED9: mov     [rsp+78h+var_20], rax
 * 00000001C000DEDE: mov     r8d, 0Eh
 * 00000001C000DEE4: mov     [rsp+78h+var_28], rbp
 * 00000001C000DEE9: lea     rax, [rsp+78h+arg_38]
 * 00000001C000DEF1: mov     [rsp+78h+var_30], rax
 * 00000001C000DEF6: mov     edx, ebx
 * 00000001C000DEF8: mov     [rsp+78h+var_38], rbp
 * 00000001C000DEFD: lea     rax, [rsp+78h+arg_30]
 * 00000001C000DF05: mov     [rsp+78h+var_40], rax
 * 00000001C000DF0A: mov     rcx, rsi
 * 00000001C000DF0D: lea     rax, [rsp+78h+arg_28]
 * 00000001C000DF15: mov     [rsp+78h+var_48], rbp
 * 00000001C000DF1A: mov     [rsp+78h+var_50], rax
 * 00000001C000DF1F: mov     word ptr [rsp+78h+var_58], di
 * 00000001C000DF24: call    cs:__imp_WppAutoLogTrace
 * 00000001C000DF2B: nop     dword ptr [rax+rax+00h]
 * 00000001C000DF30: lea     r11, [rsp+78h+var_8]
 * 00000001C000DF35: mov     rbx, [r11+10h]
 * 00000001C000DF39: mov     rbp, [r11+18h]
 * 00000001C000DF3D: mov     rsi, [r11+20h]
 * 00000001C000DF41: mov     rsp, r11
 * 00000001C000DF44: pop     rdi
 * 00000001C000DF45: retn
 * 00000001C0024DAE: cmp     [rcx+29h], bl
 * 00000001C0024DB1: jb      loc_1C000DEBB
 * 00000001C0024DB7: and     [rsp+78h+var_18], 0
 * 00000001C0024DBD: lea     rdx, [rsp+78h+arg_40]
 * 00000001C0024DC5: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0024DCC: lea     r8, WPP_92c598da33ef340e00f5370896d293ba_Traceguids
 * 00000001C0024DD3: mov     rcx, [rcx+18h]
 * 00000001C0024DD7: mov     r9d, edi
 * 00000001C0024DDA: mov     [rsp+78h+var_20], 8
 * 00000001C0024DE3: mov     [rsp+78h+var_28], rdx
 * 00000001C0024DE8: lea     rdx, [rsp+78h+arg_38]
 * 00000001C0024DF0: mov     [rsp+78h+var_30], rbp
 * 00000001C0024DF5: mov     [rsp+78h+var_38], rdx
 * 00000001C0024DFA: lea     rdx, [rsp+78h+arg_30]
 * 00000001C0024E02: mov     [rsp+78h+var_40], rbp
 * 00000001C0024E07: mov     [rsp+78h+var_48], rdx
 * 00000001C0024E0C: lea     rdx, [rsp+78h+arg_28]
 * 00000001C0024E14: mov     [rsp+78h+var_50], rbp
 * 00000001C0024E19: mov     [rsp+78h+var_58], rdx
 * 00000001C0024E1E: mov     edx, 2Bh ; '+'
 * 00000001C0024E23: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0024E29: nop
 * 00000001C0024E2A: jmp     loc_1C000DEBB
 */
