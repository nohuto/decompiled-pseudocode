/*
 * XREFs of WPP_RECORDER_SF_qd @ 0x1C0005EE0
 * Callers:
 *     MouseClassWaitWakeComplete @ 0x1C00054D0 (MouseClassWaitWakeComplete.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002F10 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qd @ 0x1C0005EE0
 * Reason: Hex-Rays returned no pseudocode for 0x1C0005EE0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0005EE0: mov     r11, rsp
 * 00000001C0005EE3: mov     [r11+8], rbx
 * 00000001C0005EE7: push    rbp
 * 00000001C0005EE8: sub     rsp, 50h
 * 00000001C0005EEC: mov     rbx, rcx
 * 00000001C0005EEF: mov     ebp, 59h ; 'Y'
 * 00000001C0005EF4: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0005EFB: mov     eax, [rcx+2Ch]
 * 00000001C0005EFE: test    al, 10h
 * 00000001C0005F00: jz      short loc_1C0005F4C
 * 00000001C0005F02: cmp     byte ptr [rcx+29h], 2
 * 00000001C0005F06: jb      short loc_1C0005F4C
 * 00000001C0005F08: and     qword ptr [r11-18h], 0
 * 00000001C0005F0D: lea     rdx, [r11+38h]
 * 00000001C0005F11: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0005F18: lea     r8, WPP_d07d70ae1de939905882a75eef030211_Traceguids
 * 00000001C0005F1F: mov     rcx, [rcx+18h]
 * 00000001C0005F23: mov     qword ptr [r11-20h], 4
 * 00000001C0005F2B: mov     [r11-28h], rdx
 * 00000001C0005F2F: lea     rdx, [r11+30h]
 * 00000001C0005F33: mov     qword ptr [r11-30h], 8
 * 00000001C0005F3B: mov     [r11-38h], rdx
 * 00000001C0005F3F: lea     edx, [rbp-2Eh]
 * 00000001C0005F42: movzx   r9d, bp
 * 00000001C0005F46: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0005F4C: and     [rsp+58h+var_10], 0
 * 00000001C0005F52: lea     rax, [rsp+58h+arg_30]
 * 00000001C0005F5A: mov     [rsp+58h+var_18], 4
 * 00000001C0005F63: lea     r9, WPP_d07d70ae1de939905882a75eef030211_Traceguids
 * 00000001C0005F6A: mov     [rsp+58h+var_20], rax
 * 00000001C0005F6F: mov     edx, 2
 * 00000001C0005F74: lea     rax, [rsp+58h+arg_28]
 * 00000001C0005F7C: mov     [rsp+58h+var_28], 8
 * 00000001C0005F85: mov     [rsp+58h+var_30], rax
 * 00000001C0005F8A: mov     rcx, rbx
 * 00000001C0005F8D: mov     [rsp+58h+var_38], bp
 * 00000001C0005F92: lea     r8d, [rdx+3]
 * 00000001C0005F96: call    cs:__imp_WppAutoLogTrace
 * 00000001C0005F9D: nop     dword ptr [rax+rax+00h]
 * 00000001C0005FA2: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0005FA7: add     rsp, 50h
 * 00000001C0005FAB: pop     rbp
 * 00000001C0005FAC: retn
 */
