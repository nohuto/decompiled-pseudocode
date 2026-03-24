/*
 * XREFs of WPP_RECORDER_SF_qL @ 0x1C0005BFC
 * Callers:
 *     MouseClassServiceCallback @ 0x1C0001AC0 (MouseClassServiceCallback.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002F10 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qL @ 0x1C0005BFC
 * Reason: Hex-Rays returned no pseudocode for 0x1C0005BFC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0005BFC: mov     r11, rsp
 * 00000001C0005BFF: mov     [r11+8], rbx
 * 00000001C0005C03: push    rbp
 * 00000001C0005C04: sub     rsp, 50h
 * 00000001C0005C08: mov     rbx, rcx
 * 00000001C0005C0B: mov     ebp, 35h ; '5'
 * 00000001C0005C10: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0005C17: mov     eax, [rcx+2Ch]
 * 00000001C0005C1A: test    al, 4
 * 00000001C0005C1C: jz      short loc_1C0005C68
 * 00000001C0005C1E: cmp     byte ptr [rcx+29h], 5
 * 00000001C0005C22: jb      short loc_1C0005C68
 * 00000001C0005C24: and     qword ptr [r11-18h], 0
 * 00000001C0005C29: lea     rdx, [r11+38h]
 * 00000001C0005C2D: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0005C34: lea     r8, WPP_d07d70ae1de939905882a75eef030211_Traceguids
 * 00000001C0005C3B: mov     rcx, [rcx+18h]
 * 00000001C0005C3F: mov     qword ptr [r11-20h], 4
 * 00000001C0005C47: mov     [r11-28h], rdx
 * 00000001C0005C4B: lea     rdx, [r11+30h]
 * 00000001C0005C4F: mov     qword ptr [r11-30h], 8
 * 00000001C0005C57: mov     [r11-38h], rdx
 * 00000001C0005C5B: lea     edx, [rbp-0Ah]
 * 00000001C0005C5E: movzx   r9d, bp
 * 00000001C0005C62: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0005C68: and     [rsp+58h+var_10], 0
 * 00000001C0005C6E: lea     rax, [rsp+58h+arg_30]
 * 00000001C0005C76: mov     [rsp+58h+var_18], 4
 * 00000001C0005C7F: lea     r9, WPP_d07d70ae1de939905882a75eef030211_Traceguids
 * 00000001C0005C86: mov     [rsp+58h+var_20], rax
 * 00000001C0005C8B: mov     edx, 5
 * 00000001C0005C90: lea     rax, [rsp+58h+arg_28]
 * 00000001C0005C98: mov     [rsp+58h+var_28], 8
 * 00000001C0005CA1: mov     [rsp+58h+var_30], rax
 * 00000001C0005CA6: mov     rcx, rbx
 * 00000001C0005CA9: mov     [rsp+58h+var_38], bp
 * 00000001C0005CAE: lea     r8d, [rdx-2]
 * 00000001C0005CB2: call    cs:__imp_WppAutoLogTrace
 * 00000001C0005CB9: nop     dword ptr [rax+rax+00h]
 * 00000001C0005CBE: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0005CC3: add     rsp, 50h
 * 00000001C0005CC7: pop     rbp
 * 00000001C0005CC8: retn
 */
