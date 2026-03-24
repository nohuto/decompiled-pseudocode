/*
 * XREFs of WPP_RECORDER_SF_qLL @ 0x1C0013E14
 * Callers:
 *     Interrupter_DeferredWorkProcessor @ 0x1C0008C10 (Interrupter_DeferredWorkProcessor.c)
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C000E9F0 (Controller_WdfEvtDeviceD0Exit.c)
 *     Controller_WdfEvtDeviceD0ExitPreInterruptsDisabled @ 0x1C000F340 (Controller_WdfEvtDeviceD0ExitPreInterruptsDisabled.c)
 *     Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1C0013FE0 (Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0014500 (Controller_WdfEvtDeviceD0Entry.c)
 *     ESM_LogUnhandledEvent @ 0x1C0051108 (ESM_LogUnhandledEvent.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qLL @ 0x1C0013E14
 * Reason: Hex-Rays returned no pseudocode for 0x1C0013E14
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0013E14: mov     [rsp+arg_0], rbx
 * 00000001C0013E19: mov     [rsp+arg_8], rbp
 * 00000001C0013E1E: mov     [rsp+arg_10], rsi
 * 00000001C0013E23: push    rdi
 * 00000001C0013E24: push    r14
 * 00000001C0013E26: push    r15
 * 00000001C0013E28: sub     rsp, 60h
 * 00000001C0013E2C: mov     r14d, r8d
 * 00000001C0013E2F: mov     r15, rcx
 * 00000001C0013E32: mov     edi, r8d
 * 00000001C0013E35: shr     rdi, 10h
 * 00000001C0013E39: movzx   esi, dl
 * 00000001C0013E3C: lea     ebx, [r14-1]
 * 00000001C0013E40: movzx   ebp, r9w
 * 00000001C0013E44: mov     r10d, ebx
 * 00000001C0013E47: and     ebx, 1Fh
 * 00000001C0013E4A: shr     r10, 5
 * 00000001C0013E4E: lea     rax, [rdi+rdi*4]
 * 00000001C0013E52: and     r10d, 7FFh
 * 00000001C0013E59: mov     edx, ebx
 * 00000001C0013E5B: mov     ebx, 4
 * 00000001C0013E60: lea     r11, [r10+rax*4]
 * 00000001C0013E64: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C0013E6B: mov     eax, [r10+r11*4+2Ch]
 * 00000001C0013E70: bt      eax, edx
 * 00000001C0013E73: jb      loc_1C0027042
 * 00000001C0013E79: and     [rsp+78h+var_20], 0
 * 00000001C0013E7F: lea     rax, [rsp+78h+arg_38]
 * 00000001C0013E87: mov     r9, [rsp+78h+arg_20]
 * 00000001C0013E8F: mov     r8d, r14d
 * 00000001C0013E92: mov     [rsp+78h+var_28], rbx
 * 00000001C0013E97: mov     edx, esi
 * 00000001C0013E99: mov     [rsp+78h+var_30], rax
 * 00000001C0013E9E: mov     rcx, r15
 * 00000001C0013EA1: mov     [rsp+78h+var_38], rbx
 * 00000001C0013EA6: lea     rax, [rsp+78h+arg_30]
 * 00000001C0013EAE: mov     [rsp+78h+var_40], rax
 * 00000001C0013EB3: lea     rax, [rsp+78h+arg_28]
 * 00000001C0013EBB: mov     [rsp+78h+var_48], 8
 * 00000001C0013EC4: mov     [rsp+78h+var_50], rax
 * 00000001C0013EC9: mov     word ptr [rsp+78h+var_58], bp
 * 00000001C0013ECE: call    cs:__imp_WppAutoLogTrace
 * 00000001C0013ED5: nop     dword ptr [rax+rax+00h]
 * 00000001C0013EDA: lea     r11, [rsp+78h+var_18]
 * 00000001C0013EDF: mov     rbx, [r11+20h]
 * 00000001C0013EE3: mov     rbp, [r11+28h]
 * 00000001C0013EE7: mov     rsi, [r11+30h]
 * 00000001C0013EEB: mov     rsp, r11
 * 00000001C0013EEE: pop     r15
 * 00000001C0013EF0: pop     r14
 * 00000001C0013EF2: pop     rdi
 * 00000001C0013EF3: retn
 * 00000001C0027042: lea     rcx, [rdi+rdi*4]
 * 00000001C0027046: add     rcx, rcx
 * 00000001C0027049: cmp     [r10+rcx*8+29h], sil
 * 00000001C002704E: jb      loc_1C0013E79
 * 00000001C0027054: and     [rsp+78h+var_28], 0
 * 00000001C002705A: lea     rdx, [rsp+78h+arg_38]
 * 00000001C0027062: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0027069: mov     r9d, ebp
 * 00000001C002706C: mov     r8, [rsp+78h+arg_20]
 * 00000001C0027074: mov     rcx, [r10+rcx*8+18h]
 * 00000001C0027079: mov     [rsp+78h+var_30], rbx
 * 00000001C002707E: mov     [rsp+78h+var_38], rdx
 * 00000001C0027083: lea     rdx, [rsp+78h+arg_30]
 * 00000001C002708B: mov     [rsp+78h+var_40], rbx
 * 00000001C0027090: mov     [rsp+78h+var_48], rdx
 * 00000001C0027095: lea     rdx, [rsp+78h+arg_28]
 * 00000001C002709D: mov     [rsp+78h+var_50], 8
 * 00000001C00270A6: mov     [rsp+78h+var_58], rdx
 * 00000001C00270AB: mov     edx, 2Bh ; '+'
 * 00000001C00270B0: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00270B6: nop
 * 00000001C00270B7: jmp     loc_1C0013E79
 */
