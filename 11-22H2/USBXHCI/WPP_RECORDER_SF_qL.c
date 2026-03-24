/*
 * XREFs of WPP_RECORDER_SF_qL @ 0x1C0030D00
 * Callers:
 *     Command_HandleCommandCompletionEvent @ 0x1C000A2E4 (Command_HandleCommandCompletionEvent.c)
 *     Command_SendCommand @ 0x1C000A850 (Command_SendCommand.c)
 *     Controller_D0Exit @ 0x1C000EE40 (Controller_D0Exit.c)
 *     Interrupter_D0ExitStopped @ 0x1C000EFE0 (Interrupter_D0ExitStopped.c)
 *     Interrupter_D0Entry @ 0x1C0014974 (Interrupter_D0Entry.c)
 *     Command_ControllerResetPostReset @ 0x1C002F7B4 (Command_ControllerResetPostReset.c)
 *     Command_FailAllCommands @ 0x1C002FA48 (Command_FailAllCommands.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x1C0030170 (Command_WdfEvtWatchdogTimerFunction.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qL @ 0x1C0030D00
 * Reason: Hex-Rays returned no pseudocode for 0x1C0030D00
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0030D00: mov     [rsp+arg_0], rbx
 * 00000001C0030D05: mov     [rsp+arg_8], rbp
 * 00000001C0030D0A: mov     [rsp+arg_10], rsi
 * 00000001C0030D0F: push    rdi
 * 00000001C0030D10: push    r14
 * 00000001C0030D12: push    r15
 * 00000001C0030D14: sub     rsp, 50h
 * 00000001C0030D18: mov     r14d, r8d
 * 00000001C0030D1B: mov     r15, rcx
 * 00000001C0030D1E: mov     edi, r8d
 * 00000001C0030D21: shr     rdi, 10h
 * 00000001C0030D25: movzx   esi, dl
 * 00000001C0030D28: lea     ebx, [r14-1]
 * 00000001C0030D2C: movzx   ebp, r9w
 * 00000001C0030D30: mov     r10d, ebx
 * 00000001C0030D33: and     ebx, 1Fh
 * 00000001C0030D36: shr     r10, 5
 * 00000001C0030D3A: lea     rax, [rdi+rdi*4]
 * 00000001C0030D3E: and     r10d, 7FFh
 * 00000001C0030D45: mov     edx, ebx
 * 00000001C0030D47: mov     ebx, 4
 * 00000001C0030D4C: lea     r11, [r10+rax*4]
 * 00000001C0030D50: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C0030D57: mov     eax, [r10+r11*4+2Ch]
 * 00000001C0030D5C: bt      eax, edx
 * 00000001C0030D5F: jnb     short loc_1C0030DBD
 * 00000001C0030D61: lea     rcx, [rdi+rdi*4]
 * 00000001C0030D65: add     rcx, rcx
 * 00000001C0030D68: cmp     [r10+rcx*8+29h], sil
 * 00000001C0030D6D: jb      short loc_1C0030DBD
 * 00000001C0030D6F: and     [rsp+68h+var_28], 0
 * 00000001C0030D75: lea     rdx, [rsp+68h+arg_30]
 * 00000001C0030D7D: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0030D84: mov     r9d, ebp
 * 00000001C0030D87: mov     r8, [rsp+68h+arg_20]
 * 00000001C0030D8F: mov     rcx, [r10+rcx*8+18h]
 * 00000001C0030D94: mov     [rsp+68h+var_30], rbx
 * 00000001C0030D99: mov     [rsp+68h+var_38], rdx
 * 00000001C0030D9E: lea     rdx, [rsp+68h+arg_28]
 * 00000001C0030DA6: mov     [rsp+68h+var_40], 8
 * 00000001C0030DAF: mov     [rsp+68h+var_48], rdx
 * 00000001C0030DB4: lea     edx, [rbx+27h]
 * 00000001C0030DB7: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0030DBD: and     [rsp+68h+var_20], 0
 * 00000001C0030DC3: lea     rax, [rsp+68h+arg_30]
 * 00000001C0030DCB: mov     r9, [rsp+68h+arg_20]
 * 00000001C0030DD3: mov     r8d, r14d
 * 00000001C0030DD6: mov     [rsp+68h+var_28], rbx
 * 00000001C0030DDB: mov     edx, esi
 * 00000001C0030DDD: mov     [rsp+68h+var_30], rax
 * 00000001C0030DE2: mov     rcx, r15
 * 00000001C0030DE5: lea     rax, [rsp+68h+arg_28]
 * 00000001C0030DED: mov     [rsp+68h+var_38], 8
 * 00000001C0030DF6: mov     [rsp+68h+var_40], rax
 * 00000001C0030DFB: mov     word ptr [rsp+68h+var_48], bp
 * 00000001C0030E00: call    cs:__imp_WppAutoLogTrace
 * 00000001C0030E07: nop     dword ptr [rax+rax+00h]
 * 00000001C0030E0C: lea     r11, [rsp+68h+var_18]
 * 00000001C0030E11: mov     rbx, [r11+20h]
 * 00000001C0030E15: mov     rbp, [r11+28h]
 * 00000001C0030E19: mov     rsi, [r11+30h]
 * 00000001C0030E1D: mov     rsp, r11
 * 00000001C0030E20: pop     r15
 * 00000001C0030E22: pop     r14
 * 00000001C0030E24: pop     rdi
 * 00000001C0030E25: retn
 */
