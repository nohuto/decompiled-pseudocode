/*
 * XREFs of WPP_RECORDER_SF_q @ 0x1C0006604
 * Callers:
 *     KeyboardClassPoRequestComplete @ 0x1C00018E0 (KeyboardClassPoRequestComplete.c)
 *     KeyboardClassWWPowerUpComplete @ 0x1C0005ED0 (KeyboardClassWWPowerUpComplete.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00031C0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_q @ 0x1C0006604
 * Reason: Hex-Rays returned no pseudocode for 0x1C0006604
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0006604: mov     r11, rsp
 * 00000001C0006607: mov     [r11+8], rbx
 * 00000001C000660B: push    rdi
 * 00000001C000660C: sub     rsp, 40h
 * 00000001C0006610: mov     rdi, rcx
 * 00000001C0006613: movzx   ebx, r9w
 * 00000001C0006617: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C000661E: mov     eax, [rcx+2Ch]
 * 00000001C0006621: test    al, 10h
 * 00000001C0006623: jz      short loc_1C0006660
 * 00000001C0006625: cmp     byte ptr [rcx+29h], 2
 * 00000001C0006629: jb      short loc_1C0006660
 * 00000001C000662B: and     qword ptr [r11-18h], 0
 * 00000001C0006630: lea     rdx, [r11+30h]
 * 00000001C0006634: mov     rax, cs:pfnWppTraceMessage
 * 00000001C000663B: lea     r8, WPP_1b6d0084df9f3ca48f318fdd34bf6db2_Traceguids
 * 00000001C0006642: mov     rcx, [rcx+18h]
 * 00000001C0006646: mov     r9d, ebx
 * 00000001C0006649: mov     qword ptr [r11-20h], 8
 * 00000001C0006651: mov     [r11-28h], rdx
 * 00000001C0006655: mov     edx, 2Bh ; '+'
 * 00000001C000665A: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0006660: and     [rsp+48h+var_10], 0
 * 00000001C0006666: lea     rax, [rsp+48h+arg_28]
 * 00000001C000666B: mov     edx, 2
 * 00000001C0006670: mov     [rsp+48h+var_18], 8
 * 00000001C0006679: mov     [rsp+48h+var_20], rax
 * 00000001C000667E: lea     r9, WPP_1b6d0084df9f3ca48f318fdd34bf6db2_Traceguids
 * 00000001C0006685: mov     rcx, rdi
 * 00000001C0006688: mov     [rsp+48h+var_28], bx
 * 00000001C000668D: lea     r8d, [rdx+3]
 * 00000001C0006691: call    cs:__imp_WppAutoLogTrace
 * 00000001C0006698: nop     dword ptr [rax+rax+00h]
 * 00000001C000669D: mov     rbx, [rsp+48h+arg_0]
 * 00000001C00066A2: add     rsp, 40h
 * 00000001C00066A6: pop     rdi
 * 00000001C00066A7: retn
 */
