/*
 * XREFs of WPP_RECORDER_SF_q @ 0x1C00062A4
 * Callers:
 *     KeyboardClassPoRequestComplete @ 0x1C00010D0 (KeyboardClassPoRequestComplete.c)
 *     KeyboardClassWWPowerUpComplete @ 0x1C0005B70 (KeyboardClassWWPowerUpComplete.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002EE0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_q @ 0x1C00062A4
 * Reason: Hex-Rays returned no pseudocode for 0x1C00062A4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00062A4: mov     r11, rsp
 * 00000001C00062A7: mov     [r11+8], rbx
 * 00000001C00062AB: push    rdi
 * 00000001C00062AC: sub     rsp, 40h
 * 00000001C00062B0: mov     rdi, rcx
 * 00000001C00062B3: movzx   ebx, r9w
 * 00000001C00062B7: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00062BE: mov     eax, [rcx+2Ch]
 * 00000001C00062C1: test    al, 10h
 * 00000001C00062C3: jz      short loc_1C0006300
 * 00000001C00062C5: cmp     byte ptr [rcx+29h], 2
 * 00000001C00062C9: jb      short loc_1C0006300
 * 00000001C00062CB: and     qword ptr [r11-18h], 0
 * 00000001C00062D0: lea     rdx, [r11+30h]
 * 00000001C00062D4: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00062DB: lea     r8, WPP_1b6d0084df9f3ca48f318fdd34bf6db2_Traceguids
 * 00000001C00062E2: mov     rcx, [rcx+18h]
 * 00000001C00062E6: mov     r9d, ebx
 * 00000001C00062E9: mov     qword ptr [r11-20h], 8
 * 00000001C00062F1: mov     [r11-28h], rdx
 * 00000001C00062F5: mov     edx, 2Bh ; '+'
 * 00000001C00062FA: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0006300: and     [rsp+48h+var_10], 0
 * 00000001C0006306: lea     rax, [rsp+48h+arg_28]
 * 00000001C000630B: mov     edx, 2
 * 00000001C0006310: mov     [rsp+48h+var_18], 8
 * 00000001C0006319: mov     [rsp+48h+var_20], rax
 * 00000001C000631E: lea     r9, WPP_1b6d0084df9f3ca48f318fdd34bf6db2_Traceguids
 * 00000001C0006325: mov     rcx, rdi
 * 00000001C0006328: mov     [rsp+48h+var_28], bx
 * 00000001C000632D: lea     r8d, [rdx+3]
 * 00000001C0006331: call    cs:__imp_WppAutoLogTrace
 * 00000001C0006338: nop     dword ptr [rax+rax+00h]
 * 00000001C000633D: mov     rbx, [rsp+48h+arg_0]
 * 00000001C0006342: add     rsp, 40h
 * 00000001C0006346: pop     rdi
 * 00000001C0006347: retn
 */
