/*
 * XREFs of WPP_RECORDER_SF_qL @ 0x1C0005EFC
 * Callers:
 *     MouseClassServiceCallback @ 0x1C0005190 (MouseClassServiceCallback.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002B60 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qL @ 0x1C0005EFC
 * Reason: Hex-Rays returned no pseudocode for 0x1C0005EFC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0005EFC: mov     r11, rsp
 * 00000001C0005EFF: mov     [r11+8], rbx
 * 00000001C0005F03: push    rbp
 * 00000001C0005F04: sub     rsp, 50h
 * 00000001C0005F08: mov     rbx, rcx
 * 00000001C0005F0B: mov     ebp, 35h ; '5'
 * 00000001C0005F10: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0005F17: mov     eax, [rcx+2Ch]
 * 00000001C0005F1A: test    al, 4
 * 00000001C0005F1C: jz      short loc_1C0005F67
 * 00000001C0005F1E: cmp     byte ptr [rcx+29h], 5
 * 00000001C0005F22: jb      short loc_1C0005F67
 * 00000001C0005F24: and     qword ptr [r11-18h], 0
 * 00000001C0005F29: lea     rdx, [r11+38h]
 * 00000001C0005F2D: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0005F34: lea     r8, WPP_d07d70ae1de939905882a75eef030211_Traceguids
 * 00000001C0005F3B: mov     rcx, [rcx+18h]
 * 00000001C0005F3F: mov     r9d, ebp
 * 00000001C0005F42: mov     qword ptr [r11-20h], 4
 * 00000001C0005F4A: mov     [r11-28h], rdx
 * 00000001C0005F4E: lea     rdx, [r11+30h]
 * 00000001C0005F52: mov     qword ptr [r11-30h], 8
 * 00000001C0005F5A: mov     [r11-38h], rdx
 * 00000001C0005F5E: lea     edx, [rbp-0Ah]
 * 00000001C0005F61: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0005F67: and     [rsp+58h+var_10], 0
 * 00000001C0005F6D: lea     rax, [rsp+58h+arg_30]
 * 00000001C0005F75: mov     [rsp+58h+var_18], 4
 * 00000001C0005F7E: lea     r9, WPP_d07d70ae1de939905882a75eef030211_Traceguids
 * 00000001C0005F85: mov     [rsp+58h+var_20], rax
 * 00000001C0005F8A: mov     edx, 5
 * 00000001C0005F8F: lea     rax, [rsp+58h+arg_28]
 * 00000001C0005F97: mov     [rsp+58h+var_28], 8
 * 00000001C0005FA0: mov     [rsp+58h+var_30], rax
 * 00000001C0005FA5: mov     rcx, rbx
 * 00000001C0005FA8: mov     [rsp+58h+var_38], bp
 * 00000001C0005FAD: lea     r8d, [rdx-2]
 * 00000001C0005FB1: call    cs:__imp_WppAutoLogTrace
 * 00000001C0005FB8: nop     dword ptr [rax+rax+00h]
 * 00000001C0005FBD: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0005FC2: add     rsp, 50h
 * 00000001C0005FC6: pop     rbp
 * 00000001C0005FC7: retn
 */
