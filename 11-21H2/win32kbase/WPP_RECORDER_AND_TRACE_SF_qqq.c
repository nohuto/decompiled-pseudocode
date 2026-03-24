/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qqq @ 0x1C007FBC4
 * Callers:
 *     zzzDestroyQueue @ 0x1C0038C50 (zzzDestroyQueue.c)
 *     rimHandlePnpWaitersOnOwnedDevices @ 0x1C0049594 (rimHandlePnpWaitersOnOwnedDevices.c)
 *     ??0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z @ 0x1C007F760 (--0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_qqq @ 0x1C007FBC4
 * Reason: Hex-Rays returned no pseudocode for 0x1C007FBC4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C007FBC4: mov     [rsp+arg_0], rbx
 * 00000001C007FBC9: mov     [rsp+arg_8], rbp
 * 00000001C007FBCE: mov     [rsp+arg_10], rsi
 * 00000001C007FBD3: push    rdi
 * 00000001C007FBD4: sub     rsp, 60h
 * 00000001C007FBD8: movzx   edi, [rsp+68h+arg_30]
 * 00000001C007FBE0: mov     rsi, r9
 * 00000001C007FBE3: mov     bl, r8b
 * 00000001C007FBE6: mov     ebp, 8
 * 00000001C007FBEB: test    dl, dl
 * 00000001C007FBED: jnz     loc_1C0122AF4
 * 00000001C007FBF3: test    bl, bl
 * 00000001C007FBF5: jz      short loc_1C007FC5F
 * 00000001C007FBF7: and     [rsp+68h+var_10], 0
 * 00000001C007FBFD: lea     rax, [rsp+68h+arg_50]
 * 00000001C007FC05: mov     r9, [rsp+68h+arg_38]
 * 00000001C007FC0D: mov     rcx, rsi
 * 00000001C007FC10: mov     r8d, [rsp+68h+arg_28]
 * 00000001C007FC18: movzx   edx, [rsp+68h+arg_20]
 * 00000001C007FC20: mov     [rsp+68h+var_18], rbp
 * 00000001C007FC25: mov     [rsp+68h+var_20], rax
 * 00000001C007FC2A: lea     rax, [rsp+68h+arg_48]
 * 00000001C007FC32: mov     [rsp+68h+var_28], rbp
 * 00000001C007FC37: mov     [rsp+68h+var_30], rax
 * 00000001C007FC3C: lea     rax, [rsp+68h+arg_40]
 * 00000001C007FC44: mov     [rsp+68h+var_38], rbp
 * 00000001C007FC49: mov     [rsp+68h+var_40], rax
 * 00000001C007FC4E: mov     word ptr [rsp+68h+var_48], di
 * 00000001C007FC53: call    cs:__imp_WppAutoLogTrace
 * 00000001C007FC5A: nop     dword ptr [rax+rax+00h]
 * 00000001C007FC5F: lea     r11, [rsp+68h+var_8]
 * 00000001C007FC64: mov     rbx, [r11+10h]
 * 00000001C007FC68: mov     rbp, [r11+18h]
 * 00000001C007FC6C: mov     rsi, [r11+20h]
 * 00000001C007FC70: mov     rsp, r11
 * 00000001C007FC73: pop     rdi
 * 00000001C007FC74: retn
 * 00000001C0122AF4: and     [rsp+68h+var_18], 0
 * 00000001C0122AFA: lea     rdx, [rsp+68h+arg_50]
 * 00000001C0122B02: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0122B09: mov     r9d, edi
 * 00000001C0122B0C: mov     r8, [rsp+68h+arg_38]
 * 00000001C0122B14: mov     [rsp+68h+var_20], rbp
 * 00000001C0122B19: mov     [rsp+68h+var_28], rdx
 * 00000001C0122B1E: lea     rdx, [rsp+68h+arg_48]
 * 00000001C0122B26: mov     [rsp+68h+var_30], rbp
 * 00000001C0122B2B: mov     [rsp+68h+var_38], rdx
 * 00000001C0122B30: lea     rdx, [rsp+68h+arg_40]
 * 00000001C0122B38: mov     [rsp+68h+var_40], rbp
 * 00000001C0122B3D: mov     [rsp+68h+var_48], rdx
 * 00000001C0122B42: mov     edx, 2Bh ; '+'
 * 00000001C0122B47: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0122B4D: nop
 * 00000001C0122B4E: jmp     loc_1C007FBF3
 */
