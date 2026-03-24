/*
 * XREFs of WPP_RECORDER_SF_qd @ 0x1C00061E0
 * Callers:
 *     MouseClassWaitWakeComplete @ 0x1C00057D0 (MouseClassWaitWakeComplete.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002B60 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qd @ 0x1C00061E0
 * Reason: Hex-Rays returned no pseudocode for 0x1C00061E0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00061E0: mov     r11, rsp
 * 00000001C00061E3: mov     [r11+8], rbx
 * 00000001C00061E7: push    rbp
 * 00000001C00061E8: sub     rsp, 50h
 * 00000001C00061EC: mov     rbx, rcx
 * 00000001C00061EF: mov     ebp, 59h ; 'Y'
 * 00000001C00061F4: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00061FB: mov     eax, [rcx+2Ch]
 * 00000001C00061FE: test    al, 10h
 * 00000001C0006200: jz      short loc_1C000624B
 * 00000001C0006202: cmp     byte ptr [rcx+29h], 2
 * 00000001C0006206: jb      short loc_1C000624B
 * 00000001C0006208: and     qword ptr [r11-18h], 0
 * 00000001C000620D: lea     rdx, [r11+38h]
 * 00000001C0006211: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0006218: lea     r8, WPP_d07d70ae1de939905882a75eef030211_Traceguids
 * 00000001C000621F: mov     rcx, [rcx+18h]
 * 00000001C0006223: mov     r9d, ebp
 * 00000001C0006226: mov     qword ptr [r11-20h], 4
 * 00000001C000622E: mov     [r11-28h], rdx
 * 00000001C0006232: lea     rdx, [r11+30h]
 * 00000001C0006236: mov     qword ptr [r11-30h], 8
 * 00000001C000623E: mov     [r11-38h], rdx
 * 00000001C0006242: lea     edx, [rbp-2Eh]
 * 00000001C0006245: call    cs:__guard_dispatch_icall_fptr
 * 00000001C000624B: and     [rsp+58h+var_10], 0
 * 00000001C0006251: lea     rax, [rsp+58h+arg_30]
 * 00000001C0006259: mov     [rsp+58h+var_18], 4
 * 00000001C0006262: lea     r9, WPP_d07d70ae1de939905882a75eef030211_Traceguids
 * 00000001C0006269: mov     [rsp+58h+var_20], rax
 * 00000001C000626E: mov     edx, 2
 * 00000001C0006273: lea     rax, [rsp+58h+arg_28]
 * 00000001C000627B: mov     [rsp+58h+var_28], 8
 * 00000001C0006284: mov     [rsp+58h+var_30], rax
 * 00000001C0006289: mov     rcx, rbx
 * 00000001C000628C: mov     [rsp+58h+var_38], bp
 * 00000001C0006291: lea     r8d, [rdx+3]
 * 00000001C0006295: call    cs:__imp_WppAutoLogTrace
 * 00000001C000629C: nop     dword ptr [rax+rax+00h]
 * 00000001C00062A1: mov     rbx, [rsp+58h+arg_0]
 * 00000001C00062A6: add     rsp, 50h
 * 00000001C00062AA: pop     rbp
 * 00000001C00062AB: retn
 */
