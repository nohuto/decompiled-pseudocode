/*
 * XREFs of WPP_RECORDER_SF_qL @ 0x1C0030E40
 * Callers:
 *     Command_HandleCommandCompletionEvent @ 0x1C000A2B4 (Command_HandleCommandCompletionEvent.c)
 *     Command_SendCommand @ 0x1C000A820 (Command_SendCommand.c)
 *     Controller_D0Exit @ 0x1C000EE10 (Controller_D0Exit.c)
 *     Interrupter_D0ExitStopped @ 0x1C000EFB0 (Interrupter_D0ExitStopped.c)
 *     Interrupter_D0Entry @ 0x1C0014924 (Interrupter_D0Entry.c)
 *     Command_ControllerResetPostReset @ 0x1C002F8F4 (Command_ControllerResetPostReset.c)
 *     Command_FailAllCommands @ 0x1C002FB88 (Command_FailAllCommands.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x1C00302B0 (Command_WdfEvtWatchdogTimerFunction.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qL @ 0x1C0030E40
 * Reason: Hex-Rays returned no pseudocode for 0x1C0030E40
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0030E40: mov     [rsp+arg_0], rbx
 * 00000001C0030E45: mov     [rsp+arg_8], rbp
 * 00000001C0030E4A: mov     [rsp+arg_10], rsi
 * 00000001C0030E4F: push    rdi
 * 00000001C0030E50: push    r14
 * 00000001C0030E52: push    r15
 * 00000001C0030E54: sub     rsp, 50h
 * 00000001C0030E58: mov     r14d, r8d
 * 00000001C0030E5B: mov     r15, rcx
 * 00000001C0030E5E: mov     edi, r8d
 * 00000001C0030E61: shr     rdi, 10h
 * 00000001C0030E65: movzx   esi, dl
 * 00000001C0030E68: lea     ebx, [r14-1]
 * 00000001C0030E6C: movzx   ebp, r9w
 * 00000001C0030E70: mov     r10d, ebx
 * 00000001C0030E73: and     ebx, 1Fh
 * 00000001C0030E76: shr     r10, 5
 * 00000001C0030E7A: lea     rax, [rdi+rdi*4]
 * 00000001C0030E7E: and     r10d, 7FFh
 * 00000001C0030E85: mov     edx, ebx
 * 00000001C0030E87: mov     ebx, 4
 * 00000001C0030E8C: lea     r11, [r10+rax*4]
 * 00000001C0030E90: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C0030E97: mov     eax, [r10+r11*4+2Ch]
 * 00000001C0030E9C: bt      eax, edx
 * 00000001C0030E9F: jnb     short loc_1C0030EFD
 * 00000001C0030EA1: lea     rcx, [rdi+rdi*4]
 * 00000001C0030EA5: add     rcx, rcx
 * 00000001C0030EA8: cmp     [r10+rcx*8+29h], sil
 * 00000001C0030EAD: jb      short loc_1C0030EFD
 * 00000001C0030EAF: and     [rsp+68h+var_28], 0
 * 00000001C0030EB5: lea     rdx, [rsp+68h+arg_30]
 * 00000001C0030EBD: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0030EC4: mov     r9d, ebp
 * 00000001C0030EC7: mov     r8, [rsp+68h+arg_20]
 * 00000001C0030ECF: mov     rcx, [r10+rcx*8+18h]
 * 00000001C0030ED4: mov     [rsp+68h+var_30], rbx
 * 00000001C0030ED9: mov     [rsp+68h+var_38], rdx
 * 00000001C0030EDE: lea     rdx, [rsp+68h+arg_28]
 * 00000001C0030EE6: mov     [rsp+68h+var_40], 8
 * 00000001C0030EEF: mov     [rsp+68h+var_48], rdx
 * 00000001C0030EF4: lea     edx, [rbx+27h]
 * 00000001C0030EF7: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0030EFD: and     [rsp+68h+var_20], 0
 * 00000001C0030F03: lea     rax, [rsp+68h+arg_30]
 * 00000001C0030F0B: mov     r9, [rsp+68h+arg_20]
 * 00000001C0030F13: mov     r8d, r14d
 * 00000001C0030F16: mov     [rsp+68h+var_28], rbx
 * 00000001C0030F1B: mov     edx, esi
 * 00000001C0030F1D: mov     [rsp+68h+var_30], rax
 * 00000001C0030F22: mov     rcx, r15
 * 00000001C0030F25: lea     rax, [rsp+68h+arg_28]
 * 00000001C0030F2D: mov     [rsp+68h+var_38], 8
 * 00000001C0030F36: mov     [rsp+68h+var_40], rax
 * 00000001C0030F3B: mov     word ptr [rsp+68h+var_48], bp
 * 00000001C0030F40: call    cs:__imp_WppAutoLogTrace
 * 00000001C0030F47: nop     dword ptr [rax+rax+00h]
 * 00000001C0030F4C: lea     r11, [rsp+68h+var_18]
 * 00000001C0030F51: mov     rbx, [r11+20h]
 * 00000001C0030F55: mov     rbp, [r11+28h]
 * 00000001C0030F59: mov     rsi, [r11+30h]
 * 00000001C0030F5D: mov     rsp, r11
 * 00000001C0030F60: pop     r15
 * 00000001C0030F62: pop     r14
 * 00000001C0030F64: pop     rdi
 * 00000001C0030F65: retn
 */
