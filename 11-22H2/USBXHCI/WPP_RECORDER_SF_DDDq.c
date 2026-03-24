/*
 * XREFs of WPP_RECORDER_SF_DDDq @ 0x1C000DEB4
 * Callers:
 *     Bulk_WdfEvtRequestCancel @ 0x1C000DD40 (Bulk_WdfEvtRequestCancel.c)
 *     Bulk_RetrieveNextStage @ 0x1C001200C (Bulk_RetrieveNextStage.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDDq @ 0x1C000DEB4
 * Reason: Hex-Rays returned no pseudocode for 0x1C000DEB4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000DEB4: mov     [rsp+arg_0], rbx
 * 00000001C000DEB9: mov     [rsp+arg_8], rbp
 * 00000001C000DEBE: mov     [rsp+arg_10], rsi
 * 00000001C000DEC3: push    rdi
 * 00000001C000DEC4: sub     rsp, 70h
 * 00000001C000DEC8: mov     rsi, rcx
 * 00000001C000DECB: movzx   edi, r9w
 * 00000001C000DECF: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C000DED6: mov     ebp, 4
 * 00000001C000DEDB: movzx   ebx, dl
 * 00000001C000DEDE: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C000DEE5: jnz     loc_1C0024C6E
 * 00000001C000DEEB: and     [rsp+78h+var_10], 0
 * 00000001C000DEF1: lea     rax, [rsp+78h+arg_40]
 * 00000001C000DEF9: mov     [rsp+78h+var_18], 8
 * 00000001C000DF02: lea     r9, WPP_92c598da33ef340e00f5370896d293ba_Traceguids
 * 00000001C000DF09: mov     [rsp+78h+var_20], rax
 * 00000001C000DF0E: mov     r8d, 0Eh
 * 00000001C000DF14: mov     [rsp+78h+var_28], rbp
 * 00000001C000DF19: lea     rax, [rsp+78h+arg_38]
 * 00000001C000DF21: mov     [rsp+78h+var_30], rax
 * 00000001C000DF26: mov     edx, ebx
 * 00000001C000DF28: mov     [rsp+78h+var_38], rbp
 * 00000001C000DF2D: lea     rax, [rsp+78h+arg_30]
 * 00000001C000DF35: mov     [rsp+78h+var_40], rax
 * 00000001C000DF3A: mov     rcx, rsi
 * 00000001C000DF3D: lea     rax, [rsp+78h+arg_28]
 * 00000001C000DF45: mov     [rsp+78h+var_48], rbp
 * 00000001C000DF4A: mov     [rsp+78h+var_50], rax
 * 00000001C000DF4F: mov     word ptr [rsp+78h+var_58], di
 * 00000001C000DF54: call    cs:__imp_WppAutoLogTrace
 * 00000001C000DF5B: nop     dword ptr [rax+rax+00h]
 * 00000001C000DF60: lea     r11, [rsp+78h+var_8]
 * 00000001C000DF65: mov     rbx, [r11+10h]
 * 00000001C000DF69: mov     rbp, [r11+18h]
 * 00000001C000DF6D: mov     rsi, [r11+20h]
 * 00000001C000DF71: mov     rsp, r11
 * 00000001C000DF74: pop     rdi
 * 00000001C000DF75: retn
 * 00000001C0024C6E: cmp     [rcx+29h], bl
 * 00000001C0024C71: jb      loc_1C000DEEB
 * 00000001C0024C77: and     [rsp+78h+var_18], 0
 * 00000001C0024C7D: lea     rdx, [rsp+78h+arg_40]
 * 00000001C0024C85: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0024C8C: lea     r8, WPP_92c598da33ef340e00f5370896d293ba_Traceguids
 * 00000001C0024C93: mov     rcx, [rcx+18h]
 * 00000001C0024C97: mov     r9d, edi
 * 00000001C0024C9A: mov     [rsp+78h+var_20], 8
 * 00000001C0024CA3: mov     [rsp+78h+var_28], rdx
 * 00000001C0024CA8: lea     rdx, [rsp+78h+arg_38]
 * 00000001C0024CB0: mov     [rsp+78h+var_30], rbp
 * 00000001C0024CB5: mov     [rsp+78h+var_38], rdx
 * 00000001C0024CBA: lea     rdx, [rsp+78h+arg_30]
 * 00000001C0024CC2: mov     [rsp+78h+var_40], rbp
 * 00000001C0024CC7: mov     [rsp+78h+var_48], rdx
 * 00000001C0024CCC: lea     rdx, [rsp+78h+arg_28]
 * 00000001C0024CD4: mov     [rsp+78h+var_50], rbp
 * 00000001C0024CD9: mov     [rsp+78h+var_58], rdx
 * 00000001C0024CDE: mov     edx, 2Bh ; '+'
 * 00000001C0024CE3: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0024CE9: nop
 * 00000001C0024CEA: jmp     loc_1C000DEEB
 */
