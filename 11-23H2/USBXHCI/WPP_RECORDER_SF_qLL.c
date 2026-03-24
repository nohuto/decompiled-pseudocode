/*
 * XREFs of WPP_RECORDER_SF_qLL @ 0x1C0013DC4
 * Callers:
 *     Interrupter_DeferredWorkProcessor @ 0x1C0008BE0 (Interrupter_DeferredWorkProcessor.c)
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C000E9C0 (Controller_WdfEvtDeviceD0Exit.c)
 *     Controller_WdfEvtDeviceD0ExitPreInterruptsDisabled @ 0x1C000F310 (Controller_WdfEvtDeviceD0ExitPreInterruptsDisabled.c)
 *     Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1C0013F90 (Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C00144B0 (Controller_WdfEvtDeviceD0Entry.c)
 *     ESM_LogUnhandledEvent @ 0x1C0051248 (ESM_LogUnhandledEvent.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qLL @ 0x1C0013DC4
 * Reason: Hex-Rays returned no pseudocode for 0x1C0013DC4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0013DC4: mov     [rsp+arg_0], rbx
 * 00000001C0013DC9: mov     [rsp+arg_8], rbp
 * 00000001C0013DCE: mov     [rsp+arg_10], rsi
 * 00000001C0013DD3: push    rdi
 * 00000001C0013DD4: push    r14
 * 00000001C0013DD6: push    r15
 * 00000001C0013DD8: sub     rsp, 60h
 * 00000001C0013DDC: mov     r14d, r8d
 * 00000001C0013DDF: mov     r15, rcx
 * 00000001C0013DE2: mov     edi, r8d
 * 00000001C0013DE5: shr     rdi, 10h
 * 00000001C0013DE9: movzx   esi, dl
 * 00000001C0013DEC: lea     ebx, [r14-1]
 * 00000001C0013DF0: movzx   ebp, r9w
 * 00000001C0013DF4: mov     r10d, ebx
 * 00000001C0013DF7: and     ebx, 1Fh
 * 00000001C0013DFA: shr     r10, 5
 * 00000001C0013DFE: lea     rax, [rdi+rdi*4]
 * 00000001C0013E02: and     r10d, 7FFh
 * 00000001C0013E09: mov     edx, ebx
 * 00000001C0013E0B: mov     ebx, 4
 * 00000001C0013E10: lea     r11, [r10+rax*4]
 * 00000001C0013E14: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C0013E1B: mov     eax, [r10+r11*4+2Ch]
 * 00000001C0013E20: bt      eax, edx
 * 00000001C0013E23: jb      loc_1C0027182
 * 00000001C0013E29: and     [rsp+78h+var_20], 0
 * 00000001C0013E2F: lea     rax, [rsp+78h+arg_38]
 * 00000001C0013E37: mov     r9, [rsp+78h+arg_20]
 * 00000001C0013E3F: mov     r8d, r14d
 * 00000001C0013E42: mov     [rsp+78h+var_28], rbx
 * 00000001C0013E47: mov     edx, esi
 * 00000001C0013E49: mov     [rsp+78h+var_30], rax
 * 00000001C0013E4E: mov     rcx, r15
 * 00000001C0013E51: mov     [rsp+78h+var_38], rbx
 * 00000001C0013E56: lea     rax, [rsp+78h+arg_30]
 * 00000001C0013E5E: mov     [rsp+78h+var_40], rax
 * 00000001C0013E63: lea     rax, [rsp+78h+arg_28]
 * 00000001C0013E6B: mov     [rsp+78h+var_48], 8
 * 00000001C0013E74: mov     [rsp+78h+var_50], rax
 * 00000001C0013E79: mov     word ptr [rsp+78h+var_58], bp
 * 00000001C0013E7E: call    cs:__imp_WppAutoLogTrace
 * 00000001C0013E85: nop     dword ptr [rax+rax+00h]
 * 00000001C0013E8A: lea     r11, [rsp+78h+var_18]
 * 00000001C0013E8F: mov     rbx, [r11+20h]
 * 00000001C0013E93: mov     rbp, [r11+28h]
 * 00000001C0013E97: mov     rsi, [r11+30h]
 * 00000001C0013E9B: mov     rsp, r11
 * 00000001C0013E9E: pop     r15
 * 00000001C0013EA0: pop     r14
 * 00000001C0013EA2: pop     rdi
 * 00000001C0013EA3: retn
 * 00000001C0027182: lea     rcx, [rdi+rdi*4]
 * 00000001C0027186: add     rcx, rcx
 * 00000001C0027189: cmp     [r10+rcx*8+29h], sil
 * 00000001C002718E: jb      loc_1C0013E29
 * 00000001C0027194: and     [rsp+78h+var_28], 0
 * 00000001C002719A: lea     rdx, [rsp+78h+arg_38]
 * 00000001C00271A2: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00271A9: mov     r9d, ebp
 * 00000001C00271AC: mov     r8, [rsp+78h+arg_20]
 * 00000001C00271B4: mov     rcx, [r10+rcx*8+18h]
 * 00000001C00271B9: mov     [rsp+78h+var_30], rbx
 * 00000001C00271BE: mov     [rsp+78h+var_38], rdx
 * 00000001C00271C3: lea     rdx, [rsp+78h+arg_30]
 * 00000001C00271CB: mov     [rsp+78h+var_40], rbx
 * 00000001C00271D0: mov     [rsp+78h+var_48], rdx
 * 00000001C00271D5: lea     rdx, [rsp+78h+arg_28]
 * 00000001C00271DD: mov     [rsp+78h+var_50], 8
 * 00000001C00271E6: mov     [rsp+78h+var_58], rdx
 * 00000001C00271EB: mov     edx, 2Bh ; '+'
 * 00000001C00271F0: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00271F6: nop
 * 00000001C00271F7: jmp     loc_1C0013E29
 */
